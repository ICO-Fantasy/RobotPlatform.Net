// Generated wrapper code for package BinTools

#include "OcctPCH.h"
#include "BinTools.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "Message.h"
#include "TopAbs.h"
#include "Geom2d.h"
#include "Geom.h"
#include "gp.h"
#include "TopLoc.h"


//---------------------------------------------------------------------
//  Class  BinTools
//---------------------------------------------------------------------

RDC::OCC::BinTools::BinTools()
    : RDC::OCC::BaseClass<::BinTools>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools();
}

System::IO::TextWriter^ RDC::OCC::BinTools::PutReal(System::IO::TextWriter^ OS, double theValue)
{
    throw gcnew System::NotImplementedException();
}

System::IO::TextWriter^ RDC::OCC::BinTools::PutShortReal(System::IO::TextWriter^ OS, float theValue)
{
    throw gcnew System::NotImplementedException();
}

System::IO::TextWriter^ RDC::OCC::BinTools::PutInteger(System::IO::TextWriter^ OS, int theValue)
{
    throw gcnew System::NotImplementedException();
}

System::IO::TextWriter^ RDC::OCC::BinTools::PutBool(System::IO::TextWriter^ OS, bool theValue)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::BinTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, RDC::OCC::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_theStream;
    ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, *(::Message_ProgressRange*)theRange->NativeInstance);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void RDC::OCC::BinTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream)
{
    std::ostringstream oss_theStream;
    ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, ::Message_ProgressRange());
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void RDC::OCC::BinTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, RDC::OCC::BinTools_FormatVersion theVersion, RDC::OCC::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_theStream;
    ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, theWithTriangles, theWithNormals, (::BinTools_FormatVersion)theVersion, *(::Message_ProgressRange*)theRange->NativeInstance);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void RDC::OCC::BinTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, RDC::OCC::BinTools_FormatVersion theVersion)
{
    std::ostringstream oss_theStream;
    ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, theWithTriangles, theWithNormals, (::BinTools_FormatVersion)theVersion, ::Message_ProgressRange());
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

