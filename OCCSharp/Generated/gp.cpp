// Generated wrapper code for package gp

#include "OcctPCH.h"
#include "gp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  gp_TrsfNLerp
//---------------------------------------------------------------------

RDC::OCC::gp_TrsfNLerp::gp_TrsfNLerp()
    : RDC::OCC::BaseClass<::gp_TrsfNLerp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_TrsfNLerp();
}

RDC::OCC::gp_TrsfNLerp::gp_TrsfNLerp(RDC::OCC::Trsf theStart, RDC::OCC::Trsf theEnd)
    : RDC::OCC::BaseClass<::gp_TrsfNLerp>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf> pp_theStart = &theStart;
    pin_ptr<RDC::OCC::Trsf> pp_theEnd = &theEnd;
    _NativeInstance = new ::gp_TrsfNLerp(*(gp_Trsf*)pp_theStart, *(gp_Trsf*)pp_theEnd);
}

void RDC::OCC::gp_TrsfNLerp::Init(RDC::OCC::Trsf theStart, RDC::OCC::Trsf theEnd)
{
    pin_ptr<RDC::OCC::Trsf> pp_theStart = &theStart;
    pin_ptr<RDC::OCC::Trsf> pp_theEnd = &theEnd;
    ((::gp_TrsfNLerp*)_NativeInstance)->Init(*(gp_Trsf*)pp_theStart, *(gp_Trsf*)pp_theEnd);
}

void RDC::OCC::gp_TrsfNLerp::Interpolate(double theT, RDC::OCC::Trsf% theResult)
{
    pin_ptr<RDC::OCC::Trsf> pp_theResult = &theResult;
    ((::gp_TrsfNLerp*)_NativeInstance)->Interpolate(theT, *(gp_Trsf*)pp_theResult);
}



//---------------------------------------------------------------------
//  Class  gp_Vec2f
//---------------------------------------------------------------------

RDC::OCC::gp_Vec2f::gp_Vec2f(float theXY)
    : RDC::OCC::BaseClass<::gp_Vec2f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec2f(theXY);
}

RDC::OCC::gp_Vec2f::gp_Vec2f(float theX, float theY)
    : RDC::OCC::BaseClass<::gp_Vec2f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec2f(theX, theY);
}

int RDC::OCC::gp_Vec2f::Length()
{
    int _result = ::gp_Vec2f::Length();
    return _result;
}

void RDC::OCC::gp_Vec2f::SetValues(float theX, float theY)
{
    ((::gp_Vec2f*)_NativeInstance)->SetValues(theX, theY);
}

float RDC::OCC::gp_Vec2f::x()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->x();
    return _result;
}

float RDC::OCC::gp_Vec2f::y()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->y();
    return _result;
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec2f::xy()
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec2f::yx()
{
    throw gcnew System::NotImplementedException();
}

bool RDC::OCC::gp_Vec2f::IsEqual(RDC::OCC::gp_Vec2f^ theOther)
{
    bool _result = ((::gp_Vec2f*)_NativeInstance)->IsEqual(*(::gp_Vec2f*)theOther->NativeInstance);
    return _result;
}

float RDC::OCC::gp_Vec2f::GetData()
{
    throw gcnew System::NotImplementedException();
}

float RDC::OCC::gp_Vec2f::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::gp_Vec2f::Multiply(float theFactor)
{
    ((::gp_Vec2f*)_NativeInstance)->Multiply(theFactor);
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec2f::Multiplied(float theFactor)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec2f::cwiseMin(RDC::OCC::gp_Vec2f^ theVec)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec2f::cwiseMax(RDC::OCC::gp_Vec2f^ theVec)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec2f::cwiseAbs()
{
    throw gcnew System::NotImplementedException();
}

float RDC::OCC::gp_Vec2f::maxComp()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->maxComp();
    return _result;
}

float RDC::OCC::gp_Vec2f::minComp()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->minComp();
    return _result;
}

float RDC::OCC::gp_Vec2f::Dot(RDC::OCC::gp_Vec2f^ theOther)
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->Dot(*(::gp_Vec2f*)theOther->NativeInstance);
    return _result;
}

float RDC::OCC::gp_Vec2f::Modulus()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->Modulus();
    return _result;
}

float RDC::OCC::gp_Vec2f::SquareModulus()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->SquareModulus();
    return _result;
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec2f::DX()
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec2f::DY()
{
    throw gcnew System::NotImplementedException();
}

bool RDC::OCC::gp_Vec2f::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::gp_Vec2f::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((gp_Vec2f^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  gp_Vec3f
//---------------------------------------------------------------------

RDC::OCC::gp_Vec3f::gp_Vec3f()
    : RDC::OCC::BaseClass<::gp_Vec3f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec3f();
}

RDC::OCC::gp_Vec3f::gp_Vec3f(float theValue)
    : RDC::OCC::BaseClass<::gp_Vec3f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec3f(theValue);
}

RDC::OCC::gp_Vec3f::gp_Vec3f(float theX, float theY, float theZ)
    : RDC::OCC::BaseClass<::gp_Vec3f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec3f(theX, theY, theZ);
}

RDC::OCC::gp_Vec3f::gp_Vec3f(RDC::OCC::gp_Vec2f^ theVec2, float theZ)
    : RDC::OCC::BaseClass<::gp_Vec3f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec3f(*(::gp_Vec2f*)theVec2->NativeInstance, theZ);
}

RDC::OCC::gp_Vec3f::gp_Vec3f(RDC::OCC::gp_Vec2f^ theVec2)
    : RDC::OCC::BaseClass<::gp_Vec3f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec3f(*(::gp_Vec2f*)theVec2->NativeInstance, 0.0f);
}

int RDC::OCC::gp_Vec3f::Length()
{
    int _result = ::gp_Vec3f::Length();
    return _result;
}

void RDC::OCC::gp_Vec3f::SetValues(float theX, float theY, float theZ)
{
    ((::gp_Vec3f*)_NativeInstance)->SetValues(theX, theY, theZ);
}

float RDC::OCC::gp_Vec3f::x()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->x();
    return _result;
}

float RDC::OCC::gp_Vec3f::r()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->r();
    return _result;
}

float RDC::OCC::gp_Vec3f::y()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->y();
    return _result;
}

float RDC::OCC::gp_Vec3f::g()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->g();
    return _result;
}

float RDC::OCC::gp_Vec3f::z()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->z();
    return _result;
}

float RDC::OCC::gp_Vec3f::b()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->b();
    return _result;
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec3f::xy()
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec3f::yx()
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec3f::xz()
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec3f::zx()
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec3f::yz()
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec2f^ RDC::OCC::gp_Vec3f::zy()
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::xyz()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->xyz();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::xzy()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->xzy();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::yxz()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->yxz();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::yzx()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->yzx();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::zyx()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->zyx();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::zxy()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->zxy();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

bool RDC::OCC::gp_Vec3f::IsEqual(RDC::OCC::gp_Vec3f^ theOther)
{
    bool _result = ((::gp_Vec3f*)_NativeInstance)->IsEqual(*(::gp_Vec3f*)theOther->NativeInstance);
    return _result;
}

float RDC::OCC::gp_Vec3f::GetData()
{
    throw gcnew System::NotImplementedException();
}

