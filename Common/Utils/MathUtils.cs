using System;

namespace RDC.Common;

public static class MathUtils
{
    #region 精度

    static int _Precision = 3;
    static string _PrecisionFormatString = "F3";

    public static int Precision
    {
        get { return _Precision; }
        set
        {
            _Precision = value;
            _PrecisionFormatString = "F" + _Precision.ToString();
        }
    }

    public static string PrecisionFormatString
    {
        get { return _PrecisionFormatString; }
    }

    #endregion
    #region 常用常量

    //public const double DoublePI = Math.PI * 2;
    //public const double HalfPI = Math.PI / 2;
    public const double PI = Math.PI;
    /// <summary>
    /// 角度和弧度的差值
    /// </summary>
    public const double DEG_RAD_MULTIPLIER = 180.0 / Math.PI;

    #endregion
}
