using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;

using RDC.Common.Serialization;

namespace RDC.Common;

/// <summary>
/// 表示一个基础对象，实现了属性更改通知和序列化接口。
/// </summary>
[SerializeType]
public class BaseObject : INotifyPropertyChanged, ISerializable
{
    /// <summary>
    /// 获取或设置一个值，该值指示是否抑制属性更改事件。
    /// </summary>
    public bool SuppressPropertyChangedEvent { get; protected set; }

    /// <summary>
    /// 当属性更改时引发的事件。
    /// </summary>
    public event PropertyChangedEventHandler PropertyChanged;

    /// <summary>
    /// 触发属性更改事件。
    /// </summary>
    /// <param name="propertyName">更改的属性名称。</param>
    protected virtual void RaisePropertyChanged([CallerMemberName] String propertyName = "")
    {
        if ((PropertyChanged != null) && (!SuppressPropertyChangedEvent))
        {
            PropertyChanged.Invoke(this, new PropertyChangedEventArgs(propertyName));
        }
    }

    /// <summary>
    /// 表示当前对象是否正在反序列化。
    /// </summary>
    protected bool IsDeserializing = false;

    /// <summary>
    /// 在撤销操作之前调用的方法。
    /// </summary>
    public virtual void OnBeforeUndo()
    { }

    /// <summary>
    /// 在撤销操作之后调用的方法。
    /// </summary>
    public virtual void OnAfterUndo()
    { }

    #region ISerializable

    /// <summary>
    /// 在序列化开始时调用。
    /// </summary>
    /// <param name="context">序列化上下文。</param>
    public virtual void OnBeginSerializing(SerializationContext context)
    {
    }

    /// <summary>
    /// 在序列化完成时调用。
    /// </summary>
    /// <param name="context">序列化上下文。</param>
    public virtual void OnSerialized(SerializationContext context)
    {
    }

    /// <summary>
    /// 在反序列化开始时调用。
    /// </summary>
    /// <param name="context">序列化上下文。</param>
    public virtual void OnBeginDeserializing(SerializationContext context)
    {
        IsDeserializing = true;
    }

    /// <summary>
    /// 在反序列化完成时调用。
    /// </summary>
    /// <param name="context">序列化上下文。</param>
    public virtual void OnDeserialized(SerializationContext context)
    {
        IsDeserializing = false;
    }

    /// <summary>
    /// 获取当前对象的引用ID。
    /// </summary>
    /// <returns>返回对象的引用ID，如果没有则返回null。</returns>
    public virtual Guid? GetReferenceId()
    {
        return null;
    }

    #endregion
}