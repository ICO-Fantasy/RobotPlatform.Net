// Generated wrapper code for package GProp

#include "OcctPCH.h"
#include "GProp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "BRepGProp.h"
#include "TColgp.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  GProp
//---------------------------------------------------------------------

RDC::OCC::GProp::GProp()
    : RDC::OCC::BaseClass<::GProp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp();
}

void RDC::OCC::GProp::HOperator(RDC::OCC::Pnt G, RDC::OCC::Pnt Q, double Mass, RDC::OCC::Mat% Operator)
{
    pin_ptr<RDC::OCC::Pnt> pp_G = &G;
    pin_ptr<RDC::OCC::Pnt> pp_Q = &Q;
    pin_ptr<RDC::OCC::Mat> pp_Operator = &Operator;
    ::GProp::HOperator(*(gp_Pnt*)pp_G, *(gp_Pnt*)pp_Q, Mass, *(gp_Mat*)pp_Operator);
}



//---------------------------------------------------------------------
//  Class  GProp_PrincipalProps
//---------------------------------------------------------------------

RDC::OCC::GProp_PrincipalProps::GProp_PrincipalProps()
    : RDC::OCC::BaseClass<::GProp_PrincipalProps>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PrincipalProps();
}

bool RDC::OCC::GProp_PrincipalProps::HasSymmetryAxis()
{
    bool _result = ((::GProp_PrincipalProps*)_NativeInstance)->HasSymmetryAxis();
    return _result;
}

bool RDC::OCC::GProp_PrincipalProps::HasSymmetryAxis(double aTol)
{
    bool _result = ((::GProp_PrincipalProps*)_NativeInstance)->HasSymmetryAxis(aTol);
    return _result;
}

bool RDC::OCC::GProp_PrincipalProps::HasSymmetryPoint()
{
    bool _result = ((::GProp_PrincipalProps*)_NativeInstance)->HasSymmetryPoint();
    return _result;
}

bool RDC::OCC::GProp_PrincipalProps::HasSymmetryPoint(double aTol)
{
    bool _result = ((::GProp_PrincipalProps*)_NativeInstance)->HasSymmetryPoint(aTol);
    return _result;
}

void RDC::OCC::GProp_PrincipalProps::Moments(double% Ixx, double% Iyy, double% Izz)
{
    pin_ptr<double> pp_Ixx = &Ixx;
    pin_ptr<double> pp_Iyy = &Iyy;
    pin_ptr<double> pp_Izz = &Izz;
    ((::GProp_PrincipalProps*)_NativeInstance)->Moments(*(double*)pp_Ixx, *(double*)pp_Iyy, *(double*)pp_Izz);
}

