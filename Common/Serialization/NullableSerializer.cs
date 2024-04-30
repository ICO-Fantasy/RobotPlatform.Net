using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RDC.Common.Serialization;

public class NullableSerializer : ISerializer
{
    // 存储泛型参数的类型
    private readonly Type _ValueType;

    // 内部的序列化器
    private readonly ISerializer _Serializer;

    /// <summary>
    /// 初始化 NullableSerializer 类的新实例。
    /// </summary>
    /// <param name="type">泛型类型，表示可空类型的基础类型。</param>
    public NullableSerializer(Type type)
    {
        // 断言泛型参数的数量为 1
        Debug.Assert(type.GenericTypeArguments.Length == 1);

        // 获取泛型参数的类型
        _ValueType = type.GenericTypeArguments[0];

        // 获取与基础类型关联的序列化器
        _Serializer = Serializer.GetSerializer(_ValueType);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// 将对象写入到 Writer。
    /// </summary>
    /// <param name="writer">用于写入数据的 Writer 对象。</param>
    /// <param name="obj">要序列化的对象。</param>
    /// <param name="context">序列化上下文。</param>
    /// <returns>如果写入成功，则返回 true；否则返回 false。</returns>
    public bool Write(Writer writer, object obj, SerializationContext context)
    {
        // 检查对象是否为 null
        if (obj == null)
        {
            writer.WriteRawString("?null");
            return true;
        }

        // 使用内部的序列化器进行写操作
        return _Serializer.Write(writer, obj, context);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// 从 Reader 中读取对象。
    /// </summary>
    /// <param name="reader">用于读取数据的 Reader 对象。</param>
    /// <param name="obj">当前对象。</param>
    /// <param name="context">序列化上下文。</param>
    /// <returns>读取到的对象。</returns>
    public object Read(Reader reader, object obj, SerializationContext context)
    {
        // 检查下一个字符是否为 '?'
        if (reader.PeekChar() == '?')
        {
            // 读取 "?null" 字符串
            var nullString = reader.ReadValueString();

            // 断言读取到的字符串为 "?null"
            Debug.Assert(nullString.Equals("?null"));

            // 返回 null
            return null;
        }

        // 使用内部的序列化器进行读操作
        return _Serializer.Read(reader, obj, context);
    }

    //--------------------------------------------------------------------------------------------------
}