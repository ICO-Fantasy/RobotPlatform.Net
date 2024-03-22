// Generated wrapper code for package Extrema

#include "OcctPCH.h"
#include "Extrema.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "Adaptor3d.h"


//---------------------------------------------------------------------
//  Class  Extrema_POnCurv
//---------------------------------------------------------------------

RDC::OCC::Extrema_POnCurv::Extrema_POnCurv()
    : RDC::OCC::BaseClass<::Extrema_POnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_POnCurv();
}

RDC::OCC::Extrema_POnCurv::Extrema_POnCurv(double U, RDC::OCC::Pnt P)
    : RDC::OCC::BaseClass<::Extrema_POnCurv>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_POnCurv(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Extrema_POnCurv::SetValues(double U, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::Extrema_POnCurv*)_NativeInstance)->SetValues(U, *(gp_Pnt*)pp_P);
}

RDC::OCC::Pnt RDC::OCC::Extrema_POnCurv::Value()
{
    ::gp_Pnt _nativeResult = ((::Extrema_POnCurv*)_NativeInstance)->Value();
    return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::Extrema_POnCurv::Parameter()
{
    double _result = ((::Extrema_POnCurv*)_NativeInstance)->Parameter();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtPC
//---------------------------------------------------------------------

RDC::OCC::Extrema_ExtPC::Extrema_ExtPC()
    : RDC::OCC::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtPC();
}

RDC::OCC::Extrema_ExtPC::Extrema_ExtPC(RDC::OCC::Pnt P, RDC::OCC::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF)
    : RDC::OCC::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, TolF);
}

RDC::OCC::Extrema_ExtPC::Extrema_ExtPC(RDC::OCC::Pnt P, RDC::OCC::Adaptor3d_Curve^ C, double Uinf, double Usup)
    : RDC::OCC::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, 1.0E-10);
}

RDC::OCC::Extrema_ExtPC::Extrema_ExtPC(RDC::OCC::Pnt P, RDC::OCC::Adaptor3d_Curve^ C, double TolF)
    : RDC::OCC::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, TolF);
}

RDC::OCC::Extrema_ExtPC::Extrema_ExtPC(RDC::OCC::Pnt P, RDC::OCC::Adaptor3d_Curve^ C)
    : RDC::OCC::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, 1.0E-10);
}

void RDC::OCC::Extrema_ExtPC::Initialize(RDC::OCC::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF)
{
    ((::Extrema_ExtPC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, TolF);
}

void RDC::OCC::Extrema_ExtPC::Initialize(RDC::OCC::Adaptor3d_Curve^ C, double Uinf, double Usup)
{
    ((::Extrema_ExtPC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, 1.0E-10);
}

void RDC::OCC::Extrema_ExtPC::Perform(RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::Extrema_ExtPC*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

bool RDC::OCC::Extrema_ExtPC::IsDone()
{
    bool _result = ((::Extrema_ExtPC*)_NativeInstance)->IsDone();
    return _result;
}

double RDC::OCC::Extrema_ExtPC::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtPC*)_NativeInstance)->SquareDistance(N);
    return _result;
}

int RDC::OCC::Extrema_ExtPC::NbExt()
{
    int _result = ((::Extrema_ExtPC*)_NativeInstance)->NbExt();
    return _result;
}

bool RDC::OCC::Extrema_ExtPC::IsMin(int N)
{
    bool _result = ((::Extrema_ExtPC*)_NativeInstance)->IsMin(N);
    return _result;
}

RDC::OCC::Extrema_POnCurv^ RDC::OCC::Extrema_ExtPC::Point(int N)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_ExtPC*)_NativeInstance)->Point(N);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Extrema_POnCurv(_result);
}

void RDC::OCC::Extrema_ExtPC::TrimmedSquareDistances(double% dist1, double% dist2, RDC::OCC::Pnt% P1, RDC::OCC::Pnt% P2)
{
    pin_ptr<double> pp_dist1 = &dist1;
    pin_ptr<double> pp_dist2 = &dist2;
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::Extrema_ExtPC*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_dist1, *(double*)pp_dist2, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}