RDC::OCC::Vec RDC::OCC::GProp_PrincipalProps::FirstAxisOfInertia()
{
    ::gp_Vec _nativeResult = ((::GProp_PrincipalProps*)_NativeInstance)->FirstAxisOfInertia();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::GProp_PrincipalProps::SecondAxisOfInertia()
{
    ::gp_Vec _nativeResult = ((::GProp_PrincipalProps*)_NativeInstance)->SecondAxisOfInertia();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::GProp_PrincipalProps::ThirdAxisOfInertia()
{
    ::gp_Vec _nativeResult = ((::GProp_PrincipalProps*)_NativeInstance)->ThirdAxisOfInertia();
    return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::GProp_PrincipalProps::RadiusOfGyration(double% Rxx, double% Ryy, double% Rzz)
{
    pin_ptr<double> pp_Rxx = &Rxx;
    pin_ptr<double> pp_Ryy = &Ryy;
    pin_ptr<double> pp_Rzz = &Rzz;
    ((::GProp_PrincipalProps*)_NativeInstance)->RadiusOfGyration(*(double*)pp_Rxx, *(double*)pp_Ryy, *(double*)pp_Rzz);
}



//---------------------------------------------------------------------
//  Class  GProp_GProps
//---------------------------------------------------------------------

RDC::OCC::GProp_GProps::GProp_GProps()
    : RDC::OCC::BaseClass<::GProp_GProps>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_GProps();
}

RDC::OCC::GProp_GProps::GProp_GProps(RDC::OCC::Pnt SystemLocation)
    : RDC::OCC::BaseClass<::GProp_GProps>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_SystemLocation = &SystemLocation;
    _NativeInstance = new ::GProp_GProps(*(gp_Pnt*)pp_SystemLocation);
}

RDC::OCC::GProp_PrincipalProps^ RDC::OCC::GProp_GProps::PrincipalProperties()
{
    ::GProp_PrincipalProps* _result = new ::GProp_PrincipalProps();
    *_result = ((::GProp_GProps*)_NativeInstance)->PrincipalProperties();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::GProp_PrincipalProps(_result);
}

void RDC::OCC::GProp_GProps::Add(RDC::OCC::GProp_GProps^ Item, double Density)
{
    ((::GProp_GProps*)_NativeInstance)->Add(*(::GProp_GProps*)Item->NativeInstance, Density);
}

void RDC::OCC::GProp_GProps::Add(RDC::OCC::GProp_GProps^ Item)
{
    ((::GProp_GProps*)_NativeInstance)->Add(*(::GProp_GProps*)Item->NativeInstance, 1.);
}

double RDC::OCC::GProp_GProps::Mass()
{
    double _result = ((::GProp_GProps*)_NativeInstance)->Mass();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::GProp_GProps::CentreOfMass()
{
    ::gp_Pnt _nativeResult = ((::GProp_GProps*)_NativeInstance)->CentreOfMass();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Mat RDC::OCC::GProp_GProps::MatrixOfInertia()
{
    ::gp_Mat _nativeResult = ((::GProp_GProps*)_NativeInstance)->MatrixOfInertia();
    return RDC::OCC::Mat(_nativeResult);
}

void RDC::OCC::GProp_GProps::StaticMoments(double% Ix, double% Iy, double% Iz)
{
    pin_ptr<double> pp_Ix = &Ix;
    pin_ptr<double> pp_Iy = &Iy;
    pin_ptr<double> pp_Iz = &Iz;
    ((::GProp_GProps*)_NativeInstance)->StaticMoments(*(double*)pp_Ix, *(double*)pp_Iy, *(double*)pp_Iz);
}

double RDC::OCC::GProp_GProps::MomentOfInertia(RDC::OCC::Ax1 A)
{
    pin_ptr<RDC::OCC::Ax1> pp_A = &A;
    double _result = ((::GProp_GProps*)_NativeInstance)->MomentOfInertia(*(gp_Ax1*)pp_A);
    return _result;
}

double RDC::OCC::GProp_GProps::RadiusOfGyration(RDC::OCC::Ax1 A)
{
    pin_ptr<RDC::OCC::Ax1> pp_A = &A;
    double _result = ((::GProp_GProps*)_NativeInstance)->RadiusOfGyration(*(gp_Ax1*)pp_A);
    return _result;
}



//---------------------------------------------------------------------
//  Class  GProp_CelGProps
//---------------------------------------------------------------------

RDC::OCC::GProp_CelGProps::GProp_CelGProps()
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_CelGProps();
}

RDC::OCC::GProp_CelGProps::GProp_CelGProps(RDC::OCC::gp_Circ^ C, RDC::OCC::Pnt CLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_CLocation = &CLocation;
    _NativeInstance = new ::GProp_CelGProps(*(::gp_Circ*)C->NativeInstance, *(gp_Pnt*)pp_CLocation);
}

RDC::OCC::GProp_CelGProps::GProp_CelGProps(RDC::OCC::gp_Circ^ C, double U1, double U2, RDC::OCC::Pnt CLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_CLocation = &CLocation;
    _NativeInstance = new ::GProp_CelGProps(*(::gp_Circ*)C->NativeInstance, U1, U2, *(gp_Pnt*)pp_CLocation);
}

RDC::OCC::GProp_CelGProps::GProp_CelGProps(RDC::OCC::gp_Lin^ C, double U1, double U2, RDC::OCC::Pnt CLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_CLocation = &CLocation;
    _NativeInstance = new ::GProp_CelGProps(*(::gp_Lin*)C->NativeInstance, U1, U2, *(gp_Pnt*)pp_CLocation);
}

void RDC::OCC::GProp_CelGProps::SetLocation(RDC::OCC::Pnt CLocation)
{
    pin_ptr<RDC::OCC::Pnt> pp_CLocation = &CLocation;
    ((::GProp_CelGProps*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_CLocation);
}

void RDC::OCC::GProp_CelGProps::Perform(RDC::OCC::gp_Circ^ C, double U1, double U2)
{
    ((::GProp_CelGProps*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, U1, U2);
}

void RDC::OCC::GProp_CelGProps::Perform(RDC::OCC::gp_Lin^ C, double U1, double U2)
{
    ((::GProp_CelGProps*)_NativeInstance)->Perform(*(::gp_Lin*)C->NativeInstance, U1, U2);
}



//---------------------------------------------------------------------
//  Class  GProp_PEquation
//---------------------------------------------------------------------

RDC::OCC::GProp_PEquation::GProp_PEquation(RDC::OCC::TColgp_Array1OfPnt^ Pnts, double Tol)
    : RDC::OCC::BaseClass<::GProp_PEquation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PEquation(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance, Tol);
}

bool RDC::OCC::GProp_PEquation::IsPlanar()
{
    bool _result = ((::GProp_PEquation*)_NativeInstance)->IsPlanar();
    return _result;
}

bool RDC::OCC::GProp_PEquation::IsLinear()
{
    bool _result = ((::GProp_PEquation*)_NativeInstance)->IsLinear();
    return _result;
}

bool RDC::OCC::GProp_PEquation::IsPoint()
{
    bool _result = ((::GProp_PEquation*)_NativeInstance)->IsPoint();
    return _result;
}

bool RDC::OCC::GProp_PEquation::IsSpace()
{
    bool _result = ((::GProp_PEquation*)_NativeInstance)->IsSpace();
    return _result;
}

RDC::OCC::Pln RDC::OCC::GProp_PEquation::Plane()
{
    ::gp_Pln _nativeResult = ((::GProp_PEquation*)_NativeInstance)->Plane();
    return RDC::OCC::Pln(_nativeResult);
}

RDC::OCC::gp_Lin^ RDC::OCC::GProp_PEquation::Line()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::GProp_PEquation*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::Pnt RDC::OCC::GProp_PEquation::Point()
{
    ::gp_Pnt _nativeResult = ((::GProp_PEquation*)_NativeInstance)->Point();
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::GProp_PEquation::Box(RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ((::GProp_PEquation*)_NativeInstance)->Box(*(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}



//---------------------------------------------------------------------
//  Class  GProp_PGProps
//---------------------------------------------------------------------

RDC::OCC::GProp_PGProps::GProp_PGProps()
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PGProps();
}

RDC::OCC::GProp_PGProps::GProp_PGProps(RDC::OCC::TColgp_Array1OfPnt^ Pnts)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PGProps(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance);
}

RDC::OCC::GProp_PGProps::GProp_PGProps(RDC::OCC::TColgp_Array2OfPnt^ Pnts)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PGProps(*(::TColgp_Array2OfPnt*)Pnts->NativeInstance);
}

RDC::OCC::GProp_PGProps::GProp_PGProps(RDC::OCC::TColgp_Array1OfPnt^ Pnts, RDC::OCC::TColStd_Array1OfReal^ Density)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PGProps(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance, *(::TColStd_Array1OfReal*)Density->NativeInstance);
}

RDC::OCC::GProp_PGProps::GProp_PGProps(RDC::OCC::TColgp_Array2OfPnt^ Pnts, RDC::OCC::TColStd_Array2OfReal^ Density)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PGProps(*(::TColgp_Array2OfPnt*)Pnts->NativeInstance, *(::TColStd_Array2OfReal*)Density->NativeInstance);
}

void RDC::OCC::GProp_PGProps::AddPoint(RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GProp_PGProps*)_NativeInstance)->AddPoint(*(gp_Pnt*)pp_P);
}

