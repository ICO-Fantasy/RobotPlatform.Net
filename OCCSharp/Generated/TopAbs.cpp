// Generated wrapper code for package TopAbs

#include "OcctPCH.h"
#include "TopAbs.h"

using namespace System::Runtime::InteropServices; // for class Marshal



//---------------------------------------------------------------------
//  Class  TopAbs
//---------------------------------------------------------------------

RDC::OCC::TopAbs::TopAbs()
    : RDC::OCC::BaseClass<::TopAbs>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopAbs();
}

RDC::OCC::TopAbs_Orientation RDC::OCC::TopAbs::Compose(RDC::OCC::TopAbs_Orientation Or1, RDC::OCC::TopAbs_Orientation Or2)
{
    ::TopAbs_Orientation _result = ::TopAbs::Compose((::TopAbs_Orientation)Or1, (::TopAbs_Orientation)Or2);
    return (RDC::OCC::TopAbs_Orientation)_result;
}

RDC::OCC::TopAbs_Orientation RDC::OCC::TopAbs::Reverse(RDC::OCC::TopAbs_Orientation Or)
{
    ::TopAbs_Orientation _result = ::TopAbs::Reverse((::TopAbs_Orientation)Or);
    return (RDC::OCC::TopAbs_Orientation)_result;
}

RDC::OCC::TopAbs_Orientation RDC::OCC::TopAbs::Complement(RDC::OCC::TopAbs_Orientation Or)
{
    ::TopAbs_Orientation _result = ::TopAbs::Complement((::TopAbs_Orientation)Or);
    return (RDC::OCC::TopAbs_Orientation)_result;
}

System::IO::TextWriter^ RDC::OCC::TopAbs::Print(RDC::OCC::TopAbs_ShapeEnum theShapeType, System::IO::TextWriter^ theStream)
{
    throw gcnew System::NotImplementedException();
}

System::IO::TextWriter^ RDC::OCC::TopAbs::Print(RDC::OCC::TopAbs_Orientation theOrientation, System::IO::TextWriter^ theStream)
{
    throw gcnew System::NotImplementedException();
}

System::IO::TextWriter^ RDC::OCC::TopAbs::Print(RDC::OCC::TopAbs_State St, System::IO::TextWriter^ S)
{
    throw gcnew System::NotImplementedException();
}

System::String^ RDC::OCC::TopAbs::ShapeTypeToString(RDC::OCC::TopAbs_ShapeEnum theType)
{
    Standard_CString _result = ::TopAbs::ShapeTypeToString((::TopAbs_ShapeEnum)theType);
    return gcnew System::String(_result);
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopAbs::ShapeTypeFromString(System::String^ theTypeString)
{
    const char* sz_theTypeString = (char*)(void*)Marshal::StringToHGlobalAnsi(theTypeString);
    ::TopAbs_ShapeEnum _result = ::TopAbs::ShapeTypeFromString(sz_theTypeString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTypeString);
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

bool RDC::OCC::TopAbs::ShapeTypeFromString(System::String^ theTypeString, RDC::OCC::TopAbs_ShapeEnum% theType)
{
    const char* sz_theTypeString = (char*)(void*)Marshal::StringToHGlobalAnsi(theTypeString);
    pin_ptr<RDC::OCC::TopAbs_ShapeEnum> pp_theType = &theType;
    bool _result = ::TopAbs::ShapeTypeFromString(sz_theTypeString, *(::TopAbs_ShapeEnum*)pp_theType);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTypeString);
    return _result;
}

System::String^ RDC::OCC::TopAbs::ShapeOrientationToString(RDC::OCC::TopAbs_Orientation theOrientation)
{
    Standard_CString _result = ::TopAbs::ShapeOrientationToString((::TopAbs_Orientation)theOrientation);
    return gcnew System::String(_result);
}

RDC::OCC::TopAbs_Orientation RDC::OCC::TopAbs::ShapeOrientationFromString(System::String^ theOrientationString)
{
    const char* sz_theOrientationString = (char*)(void*)Marshal::StringToHGlobalAnsi(theOrientationString);
    ::TopAbs_Orientation _result = ::TopAbs::ShapeOrientationFromString(sz_theOrientationString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theOrientationString);
    return (RDC::OCC::TopAbs_Orientation)_result;
}

bool RDC::OCC::TopAbs::ShapeOrientationFromString(System::String^ theOrientationString, RDC::OCC::TopAbs_Orientation% theOrientation)
{
    const char* sz_theOrientationString = (char*)(void*)Marshal::StringToHGlobalAnsi(theOrientationString);
    pin_ptr<RDC::OCC::TopAbs_Orientation> pp_theOrientation = &theOrientation;
    bool _result = ::TopAbs::ShapeOrientationFromString(sz_theOrientationString, *(::TopAbs_Orientation*)pp_theOrientation);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theOrientationString);
    return _result;
}