bool RDC::OCC::BinTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::String^ theFile, RDC::OCC::Message_ProgressRange^ theRange)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, *(::Message_ProgressRange*)theRange->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::BinTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::String^ theFile)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::BinTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, RDC::OCC::BinTools_FormatVersion theVersion, RDC::OCC::Message_ProgressRange^ theRange)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::BinTools_FormatVersion)theVersion, *(::Message_ProgressRange*)theRange->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::BinTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, RDC::OCC::BinTools_FormatVersion theVersion)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::BinTools_FormatVersion)theVersion, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::BinTools::Read(RDC::OCC::TopoDS_Shape^ theShape, System::String^ theFile, RDC::OCC::Message_ProgressRange^ theRange)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Read(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, *(::Message_ProgressRange*)theRange->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::BinTools::Read(RDC::OCC::TopoDS_Shape^ theShape, System::String^ theFile)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Read(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BinTools_OStream
//---------------------------------------------------------------------

RDC::OCC::BinTools_OStream::BinTools_OStream(System::IO::TextWriter^ theStream)
    : RDC::OCC::BaseClass<::BinTools_OStream>(BaseClass::InitMode::Uninitialized)
{
    std::ostringstream oss_theStream;
    _NativeInstance = new ::BinTools_OStream(oss_theStream);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

long long unsigned int RDC::OCC::BinTools_OStream::Position()
{
    long long unsigned int _result = ((::BinTools_OStream*)_NativeInstance)->Position();
    return _result;
}

void RDC::OCC::BinTools_OStream::WriteReference(long long unsigned int thePosition)
{
    pin_ptr<long long unsigned int> pp_thePosition = &thePosition;
    ((::BinTools_OStream*)_NativeInstance)->WriteReference(*(long long unsigned int*)pp_thePosition);
}

void RDC::OCC::BinTools_OStream::WriteShape(RDC::OCC::TopAbs_ShapeEnum theType, RDC::OCC::TopAbs_Orientation theOrientation)
{
    pin_ptr<RDC::OCC::TopAbs_ShapeEnum> pp_theType = &theType;
    pin_ptr<RDC::OCC::TopAbs_Orientation> pp_theOrientation = &theOrientation;
    ((::BinTools_OStream*)_NativeInstance)->WriteShape(*(::TopAbs_ShapeEnum*)pp_theType, *(::TopAbs_Orientation*)pp_theOrientation);
}

void RDC::OCC::BinTools_OStream::PutBools(bool theValue1, bool theValue2, bool theValue3)
{
    ((::BinTools_OStream*)_NativeInstance)->PutBools(theValue1, theValue2, theValue3);
}

void RDC::OCC::BinTools_OStream::PutBools(bool theValue1, bool theValue2, bool theValue3, bool theValue4, bool theValue5, bool theValue6, bool theValue7)
{
    ((::BinTools_OStream*)_NativeInstance)->PutBools(theValue1, theValue2, theValue3, theValue4, theValue5, theValue6, theValue7);
}



//---------------------------------------------------------------------
//  Class  BinTools_Curve2dSet
//---------------------------------------------------------------------

RDC::OCC::BinTools_Curve2dSet::BinTools_Curve2dSet()
    : RDC::OCC::BaseClass<::BinTools_Curve2dSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_Curve2dSet();
}

void RDC::OCC::BinTools_Curve2dSet::Clear()
{
    ((::BinTools_Curve2dSet*)_NativeInstance)->Clear();
}

int RDC::OCC::BinTools_Curve2dSet::Add(RDC::OCC::Geom2d_Curve^ C)
{
    int _result = ((::BinTools_Curve2dSet*)_NativeInstance)->Add(Handle(::Geom2d_Curve)(C->NativeInstance));
    return _result;
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::BinTools_Curve2dSet::Curve2d(int I)
{
    Handle(::Geom2d_Curve) _result = ((::BinTools_Curve2dSet*)_NativeInstance)->Curve2d(I);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

int RDC::OCC::BinTools_Curve2dSet::Index(RDC::OCC::Geom2d_Curve^ C)
{
    int _result = ((::BinTools_Curve2dSet*)_NativeInstance)->Index(Handle(::Geom2d_Curve)(C->NativeInstance));
    return _result;
}

void RDC::OCC::BinTools_Curve2dSet::Write(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_Curve2dSet*)_NativeInstance)->Write(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_Curve2dSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_Curve2dSet*)_NativeInstance)->Write(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_Curve2dSet::WriteCurve2d(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::BinTools_OStream^ OS)
{
    ::BinTools_Curve2dSet::WriteCurve2d(Handle(::Geom2d_Curve)(C->NativeInstance), *(::BinTools_OStream*)OS->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BinTools_CurveSet
//---------------------------------------------------------------------

RDC::OCC::BinTools_CurveSet::BinTools_CurveSet()
    : RDC::OCC::BaseClass<::BinTools_CurveSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_CurveSet();
}

void RDC::OCC::BinTools_CurveSet::Clear()
{
    ((::BinTools_CurveSet*)_NativeInstance)->Clear();
}

int RDC::OCC::BinTools_CurveSet::Add(RDC::OCC::Geom_Curve^ C)
{
    int _result = ((::BinTools_CurveSet*)_NativeInstance)->Add(Handle(::Geom_Curve)(C->NativeInstance));
    return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::BinTools_CurveSet::Curve(int I)
{
    Handle(::Geom_Curve) _result = ((::BinTools_CurveSet*)_NativeInstance)->Curve(I);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

int RDC::OCC::BinTools_CurveSet::Index(RDC::OCC::Geom_Curve^ C)
{
    int _result = ((::BinTools_CurveSet*)_NativeInstance)->Index(Handle(::Geom_Curve)(C->NativeInstance));
    return _result;
}

void RDC::OCC::BinTools_CurveSet::Write(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_CurveSet*)_NativeInstance)->Write(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_CurveSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_CurveSet*)_NativeInstance)->Write(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_CurveSet::WriteCurve(RDC::OCC::Geom_Curve^ C, RDC::OCC::BinTools_OStream^ OS)
{
    ::BinTools_CurveSet::WriteCurve(Handle(::Geom_Curve)(C->NativeInstance), *(::BinTools_OStream*)OS->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BinTools_IStream
//---------------------------------------------------------------------

RDC::OCC::BinTools_ObjectType RDC::OCC::BinTools_IStream::ReadType()
{
    ::BinTools_ObjectType _result = ((::BinTools_IStream*)_NativeInstance)->ReadType();
    return (RDC::OCC::BinTools_ObjectType)_result;
}

RDC::OCC::BinTools_ObjectType RDC::OCC::BinTools_IStream::LastType()
{
    ::BinTools_ObjectType _result = ((::BinTools_IStream*)_NativeInstance)->LastType();
    return (RDC::OCC::BinTools_ObjectType)_result;
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::BinTools_IStream::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::BinTools_IStream*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopAbs_Orientation RDC::OCC::BinTools_IStream::ShapeOrientation()
{
    ::TopAbs_Orientation _result = ((::BinTools_IStream*)_NativeInstance)->ShapeOrientation();
    return (RDC::OCC::TopAbs_Orientation)_result;
}

long long unsigned int RDC::OCC::BinTools_IStream::Position()
{
    long long unsigned int _result = ((::BinTools_IStream*)_NativeInstance)->Position();
    return _result;
}

void RDC::OCC::BinTools_IStream::GoTo(long long unsigned int thePosition)
{
    pin_ptr<long long unsigned int> pp_thePosition = &thePosition;
    ((::BinTools_IStream*)_NativeInstance)->GoTo(*(long long unsigned int*)pp_thePosition);
}

bool RDC::OCC::BinTools_IStream::IsReference()
{
    bool _result = ((::BinTools_IStream*)_NativeInstance)->IsReference();
    return _result;
}

long long unsigned int RDC::OCC::BinTools_IStream::ReadReference()
{
    long long unsigned int _result = ((::BinTools_IStream*)_NativeInstance)->ReadReference();
    return _result;
}

void RDC::OCC::BinTools_IStream::UpdatePosition()
{
    ((::BinTools_IStream*)_NativeInstance)->UpdatePosition();
}

double RDC::OCC::BinTools_IStream::ReadReal()
{
    double _result = ((::BinTools_IStream*)_NativeInstance)->ReadReal();
    return _result;
}

int RDC::OCC::BinTools_IStream::ReadInteger()
{
    int _result = ((::BinTools_IStream*)_NativeInstance)->ReadInteger();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::BinTools_IStream::ReadPnt()
{
    ::gp_Pnt _nativeResult = ((::BinTools_IStream*)_NativeInstance)->ReadPnt();
    return RDC::OCC::Pnt(_nativeResult);
}

unsigned char RDC::OCC::BinTools_IStream::ReadByte()
{
    unsigned char _result = ((::BinTools_IStream*)_NativeInstance)->ReadByte();
    return _result;
}

bool RDC::OCC::BinTools_IStream::ReadBool()
{
    bool _result = ((::BinTools_IStream*)_NativeInstance)->ReadBool();
    return _result;
}

float RDC::OCC::BinTools_IStream::ReadShortReal()
{
    float _result = ((::BinTools_IStream*)_NativeInstance)->ReadShortReal();
    return _result;
}

void RDC::OCC::BinTools_IStream::ReadBools(bool% theBool1, bool% theBool2, bool% theBool3)
{
    pin_ptr<bool> pp_theBool1 = &theBool1;
    pin_ptr<bool> pp_theBool2 = &theBool2;
    pin_ptr<bool> pp_theBool3 = &theBool3;
    ((::BinTools_IStream*)_NativeInstance)->ReadBools(*(bool*)pp_theBool1, *(bool*)pp_theBool2, *(bool*)pp_theBool3);
}

void RDC::OCC::BinTools_IStream::ReadBools(bool% theBool1, bool% theBool2, bool% theBool3, bool% theBool4, bool% theBool5, bool% theBool6, bool% theBool7)
{
    pin_ptr<bool> pp_theBool1 = &theBool1;
    pin_ptr<bool> pp_theBool2 = &theBool2;
    pin_ptr<bool> pp_theBool3 = &theBool3;
    pin_ptr<bool> pp_theBool4 = &theBool4;
    pin_ptr<bool> pp_theBool5 = &theBool5;
    pin_ptr<bool> pp_theBool6 = &theBool6;
    pin_ptr<bool> pp_theBool7 = &theBool7;
    ((::BinTools_IStream*)_NativeInstance)->ReadBools(*(bool*)pp_theBool1, *(bool*)pp_theBool2, *(bool*)pp_theBool3, *(bool*)pp_theBool4, *(bool*)pp_theBool5, *(bool*)pp_theBool6, *(bool*)pp_theBool7);
}



//---------------------------------------------------------------------
//  Class  BinTools_LocationSet
//---------------------------------------------------------------------

RDC::OCC::BinTools_LocationSet::BinTools_LocationSet()
    : RDC::OCC::BaseClass<::BinTools_LocationSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_LocationSet();
}

void RDC::OCC::BinTools_LocationSet::Clear()
{
    ((::BinTools_LocationSet*)_NativeInstance)->Clear();
}

int RDC::OCC::BinTools_LocationSet::Add(RDC::OCC::TopLoc_Location^ L)
{
    int _result = ((::BinTools_LocationSet*)_NativeInstance)->Add(*(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

RDC::OCC::TopLoc_Location^ RDC::OCC::BinTools_LocationSet::Location(int I)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::BinTools_LocationSet*)_NativeInstance)->Location(I);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

int RDC::OCC::BinTools_LocationSet::Index(RDC::OCC::TopLoc_Location^ L)
{
    int _result = ((::BinTools_LocationSet*)_NativeInstance)->Index(*(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

int RDC::OCC::BinTools_LocationSet::NbLocations()
{
    int _result = ((::BinTools_LocationSet*)_NativeInstance)->NbLocations();
    return _result;
}

void RDC::OCC::BinTools_LocationSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_LocationSet*)_NativeInstance)->Write(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  BinTools_ShapeSetBase
//---------------------------------------------------------------------

RDC::OCC::BinTools_ShapeSetBase::BinTools_ShapeSetBase()
    : RDC::OCC::BaseClass<::BinTools_ShapeSetBase>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_ShapeSetBase();
}

bool RDC::OCC::BinTools_ShapeSetBase::IsWithTriangles()
{
    bool _result = ((::BinTools_ShapeSetBase*)_NativeInstance)->IsWithTriangles();
    return _result;
}

bool RDC::OCC::BinTools_ShapeSetBase::IsWithNormals()
{
    bool _result = ((::BinTools_ShapeSetBase*)_NativeInstance)->IsWithNormals();
    return _result;
}

void RDC::OCC::BinTools_ShapeSetBase::SetWithTriangles(bool theWithTriangles)
{
    ((::BinTools_ShapeSetBase*)_NativeInstance)->SetWithTriangles(theWithTriangles);
}

void RDC::OCC::BinTools_ShapeSetBase::SetWithNormals(bool theWithNormals)
{
    ((::BinTools_ShapeSetBase*)_NativeInstance)->SetWithNormals(theWithNormals);
}

void RDC::OCC::BinTools_ShapeSetBase::SetFormatNb(int theFormatNb)
{
    ((::BinTools_ShapeSetBase*)_NativeInstance)->SetFormatNb(theFormatNb);
}

int RDC::OCC::BinTools_ShapeSetBase::FormatNb()
{
    int _result = ((::BinTools_ShapeSetBase*)_NativeInstance)->FormatNb();
    return _result;
}

void RDC::OCC::BinTools_ShapeSetBase::Clear()
{
    ((::BinTools_ShapeSetBase*)_NativeInstance)->Clear();
}

void RDC::OCC::BinTools_ShapeSetBase::Write(System::IO::TextWriter^ parameter1, RDC::OCC::Message_ProgressRange^ parameter2)
{
    std::ostringstream oss_parameter1;
    ((::BinTools_ShapeSetBase*)_NativeInstance)->Write(oss_parameter1, *(::Message_ProgressRange*)parameter2->NativeInstance);
    parameter1->Write(gcnew System::String(oss_parameter1.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSetBase::Write(System::IO::TextWriter^ parameter1)
{
    std::ostringstream oss_parameter1;
    ((::BinTools_ShapeSetBase*)_NativeInstance)->Write(oss_parameter1, ::Message_ProgressRange());
    parameter1->Write(gcnew System::String(oss_parameter1.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSetBase::Write(RDC::OCC::TopoDS_Shape^ parameter1, System::IO::TextWriter^ parameter2)
{
    std::ostringstream oss_parameter2;
    ((::BinTools_ShapeSetBase*)_NativeInstance)->Write(*(::TopoDS_Shape*)parameter1->NativeInstance, oss_parameter2);
    parameter2->Write(gcnew System::String(oss_parameter2.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  BinTools_ShapeReader
//---------------------------------------------------------------------

RDC::OCC::BinTools_ShapeReader::BinTools_ShapeReader()
    : RDC::OCC::BinTools_ShapeSetBase(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_ShapeReader();
}

void RDC::OCC::BinTools_ShapeReader::Clear()
{
    ((::BinTools_ShapeReader*)_NativeInstance)->Clear();
}

RDC::OCC::TopLoc_Location^ RDC::OCC::BinTools_ShapeReader::ReadLocation(RDC::OCC::BinTools_IStream^ theStream)
{
    const ::TopLoc_Location* _result = ((::BinTools_ShapeReader*)_NativeInstance)->ReadLocation(*(::BinTools_IStream*)theStream->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location((::TopLoc_Location*)_result);
}



//---------------------------------------------------------------------
//  Class  BinTools_SurfaceSet
//---------------------------------------------------------------------

RDC::OCC::BinTools_SurfaceSet::BinTools_SurfaceSet()
    : RDC::OCC::BaseClass<::BinTools_SurfaceSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_SurfaceSet();
}

void RDC::OCC::BinTools_SurfaceSet::Clear()
{
    ((::BinTools_SurfaceSet*)_NativeInstance)->Clear();
}

int RDC::OCC::BinTools_SurfaceSet::Add(RDC::OCC::Geom_Surface^ S)
{
    int _result = ((::BinTools_SurfaceSet*)_NativeInstance)->Add(Handle(::Geom_Surface)(S->NativeInstance));
    return _result;
}

RDC::OCC::Geom_Surface^ RDC::OCC::BinTools_SurfaceSet::Surface(int I)
{
    Handle(::Geom_Surface) _result = ((::BinTools_SurfaceSet*)_NativeInstance)->Surface(I);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

int RDC::OCC::BinTools_SurfaceSet::Index(RDC::OCC::Geom_Surface^ S)
{
    int _result = ((::BinTools_SurfaceSet*)_NativeInstance)->Index(Handle(::Geom_Surface)(S->NativeInstance));
    return _result;
}

void RDC::OCC::BinTools_SurfaceSet::Write(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_SurfaceSet*)_NativeInstance)->Write(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_SurfaceSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_SurfaceSet*)_NativeInstance)->Write(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_SurfaceSet::WriteSurface(RDC::OCC::Geom_Surface^ S, RDC::OCC::BinTools_OStream^ OS)
{
    ::BinTools_SurfaceSet::WriteSurface(Handle(::Geom_Surface)(S->NativeInstance), *(::BinTools_OStream*)OS->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BinTools_ShapeSet
//---------------------------------------------------------------------

RDC::OCC::BinTools_ShapeSet::BinTools_ShapeSet()
    : RDC::OCC::BinTools_ShapeSetBase(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_ShapeSet();
}

void RDC::OCC::BinTools_ShapeSet::Clear()
{
    ((::BinTools_ShapeSet*)_NativeInstance)->Clear();
}

int RDC::OCC::BinTools_ShapeSet::Add(RDC::OCC::TopoDS_Shape^ S)
{
    int _result = ((::BinTools_ShapeSet*)_NativeInstance)->Add(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BinTools_ShapeSet::Shape(int I)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BinTools_ShapeSet*)_NativeInstance)->Shape(I);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

int RDC::OCC::BinTools_ShapeSet::Index(RDC::OCC::TopoDS_Shape^ S)
{
    int _result = ((::BinTools_ShapeSet*)_NativeInstance)->Index(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

RDC::OCC::BinTools_LocationSet^ RDC::OCC::BinTools_ShapeSet::Locations()
{
    ::BinTools_LocationSet* _result = new ::BinTools_LocationSet();
    *_result = (::BinTools_LocationSet)((::BinTools_ShapeSet*)_NativeInstance)->Locations();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BinTools_LocationSet(_result);
}

RDC::OCC::BinTools_LocationSet^ RDC::OCC::BinTools_ShapeSet::ChangeLocations()
{
    ::BinTools_LocationSet* _result = new ::BinTools_LocationSet();
    *_result = ((::BinTools_ShapeSet*)_NativeInstance)->ChangeLocations();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BinTools_LocationSet(_result);
}

int RDC::OCC::BinTools_ShapeSet::NbShapes()
{
    int _result = ((::BinTools_ShapeSet*)_NativeInstance)->NbShapes();
    return _result;
}

void RDC::OCC::BinTools_ShapeSet::Write(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->Write(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->Write(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::Write(RDC::OCC::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->Write(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::WriteGeometry(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WriteGeometry(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::WriteGeometry(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WriteGeometry(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::WriteShape(RDC::OCC::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WriteShape(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::AddShape(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BinTools_ShapeSet*)_NativeInstance)->AddShape(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BinTools_ShapeSet::AddShapes(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2)
{
    ((::BinTools_ShapeSet*)_NativeInstance)->AddShapes(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}

void RDC::OCC::BinTools_ShapeSet::WritePolygon3D(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WritePolygon3D(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::WritePolygon3D(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WritePolygon3D(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::WriteTriangulation(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WriteTriangulation(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::WriteTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WriteTriangulation(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::WritePolygonOnTriangulation(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WritePolygonOnTriangulation(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BinTools_ShapeSet::WritePolygonOnTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WritePolygonOnTriangulation(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}