void RDC::OCC::GProp_PGProps::AddPoint(RDC::OCC::Pnt P, double Density)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GProp_PGProps*)_NativeInstance)->AddPoint(*(gp_Pnt*)pp_P, Density);
}

RDC::OCC::Pnt RDC::OCC::GProp_PGProps::Barycentre(RDC::OCC::TColgp_Array1OfPnt^ Pnts)
{
    ::gp_Pnt _nativeResult = ::GProp_PGProps::Barycentre(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::GProp_PGProps::Barycentre(RDC::OCC::TColgp_Array2OfPnt^ Pnts)
{
    ::gp_Pnt _nativeResult = ::GProp_PGProps::Barycentre(*(::TColgp_Array2OfPnt*)Pnts->NativeInstance);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::GProp_PGProps::Barycentre(RDC::OCC::TColgp_Array1OfPnt^ Pnts, RDC::OCC::TColStd_Array1OfReal^ Density, double% Mass, RDC::OCC::Pnt% G)
{
    pin_ptr<double> pp_Mass = &Mass;
    pin_ptr<RDC::OCC::Pnt> pp_G = &G;
    ::GProp_PGProps::Barycentre(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance, *(::TColStd_Array1OfReal*)Density->NativeInstance, *(double*)pp_Mass, *(gp_Pnt*)pp_G);
}

void RDC::OCC::GProp_PGProps::Barycentre(RDC::OCC::TColgp_Array2OfPnt^ Pnts, RDC::OCC::TColStd_Array2OfReal^ Density, double% Mass, RDC::OCC::Pnt% G)
{
    pin_ptr<double> pp_Mass = &Mass;
    pin_ptr<RDC::OCC::Pnt> pp_G = &G;
    ::GProp_PGProps::Barycentre(*(::TColgp_Array2OfPnt*)Pnts->NativeInstance, *(::TColStd_Array2OfReal*)Density->NativeInstance, *(double*)pp_Mass, *(gp_Pnt*)pp_G);
}



//---------------------------------------------------------------------
//  Class  GProp_SelGProps
//---------------------------------------------------------------------

RDC::OCC::GProp_SelGProps::GProp_SelGProps()
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_SelGProps();
}

RDC::OCC::GProp_SelGProps::GProp_SelGProps(RDC::OCC::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2, RDC::OCC::Pnt SLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::GProp_SelGProps(*(::gp_Cylinder*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2, *(gp_Pnt*)pp_SLocation);
}

RDC::OCC::GProp_SelGProps::GProp_SelGProps(RDC::OCC::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2, RDC::OCC::Pnt SLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::GProp_SelGProps(*(::gp_Cone*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2, *(gp_Pnt*)pp_SLocation);
}

RDC::OCC::GProp_SelGProps::GProp_SelGProps(RDC::OCC::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, RDC::OCC::Pnt SLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::GProp_SelGProps(*(::gp_Sphere*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2, *(gp_Pnt*)pp_SLocation);
}

RDC::OCC::GProp_SelGProps::GProp_SelGProps(RDC::OCC::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, RDC::OCC::Pnt SLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::GProp_SelGProps(*(::gp_Torus*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2, *(gp_Pnt*)pp_SLocation);
}

void RDC::OCC::GProp_SelGProps::SetLocation(RDC::OCC::Pnt SLocation)
{
    pin_ptr<RDC::OCC::Pnt> pp_SLocation = &SLocation;
    ((::GProp_SelGProps*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_SLocation);
}

void RDC::OCC::GProp_SelGProps::Perform(RDC::OCC::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2)
{
    ((::GProp_SelGProps*)_NativeInstance)->Perform(*(::gp_Cylinder*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2);
}

void RDC::OCC::GProp_SelGProps::Perform(RDC::OCC::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2)
{
    ((::GProp_SelGProps*)_NativeInstance)->Perform(*(::gp_Cone*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2);
}

void RDC::OCC::GProp_SelGProps::Perform(RDC::OCC::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2)
{
    ((::GProp_SelGProps*)_NativeInstance)->Perform(*(::gp_Sphere*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2);
}

void RDC::OCC::GProp_SelGProps::Perform(RDC::OCC::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2)
{
    ((::GProp_SelGProps*)_NativeInstance)->Perform(*(::gp_Torus*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2);
}



//---------------------------------------------------------------------
//  Class  GProp_UndefinedAxis
//---------------------------------------------------------------------

RDC::OCC::GProp_UndefinedAxis::GProp_UndefinedAxis()
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GProp_UndefinedAxis();
}

RDC::OCC::GProp_UndefinedAxis::GProp_UndefinedAxis(System::String^ theMessage)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::GProp_UndefinedAxis(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::GProp_UndefinedAxis::GProp_UndefinedAxis(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::GProp_UndefinedAxis(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::GProp_UndefinedAxis::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::GProp_UndefinedAxis::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::GProp_UndefinedAxis::Raise()
{
    ::GProp_UndefinedAxis::Raise("");
}

RDC::OCC::GProp_UndefinedAxis^ RDC::OCC::GProp_UndefinedAxis::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::GProp_UndefinedAxis) _result = ::GProp_UndefinedAxis::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::GProp_UndefinedAxis::CreateDowncasted(_result.get());
}

RDC::OCC::GProp_UndefinedAxis^ RDC::OCC::GProp_UndefinedAxis::NewInstance()
{
    Handle(::GProp_UndefinedAxis) _result = ::GProp_UndefinedAxis::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::GProp_UndefinedAxis::CreateDowncasted(_result.get());
}

RDC::OCC::GProp_UndefinedAxis^ RDC::OCC::GProp_UndefinedAxis::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::GProp_UndefinedAxis) _result = ::GProp_UndefinedAxis::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::GProp_UndefinedAxis::CreateDowncasted(_result.get());
}

RDC::OCC::GProp_UndefinedAxis^ RDC::OCC::GProp_UndefinedAxis::CreateDowncasted(::GProp_UndefinedAxis* instance)
{
    return gcnew RDC::OCC::GProp_UndefinedAxis( instance );
}



//---------------------------------------------------------------------
//  Class  GProp_VelGProps
//---------------------------------------------------------------------

RDC::OCC::GProp_VelGProps::GProp_VelGProps()
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_VelGProps();
}

RDC::OCC::GProp_VelGProps::GProp_VelGProps(RDC::OCC::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2, RDC::OCC::Pnt VLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::GProp_VelGProps(*(::gp_Cylinder*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2, *(gp_Pnt*)pp_VLocation);
}

RDC::OCC::GProp_VelGProps::GProp_VelGProps(RDC::OCC::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2, RDC::OCC::Pnt VLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::GProp_VelGProps(*(::gp_Cone*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2, *(gp_Pnt*)pp_VLocation);
}

RDC::OCC::GProp_VelGProps::GProp_VelGProps(RDC::OCC::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, RDC::OCC::Pnt VLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::GProp_VelGProps(*(::gp_Sphere*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2, *(gp_Pnt*)pp_VLocation);
}

RDC::OCC::GProp_VelGProps::GProp_VelGProps(RDC::OCC::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, RDC::OCC::Pnt VLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::GProp_VelGProps(*(::gp_Torus*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2, *(gp_Pnt*)pp_VLocation);
}

void RDC::OCC::GProp_VelGProps::SetLocation(RDC::OCC::Pnt VLocation)
{
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    ((::GProp_VelGProps*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_VLocation);
}

void RDC::OCC::GProp_VelGProps::Perform(RDC::OCC::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2)
{
    ((::GProp_VelGProps*)_NativeInstance)->Perform(*(::gp_Cylinder*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2);
}

void RDC::OCC::GProp_VelGProps::Perform(RDC::OCC::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2)
{
    ((::GProp_VelGProps*)_NativeInstance)->Perform(*(::gp_Cone*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2);
}

void RDC::OCC::GProp_VelGProps::Perform(RDC::OCC::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2)
{
    ((::GProp_VelGProps*)_NativeInstance)->Perform(*(::gp_Sphere*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2);
}

void RDC::OCC::GProp_VelGProps::Perform(RDC::OCC::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2)
{
    ((::GProp_VelGProps*)_NativeInstance)->Perform(*(::gp_Torus*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2);
}


