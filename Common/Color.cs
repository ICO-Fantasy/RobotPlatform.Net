using System;
using System.Diagnostics;
using System.Globalization;

using RDC.Common.Serialization;
using RDC.OCC;

namespace RDC.Common;

[SerializeType]
[DebuggerDisplay("{ToHexString(),nq} {ToString(),nq}")]
public struct Color : ISerializeValue, IEquatable<Color>
{
    public static readonly Color Black = new(0, 0, 0);
    public static readonly Color White = new(1, 1, 1);

    #region 四元色

    /// <summary>
    /// 红色通道的强度
    /// </summary>
    /// <remarks>
    /// 范围在[0-1]
    ///</remarks>
    public double Red { get; private set; }
    /// <summary>
    /// 绿色通道的强度
    /// </summary>
    /// <remarks>
    /// 范围在[0-1]
    ///</remarks>
    public double Green { get; private set; }
    /// <summary>
    /// 蓝色通道的强度
    /// </summary>
    /// <remarks>
    /// 范围在[0-1]
    ///</remarks>
    public double Blue { get; private set; }
    /// <summary>
    /// 透明度
    /// </summary>
    /// <remarks>
    /// 范围在[0-1]。0为全透明，1为不透明
    ///</remarks>
    public double Alpha { get; private set; }

    #endregion

    public Color(double r, double g, double b)
    {
        Red = r;
        Green = g;
        Blue = b;
        Alpha = 1.0;
    }

    public Color(double r, double g, double b, double a)
    {
        Red = r;
        Green = g;
        Blue = b;
        Alpha = a;
    }

    public Color(string s)
    {
        if (s.StartsWith("#") && (s.Length == 7 || s.Length == 9))
        {
            int i = 1;
            Alpha = 1.0; // 默认完全不透明
            if (s.Length == 9)
            {
                // 解析 Alpha 通道
                Alpha = int.Parse(s.Substring(i, 2), NumberStyles.HexNumber) / 255.0;
                i += 2;
            }
            Red = int.Parse(s.Substring(i, 2), NumberStyles.HexNumber) / 255.0;
            i += 2;
            Green = int.Parse(s.Substring(i, 2), NumberStyles.HexNumber) / 255.0;
            i += 2;
            Blue = int.Parse(s.Substring(i, 2), NumberStyles.HexNumber) / 255.0;


            return;
        }
        Debug.Assert(true, "无法解析的颜色代码");
        Red = Green = Blue = 0.0;
    }

    public Color(Quantity_Color color)
    {
        Red = (float)color.Red();
        Green = (float)color.Green();
        Blue = (float)color.Blue();
        Alpha = 1.0;
    }

    #region Serialization

    public bool Write(Writer writer, SerializationContext context)
    {
        double[] values = { Red, Green, Blue, Alpha };
        return writer.WriteType(values, context);
    }

    public bool Read(Reader reader, SerializationContext context)
    {
        var values = reader.ReadType<double[]>(null, context);
        if ((values != null) && (values.Length == 4))
        {
            Red = values[0];
            Green = values[1];
            Blue = values[2];
            Alpha = values[3];
            return true;
        }
        return false;
    }

    #endregion
    #region 重载

    public override bool Equals(object obj)
    {
        if (ReferenceEquals(null, obj))
            return false;
        return obj is Color && ((Color)obj == this);
    }

    //--------------------------------------------------------------------------------------------------

    public override int GetHashCode()
    {
        unchecked
        {
            var hashCode = (int)(Red * 255.0)
                           | ((int)(Green * 255.0) << 8)
                           | ((int)(Blue * 255.0) << 16)
                           | ((int)(Alpha * 255.0) << 24);
            return hashCode;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool Equals(Color other)
    {
        return other == this;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool operator ==(Color color1, Color color2)
    {
        return (color1.Red == color2.Red) && (color1.Green == color2.Green) && (color1.Blue == color2.Blue) && (color1.Alpha == color2.Alpha);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool operator !=(Color color1, Color color2)
    {
        return !(color1 == color2);
    }

    //--------------------------------------------------------------------------------------------------
    /// <summary>
    /// 返回各通道颜色值
    /// </summary>
    /// <returns></returns>
    public override string ToString()
    {
        return string.Format(CultureInfo.InvariantCulture, $"[{Red},{Green},{Blue},{Alpha}]");
    }

    #endregion
    #region 方法

    /// <summary>
    /// 返回RGB颜色值
    /// </summary>
    /// <remarks>取值范围[0-255]</remarks>
    /// <returns></returns>
    public Tuple<int, int, int> ToRGBA()
    {
        return new((int)(Red * 255), (int)(Green * 255), (int)(Blue * 255));
    }
    /// <summary>
    /// RGBA 颜色
    /// </summary>
    /// <returns></returns>
    public string ToRGBAString()
    {
        return string.Format(CultureInfo.InvariantCulture, $"[{Red * 255},{Green * 255},{Blue * 255},{Alpha}]");
    }

    /// <summary>
    /// HEX颜色
    /// </summary>
    /// <returns></returns>
    public string ToHexString()
    {
        return $"#{(int)(Red * 255):x2}{(int)(Green * 255):x2}{(int)(Blue * 255):x2}";
    }

    /// <summary>
    /// ARGB
    /// </summary>
    /// <returns></returns>
    public string ToARGBString()
    {
        return $"#{(int)(Alpha * 255):x2}{(int)(Red * 255):x2}{(int)(Green * 255):x2}{(int)(Blue * 255):x2}";
    }
    /// <summary>
    /// 返回 Quantity_Color
    /// </summary>
    /// <param name="color"></param>
    /// <returns></returns>
    public Quantity_Color ToQuantityColor()
    {
        return new Quantity_Color(Red, Green, Blue, Quantity_TypeOfColor.sRGB);
    }

    #endregion

    #region 颜色操作

    public Color Scaled(double scale)
    {
        return new Color(Red * scale, Green * scale, Blue * scale, Alpha);
    }

    /// <summary>
    /// 返回两个颜色之间的线性插值
    /// </summary>
    /// <param name="other"></param>
    /// <param name="f"></param>
    /// <returns></returns>
    public Color Lerp(Color other, double f)
    {
        return new Color(Red.Lerp(other.Red, f), Green.Lerp(other.Green, f), Blue.Lerp(other.Blue, f));
    }

    #endregion

}