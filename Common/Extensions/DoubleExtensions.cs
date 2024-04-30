using System;
using System.Globalization;

namespace RDC.Common;

public static class DoubleExtensions
{
    /// <summary>
    /// 弧度转换角度
    /// </summary>
    /// <param name="rad"></param>
    /// <returns></returns>
    public static double ToDeg(this double rad)
    {
        return rad * MathUtils.DEG_RAD_MULTIPLIER;
    }
    /// <summary>
    /// 角度转换弧度
    /// </summary>
    /// <param name="deg"></param>
    /// <returns></returns>
    public static double ToRad(this double deg)
    {
        return deg / MathUtils.DEG_RAD_MULTIPLIER;
    }
    /// <summary>
    /// 是否为空
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static bool IsNull(this double value)
    {
        return Math.Abs(value) <= Double.Epsilon;
    }
    /// <summary>
    /// 将值限制在指定的最小值和最大值之间。
    /// </summary>
    public static double Clamp(this double value, double theMin, double theMax)
    {
        return Math.Min(theMax, Math.Max(theMin, value));
    }

    /// <summary>
    /// 将值四舍五入到当前设置的精度。
    /// </summary>
    public static double Round(this double value)
    {
        return Math.Round(value, MathUtils.Precision);
    }

    /// <summary>
    /// 将值四舍五入到最接近的整数。
    /// </summary>
    public static int ToRoundedInt(this double value)
    {
        return (int)Math.Round(value, MidpointRounding.AwayFromZero);
    }

    /// <summary>
    /// 返回值的绝对值。
    /// </summary>
    public static double Abs(this double value)
    {
        return Math.Abs(value);
    }

    /// <summary>
    /// 返回值的平方。
    /// </summary>
    public static double Sqr(this double value)
    {
        return value * value;
    }

    /// <summary>
    /// 返回值的平方根。
    /// </summary>
    public static double Sqrt(this double value)
    {
        return Math.Sqrt(value);
    }
    /// <summary>
    /// 返回值的 <paramref name="thePower"/> 次幂
    /// </summary>
    /// <param name="value">底数</param>
    /// <param name="thePower">指数</param>
    /// <returns></returns>
    public static double Pow(this double value, double thePower)
    {
        return Math.Pow(value, thePower);
    }
    /// <summary>
    /// 返回值的 <paramref name="thePower"/> 次根
    /// </summary>
    /// <param name="value">底数</param>
    /// <param name="thePower">指数</param>
    /// <returns></returns>
    public static double Root(this double value, double thePower)
    {
        return Math.Pow(value, 1.0 / thePower);
    }
    /// <summary>
    /// 将值转换为不受区域文化影响的字符串表示形式。
    /// </summary>
    public static string ToInvariantString(this double value, string format = "G")
    {
        return value.ToString(format, CultureInfo.InvariantCulture);
    }

    /// <summary>
    /// 返回值的四舍五入字符串表示形式。
    /// </summary>
    public static string ToRoundedString(this double value)
    {
        return value.ToString(MathUtils.PrecisionFormatString, CultureInfo.InvariantCulture);
    }

    /// <summary>
    /// 检查两个值是否在指定的容差范围内相等。
    /// </summary>
    public static bool IsEqual(this double value, double other, double tolerance)
    {
        double val = value - other;
        if (val < 0)
            val = -val;
        return (val <= tolerance);
    }

    /// <summary>
    /// 返回两个值之间的绝对距离。
    /// </summary>
    public static double Distance(this double value, double other)
    {
        double val = value - other;
        if (val < 0)
            val = -val;
        return val;
    }

    /// <summary>
    /// 返回两个值之间的线性插值。
    /// </summary>
    public static double Lerp(this double value, double other, double amount)
    {
        return value * (1.0 - amount) + other * amount;
    }

    /// <summary>
    /// 交换两个值。
    /// </summary>
    public static void Swap(this ref double value, ref double other)
    {
        double temp = value;
        value = other;
        other = temp;
    }
}