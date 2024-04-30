﻿namespace RDC.Common.Serialization;

#region Interfaces

public interface ISerializer
{
    bool Write(Writer writer, object obj, SerializationContext context);
    object Read(Reader reader, object obj, SerializationContext context);
}

public interface ISerializeValue
{
    bool Write(Writer writer, SerializationContext context);
    bool Read(Reader reader, SerializationContext context);
}

public interface ISerializable
{
    void OnBeginSerializing(SerializationContext context);
    void OnSerialized(SerializationContext context);
    void OnBeginDeserializing(SerializationContext context);
    void OnDeserialized(SerializationContext context);
}

public interface ISerializeProperty
{
    bool ReadProperty(string propertyName, Reader reader, SerializationContext context);
    bool WriteProperty(string propertyName, Writer writer, SerializationContext context);
}

public interface IBlobArchive
{
    int WriteBlob(byte[] data);
    byte[] ReadBlob(int reference);
}

#endregion