float RDC::OCC::gp_Vec3f::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::gp_Vec3f::Multiply(float theFactor)
{
    ((::gp_Vec3f*)_NativeInstance)->Multiply(theFactor);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::Multiplied(float theFactor)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ((::gp_Vec3f*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::cwiseMin(RDC::OCC::gp_Vec3f^ theVec)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ((::gp_Vec3f*)_NativeInstance)->cwiseMin(*(::gp_Vec3f*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::cwiseMax(RDC::OCC::gp_Vec3f^ theVec)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ((::gp_Vec3f*)_NativeInstance)->cwiseMax(*(::gp_Vec3f*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::cwiseAbs()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ((::gp_Vec3f*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

float RDC::OCC::gp_Vec3f::maxComp()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->maxComp();
    return _result;
}

float RDC::OCC::gp_Vec3f::minComp()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->minComp();
    return _result;
}

float RDC::OCC::gp_Vec3f::Dot(RDC::OCC::gp_Vec3f^ theOther)
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->Dot(*(::gp_Vec3f*)theOther->NativeInstance);
    return _result;
}

float RDC::OCC::gp_Vec3f::Modulus()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->Modulus();
    return _result;
}

float RDC::OCC::gp_Vec3f::SquareModulus()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->SquareModulus();
    return _result;
}

void RDC::OCC::gp_Vec3f::Normalize()
{
    ((::gp_Vec3f*)_NativeInstance)->Normalize();
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::Normalized()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ((::gp_Vec3f*)_NativeInstance)->Normalized();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::Cross(RDC::OCC::gp_Vec3f^ theVec1, RDC::OCC::gp_Vec3f^ theVec2)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::gp_Vec3f::Cross(*(::gp_Vec3f*)theVec1->NativeInstance, *(::gp_Vec3f*)theVec2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::GetLERP(RDC::OCC::gp_Vec3f^ theFrom, RDC::OCC::gp_Vec3f^ theTo, float theT)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::gp_Vec3f::GetLERP(*(::gp_Vec3f*)theFrom->NativeInstance, *(::gp_Vec3f*)theTo->NativeInstance, theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::DX()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::gp_Vec3f::DX();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::DY()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::gp_Vec3f::DY();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::gp_Vec3f::DZ()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::gp_Vec3f::DZ();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

bool RDC::OCC::gp_Vec3f::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::gp_Vec3f::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((gp_Vec3f^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  gp_VectorWithNullMagnitude
//---------------------------------------------------------------------

RDC::OCC::gp_VectorWithNullMagnitude::gp_VectorWithNullMagnitude()
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::gp_VectorWithNullMagnitude();
}

RDC::OCC::gp_VectorWithNullMagnitude::gp_VectorWithNullMagnitude(System::String^ theMessage)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::gp_VectorWithNullMagnitude(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::gp_VectorWithNullMagnitude::gp_VectorWithNullMagnitude(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::gp_VectorWithNullMagnitude(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::gp_VectorWithNullMagnitude::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::gp_VectorWithNullMagnitude::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::gp_VectorWithNullMagnitude::Raise()
{
    ::gp_VectorWithNullMagnitude::Raise("");
}

RDC::OCC::gp_VectorWithNullMagnitude^ RDC::OCC::gp_VectorWithNullMagnitude::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::gp_VectorWithNullMagnitude) _result = ::gp_VectorWithNullMagnitude::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::gp_VectorWithNullMagnitude::CreateDowncasted(_result.get());
}

RDC::OCC::gp_VectorWithNullMagnitude^ RDC::OCC::gp_VectorWithNullMagnitude::NewInstance()
{
    Handle(::gp_VectorWithNullMagnitude) _result = ::gp_VectorWithNullMagnitude::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::gp_VectorWithNullMagnitude::CreateDowncasted(_result.get());
}

RDC::OCC::gp_VectorWithNullMagnitude^ RDC::OCC::gp_VectorWithNullMagnitude::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::gp_VectorWithNullMagnitude) _result = ::gp_VectorWithNullMagnitude::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::gp_VectorWithNullMagnitude::CreateDowncasted(_result.get());
}

RDC::OCC::gp_VectorWithNullMagnitude^ RDC::OCC::gp_VectorWithNullMagnitude::CreateDowncasted(::gp_VectorWithNullMagnitude* instance)
{
    return gcnew RDC::OCC::gp_VectorWithNullMagnitude( instance );
}



//---------------------------------------------------------------------
//  Class  gp_Circ
//---------------------------------------------------------------------

RDC::OCC::gp_Circ::gp_Circ()
    : RDC::OCC::BaseClass<::gp_Circ>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Circ();
}

RDC::OCC::gp_Circ::gp_Circ(RDC::OCC::Ax2 theA2, double theRadius)
    : RDC::OCC::BaseClass<::gp_Circ>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    _NativeInstance = new ::gp_Circ(*(gp_Ax2*)pp_theA2, theRadius);
}

void RDC::OCC::gp_Circ::SetAxis(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Circ*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void RDC::OCC::gp_Circ::SetLocation(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Circ*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void RDC::OCC::gp_Circ::SetPosition(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Circ*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_theA2);
}

void RDC::OCC::gp_Circ::SetRadius(double theRadius)
{
    ((::gp_Circ*)_NativeInstance)->SetRadius(theRadius);
}

double RDC::OCC::gp_Circ::Area()
{
    double _result = ((::gp_Circ*)_NativeInstance)->Area();
    return _result;
}

RDC::OCC::Ax1 RDC::OCC::gp_Circ::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Circ*)_NativeInstance)->Axis();
    return RDC::OCC::Ax1(_nativeResult);
}

double RDC::OCC::gp_Circ::Length()
{
    double _result = ((::gp_Circ*)_NativeInstance)->Length();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::gp_Circ::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Circ*)_NativeInstance)->Location();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Ax2 RDC::OCC::gp_Circ::Position()
{
    ::gp_Ax2 _nativeResult = ((::gp_Circ*)_NativeInstance)->Position();
    return RDC::OCC::Ax2(_nativeResult);
}

double RDC::OCC::gp_Circ::Radius()
{
    double _result = ((::gp_Circ*)_NativeInstance)->Radius();
    return _result;
}

RDC::OCC::Ax1 RDC::OCC::gp_Circ::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Circ*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Circ::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Circ*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

double RDC::OCC::gp_Circ::Distance(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    double _result = ((::gp_Circ*)_NativeInstance)->Distance(*(gp_Pnt*)pp_theP);
    return _result;
}

double RDC::OCC::gp_Circ::SquareDistance(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    double _result = ((::gp_Circ*)_NativeInstance)->SquareDistance(*(gp_Pnt*)pp_theP);
    return _result;
}

bool RDC::OCC::gp_Circ::Contains(RDC::OCC::Pnt theP, double theLinearTolerance)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    bool _result = ((::gp_Circ*)_NativeInstance)->Contains(*(gp_Pnt*)pp_theP, theLinearTolerance);
    return _result;
}

void RDC::OCC::gp_Circ::Mirror(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Circ*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

RDC::OCC::gp_Circ^ RDC::OCC::gp_Circ::Mirrored(RDC::OCC::Pnt theP)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Circ*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

void RDC::OCC::gp_Circ::Mirror(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Circ*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::gp_Circ^ RDC::OCC::gp_Circ::Mirrored(RDC::OCC::Ax1 theA1)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Circ*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

void RDC::OCC::gp_Circ::Mirror(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Circ*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::gp_Circ^ RDC::OCC::gp_Circ::Mirrored(RDC::OCC::Ax2 theA2)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Circ*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

void RDC::OCC::gp_Circ::Rotate(RDC::OCC::Ax1 theA1, double theAng)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Circ*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

RDC::OCC::gp_Circ^ RDC::OCC::gp_Circ::Rotated(RDC::OCC::Ax1 theA1, double theAng)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Circ*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

void RDC::OCC::gp_Circ::Scale(RDC::OCC::Pnt theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Circ*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

RDC::OCC::gp_Circ^ RDC::OCC::gp_Circ::Scaled(RDC::OCC::Pnt theP, double theS)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Circ*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

void RDC::OCC::gp_Circ::Transform(RDC::OCC::Trsf theT)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    ((::gp_Circ*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

RDC::OCC::gp_Circ^ RDC::OCC::gp_Circ::Transformed(RDC::OCC::Trsf theT)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    *_result = ((::gp_Circ*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

void RDC::OCC::gp_Circ::Translate(RDC::OCC::Vec theV)
{
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    ((::gp_Circ*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

RDC::OCC::gp_Circ^ RDC::OCC::gp_Circ::Translated(RDC::OCC::Vec theV)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    *_result = ((::gp_Circ*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

void RDC::OCC::gp_Circ::Translate(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    ((::gp_Circ*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

RDC::OCC::gp_Circ^ RDC::OCC::gp_Circ::Translated(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Circ*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Circ2d
//---------------------------------------------------------------------

RDC::OCC::gp_Circ2d::gp_Circ2d()
    : RDC::OCC::BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Circ2d();
}

RDC::OCC::gp_Circ2d::gp_Circ2d(RDC::OCC::Ax2d theXAxis, double theRadius, bool theIsSense)
    : RDC::OCC::BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theXAxis = &theXAxis;
    _NativeInstance = new ::gp_Circ2d(*(gp_Ax2d*)pp_theXAxis, theRadius, theIsSense);
}

RDC::OCC::gp_Circ2d::gp_Circ2d(RDC::OCC::Ax2d theXAxis, double theRadius)
    : RDC::OCC::BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theXAxis = &theXAxis;
    _NativeInstance = new ::gp_Circ2d(*(gp_Ax2d*)pp_theXAxis, theRadius, true);
}

RDC::OCC::gp_Circ2d::gp_Circ2d(RDC::OCC::Ax22d theAxis, double theRadius)
    : RDC::OCC::BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_theAxis = &theAxis;
    _NativeInstance = new ::gp_Circ2d(*(gp_Ax22d*)pp_theAxis, theRadius);
}

void RDC::OCC::gp_Circ2d::SetLocation(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Circ2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

void RDC::OCC::gp_Circ2d::SetXAxis(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Circ2d*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_theA);
}

void RDC::OCC::gp_Circ2d::SetAxis(RDC::OCC::Ax22d theA)
{
    pin_ptr<RDC::OCC::Ax22d> pp_theA = &theA;
    ((::gp_Circ2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_theA);
}

void RDC::OCC::gp_Circ2d::SetYAxis(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Circ2d*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_theA);
}

void RDC::OCC::gp_Circ2d::SetRadius(double theRadius)
{
    ((::gp_Circ2d*)_NativeInstance)->SetRadius(theRadius);
}

double RDC::OCC::gp_Circ2d::Area()
{
    double _result = ((::gp_Circ2d*)_NativeInstance)->Area();
    return _result;
}

void RDC::OCC::gp_Circ2d::Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    pin_ptr<double> pp_theD = &theD;
    pin_ptr<double> pp_theE = &theE;
    pin_ptr<double> pp_theF = &theF;
    ((::gp_Circ2d*)_NativeInstance)->Coefficients(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC, *(double*)pp_theD, *(double*)pp_theE, *(double*)pp_theF);
}

bool RDC::OCC::gp_Circ2d::Contains(RDC::OCC::Pnt2d theP, double theLinearTolerance)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    bool _result = ((::gp_Circ2d*)_NativeInstance)->Contains(*(gp_Pnt2d*)pp_theP, theLinearTolerance);
    return _result;
}

double RDC::OCC::gp_Circ2d::Distance(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    double _result = ((::gp_Circ2d*)_NativeInstance)->Distance(*(gp_Pnt2d*)pp_theP);
    return _result;
}

double RDC::OCC::gp_Circ2d::SquareDistance(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    double _result = ((::gp_Circ2d*)_NativeInstance)->SquareDistance(*(gp_Pnt2d*)pp_theP);
    return _result;
}

double RDC::OCC::gp_Circ2d::Length()
{
    double _result = ((::gp_Circ2d*)_NativeInstance)->Length();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::gp_Circ2d::Location()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Circ2d*)_NativeInstance)->Location();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::gp_Circ2d::Radius()
{
    double _result = ((::gp_Circ2d*)_NativeInstance)->Radius();
    return _result;
}

RDC::OCC::Ax22d RDC::OCC::gp_Circ2d::Axis()
{
    ::gp_Ax22d _nativeResult = ((::gp_Circ2d*)_NativeInstance)->Axis();
    return RDC::OCC::Ax22d(_nativeResult);
}

RDC::OCC::Ax22d RDC::OCC::gp_Circ2d::Position()
{
    ::gp_Ax22d _nativeResult = ((::gp_Circ2d*)_NativeInstance)->Position();
    return RDC::OCC::Ax22d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Circ2d::XAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Circ2d*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Circ2d::YAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Circ2d*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax2d(_nativeResult);
}

void RDC::OCC::gp_Circ2d::Reverse()
{
    ((::gp_Circ2d*)_NativeInstance)->Reverse();
}

RDC::OCC::gp_Circ2d^ RDC::OCC::gp_Circ2d::Reversed()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::gp_Circ2d*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

bool RDC::OCC::gp_Circ2d::IsDirect()
{
    bool _result = ((::gp_Circ2d*)_NativeInstance)->IsDirect();
    return _result;
}

void RDC::OCC::gp_Circ2d::Mirror(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Circ2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_theP);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::gp_Circ2d::Mirrored(RDC::OCC::Pnt2d theP)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::gp_Circ2d::Mirror(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Circ2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_theA);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::gp_Circ2d::Mirrored(RDC::OCC::Ax2d theA)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_theA);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::gp_Circ2d::Rotate(RDC::OCC::Pnt2d theP, double theAng)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Circ2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_theP, theAng);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::gp_Circ2d::Rotated(RDC::OCC::Pnt2d theP, double theAng)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_theP, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::gp_Circ2d::Scale(RDC::OCC::Pnt2d theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Circ2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_theP, theS);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::gp_Circ2d::Scaled(RDC::OCC::Pnt2d theP, double theS)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::gp_Circ2d::Transform(RDC::OCC::Trsf2d theT)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    ((::gp_Circ2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_theT);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::gp_Circ2d::Transformed(RDC::OCC::Trsf2d theT)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::gp_Circ2d::Translate(RDC::OCC::Vec2d theV)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theV = &theV;
    ((::gp_Circ2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_theV);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::gp_Circ2d::Translated(RDC::OCC::Vec2d theV)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<RDC::OCC::Vec2d> pp_theV = &theV;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::gp_Circ2d::Translate(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt2d> pp_theP2 = &theP2;
    ((::gp_Circ2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::gp_Circ2d::Translated(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt2d> pp_theP2 = &theP2;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Cone
//---------------------------------------------------------------------

RDC::OCC::gp_Cone::gp_Cone()
    : RDC::OCC::BaseClass<::gp_Cone>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Cone();
}

RDC::OCC::gp_Cone::gp_Cone(RDC::OCC::Ax3 theA3, double theAng, double theRadius)
    : RDC::OCC::BaseClass<::gp_Cone>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax3> pp_theA3 = &theA3;
    _NativeInstance = new ::gp_Cone(*(gp_Ax3*)pp_theA3, theAng, theRadius);
}

void RDC::OCC::gp_Cone::SetAxis(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Cone*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void RDC::OCC::gp_Cone::SetLocation(RDC::OCC::Pnt theLoc)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLoc = &theLoc;
    ((::gp_Cone*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLoc);
}

void RDC::OCC::gp_Cone::SetPosition(RDC::OCC::Ax3 theA3)
{
    pin_ptr<RDC::OCC::Ax3> pp_theA3 = &theA3;
    ((::gp_Cone*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_theA3);
}

void RDC::OCC::gp_Cone::SetRadius(double theR)
{
    ((::gp_Cone*)_NativeInstance)->SetRadius(theR);
}

void RDC::OCC::gp_Cone::SetSemiAngle(double theAng)
{
    ((::gp_Cone*)_NativeInstance)->SetSemiAngle(theAng);
}

RDC::OCC::Pnt RDC::OCC::gp_Cone::Apex()
{
    ::gp_Pnt _nativeResult = ((::gp_Cone*)_NativeInstance)->Apex();
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::gp_Cone::UReverse()
{
    ((::gp_Cone*)_NativeInstance)->UReverse();
}

void RDC::OCC::gp_Cone::VReverse()
{
    ((::gp_Cone*)_NativeInstance)->VReverse();
}

bool RDC::OCC::gp_Cone::Direct()
{
    bool _result = ((::gp_Cone*)_NativeInstance)->Direct();
    return _result;
}

RDC::OCC::Ax1 RDC::OCC::gp_Cone::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cone*)_NativeInstance)->Axis();
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::gp_Cone::Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD)
{
    pin_ptr<double> pp_theA1 = &theA1;
    pin_ptr<double> pp_theA2 = &theA2;
    pin_ptr<double> pp_theA3 = &theA3;
    pin_ptr<double> pp_theB1 = &theB1;
    pin_ptr<double> pp_theB2 = &theB2;
    pin_ptr<double> pp_theB3 = &theB3;
    pin_ptr<double> pp_theC1 = &theC1;
    pin_ptr<double> pp_theC2 = &theC2;
    pin_ptr<double> pp_theC3 = &theC3;
    pin_ptr<double> pp_theD = &theD;
    ((::gp_Cone*)_NativeInstance)->Coefficients(*(double*)pp_theA1, *(double*)pp_theA2, *(double*)pp_theA3, *(double*)pp_theB1, *(double*)pp_theB2, *(double*)pp_theB3, *(double*)pp_theC1, *(double*)pp_theC2, *(double*)pp_theC3, *(double*)pp_theD);
}

RDC::OCC::Pnt RDC::OCC::gp_Cone::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Cone*)_NativeInstance)->Location();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Ax3 RDC::OCC::gp_Cone::Position()
{
    ::gp_Ax3 _nativeResult = ((::gp_Cone*)_NativeInstance)->Position();
    return RDC::OCC::Ax3(_nativeResult);
}

double RDC::OCC::gp_Cone::RefRadius()
{
    double _result = ((::gp_Cone*)_NativeInstance)->RefRadius();
    return _result;
}

double RDC::OCC::gp_Cone::SemiAngle()
{
    double _result = ((::gp_Cone*)_NativeInstance)->SemiAngle();
    return _result;
}

RDC::OCC::Ax1 RDC::OCC::gp_Cone::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cone*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Cone::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cone*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::gp_Cone::Mirror(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Cone*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

RDC::OCC::gp_Cone^ RDC::OCC::gp_Cone::Mirrored(RDC::OCC::Pnt theP)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Cone*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

void RDC::OCC::gp_Cone::Mirror(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Cone*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::gp_Cone^ RDC::OCC::gp_Cone::Mirrored(RDC::OCC::Ax1 theA1)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Cone*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

void RDC::OCC::gp_Cone::Mirror(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Cone*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::gp_Cone^ RDC::OCC::gp_Cone::Mirrored(RDC::OCC::Ax2 theA2)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Cone*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

void RDC::OCC::gp_Cone::Rotate(RDC::OCC::Ax1 theA1, double theAng)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Cone*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

RDC::OCC::gp_Cone^ RDC::OCC::gp_Cone::Rotated(RDC::OCC::Ax1 theA1, double theAng)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Cone*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

void RDC::OCC::gp_Cone::Scale(RDC::OCC::Pnt theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Cone*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

RDC::OCC::gp_Cone^ RDC::OCC::gp_Cone::Scaled(RDC::OCC::Pnt theP, double theS)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Cone*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

void RDC::OCC::gp_Cone::Transform(RDC::OCC::Trsf theT)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    ((::gp_Cone*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

RDC::OCC::gp_Cone^ RDC::OCC::gp_Cone::Transformed(RDC::OCC::Trsf theT)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    *_result = ((::gp_Cone*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

void RDC::OCC::gp_Cone::Translate(RDC::OCC::Vec theV)
{
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    ((::gp_Cone*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

RDC::OCC::gp_Cone^ RDC::OCC::gp_Cone::Translated(RDC::OCC::Vec theV)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    *_result = ((::gp_Cone*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

void RDC::OCC::gp_Cone::Translate(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    ((::gp_Cone*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

RDC::OCC::gp_Cone^ RDC::OCC::gp_Cone::Translated(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Cone*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Cylinder
//---------------------------------------------------------------------

RDC::OCC::gp_Cylinder::gp_Cylinder()
    : RDC::OCC::BaseClass<::gp_Cylinder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Cylinder();
}

RDC::OCC::gp_Cylinder::gp_Cylinder(RDC::OCC::Ax3 theA3, double theRadius)
    : RDC::OCC::BaseClass<::gp_Cylinder>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax3> pp_theA3 = &theA3;
    _NativeInstance = new ::gp_Cylinder(*(gp_Ax3*)pp_theA3, theRadius);
}

void RDC::OCC::gp_Cylinder::SetAxis(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Cylinder*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void RDC::OCC::gp_Cylinder::SetLocation(RDC::OCC::Pnt theLoc)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLoc = &theLoc;
    ((::gp_Cylinder*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLoc);
}

void RDC::OCC::gp_Cylinder::SetPosition(RDC::OCC::Ax3 theA3)
{
    pin_ptr<RDC::OCC::Ax3> pp_theA3 = &theA3;
    ((::gp_Cylinder*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_theA3);
}

void RDC::OCC::gp_Cylinder::SetRadius(double theR)
{
    ((::gp_Cylinder*)_NativeInstance)->SetRadius(theR);
}

void RDC::OCC::gp_Cylinder::UReverse()
{
    ((::gp_Cylinder*)_NativeInstance)->UReverse();
}

void RDC::OCC::gp_Cylinder::VReverse()
{
    ((::gp_Cylinder*)_NativeInstance)->VReverse();
}

bool RDC::OCC::gp_Cylinder::Direct()
{
    bool _result = ((::gp_Cylinder*)_NativeInstance)->Direct();
    return _result;
}

RDC::OCC::Ax1 RDC::OCC::gp_Cylinder::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cylinder*)_NativeInstance)->Axis();
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::gp_Cylinder::Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD)
{
    pin_ptr<double> pp_theA1 = &theA1;
    pin_ptr<double> pp_theA2 = &theA2;
    pin_ptr<double> pp_theA3 = &theA3;
    pin_ptr<double> pp_theB1 = &theB1;
    pin_ptr<double> pp_theB2 = &theB2;
    pin_ptr<double> pp_theB3 = &theB3;
    pin_ptr<double> pp_theC1 = &theC1;
    pin_ptr<double> pp_theC2 = &theC2;
    pin_ptr<double> pp_theC3 = &theC3;
    pin_ptr<double> pp_theD = &theD;
    ((::gp_Cylinder*)_NativeInstance)->Coefficients(*(double*)pp_theA1, *(double*)pp_theA2, *(double*)pp_theA3, *(double*)pp_theB1, *(double*)pp_theB2, *(double*)pp_theB3, *(double*)pp_theC1, *(double*)pp_theC2, *(double*)pp_theC3, *(double*)pp_theD);
}

RDC::OCC::Pnt RDC::OCC::gp_Cylinder::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Cylinder*)_NativeInstance)->Location();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Ax3 RDC::OCC::gp_Cylinder::Position()
{
    ::gp_Ax3 _nativeResult = ((::gp_Cylinder*)_NativeInstance)->Position();
    return RDC::OCC::Ax3(_nativeResult);
}

double RDC::OCC::gp_Cylinder::Radius()
{
    double _result = ((::gp_Cylinder*)_NativeInstance)->Radius();
    return _result;
}

RDC::OCC::Ax1 RDC::OCC::gp_Cylinder::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cylinder*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Cylinder::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cylinder*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::gp_Cylinder::Mirror(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Cylinder*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::gp_Cylinder::Mirrored(RDC::OCC::Pnt theP)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

void RDC::OCC::gp_Cylinder::Mirror(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Cylinder*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::gp_Cylinder::Mirrored(RDC::OCC::Ax1 theA1)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

void RDC::OCC::gp_Cylinder::Mirror(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Cylinder*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::gp_Cylinder::Mirrored(RDC::OCC::Ax2 theA2)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

void RDC::OCC::gp_Cylinder::Rotate(RDC::OCC::Ax1 theA1, double theAng)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Cylinder*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::gp_Cylinder::Rotated(RDC::OCC::Ax1 theA1, double theAng)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

void RDC::OCC::gp_Cylinder::Scale(RDC::OCC::Pnt theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Cylinder*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::gp_Cylinder::Scaled(RDC::OCC::Pnt theP, double theS)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

void RDC::OCC::gp_Cylinder::Transform(RDC::OCC::Trsf theT)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    ((::gp_Cylinder*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::gp_Cylinder::Transformed(RDC::OCC::Trsf theT)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

void RDC::OCC::gp_Cylinder::Translate(RDC::OCC::Vec theV)
{
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    ((::gp_Cylinder*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::gp_Cylinder::Translated(RDC::OCC::Vec theV)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

void RDC::OCC::gp_Cylinder::Translate(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    ((::gp_Cylinder*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::gp_Cylinder::Translated(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Elips
//---------------------------------------------------------------------

RDC::OCC::gp_Elips::gp_Elips()
    : RDC::OCC::BaseClass<::gp_Elips>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Elips();
}

RDC::OCC::gp_Elips::gp_Elips(RDC::OCC::Ax2 theA2, double theMajorRadius, double theMinorRadius)
    : RDC::OCC::BaseClass<::gp_Elips>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    _NativeInstance = new ::gp_Elips(*(gp_Ax2*)pp_theA2, theMajorRadius, theMinorRadius);
}

void RDC::OCC::gp_Elips::SetAxis(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Elips*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void RDC::OCC::gp_Elips::SetLocation(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Elips*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void RDC::OCC::gp_Elips::SetMajorRadius(double theMajorRadius)
{
    ((::gp_Elips*)_NativeInstance)->SetMajorRadius(theMajorRadius);
}

void RDC::OCC::gp_Elips::SetMinorRadius(double theMinorRadius)
{
    ((::gp_Elips*)_NativeInstance)->SetMinorRadius(theMinorRadius);
}

void RDC::OCC::gp_Elips::SetPosition(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Elips*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_theA2);
}

double RDC::OCC::gp_Elips::Area()
{
    double _result = ((::gp_Elips*)_NativeInstance)->Area();
    return _result;
}

RDC::OCC::Ax1 RDC::OCC::gp_Elips::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Elips*)_NativeInstance)->Axis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Elips::Directrix1()
{
    ::gp_Ax1 _nativeResult = ((::gp_Elips*)_NativeInstance)->Directrix1();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Elips::Directrix2()
{
    ::gp_Ax1 _nativeResult = ((::gp_Elips*)_NativeInstance)->Directrix2();
    return RDC::OCC::Ax1(_nativeResult);
}

double RDC::OCC::gp_Elips::Eccentricity()
{
    double _result = ((::gp_Elips*)_NativeInstance)->Eccentricity();
    return _result;
}

double RDC::OCC::gp_Elips::Focal()
{
    double _result = ((::gp_Elips*)_NativeInstance)->Focal();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::gp_Elips::Focus1()
{
    ::gp_Pnt _nativeResult = ((::gp_Elips*)_NativeInstance)->Focus1();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::gp_Elips::Focus2()
{
    ::gp_Pnt _nativeResult = ((::gp_Elips*)_NativeInstance)->Focus2();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::gp_Elips::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Elips*)_NativeInstance)->Location();
    return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::gp_Elips::MajorRadius()
{
    double _result = ((::gp_Elips*)_NativeInstance)->MajorRadius();
    return _result;
}

double RDC::OCC::gp_Elips::MinorRadius()
{
    double _result = ((::gp_Elips*)_NativeInstance)->MinorRadius();
    return _result;
}

double RDC::OCC::gp_Elips::Parameter()
{
    double _result = ((::gp_Elips*)_NativeInstance)->Parameter();
    return _result;
}

RDC::OCC::Ax2 RDC::OCC::gp_Elips::Position()
{
    ::gp_Ax2 _nativeResult = ((::gp_Elips*)_NativeInstance)->Position();
    return RDC::OCC::Ax2(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Elips::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Elips*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Elips::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Elips*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::gp_Elips::Mirror(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Elips*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

RDC::OCC::gp_Elips^ RDC::OCC::gp_Elips::Mirrored(RDC::OCC::Pnt theP)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Elips*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

void RDC::OCC::gp_Elips::Mirror(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Elips*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::gp_Elips^ RDC::OCC::gp_Elips::Mirrored(RDC::OCC::Ax1 theA1)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Elips*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

void RDC::OCC::gp_Elips::Mirror(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Elips*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::gp_Elips^ RDC::OCC::gp_Elips::Mirrored(RDC::OCC::Ax2 theA2)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Elips*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

void RDC::OCC::gp_Elips::Rotate(RDC::OCC::Ax1 theA1, double theAng)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Elips*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

RDC::OCC::gp_Elips^ RDC::OCC::gp_Elips::Rotated(RDC::OCC::Ax1 theA1, double theAng)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Elips*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

void RDC::OCC::gp_Elips::Scale(RDC::OCC::Pnt theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Elips*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

RDC::OCC::gp_Elips^ RDC::OCC::gp_Elips::Scaled(RDC::OCC::Pnt theP, double theS)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Elips*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

void RDC::OCC::gp_Elips::Transform(RDC::OCC::Trsf theT)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    ((::gp_Elips*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

RDC::OCC::gp_Elips^ RDC::OCC::gp_Elips::Transformed(RDC::OCC::Trsf theT)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    *_result = ((::gp_Elips*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

void RDC::OCC::gp_Elips::Translate(RDC::OCC::Vec theV)
{
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    ((::gp_Elips*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

RDC::OCC::gp_Elips^ RDC::OCC::gp_Elips::Translated(RDC::OCC::Vec theV)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    *_result = ((::gp_Elips*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

void RDC::OCC::gp_Elips::Translate(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    ((::gp_Elips*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

RDC::OCC::gp_Elips^ RDC::OCC::gp_Elips::Translated(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Elips*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Elips2d
//---------------------------------------------------------------------

RDC::OCC::gp_Elips2d::gp_Elips2d()
    : RDC::OCC::BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Elips2d();
}

RDC::OCC::gp_Elips2d::gp_Elips2d(RDC::OCC::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius, bool theIsSense)
    : RDC::OCC::BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theMajorAxis = &theMajorAxis;
    _NativeInstance = new ::gp_Elips2d(*(gp_Ax2d*)pp_theMajorAxis, theMajorRadius, theMinorRadius, theIsSense);
}

RDC::OCC::gp_Elips2d::gp_Elips2d(RDC::OCC::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius)
    : RDC::OCC::BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theMajorAxis = &theMajorAxis;
    _NativeInstance = new ::gp_Elips2d(*(gp_Ax2d*)pp_theMajorAxis, theMajorRadius, theMinorRadius, true);
}

RDC::OCC::gp_Elips2d::gp_Elips2d(RDC::OCC::Ax22d theA, double theMajorRadius, double theMinorRadius)
    : RDC::OCC::BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_theA = &theA;
    _NativeInstance = new ::gp_Elips2d(*(gp_Ax22d*)pp_theA, theMajorRadius, theMinorRadius);
}

void RDC::OCC::gp_Elips2d::SetLocation(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Elips2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

void RDC::OCC::gp_Elips2d::SetMajorRadius(double theMajorRadius)
{
    ((::gp_Elips2d*)_NativeInstance)->SetMajorRadius(theMajorRadius);
}

void RDC::OCC::gp_Elips2d::SetMinorRadius(double theMinorRadius)
{
    ((::gp_Elips2d*)_NativeInstance)->SetMinorRadius(theMinorRadius);
}

void RDC::OCC::gp_Elips2d::SetAxis(RDC::OCC::Ax22d theA)
{
    pin_ptr<RDC::OCC::Ax22d> pp_theA = &theA;
    ((::gp_Elips2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_theA);
}

void RDC::OCC::gp_Elips2d::SetXAxis(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Elips2d*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_theA);
}

void RDC::OCC::gp_Elips2d::SetYAxis(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Elips2d*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_theA);
}

double RDC::OCC::gp_Elips2d::Area()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->Area();
    return _result;
}

void RDC::OCC::gp_Elips2d::Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    pin_ptr<double> pp_theD = &theD;
    pin_ptr<double> pp_theE = &theE;
    pin_ptr<double> pp_theF = &theF;
    ((::gp_Elips2d*)_NativeInstance)->Coefficients(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC, *(double*)pp_theD, *(double*)pp_theE, *(double*)pp_theF);
}

RDC::OCC::Ax2d RDC::OCC::gp_Elips2d::Directrix1()
{
    ::gp_Ax2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Directrix1();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Elips2d::Directrix2()
{
    ::gp_Ax2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Directrix2();
    return RDC::OCC::Ax2d(_nativeResult);
}

double RDC::OCC::gp_Elips2d::Eccentricity()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->Eccentricity();
    return _result;
}

double RDC::OCC::gp_Elips2d::Focal()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->Focal();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::gp_Elips2d::Focus1()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Focus1();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::gp_Elips2d::Focus2()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Focus2();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::gp_Elips2d::Location()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Location();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::gp_Elips2d::MajorRadius()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->MajorRadius();
    return _result;
}

double RDC::OCC::gp_Elips2d::MinorRadius()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->MinorRadius();
    return _result;
}

double RDC::OCC::gp_Elips2d::Parameter()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->Parameter();
    return _result;
}

RDC::OCC::Ax22d RDC::OCC::gp_Elips2d::Axis()
{
    ::gp_Ax22d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Axis();
    return RDC::OCC::Ax22d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Elips2d::XAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Elips2d::YAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax2d(_nativeResult);
}

void RDC::OCC::gp_Elips2d::Reverse()
{
    ((::gp_Elips2d*)_NativeInstance)->Reverse();
}

RDC::OCC::gp_Elips2d^ RDC::OCC::gp_Elips2d::Reversed()
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = ((::gp_Elips2d*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

bool RDC::OCC::gp_Elips2d::IsDirect()
{
    bool _result = ((::gp_Elips2d*)_NativeInstance)->IsDirect();
    return _result;
}

void RDC::OCC::gp_Elips2d::Mirror(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Elips2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_theP);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::gp_Elips2d::Mirrored(RDC::OCC::Pnt2d theP)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

void RDC::OCC::gp_Elips2d::Mirror(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Elips2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_theA);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::gp_Elips2d::Mirrored(RDC::OCC::Ax2d theA)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_theA);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

void RDC::OCC::gp_Elips2d::Rotate(RDC::OCC::Pnt2d theP, double theAng)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Elips2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_theP, theAng);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::gp_Elips2d::Rotated(RDC::OCC::Pnt2d theP, double theAng)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_theP, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

void RDC::OCC::gp_Elips2d::Scale(RDC::OCC::Pnt2d theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Elips2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_theP, theS);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::gp_Elips2d::Scaled(RDC::OCC::Pnt2d theP, double theS)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

void RDC::OCC::gp_Elips2d::Transform(RDC::OCC::Trsf2d theT)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    ((::gp_Elips2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_theT);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::gp_Elips2d::Transformed(RDC::OCC::Trsf2d theT)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

void RDC::OCC::gp_Elips2d::Translate(RDC::OCC::Vec2d theV)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theV = &theV;
    ((::gp_Elips2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_theV);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::gp_Elips2d::Translated(RDC::OCC::Vec2d theV)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<RDC::OCC::Vec2d> pp_theV = &theV;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

void RDC::OCC::gp_Elips2d::Translate(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt2d> pp_theP2 = &theP2;
    ((::gp_Elips2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::gp_Elips2d::Translated(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt2d> pp_theP2 = &theP2;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}



//---------------------------------------------------------------------
//  Class  gp_GTrsf
//---------------------------------------------------------------------

RDC::OCC::gp_GTrsf::gp_GTrsf()
    : RDC::OCC::BaseClass<::gp_GTrsf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_GTrsf();
}

RDC::OCC::gp_GTrsf::gp_GTrsf(RDC::OCC::Trsf theT)
    : RDC::OCC::BaseClass<::gp_GTrsf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    _NativeInstance = new ::gp_GTrsf(*(gp_Trsf*)pp_theT);
}

RDC::OCC::gp_GTrsf::gp_GTrsf(RDC::OCC::Mat theM, RDC::OCC::XYZ theV)
    : RDC::OCC::BaseClass<::gp_GTrsf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Mat> pp_theM = &theM;
    pin_ptr<RDC::OCC::XYZ> pp_theV = &theV;
    _NativeInstance = new ::gp_GTrsf(*(gp_Mat*)pp_theM, *(gp_XYZ*)pp_theV);
}

void RDC::OCC::gp_GTrsf::SetAffinity(RDC::OCC::Ax1 theA1, double theRatio)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_GTrsf*)_NativeInstance)->SetAffinity(*(gp_Ax1*)pp_theA1, theRatio);
}

void RDC::OCC::gp_GTrsf::SetAffinity(RDC::OCC::Ax2 theA2, double theRatio)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_GTrsf*)_NativeInstance)->SetAffinity(*(gp_Ax2*)pp_theA2, theRatio);
}

void RDC::OCC::gp_GTrsf::SetValue(int theRow, int theCol, double theValue)
{
    ((::gp_GTrsf*)_NativeInstance)->SetValue(theRow, theCol, theValue);
}

void RDC::OCC::gp_GTrsf::SetVectorialPart(RDC::OCC::Mat theMatrix)
{
    pin_ptr<RDC::OCC::Mat> pp_theMatrix = &theMatrix;
    ((::gp_GTrsf*)_NativeInstance)->SetVectorialPart(*(gp_Mat*)pp_theMatrix);
}

void RDC::OCC::gp_GTrsf::SetTranslationPart(RDC::OCC::XYZ theCoord)
{
    pin_ptr<RDC::OCC::XYZ> pp_theCoord = &theCoord;
    ((::gp_GTrsf*)_NativeInstance)->SetTranslationPart(*(gp_XYZ*)pp_theCoord);
}

void RDC::OCC::gp_GTrsf::SetTrsf(RDC::OCC::Trsf theT)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    ((::gp_GTrsf*)_NativeInstance)->SetTrsf(*(gp_Trsf*)pp_theT);
}

bool RDC::OCC::gp_GTrsf::IsNegative()
{
    bool _result = ((::gp_GTrsf*)_NativeInstance)->IsNegative();
    return _result;
}

bool RDC::OCC::gp_GTrsf::IsSingular()
{
    bool _result = ((::gp_GTrsf*)_NativeInstance)->IsSingular();
    return _result;
}

RDC::OCC::TrsfForm RDC::OCC::gp_GTrsf::Form()
{
    ::gp_TrsfForm _result = ((::gp_GTrsf*)_NativeInstance)->Form();
    return (RDC::OCC::TrsfForm)_result;
}

void RDC::OCC::gp_GTrsf::SetForm()
{
    ((::gp_GTrsf*)_NativeInstance)->SetForm();
}

RDC::OCC::XYZ RDC::OCC::gp_GTrsf::TranslationPart()
{
    ::gp_XYZ _nativeResult = ((::gp_GTrsf*)_NativeInstance)->TranslationPart();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::Mat RDC::OCC::gp_GTrsf::VectorialPart()
{
    ::gp_Mat _nativeResult = ((::gp_GTrsf*)_NativeInstance)->VectorialPart();
    return RDC::OCC::Mat(_nativeResult);
}

double RDC::OCC::gp_GTrsf::Value(int theRow, int theCol)
{
    double _result = ((::gp_GTrsf*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

void RDC::OCC::gp_GTrsf::Invert()
{
    ((::gp_GTrsf*)_NativeInstance)->Invert();
}

RDC::OCC::gp_GTrsf^ RDC::OCC::gp_GTrsf::Inverted()
{
    ::gp_GTrsf* _result = new ::gp_GTrsf();
    *_result = ((::gp_GTrsf*)_NativeInstance)->Inverted();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf(_result);
}

RDC::OCC::gp_GTrsf^ RDC::OCC::gp_GTrsf::Multiplied(RDC::OCC::gp_GTrsf^ theT)
{
    ::gp_GTrsf* _result = new ::gp_GTrsf();
    *_result = ((::gp_GTrsf*)_NativeInstance)->Multiplied(*(::gp_GTrsf*)theT->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf(_result);
}

void RDC::OCC::gp_GTrsf::Multiply(RDC::OCC::gp_GTrsf^ theT)
{
    ((::gp_GTrsf*)_NativeInstance)->Multiply(*(::gp_GTrsf*)theT->NativeInstance);
}

void RDC::OCC::gp_GTrsf::PreMultiply(RDC::OCC::gp_GTrsf^ theT)
{
    ((::gp_GTrsf*)_NativeInstance)->PreMultiply(*(::gp_GTrsf*)theT->NativeInstance);
}

void RDC::OCC::gp_GTrsf::Power(int theN)
{
    ((::gp_GTrsf*)_NativeInstance)->Power(theN);
}

RDC::OCC::gp_GTrsf^ RDC::OCC::gp_GTrsf::Powered(int theN)
{
    ::gp_GTrsf* _result = new ::gp_GTrsf();
    *_result = ((::gp_GTrsf*)_NativeInstance)->Powered(theN);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf(_result);
}

void RDC::OCC::gp_GTrsf::Transforms(RDC::OCC::XYZ% theCoord)
{
    pin_ptr<RDC::OCC::XYZ> pp_theCoord = &theCoord;
    ((::gp_GTrsf*)_NativeInstance)->Transforms(*(gp_XYZ*)pp_theCoord);
}

void RDC::OCC::gp_GTrsf::Transforms(double% theX, double% theY, double% theZ)
{
    pin_ptr<double> pp_theX = &theX;
    pin_ptr<double> pp_theY = &theY;
    pin_ptr<double> pp_theZ = &theZ;
    ((::gp_GTrsf*)_NativeInstance)->Transforms(*(double*)pp_theX, *(double*)pp_theY, *(double*)pp_theZ);
}

RDC::OCC::Trsf RDC::OCC::gp_GTrsf::Trsf()
{
    ::gp_Trsf _nativeResult = ((::gp_GTrsf*)_NativeInstance)->Trsf();
    return RDC::OCC::Trsf(_nativeResult);
}

void RDC::OCC::gp_GTrsf::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::gp_GTrsf*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::gp_GTrsf::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::gp_GTrsf*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  gp_GTrsf2d
//---------------------------------------------------------------------

RDC::OCC::gp_GTrsf2d::gp_GTrsf2d()
    : RDC::OCC::BaseClass<::gp_GTrsf2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_GTrsf2d();
}

RDC::OCC::gp_GTrsf2d::gp_GTrsf2d(RDC::OCC::Trsf2d theT)
    : RDC::OCC::BaseClass<::gp_GTrsf2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    _NativeInstance = new ::gp_GTrsf2d(*(gp_Trsf2d*)pp_theT);
}

RDC::OCC::gp_GTrsf2d::gp_GTrsf2d(RDC::OCC::Mat2d theM, RDC::OCC::XY theV)
    : RDC::OCC::BaseClass<::gp_GTrsf2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Mat2d> pp_theM = &theM;
    pin_ptr<RDC::OCC::XY> pp_theV = &theV;
    _NativeInstance = new ::gp_GTrsf2d(*(gp_Mat2d*)pp_theM, *(gp_XY*)pp_theV);
}

void RDC::OCC::gp_GTrsf2d::SetAffinity(RDC::OCC::Ax2d theA, double theRatio)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_GTrsf2d*)_NativeInstance)->SetAffinity(*(gp_Ax2d*)pp_theA, theRatio);
}

void RDC::OCC::gp_GTrsf2d::SetValue(int theRow, int theCol, double theValue)
{
    ((::gp_GTrsf2d*)_NativeInstance)->SetValue(theRow, theCol, theValue);
}

void RDC::OCC::gp_GTrsf2d::SetTranslationPart(RDC::OCC::XY theCoord)
{
    pin_ptr<RDC::OCC::XY> pp_theCoord = &theCoord;
    ((::gp_GTrsf2d*)_NativeInstance)->SetTranslationPart(*(gp_XY*)pp_theCoord);
}

void RDC::OCC::gp_GTrsf2d::SetTrsf2d(RDC::OCC::Trsf2d theT)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    ((::gp_GTrsf2d*)_NativeInstance)->SetTrsf2d(*(gp_Trsf2d*)pp_theT);
}

void RDC::OCC::gp_GTrsf2d::SetVectorialPart(RDC::OCC::Mat2d theMatrix)
{
    pin_ptr<RDC::OCC::Mat2d> pp_theMatrix = &theMatrix;
    ((::gp_GTrsf2d*)_NativeInstance)->SetVectorialPart(*(gp_Mat2d*)pp_theMatrix);
}

bool RDC::OCC::gp_GTrsf2d::IsNegative()
{
    bool _result = ((::gp_GTrsf2d*)_NativeInstance)->IsNegative();
    return _result;
}

bool RDC::OCC::gp_GTrsf2d::IsSingular()
{
    bool _result = ((::gp_GTrsf2d*)_NativeInstance)->IsSingular();
    return _result;
}

RDC::OCC::TrsfForm RDC::OCC::gp_GTrsf2d::Form()
{
    ::gp_TrsfForm _result = ((::gp_GTrsf2d*)_NativeInstance)->Form();
    return (RDC::OCC::TrsfForm)_result;
}

RDC::OCC::XY RDC::OCC::gp_GTrsf2d::TranslationPart()
{
    ::gp_XY _nativeResult = ((::gp_GTrsf2d*)_NativeInstance)->TranslationPart();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::Mat2d RDC::OCC::gp_GTrsf2d::VectorialPart()
{
    ::gp_Mat2d _nativeResult = ((::gp_GTrsf2d*)_NativeInstance)->VectorialPart();
    return RDC::OCC::Mat2d(_nativeResult);
}

double RDC::OCC::gp_GTrsf2d::Value(int theRow, int theCol)
{
    double _result = ((::gp_GTrsf2d*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

void RDC::OCC::gp_GTrsf2d::Invert()
{
    ((::gp_GTrsf2d*)_NativeInstance)->Invert();
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::gp_GTrsf2d::Inverted()
{
    ::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
    *_result = ((::gp_GTrsf2d*)_NativeInstance)->Inverted();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::gp_GTrsf2d::Multiplied(RDC::OCC::gp_GTrsf2d^ theT)
{
    ::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
    *_result = ((::gp_GTrsf2d*)_NativeInstance)->Multiplied(*(::gp_GTrsf2d*)theT->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

void RDC::OCC::gp_GTrsf2d::Multiply(RDC::OCC::gp_GTrsf2d^ theT)
{
    ((::gp_GTrsf2d*)_NativeInstance)->Multiply(*(::gp_GTrsf2d*)theT->NativeInstance);
}

void RDC::OCC::gp_GTrsf2d::PreMultiply(RDC::OCC::gp_GTrsf2d^ theT)
{
    ((::gp_GTrsf2d*)_NativeInstance)->PreMultiply(*(::gp_GTrsf2d*)theT->NativeInstance);
}

void RDC::OCC::gp_GTrsf2d::Power(int theN)
{
    ((::gp_GTrsf2d*)_NativeInstance)->Power(theN);
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::gp_GTrsf2d::Powered(int theN)
{
    ::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
    *_result = ((::gp_GTrsf2d*)_NativeInstance)->Powered(theN);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

void RDC::OCC::gp_GTrsf2d::Transforms(RDC::OCC::XY% theCoord)
{
    pin_ptr<RDC::OCC::XY> pp_theCoord = &theCoord;
    ((::gp_GTrsf2d*)_NativeInstance)->Transforms(*(gp_XY*)pp_theCoord);
}

RDC::OCC::XY RDC::OCC::gp_GTrsf2d::Transformed(RDC::OCC::XY theCoord)
{
    pin_ptr<RDC::OCC::XY> pp_theCoord = &theCoord;
    ::gp_XY _nativeResult = ((::gp_GTrsf2d*)_NativeInstance)->Transformed(*(gp_XY*)pp_theCoord);
    return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::gp_GTrsf2d::Transforms(double% theX, double% theY)
{
    pin_ptr<double> pp_theX = &theX;
    pin_ptr<double> pp_theY = &theY;
    ((::gp_GTrsf2d*)_NativeInstance)->Transforms(*(double*)pp_theX, *(double*)pp_theY);
}

RDC::OCC::Trsf2d RDC::OCC::gp_GTrsf2d::Trsf2d()
{
    ::gp_Trsf2d _nativeResult = ((::gp_GTrsf2d*)_NativeInstance)->Trsf2d();
    return RDC::OCC::Trsf2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gp_Hypr
//---------------------------------------------------------------------

RDC::OCC::gp_Hypr::gp_Hypr()
    : RDC::OCC::BaseClass<::gp_Hypr>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Hypr();
}

RDC::OCC::gp_Hypr::gp_Hypr(RDC::OCC::Ax2 theA2, double theMajorRadius, double theMinorRadius)
    : RDC::OCC::BaseClass<::gp_Hypr>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    _NativeInstance = new ::gp_Hypr(*(gp_Ax2*)pp_theA2, theMajorRadius, theMinorRadius);
}

void RDC::OCC::gp_Hypr::SetAxis(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Hypr*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void RDC::OCC::gp_Hypr::SetLocation(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Hypr*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void RDC::OCC::gp_Hypr::SetMajorRadius(double theMajorRadius)
{
    ((::gp_Hypr*)_NativeInstance)->SetMajorRadius(theMajorRadius);
}

void RDC::OCC::gp_Hypr::SetMinorRadius(double theMinorRadius)
{
    ((::gp_Hypr*)_NativeInstance)->SetMinorRadius(theMinorRadius);
}

void RDC::OCC::gp_Hypr::SetPosition(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Hypr*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::Ax1 RDC::OCC::gp_Hypr::Asymptote1()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Asymptote1();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Hypr::Asymptote2()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Asymptote2();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Hypr::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Axis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::ConjugateBranch1()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::gp_Hypr*)_NativeInstance)->ConjugateBranch1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::ConjugateBranch2()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::gp_Hypr*)_NativeInstance)->ConjugateBranch2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

RDC::OCC::Ax1 RDC::OCC::gp_Hypr::Directrix1()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Directrix1();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Hypr::Directrix2()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Directrix2();
    return RDC::OCC::Ax1(_nativeResult);
}

double RDC::OCC::gp_Hypr::Eccentricity()
{
    double _result = ((::gp_Hypr*)_NativeInstance)->Eccentricity();
    return _result;
}

double RDC::OCC::gp_Hypr::Focal()
{
    double _result = ((::gp_Hypr*)_NativeInstance)->Focal();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::gp_Hypr::Focus1()
{
    ::gp_Pnt _nativeResult = ((::gp_Hypr*)_NativeInstance)->Focus1();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::gp_Hypr::Focus2()
{
    ::gp_Pnt _nativeResult = ((::gp_Hypr*)_NativeInstance)->Focus2();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::gp_Hypr::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Hypr*)_NativeInstance)->Location();
    return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::gp_Hypr::MajorRadius()
{
    double _result = ((::gp_Hypr*)_NativeInstance)->MajorRadius();
    return _result;
}

double RDC::OCC::gp_Hypr::MinorRadius()
{
    double _result = ((::gp_Hypr*)_NativeInstance)->MinorRadius();
    return _result;
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::OtherBranch()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::gp_Hypr*)_NativeInstance)->OtherBranch();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

double RDC::OCC::gp_Hypr::Parameter()
{
    double _result = ((::gp_Hypr*)_NativeInstance)->Parameter();
    return _result;
}

RDC::OCC::Ax2 RDC::OCC::gp_Hypr::Position()
{
    ::gp_Ax2 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Position();
    return RDC::OCC::Ax2(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Hypr::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Hypr::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::gp_Hypr::Mirror(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Hypr*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::Mirrored(RDC::OCC::Pnt theP)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Hypr*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

void RDC::OCC::gp_Hypr::Mirror(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Hypr*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::Mirrored(RDC::OCC::Ax1 theA1)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Hypr*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

void RDC::OCC::gp_Hypr::Mirror(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Hypr*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::Mirrored(RDC::OCC::Ax2 theA2)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Hypr*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

void RDC::OCC::gp_Hypr::Rotate(RDC::OCC::Ax1 theA1, double theAng)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Hypr*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::Rotated(RDC::OCC::Ax1 theA1, double theAng)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Hypr*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

void RDC::OCC::gp_Hypr::Scale(RDC::OCC::Pnt theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Hypr*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::Scaled(RDC::OCC::Pnt theP, double theS)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Hypr*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

void RDC::OCC::gp_Hypr::Transform(RDC::OCC::Trsf theT)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    ((::gp_Hypr*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::Transformed(RDC::OCC::Trsf theT)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    *_result = ((::gp_Hypr*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

void RDC::OCC::gp_Hypr::Translate(RDC::OCC::Vec theV)
{
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    ((::gp_Hypr*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::Translated(RDC::OCC::Vec theV)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    *_result = ((::gp_Hypr*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

void RDC::OCC::gp_Hypr::Translate(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    ((::gp_Hypr*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gp_Hypr::Translated(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Hypr*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Hypr2d
//---------------------------------------------------------------------

RDC::OCC::gp_Hypr2d::gp_Hypr2d()
    : RDC::OCC::BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Hypr2d();
}

RDC::OCC::gp_Hypr2d::gp_Hypr2d(RDC::OCC::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius, bool theIsSense)
    : RDC::OCC::BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theMajorAxis = &theMajorAxis;
    _NativeInstance = new ::gp_Hypr2d(*(gp_Ax2d*)pp_theMajorAxis, theMajorRadius, theMinorRadius, theIsSense);
}

RDC::OCC::gp_Hypr2d::gp_Hypr2d(RDC::OCC::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius)
    : RDC::OCC::BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theMajorAxis = &theMajorAxis;
    _NativeInstance = new ::gp_Hypr2d(*(gp_Ax2d*)pp_theMajorAxis, theMajorRadius, theMinorRadius, true);
}

RDC::OCC::gp_Hypr2d::gp_Hypr2d(RDC::OCC::Ax22d theA, double theMajorRadius, double theMinorRadius)
    : RDC::OCC::BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_theA = &theA;
    _NativeInstance = new ::gp_Hypr2d(*(gp_Ax22d*)pp_theA, theMajorRadius, theMinorRadius);
}

void RDC::OCC::gp_Hypr2d::SetLocation(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Hypr2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

void RDC::OCC::gp_Hypr2d::SetMajorRadius(double theMajorRadius)
{
    ((::gp_Hypr2d*)_NativeInstance)->SetMajorRadius(theMajorRadius);
}

void RDC::OCC::gp_Hypr2d::SetMinorRadius(double theMinorRadius)
{
    ((::gp_Hypr2d*)_NativeInstance)->SetMinorRadius(theMinorRadius);
}

void RDC::OCC::gp_Hypr2d::SetAxis(RDC::OCC::Ax22d theA)
{
    pin_ptr<RDC::OCC::Ax22d> pp_theA = &theA;
    ((::gp_Hypr2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_theA);
}

void RDC::OCC::gp_Hypr2d::SetXAxis(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Hypr2d*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_theA);
}

void RDC::OCC::gp_Hypr2d::SetYAxis(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Hypr2d*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_theA);
}

RDC::OCC::Ax2d RDC::OCC::gp_Hypr2d::Asymptote1()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Asymptote1();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Hypr2d::Asymptote2()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Asymptote2();
    return RDC::OCC::Ax2d(_nativeResult);
}

void RDC::OCC::gp_Hypr2d::Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    pin_ptr<double> pp_theD = &theD;
    pin_ptr<double> pp_theE = &theE;
    pin_ptr<double> pp_theF = &theF;
    ((::gp_Hypr2d*)_NativeInstance)->Coefficients(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC, *(double*)pp_theD, *(double*)pp_theE, *(double*)pp_theF);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::ConjugateBranch1()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::gp_Hypr2d*)_NativeInstance)->ConjugateBranch1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::ConjugateBranch2()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::gp_Hypr2d*)_NativeInstance)->ConjugateBranch2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

RDC::OCC::Ax2d RDC::OCC::gp_Hypr2d::Directrix1()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Directrix1();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Hypr2d::Directrix2()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Directrix2();
    return RDC::OCC::Ax2d(_nativeResult);
}

double RDC::OCC::gp_Hypr2d::Eccentricity()
{
    double _result = ((::gp_Hypr2d*)_NativeInstance)->Eccentricity();
    return _result;
}

double RDC::OCC::gp_Hypr2d::Focal()
{
    double _result = ((::gp_Hypr2d*)_NativeInstance)->Focal();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::gp_Hypr2d::Focus1()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Focus1();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::gp_Hypr2d::Focus2()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Focus2();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::gp_Hypr2d::Location()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Location();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::gp_Hypr2d::MajorRadius()
{
    double _result = ((::gp_Hypr2d*)_NativeInstance)->MajorRadius();
    return _result;
}

double RDC::OCC::gp_Hypr2d::MinorRadius()
{
    double _result = ((::gp_Hypr2d*)_NativeInstance)->MinorRadius();
    return _result;
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::OtherBranch()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::gp_Hypr2d*)_NativeInstance)->OtherBranch();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

double RDC::OCC::gp_Hypr2d::Parameter()
{
    double _result = ((::gp_Hypr2d*)_NativeInstance)->Parameter();
    return _result;
}

RDC::OCC::Ax22d RDC::OCC::gp_Hypr2d::Axis()
{
    ::gp_Ax22d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Axis();
    return RDC::OCC::Ax22d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Hypr2d::XAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Hypr2d::YAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax2d(_nativeResult);
}

void RDC::OCC::gp_Hypr2d::Reverse()
{
    ((::gp_Hypr2d*)_NativeInstance)->Reverse();
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::Reversed()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

bool RDC::OCC::gp_Hypr2d::IsDirect()
{
    bool _result = ((::gp_Hypr2d*)_NativeInstance)->IsDirect();
    return _result;
}

void RDC::OCC::gp_Hypr2d::Mirror(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Hypr2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_theP);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::Mirrored(RDC::OCC::Pnt2d theP)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

void RDC::OCC::gp_Hypr2d::Mirror(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Hypr2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_theA);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::Mirrored(RDC::OCC::Ax2d theA)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_theA);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

void RDC::OCC::gp_Hypr2d::Rotate(RDC::OCC::Pnt2d theP, double theAng)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Hypr2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_theP, theAng);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::Rotated(RDC::OCC::Pnt2d theP, double theAng)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_theP, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

void RDC::OCC::gp_Hypr2d::Scale(RDC::OCC::Pnt2d theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Hypr2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_theP, theS);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::Scaled(RDC::OCC::Pnt2d theP, double theS)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

void RDC::OCC::gp_Hypr2d::Transform(RDC::OCC::Trsf2d theT)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    ((::gp_Hypr2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_theT);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::Transformed(RDC::OCC::Trsf2d theT)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

void RDC::OCC::gp_Hypr2d::Translate(RDC::OCC::Vec2d theV)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theV = &theV;
    ((::gp_Hypr2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_theV);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::Translated(RDC::OCC::Vec2d theV)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<RDC::OCC::Vec2d> pp_theV = &theV;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

void RDC::OCC::gp_Hypr2d::Translate(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt2d> pp_theP2 = &theP2;
    ((::gp_Hypr2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gp_Hypr2d::Translated(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt2d> pp_theP2 = &theP2;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Lin
//---------------------------------------------------------------------

RDC::OCC::gp_Lin::gp_Lin()
    : RDC::OCC::BaseClass<::gp_Lin>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Lin();
}

RDC::OCC::gp_Lin::gp_Lin(RDC::OCC::Ax1 theA1)
    : RDC::OCC::BaseClass<::gp_Lin>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    _NativeInstance = new ::gp_Lin(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::gp_Lin::gp_Lin(RDC::OCC::Pnt theP, RDC::OCC::Dir theV)
    : RDC::OCC::BaseClass<::gp_Lin>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    pin_ptr<RDC::OCC::Dir> pp_theV = &theV;
    _NativeInstance = new ::gp_Lin(*(gp_Pnt*)pp_theP, *(gp_Dir*)pp_theV);
}

void RDC::OCC::gp_Lin::Reverse()
{
    ((::gp_Lin*)_NativeInstance)->Reverse();
}

RDC::OCC::gp_Lin^ RDC::OCC::gp_Lin::Reversed()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::gp_Lin*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

void RDC::OCC::gp_Lin::SetDirection(RDC::OCC::Dir theV)
{
    pin_ptr<RDC::OCC::Dir> pp_theV = &theV;
    ((::gp_Lin*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_theV);
}

void RDC::OCC::gp_Lin::SetLocation(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Lin*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void RDC::OCC::gp_Lin::SetPosition(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Lin*)_NativeInstance)->SetPosition(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::Dir RDC::OCC::gp_Lin::Direction()
{
    ::gp_Dir _nativeResult = ((::gp_Lin*)_NativeInstance)->Direction();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::gp_Lin::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Lin*)_NativeInstance)->Location();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Lin::Position()
{
    ::gp_Ax1 _nativeResult = ((::gp_Lin*)_NativeInstance)->Position();
    return RDC::OCC::Ax1(_nativeResult);
}

double RDC::OCC::gp_Lin::Angle(RDC::OCC::gp_Lin^ theOther)
{
    double _result = ((::gp_Lin*)_NativeInstance)->Angle(*(::gp_Lin*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::gp_Lin::Contains(RDC::OCC::Pnt theP, double theLinearTolerance)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    bool _result = ((::gp_Lin*)_NativeInstance)->Contains(*(gp_Pnt*)pp_theP, theLinearTolerance);
    return _result;
}

double RDC::OCC::gp_Lin::Distance(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    double _result = ((::gp_Lin*)_NativeInstance)->Distance(*(gp_Pnt*)pp_theP);
    return _result;
}

double RDC::OCC::gp_Lin::Distance(RDC::OCC::gp_Lin^ theOther)
{
    double _result = ((::gp_Lin*)_NativeInstance)->Distance(*(::gp_Lin*)theOther->NativeInstance);
    return _result;
}

double RDC::OCC::gp_Lin::SquareDistance(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    double _result = ((::gp_Lin*)_NativeInstance)->SquareDistance(*(gp_Pnt*)pp_theP);
    return _result;
}

double RDC::OCC::gp_Lin::SquareDistance(RDC::OCC::gp_Lin^ theOther)
{
    double _result = ((::gp_Lin*)_NativeInstance)->SquareDistance(*(::gp_Lin*)theOther->NativeInstance);
    return _result;
}

RDC::OCC::gp_Lin^ RDC::OCC::gp_Lin::Normal(RDC::OCC::Pnt theP)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Lin*)_NativeInstance)->Normal(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

void RDC::OCC::gp_Lin::Mirror(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Lin*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

RDC::OCC::gp_Lin^ RDC::OCC::gp_Lin::Mirrored(RDC::OCC::Pnt theP)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Lin*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

void RDC::OCC::gp_Lin::Mirror(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Lin*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::gp_Lin^ RDC::OCC::gp_Lin::Mirrored(RDC::OCC::Ax1 theA1)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Lin*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

void RDC::OCC::gp_Lin::Mirror(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Lin*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::gp_Lin^ RDC::OCC::gp_Lin::Mirrored(RDC::OCC::Ax2 theA2)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Lin*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

void RDC::OCC::gp_Lin::Rotate(RDC::OCC::Ax1 theA1, double theAng)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Lin*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

RDC::OCC::gp_Lin^ RDC::OCC::gp_Lin::Rotated(RDC::OCC::Ax1 theA1, double theAng)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Lin*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

void RDC::OCC::gp_Lin::Scale(RDC::OCC::Pnt theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Lin*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

RDC::OCC::gp_Lin^ RDC::OCC::gp_Lin::Scaled(RDC::OCC::Pnt theP, double theS)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Lin*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

void RDC::OCC::gp_Lin::Transform(RDC::OCC::Trsf theT)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    ((::gp_Lin*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

RDC::OCC::gp_Lin^ RDC::OCC::gp_Lin::Transformed(RDC::OCC::Trsf theT)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    *_result = ((::gp_Lin*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

void RDC::OCC::gp_Lin::Translate(RDC::OCC::Vec theV)
{
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    ((::gp_Lin*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

RDC::OCC::gp_Lin^ RDC::OCC::gp_Lin::Translated(RDC::OCC::Vec theV)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    *_result = ((::gp_Lin*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

void RDC::OCC::gp_Lin::Translate(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    ((::gp_Lin*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

RDC::OCC::gp_Lin^ RDC::OCC::gp_Lin::Translated(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Lin*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Lin2d
//---------------------------------------------------------------------

RDC::OCC::gp_Lin2d::gp_Lin2d()
    : RDC::OCC::BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Lin2d();
}

RDC::OCC::gp_Lin2d::gp_Lin2d(RDC::OCC::Ax2d theA)
    : RDC::OCC::BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    _NativeInstance = new ::gp_Lin2d(*(gp_Ax2d*)pp_theA);
}

RDC::OCC::gp_Lin2d::gp_Lin2d(RDC::OCC::Pnt2d theP, RDC::OCC::Dir2d theV)
    : RDC::OCC::BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    pin_ptr<RDC::OCC::Dir2d> pp_theV = &theV;
    _NativeInstance = new ::gp_Lin2d(*(gp_Pnt2d*)pp_theP, *(gp_Dir2d*)pp_theV);
}

RDC::OCC::gp_Lin2d::gp_Lin2d(double theA, double theB, double theC)
    : RDC::OCC::BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Lin2d(theA, theB, theC);
}

void RDC::OCC::gp_Lin2d::Reverse()
{
    ((::gp_Lin2d*)_NativeInstance)->Reverse();
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gp_Lin2d::Reversed()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::gp_Lin2d*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::gp_Lin2d::SetDirection(RDC::OCC::Dir2d theV)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theV = &theV;
    ((::gp_Lin2d*)_NativeInstance)->SetDirection(*(gp_Dir2d*)pp_theV);
}

void RDC::OCC::gp_Lin2d::SetLocation(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Lin2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

void RDC::OCC::gp_Lin2d::SetPosition(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Lin2d*)_NativeInstance)->SetPosition(*(gp_Ax2d*)pp_theA);
}

void RDC::OCC::gp_Lin2d::Coefficients(double% theA, double% theB, double% theC)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    ((::gp_Lin2d*)_NativeInstance)->Coefficients(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC);
}

RDC::OCC::Dir2d RDC::OCC::gp_Lin2d::Direction()
{
    ::gp_Dir2d _nativeResult = ((::gp_Lin2d*)_NativeInstance)->Direction();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::gp_Lin2d::Location()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Lin2d*)_NativeInstance)->Location();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Lin2d::Position()
{
    ::gp_Ax2d _nativeResult = ((::gp_Lin2d*)_NativeInstance)->Position();
    return RDC::OCC::Ax2d(_nativeResult);
}

double RDC::OCC::gp_Lin2d::Angle(RDC::OCC::gp_Lin2d^ theOther)
{
    double _result = ((::gp_Lin2d*)_NativeInstance)->Angle(*(::gp_Lin2d*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::gp_Lin2d::Contains(RDC::OCC::Pnt2d theP, double theLinearTolerance)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    bool _result = ((::gp_Lin2d*)_NativeInstance)->Contains(*(gp_Pnt2d*)pp_theP, theLinearTolerance);
    return _result;
}

double RDC::OCC::gp_Lin2d::Distance(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    double _result = ((::gp_Lin2d*)_NativeInstance)->Distance(*(gp_Pnt2d*)pp_theP);
    return _result;
}

double RDC::OCC::gp_Lin2d::Distance(RDC::OCC::gp_Lin2d^ theOther)
{
    double _result = ((::gp_Lin2d*)_NativeInstance)->Distance(*(::gp_Lin2d*)theOther->NativeInstance);
    return _result;
}

double RDC::OCC::gp_Lin2d::SquareDistance(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    double _result = ((::gp_Lin2d*)_NativeInstance)->SquareDistance(*(gp_Pnt2d*)pp_theP);
    return _result;
}

double RDC::OCC::gp_Lin2d::SquareDistance(RDC::OCC::gp_Lin2d^ theOther)
{
    double _result = ((::gp_Lin2d*)_NativeInstance)->SquareDistance(*(::gp_Lin2d*)theOther->NativeInstance);
    return _result;
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gp_Lin2d::Normal(RDC::OCC::Pnt2d theP)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Normal(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::gp_Lin2d::Mirror(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Lin2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_theP);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gp_Lin2d::Mirrored(RDC::OCC::Pnt2d theP)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::gp_Lin2d::Mirror(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Lin2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_theA);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gp_Lin2d::Mirrored(RDC::OCC::Ax2d theA)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_theA);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::gp_Lin2d::Rotate(RDC::OCC::Pnt2d theP, double theAng)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Lin2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_theP, theAng);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gp_Lin2d::Rotated(RDC::OCC::Pnt2d theP, double theAng)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_theP, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::gp_Lin2d::Scale(RDC::OCC::Pnt2d theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Lin2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_theP, theS);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gp_Lin2d::Scaled(RDC::OCC::Pnt2d theP, double theS)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::gp_Lin2d::Transform(RDC::OCC::Trsf2d theT)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    ((::gp_Lin2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_theT);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gp_Lin2d::Transformed(RDC::OCC::Trsf2d theT)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::gp_Lin2d::Translate(RDC::OCC::Vec2d theV)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theV = &theV;
    ((::gp_Lin2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_theV);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gp_Lin2d::Translated(RDC::OCC::Vec2d theV)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<RDC::OCC::Vec2d> pp_theV = &theV;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::gp_Lin2d::Translate(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt2d> pp_theP2 = &theP2;
    ((::gp_Lin2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gp_Lin2d::Translated(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt2d> pp_theP2 = &theP2;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Parab
//---------------------------------------------------------------------

RDC::OCC::gp_Parab::gp_Parab()
    : RDC::OCC::BaseClass<::gp_Parab>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Parab();
}

RDC::OCC::gp_Parab::gp_Parab(RDC::OCC::Ax2 theA2, double theFocal)
    : RDC::OCC::BaseClass<::gp_Parab>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    _NativeInstance = new ::gp_Parab(*(gp_Ax2*)pp_theA2, theFocal);
}

RDC::OCC::gp_Parab::gp_Parab(RDC::OCC::Ax1 theD, RDC::OCC::Pnt theF)
    : RDC::OCC::BaseClass<::gp_Parab>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_theD = &theD;
    pin_ptr<RDC::OCC::Pnt> pp_theF = &theF;
    _NativeInstance = new ::gp_Parab(*(gp_Ax1*)pp_theD, *(gp_Pnt*)pp_theF);
}

void RDC::OCC::gp_Parab::SetAxis(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Parab*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void RDC::OCC::gp_Parab::SetFocal(double theFocal)
{
    ((::gp_Parab*)_NativeInstance)->SetFocal(theFocal);
}

void RDC::OCC::gp_Parab::SetLocation(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Parab*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void RDC::OCC::gp_Parab::SetPosition(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Parab*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::Ax1 RDC::OCC::gp_Parab::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Parab*)_NativeInstance)->Axis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Parab::Directrix()
{
    ::gp_Ax1 _nativeResult = ((::gp_Parab*)_NativeInstance)->Directrix();
    return RDC::OCC::Ax1(_nativeResult);
}

double RDC::OCC::gp_Parab::Focal()
{
    double _result = ((::gp_Parab*)_NativeInstance)->Focal();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::gp_Parab::Focus()
{
    ::gp_Pnt _nativeResult = ((::gp_Parab*)_NativeInstance)->Focus();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::gp_Parab::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Parab*)_NativeInstance)->Location();
    return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::gp_Parab::Parameter()
{
    double _result = ((::gp_Parab*)_NativeInstance)->Parameter();
    return _result;
}

RDC::OCC::Ax2 RDC::OCC::gp_Parab::Position()
{
    ::gp_Ax2 _nativeResult = ((::gp_Parab*)_NativeInstance)->Position();
    return RDC::OCC::Ax2(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Parab::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Parab*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Parab::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Parab*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::gp_Parab::Mirror(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Parab*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

RDC::OCC::gp_Parab^ RDC::OCC::gp_Parab::Mirrored(RDC::OCC::Pnt theP)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Parab*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

void RDC::OCC::gp_Parab::Mirror(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Parab*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::gp_Parab^ RDC::OCC::gp_Parab::Mirrored(RDC::OCC::Ax1 theA1)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Parab*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

void RDC::OCC::gp_Parab::Mirror(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Parab*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::gp_Parab^ RDC::OCC::gp_Parab::Mirrored(RDC::OCC::Ax2 theA2)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Parab*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

void RDC::OCC::gp_Parab::Rotate(RDC::OCC::Ax1 theA1, double theAng)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Parab*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

RDC::OCC::gp_Parab^ RDC::OCC::gp_Parab::Rotated(RDC::OCC::Ax1 theA1, double theAng)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Parab*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

void RDC::OCC::gp_Parab::Scale(RDC::OCC::Pnt theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Parab*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

RDC::OCC::gp_Parab^ RDC::OCC::gp_Parab::Scaled(RDC::OCC::Pnt theP, double theS)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Parab*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

void RDC::OCC::gp_Parab::Transform(RDC::OCC::Trsf theT)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    ((::gp_Parab*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

RDC::OCC::gp_Parab^ RDC::OCC::gp_Parab::Transformed(RDC::OCC::Trsf theT)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    *_result = ((::gp_Parab*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

void RDC::OCC::gp_Parab::Translate(RDC::OCC::Vec theV)
{
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    ((::gp_Parab*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

RDC::OCC::gp_Parab^ RDC::OCC::gp_Parab::Translated(RDC::OCC::Vec theV)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    *_result = ((::gp_Parab*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

void RDC::OCC::gp_Parab::Translate(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    ((::gp_Parab*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

RDC::OCC::gp_Parab^ RDC::OCC::gp_Parab::Translated(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Parab*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Parab2d
//---------------------------------------------------------------------

RDC::OCC::gp_Parab2d::gp_Parab2d()
    : RDC::OCC::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Parab2d();
}

RDC::OCC::gp_Parab2d::gp_Parab2d(RDC::OCC::Ax2d theMirrorAxis, double theFocalLength, bool theSense)
    : RDC::OCC::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theMirrorAxis = &theMirrorAxis;
    _NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theMirrorAxis, theFocalLength, theSense);
}

RDC::OCC::gp_Parab2d::gp_Parab2d(RDC::OCC::Ax2d theMirrorAxis, double theFocalLength)
    : RDC::OCC::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theMirrorAxis = &theMirrorAxis;
    _NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theMirrorAxis, theFocalLength, true);
}

RDC::OCC::gp_Parab2d::gp_Parab2d(RDC::OCC::Ax22d theAxes, double theFocalLength)
    : RDC::OCC::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_theAxes = &theAxes;
    _NativeInstance = new ::gp_Parab2d(*(gp_Ax22d*)pp_theAxes, theFocalLength);
}

RDC::OCC::gp_Parab2d::gp_Parab2d(RDC::OCC::Ax2d theDirectrix, RDC::OCC::Pnt2d theFocus, bool theSense)
    : RDC::OCC::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theDirectrix = &theDirectrix;
    pin_ptr<RDC::OCC::Pnt2d> pp_theFocus = &theFocus;
    _NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theDirectrix, *(gp_Pnt2d*)pp_theFocus, theSense);
}

RDC::OCC::gp_Parab2d::gp_Parab2d(RDC::OCC::Ax2d theDirectrix, RDC::OCC::Pnt2d theFocus)
    : RDC::OCC::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theDirectrix = &theDirectrix;
    pin_ptr<RDC::OCC::Pnt2d> pp_theFocus = &theFocus;
    _NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theDirectrix, *(gp_Pnt2d*)pp_theFocus, true);
}

void RDC::OCC::gp_Parab2d::SetFocal(double theFocal)
{
    ((::gp_Parab2d*)_NativeInstance)->SetFocal(theFocal);
}

void RDC::OCC::gp_Parab2d::SetLocation(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Parab2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

void RDC::OCC::gp_Parab2d::SetMirrorAxis(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Parab2d*)_NativeInstance)->SetMirrorAxis(*(gp_Ax2d*)pp_theA);
}

void RDC::OCC::gp_Parab2d::SetAxis(RDC::OCC::Ax22d theA)
{
    pin_ptr<RDC::OCC::Ax22d> pp_theA = &theA;
    ((::gp_Parab2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_theA);
}

void RDC::OCC::gp_Parab2d::Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    pin_ptr<double> pp_theD = &theD;
    pin_ptr<double> pp_theE = &theE;
    pin_ptr<double> pp_theF = &theF;
    ((::gp_Parab2d*)_NativeInstance)->Coefficients(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC, *(double*)pp_theD, *(double*)pp_theE, *(double*)pp_theF);
}

RDC::OCC::Ax2d RDC::OCC::gp_Parab2d::Directrix()
{
    ::gp_Ax2d _nativeResult = ((::gp_Parab2d*)_NativeInstance)->Directrix();
    return RDC::OCC::Ax2d(_nativeResult);
}

double RDC::OCC::gp_Parab2d::Focal()
{
    double _result = ((::gp_Parab2d*)_NativeInstance)->Focal();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::gp_Parab2d::Focus()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Parab2d*)_NativeInstance)->Focus();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::gp_Parab2d::Location()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Parab2d*)_NativeInstance)->Location();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::gp_Parab2d::MirrorAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Parab2d*)_NativeInstance)->MirrorAxis();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax22d RDC::OCC::gp_Parab2d::Axis()
{
    ::gp_Ax22d _nativeResult = ((::gp_Parab2d*)_NativeInstance)->Axis();
    return RDC::OCC::Ax22d(_nativeResult);
}

double RDC::OCC::gp_Parab2d::Parameter()
{
    double _result = ((::gp_Parab2d*)_NativeInstance)->Parameter();
    return _result;
}

void RDC::OCC::gp_Parab2d::Reverse()
{
    ((::gp_Parab2d*)_NativeInstance)->Reverse();
}

RDC::OCC::gp_Parab2d^ RDC::OCC::gp_Parab2d::Reversed()
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = ((::gp_Parab2d*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

bool RDC::OCC::gp_Parab2d::IsDirect()
{
    bool _result = ((::gp_Parab2d*)_NativeInstance)->IsDirect();
    return _result;
}

void RDC::OCC::gp_Parab2d::Mirror(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Parab2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_theP);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::gp_Parab2d::Mirrored(RDC::OCC::Pnt2d theP)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

void RDC::OCC::gp_Parab2d::Mirror(RDC::OCC::Ax2d theA)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    ((::gp_Parab2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_theA);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::gp_Parab2d::Mirrored(RDC::OCC::Ax2d theA)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<RDC::OCC::Ax2d> pp_theA = &theA;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_theA);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

void RDC::OCC::gp_Parab2d::Rotate(RDC::OCC::Pnt2d theP, double theAng)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Parab2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_theP, theAng);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::gp_Parab2d::Rotated(RDC::OCC::Pnt2d theP, double theAng)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_theP, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

void RDC::OCC::gp_Parab2d::Scale(RDC::OCC::Pnt2d theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::gp_Parab2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_theP, theS);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::gp_Parab2d::Scaled(RDC::OCC::Pnt2d theP, double theS)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

void RDC::OCC::gp_Parab2d::Transform(RDC::OCC::Trsf2d theT)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    ((::gp_Parab2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_theT);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::gp_Parab2d::Transformed(RDC::OCC::Trsf2d theT)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<RDC::OCC::Trsf2d> pp_theT = &theT;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

void RDC::OCC::gp_Parab2d::Translate(RDC::OCC::Vec2d theV)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theV = &theV;
    ((::gp_Parab2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_theV);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::gp_Parab2d::Translated(RDC::OCC::Vec2d theV)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<RDC::OCC::Vec2d> pp_theV = &theV;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

void RDC::OCC::gp_Parab2d::Translate(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt2d> pp_theP2 = &theP2;
    ((::gp_Parab2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::gp_Parab2d::Translated(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt2d> pp_theP2 = &theP2;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}



//---------------------------------------------------------------------
//  Class  gp_QuaternionNLerp
//---------------------------------------------------------------------

RDC::OCC::gp_QuaternionNLerp::gp_QuaternionNLerp()
    : RDC::OCC::BaseClass<::gp_QuaternionNLerp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_QuaternionNLerp();
}

RDC::OCC::gp_QuaternionNLerp::gp_QuaternionNLerp(RDC::OCC::Quaternion theQStart, RDC::OCC::Quaternion theQEnd)
    : RDC::OCC::BaseClass<::gp_QuaternionNLerp>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<RDC::OCC::Quaternion> pp_theQEnd = &theQEnd;
    _NativeInstance = new ::gp_QuaternionNLerp(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

RDC::OCC::Quaternion RDC::OCC::gp_QuaternionNLerp::Interpolate(RDC::OCC::Quaternion theQStart, RDC::OCC::Quaternion theQEnd, double theT)
{
    pin_ptr<RDC::OCC::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<RDC::OCC::Quaternion> pp_theQEnd = &theQEnd;
    ::gp_Quaternion _nativeResult = ::gp_QuaternionNLerp::Interpolate(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd, theT);
    return RDC::OCC::Quaternion(_nativeResult);
}

void RDC::OCC::gp_QuaternionNLerp::Init(RDC::OCC::Quaternion theQStart, RDC::OCC::Quaternion theQEnd)
{
    pin_ptr<RDC::OCC::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<RDC::OCC::Quaternion> pp_theQEnd = &theQEnd;
    ((::gp_QuaternionNLerp*)_NativeInstance)->Init(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void RDC::OCC::gp_QuaternionNLerp::InitFromUnit(RDC::OCC::Quaternion theQStart, RDC::OCC::Quaternion theQEnd)
{
    pin_ptr<RDC::OCC::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<RDC::OCC::Quaternion> pp_theQEnd = &theQEnd;
    ((::gp_QuaternionNLerp*)_NativeInstance)->InitFromUnit(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void RDC::OCC::gp_QuaternionNLerp::Interpolate(double theT, RDC::OCC::Quaternion% theResultQ)
{
    pin_ptr<RDC::OCC::Quaternion> pp_theResultQ = &theResultQ;
    ((::gp_QuaternionNLerp*)_NativeInstance)->Interpolate(theT, *(gp_Quaternion*)pp_theResultQ);
}



//---------------------------------------------------------------------
//  Class  gp_QuaternionSLerp
//---------------------------------------------------------------------

RDC::OCC::gp_QuaternionSLerp::gp_QuaternionSLerp()
    : RDC::OCC::BaseClass<::gp_QuaternionSLerp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_QuaternionSLerp();
}

RDC::OCC::gp_QuaternionSLerp::gp_QuaternionSLerp(RDC::OCC::Quaternion theQStart, RDC::OCC::Quaternion theQEnd)
    : RDC::OCC::BaseClass<::gp_QuaternionSLerp>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<RDC::OCC::Quaternion> pp_theQEnd = &theQEnd;
    _NativeInstance = new ::gp_QuaternionSLerp(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

RDC::OCC::Quaternion RDC::OCC::gp_QuaternionSLerp::Interpolate(RDC::OCC::Quaternion theQStart, RDC::OCC::Quaternion theQEnd, double theT)
{
    pin_ptr<RDC::OCC::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<RDC::OCC::Quaternion> pp_theQEnd = &theQEnd;
    ::gp_Quaternion _nativeResult = ::gp_QuaternionSLerp::Interpolate(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd, theT);
    return RDC::OCC::Quaternion(_nativeResult);
}

void RDC::OCC::gp_QuaternionSLerp::Init(RDC::OCC::Quaternion theQStart, RDC::OCC::Quaternion theQEnd)
{
    pin_ptr<RDC::OCC::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<RDC::OCC::Quaternion> pp_theQEnd = &theQEnd;
    ((::gp_QuaternionSLerp*)_NativeInstance)->Init(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void RDC::OCC::gp_QuaternionSLerp::InitFromUnit(RDC::OCC::Quaternion theQStart, RDC::OCC::Quaternion theQEnd)
{
    pin_ptr<RDC::OCC::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<RDC::OCC::Quaternion> pp_theQEnd = &theQEnd;
    ((::gp_QuaternionSLerp*)_NativeInstance)->InitFromUnit(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void RDC::OCC::gp_QuaternionSLerp::Interpolate(double theT, RDC::OCC::Quaternion% theResultQ)
{
    pin_ptr<RDC::OCC::Quaternion> pp_theResultQ = &theResultQ;
    ((::gp_QuaternionSLerp*)_NativeInstance)->Interpolate(theT, *(gp_Quaternion*)pp_theResultQ);
}



//---------------------------------------------------------------------
//  Class  gp_Sphere
//---------------------------------------------------------------------

RDC::OCC::gp_Sphere::gp_Sphere()
    : RDC::OCC::BaseClass<::gp_Sphere>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Sphere();
}

RDC::OCC::gp_Sphere::gp_Sphere(RDC::OCC::Ax3 theA3, double theRadius)
    : RDC::OCC::BaseClass<::gp_Sphere>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax3> pp_theA3 = &theA3;
    _NativeInstance = new ::gp_Sphere(*(gp_Ax3*)pp_theA3, theRadius);
}

void RDC::OCC::gp_Sphere::SetLocation(RDC::OCC::Pnt theLoc)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLoc = &theLoc;
    ((::gp_Sphere*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLoc);
}

void RDC::OCC::gp_Sphere::SetPosition(RDC::OCC::Ax3 theA3)
{
    pin_ptr<RDC::OCC::Ax3> pp_theA3 = &theA3;
    ((::gp_Sphere*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_theA3);
}

void RDC::OCC::gp_Sphere::SetRadius(double theR)
{
    ((::gp_Sphere*)_NativeInstance)->SetRadius(theR);
}

double RDC::OCC::gp_Sphere::Area()
{
    double _result = ((::gp_Sphere*)_NativeInstance)->Area();
    return _result;
}

void RDC::OCC::gp_Sphere::Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD)
{
    pin_ptr<double> pp_theA1 = &theA1;
    pin_ptr<double> pp_theA2 = &theA2;
    pin_ptr<double> pp_theA3 = &theA3;
    pin_ptr<double> pp_theB1 = &theB1;
    pin_ptr<double> pp_theB2 = &theB2;
    pin_ptr<double> pp_theB3 = &theB3;
    pin_ptr<double> pp_theC1 = &theC1;
    pin_ptr<double> pp_theC2 = &theC2;
    pin_ptr<double> pp_theC3 = &theC3;
    pin_ptr<double> pp_theD = &theD;
    ((::gp_Sphere*)_NativeInstance)->Coefficients(*(double*)pp_theA1, *(double*)pp_theA2, *(double*)pp_theA3, *(double*)pp_theB1, *(double*)pp_theB2, *(double*)pp_theB3, *(double*)pp_theC1, *(double*)pp_theC2, *(double*)pp_theC3, *(double*)pp_theD);
}

void RDC::OCC::gp_Sphere::UReverse()
{
    ((::gp_Sphere*)_NativeInstance)->UReverse();
}

void RDC::OCC::gp_Sphere::VReverse()
{
    ((::gp_Sphere*)_NativeInstance)->VReverse();
}

bool RDC::OCC::gp_Sphere::Direct()
{
    bool _result = ((::gp_Sphere*)_NativeInstance)->Direct();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::gp_Sphere::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Sphere*)_NativeInstance)->Location();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Ax3 RDC::OCC::gp_Sphere::Position()
{
    ::gp_Ax3 _nativeResult = ((::gp_Sphere*)_NativeInstance)->Position();
    return RDC::OCC::Ax3(_nativeResult);
}

double RDC::OCC::gp_Sphere::Radius()
{
    double _result = ((::gp_Sphere*)_NativeInstance)->Radius();
    return _result;
}

double RDC::OCC::gp_Sphere::Volume()
{
    double _result = ((::gp_Sphere*)_NativeInstance)->Volume();
    return _result;
}

RDC::OCC::Ax1 RDC::OCC::gp_Sphere::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Sphere*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Sphere::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Sphere*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::gp_Sphere::Mirror(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Sphere*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

RDC::OCC::gp_Sphere^ RDC::OCC::gp_Sphere::Mirrored(RDC::OCC::Pnt theP)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Sphere*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

void RDC::OCC::gp_Sphere::Mirror(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Sphere*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::gp_Sphere^ RDC::OCC::gp_Sphere::Mirrored(RDC::OCC::Ax1 theA1)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Sphere*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

void RDC::OCC::gp_Sphere::Mirror(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Sphere*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::gp_Sphere^ RDC::OCC::gp_Sphere::Mirrored(RDC::OCC::Ax2 theA2)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Sphere*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

void RDC::OCC::gp_Sphere::Rotate(RDC::OCC::Ax1 theA1, double theAng)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Sphere*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

RDC::OCC::gp_Sphere^ RDC::OCC::gp_Sphere::Rotated(RDC::OCC::Ax1 theA1, double theAng)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Sphere*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

void RDC::OCC::gp_Sphere::Scale(RDC::OCC::Pnt theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Sphere*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

RDC::OCC::gp_Sphere^ RDC::OCC::gp_Sphere::Scaled(RDC::OCC::Pnt theP, double theS)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Sphere*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

void RDC::OCC::gp_Sphere::Transform(RDC::OCC::Trsf theT)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    ((::gp_Sphere*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

RDC::OCC::gp_Sphere^ RDC::OCC::gp_Sphere::Transformed(RDC::OCC::Trsf theT)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    *_result = ((::gp_Sphere*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

void RDC::OCC::gp_Sphere::Translate(RDC::OCC::Vec theV)
{
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    ((::gp_Sphere*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

RDC::OCC::gp_Sphere^ RDC::OCC::gp_Sphere::Translated(RDC::OCC::Vec theV)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    *_result = ((::gp_Sphere*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

void RDC::OCC::gp_Sphere::Translate(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    ((::gp_Sphere*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

RDC::OCC::gp_Sphere^ RDC::OCC::gp_Sphere::Translated(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Sphere*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Torus
//---------------------------------------------------------------------

RDC::OCC::gp_Torus::gp_Torus()
    : RDC::OCC::BaseClass<::gp_Torus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Torus();
}

RDC::OCC::gp_Torus::gp_Torus(RDC::OCC::Ax3 theA3, double theMajorRadius, double theMinorRadius)
    : RDC::OCC::BaseClass<::gp_Torus>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax3> pp_theA3 = &theA3;
    _NativeInstance = new ::gp_Torus(*(gp_Ax3*)pp_theA3, theMajorRadius, theMinorRadius);
}

void RDC::OCC::gp_Torus::SetAxis(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Torus*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void RDC::OCC::gp_Torus::SetLocation(RDC::OCC::Pnt theLoc)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLoc = &theLoc;
    ((::gp_Torus*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLoc);
}

void RDC::OCC::gp_Torus::SetMajorRadius(double theMajorRadius)
{
    ((::gp_Torus*)_NativeInstance)->SetMajorRadius(theMajorRadius);
}

void RDC::OCC::gp_Torus::SetMinorRadius(double theMinorRadius)
{
    ((::gp_Torus*)_NativeInstance)->SetMinorRadius(theMinorRadius);
}

void RDC::OCC::gp_Torus::SetPosition(RDC::OCC::Ax3 theA3)
{
    pin_ptr<RDC::OCC::Ax3> pp_theA3 = &theA3;
    ((::gp_Torus*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_theA3);
}

double RDC::OCC::gp_Torus::Area()
{
    double _result = ((::gp_Torus*)_NativeInstance)->Area();
    return _result;
}

void RDC::OCC::gp_Torus::UReverse()
{
    ((::gp_Torus*)_NativeInstance)->UReverse();
}

void RDC::OCC::gp_Torus::VReverse()
{
    ((::gp_Torus*)_NativeInstance)->VReverse();
}

bool RDC::OCC::gp_Torus::Direct()
{
    bool _result = ((::gp_Torus*)_NativeInstance)->Direct();
    return _result;
}

RDC::OCC::Ax1 RDC::OCC::gp_Torus::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Torus*)_NativeInstance)->Axis();
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::gp_Torus::Coefficients(RDC::OCC::TColStd_Array1OfReal^ theCoef)
{
    ((::gp_Torus*)_NativeInstance)->Coefficients(*(::TColStd_Array1OfReal*)theCoef->NativeInstance);
}

RDC::OCC::Pnt RDC::OCC::gp_Torus::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Torus*)_NativeInstance)->Location();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Ax3 RDC::OCC::gp_Torus::Position()
{
    ::gp_Ax3 _nativeResult = ((::gp_Torus*)_NativeInstance)->Position();
    return RDC::OCC::Ax3(_nativeResult);
}

double RDC::OCC::gp_Torus::MajorRadius()
{
    double _result = ((::gp_Torus*)_NativeInstance)->MajorRadius();
    return _result;
}

double RDC::OCC::gp_Torus::MinorRadius()
{
    double _result = ((::gp_Torus*)_NativeInstance)->MinorRadius();
    return _result;
}

double RDC::OCC::gp_Torus::Volume()
{
    double _result = ((::gp_Torus*)_NativeInstance)->Volume();
    return _result;
}

RDC::OCC::Ax1 RDC::OCC::gp_Torus::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Torus*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::gp_Torus::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Torus*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::gp_Torus::Mirror(RDC::OCC::Pnt theP)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Torus*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

RDC::OCC::gp_Torus^ RDC::OCC::gp_Torus::Mirrored(RDC::OCC::Pnt theP)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Torus*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

void RDC::OCC::gp_Torus::Mirror(RDC::OCC::Ax1 theA1)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Torus*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

RDC::OCC::gp_Torus^ RDC::OCC::gp_Torus::Mirrored(RDC::OCC::Ax1 theA1)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Torus*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

void RDC::OCC::gp_Torus::Mirror(RDC::OCC::Ax2 theA2)
{
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    ((::gp_Torus*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::gp_Torus^ RDC::OCC::gp_Torus::Mirrored(RDC::OCC::Ax2 theA2)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Torus*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

void RDC::OCC::gp_Torus::Rotate(RDC::OCC::Ax1 theA1, double theAng)
{
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    ((::gp_Torus*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

RDC::OCC::gp_Torus^ RDC::OCC::gp_Torus::Rotated(RDC::OCC::Ax1 theA1, double theAng)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Torus*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

void RDC::OCC::gp_Torus::Scale(RDC::OCC::Pnt theP, double theS)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    ((::gp_Torus*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

RDC::OCC::gp_Torus^ RDC::OCC::gp_Torus::Scaled(RDC::OCC::Pnt theP, double theS)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
    *_result = ((::gp_Torus*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

void RDC::OCC::gp_Torus::Transform(RDC::OCC::Trsf theT)
{
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    ((::gp_Torus*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

RDC::OCC::gp_Torus^ RDC::OCC::gp_Torus::Transformed(RDC::OCC::Trsf theT)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<RDC::OCC::Trsf> pp_theT = &theT;
    *_result = ((::gp_Torus*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

void RDC::OCC::gp_Torus::Translate(RDC::OCC::Vec theV)
{
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    ((::gp_Torus*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

RDC::OCC::gp_Torus^ RDC::OCC::gp_Torus::Translated(RDC::OCC::Vec theV)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<RDC::OCC::Vec> pp_theV = &theV;
    *_result = ((::gp_Torus*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

void RDC::OCC::gp_Torus::Translate(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    ((::gp_Torus*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

RDC::OCC::gp_Torus^ RDC::OCC::gp_Torus::Translated(RDC::OCC::Pnt theP1, RDC::OCC::Pnt theP2)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<RDC::OCC::Pnt> pp_theP1 = &theP1;
    pin_ptr<RDC::OCC::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Torus*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}


