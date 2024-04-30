using System;

namespace RDC.Common.Serialization;

#region Attributes

/// <summary>
/// 表示可以序列化的类型的特性。
/// </summary>
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface)]
public sealed class SerializeTypeAttribute : Attribute
{
}

//--------------------------------------------------------------------------------------------------

/// <summary>
/// 表示可以序列化的成员的特性。
/// </summary>
[AttributeUsage(AttributeTargets.Property)]
public sealed class SerializeMemberAttribute : Attribute
{
    /// <summary>
    /// 获取或设置序列化成员的排序键。
    /// </summary>
    public int SortKey { get; set; }

    /// <summary>
    /// 获取或设置用于读取成员的函数名。
    /// </summary>
    public string ReaderFunc { get; set; }

    /// <summary>
    /// 获取或设置用于写入成员的函数名。
    /// </summary>
    public string WriterFunc { get; set; }

    /// <summary>
    /// 初始化 <see cref="SerializeMemberAttribute"/> 类的新实例。
    /// </summary>
    public SerializeMemberAttribute()
    {
        SortKey = 0;
    }
}

//--------------------------------------------------------------------------------------------------

/// <summary>
/// 表示序列化引用 ID 的特性。
/// </summary>
[AttributeUsage(AttributeTargets.Property)]
public sealed class SerializeReferenceIdAttribute : Attribute
{
}

//--------------------------------------------------------------------------------------------------

#endregion