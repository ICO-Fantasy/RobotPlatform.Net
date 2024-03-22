// Generated wrapper code for package ElCLib

#include "OcctPCH.h"
#include "ElCLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"


//---------------------------------------------------------------------
//  Class  ElCLib
//---------------------------------------------------------------------

RDC::OCC::ElCLib::ElCLib()
    : RDC::OCC::BaseClass<::ElCLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ElCLib();
}

double RDC::OCC::ElCLib::InPeriod(double U, double UFirst, double ULast)
{
    double _result = ::ElCLib::InPeriod(U, UFirst, ULast);
    return _result;
}

void RDC::OCC::ElCLib::AdjustPeriodic(double UFirst, double ULast, double Precision, double% U1, double% U2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    ::ElCLib::AdjustPeriodic(UFirst, ULast, Precision, *(double*)pp_U1, *(double*)pp_U2);
}

RDC::OCC::Pnt RDC::OCC::ElCLib::Value(double U, RDC::OCC::gp_Lin^ L)
{
    ::gp_Pnt _nativeResult = ::ElCLib::Value(U, *(::gp_Lin*)L->NativeInstance);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElCLib::Value(double U, RDC::OCC::gp_Circ^ C)
{
    ::gp_Pnt _nativeResult = ::ElCLib::Value(U, *(::gp_Circ*)C->NativeInstance);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElCLib::Value(double U, RDC::OCC::gp_Elips^ E)
{
    ::gp_Pnt _nativeResult = ::ElCLib::Value(U, *(::gp_Elips*)E->NativeInstance);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElCLib::Value(double U, RDC::OCC::gp_Hypr^ H)
{
    ::gp_Pnt _nativeResult = ::ElCLib::Value(U, *(::gp_Hypr*)H->NativeInstance);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElCLib::Value(double U, RDC::OCC::gp_Parab^ Prb)
{
    ::gp_Pnt _nativeResult = ::ElCLib::Value(U, *(::gp_Parab*)Prb->NativeInstance);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::ElCLib::D1(double U, RDC::OCC::gp_Lin^ L, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::ElCLib::D1(U, *(::gp_Lin*)L->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::ElCLib::D1(double U, RDC::OCC::gp_Circ^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::ElCLib::D1(U, *(::gp_Circ*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::ElCLib::D1(double U, RDC::OCC::gp_Elips^ E, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::ElCLib::D1(U, *(::gp_Elips*)E->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::ElCLib::D1(double U, RDC::OCC::gp_Hypr^ H, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::ElCLib::D1(U, *(::gp_Hypr*)H->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::ElCLib::D1(double U, RDC::OCC::gp_Parab^ Prb, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::ElCLib::D1(U, *(::gp_Parab*)Prb->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::ElCLib::D2(double U, RDC::OCC::gp_Circ^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ::ElCLib::D2(U, *(::gp_Circ*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::ElCLib::D2(double U, RDC::OCC::gp_Elips^ E, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ::ElCLib::D2(U, *(::gp_Elips*)E->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::ElCLib::D2(double U, RDC::OCC::gp_Hypr^ H, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ::ElCLib::D2(U, *(::gp_Hypr*)H->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::ElCLib::D2(double U, RDC::OCC::gp_Parab^ Prb, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ::ElCLib::D2(U, *(::gp_Parab*)Prb->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::ElCLib::D3(double U, RDC::OCC::gp_Circ^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ::ElCLib::D3(U, *(::gp_Circ*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

void RDC::OCC::ElCLib::D3(double U, RDC::OCC::gp_Elips^ E, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ::ElCLib::D3(U, *(::gp_Elips*)E->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

void RDC::OCC::ElCLib::D3(double U, RDC::OCC::gp_Hypr^ H, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ::ElCLib::D3(U, *(::gp_Hypr*)H->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::ElCLib::DN(double U, RDC::OCC::gp_Lin^ L, int N)
{
    ::gp_Vec _nativeResult = ::ElCLib::DN(U, *(::gp_Lin*)L->NativeInstance, N);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElCLib::DN(double U, RDC::OCC::gp_Circ^ C, int N)
{
    ::gp_Vec _nativeResult = ::ElCLib::DN(U, *(::gp_Circ*)C->NativeInstance, N);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElCLib::DN(double U, RDC::OCC::gp_Elips^ E, int N)
{
    ::gp_Vec _nativeResult = ::ElCLib::DN(U, *(::gp_Elips*)E->NativeInstance, N);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElCLib::DN(double U, RDC::OCC::gp_Hypr^ H, int N)
{
    ::gp_Vec _nativeResult = ::ElCLib::DN(U, *(::gp_Hypr*)H->NativeInstance, N);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElCLib::DN(double U, RDC::OCC::gp_Parab^ Prb, int N)
{
    ::gp_Vec _nativeResult = ::ElCLib::DN(U, *(::gp_Parab*)Prb->NativeInstance, N);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::ElCLib::Value(double U, RDC::OCC::gp_Lin2d^ L)
{
    ::gp_Pnt2d _nativeResult = ::ElCLib::Value(U, *(::gp_Lin2d*)L->NativeInstance);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::ElCLib::Value(double U, RDC::OCC::gp_Circ2d^ C)
{
    ::gp_Pnt2d _nativeResult = ::ElCLib::Value(U, *(::gp_Circ2d*)C->NativeInstance);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::ElCLib::Value(double U, RDC::OCC::gp_Elips2d^ E)
{
    ::gp_Pnt2d _nativeResult = ::ElCLib::Value(U, *(::gp_Elips2d*)E->NativeInstance);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::ElCLib::Value(double U, RDC::OCC::gp_Hypr2d^ H)
{
    ::gp_Pnt2d _nativeResult = ::ElCLib::Value(U, *(::gp_Hypr2d*)H->NativeInstance);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::ElCLib::Value(double U, RDC::OCC::gp_Parab2d^ Prb)
{
    ::gp_Pnt2d _nativeResult = ::ElCLib::Value(U, *(::gp_Parab2d*)Prb->NativeInstance);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::ElCLib::D1(double U, RDC::OCC::gp_Lin2d^ L, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ::ElCLib::D1(U, *(::gp_Lin2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::ElCLib::D1(double U, RDC::OCC::gp_Circ2d^ C, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ::ElCLib::D1(U, *(::gp_Circ2d*)C->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::ElCLib::D1(double U, RDC::OCC::gp_Elips2d^ E, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ::ElCLib::D1(U, *(::gp_Elips2d*)E->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::ElCLib::D1(double U, RDC::OCC::gp_Hypr2d^ H, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ::ElCLib::D1(U, *(::gp_Hypr2d*)H->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::ElCLib::D1(double U, RDC::OCC::gp_Parab2d^ Prb, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ::ElCLib::D1(U, *(::gp_Parab2d*)Prb->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::ElCLib::D2(double U, RDC::OCC::gp_Circ2d^ C, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ::ElCLib::D2(U, *(::gp_Circ2d*)C->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::ElCLib::D2(double U, RDC::OCC::gp_Elips2d^ E, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ::ElCLib::D2(U, *(::gp_Elips2d*)E->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::ElCLib::D2(double U, RDC::OCC::gp_Hypr2d^ H, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ::ElCLib::D2(U, *(::gp_Hypr2d*)H->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::ElCLib::D2(double U, RDC::OCC::gp_Parab2d^ Prb, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ::ElCLib::D2(U, *(::gp_Parab2d*)Prb->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::ElCLib::D3(double U, RDC::OCC::gp_Circ2d^ C, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ::ElCLib::D3(U, *(::gp_Circ2d*)C->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

void RDC::OCC::ElCLib::D3(double U, RDC::OCC::gp_Elips2d^ E, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ::ElCLib::D3(U, *(::gp_Elips2d*)E->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

void RDC::OCC::ElCLib::D3(double U, RDC::OCC::gp_Hypr2d^ H, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ::ElCLib::D3(U, *(::gp_Hypr2d*)H->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::ElCLib::DN(double U, RDC::OCC::gp_Lin2d^ L, int N)
{
    ::gp_Vec2d _nativeResult = ::ElCLib::DN(U, *(::gp_Lin2d*)L->NativeInstance, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::ElCLib::DN(double U, RDC::OCC::gp_Circ2d^ C, int N)
{
    ::gp_Vec2d _nativeResult = ::ElCLib::DN(U, *(::gp_Circ2d*)C->NativeInstance, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::ElCLib::DN(double U, RDC::OCC::gp_Elips2d^ E, int N)
{
    ::gp_Vec2d _nativeResult = ::ElCLib::DN(U, *(::gp_Elips2d*)E->NativeInstance, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::ElCLib::DN(double U, RDC::OCC::gp_Hypr2d^ H, int N)
{
    ::gp_Vec2d _nativeResult = ::ElCLib::DN(U, *(::gp_Hypr2d*)H->NativeInstance, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::ElCLib::DN(double U, RDC::OCC::gp_Parab2d^ Prb, int N)
{
    ::gp_Vec2d _nativeResult = ::ElCLib::DN(U, *(::gp_Parab2d*)Prb->NativeInstance, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElCLib::LineValue(double U, RDC::OCC::Ax1 Pos)
{
    pin_ptr<RDC::OCC::Ax1> pp_Pos = &Pos;
    ::gp_Pnt _nativeResult = ::ElCLib::LineValue(U, *(gp_Ax1*)pp_Pos);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElCLib::CircleValue(double U, RDC::OCC::Ax2 Pos, double Radius)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    ::gp_Pnt _nativeResult = ::ElCLib::CircleValue(U, *(gp_Ax2*)pp_Pos, Radius);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElCLib::EllipseValue(double U, RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    ::gp_Pnt _nativeResult = ::ElCLib::EllipseValue(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElCLib::HyperbolaValue(double U, RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    ::gp_Pnt _nativeResult = ::ElCLib::HyperbolaValue(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElCLib::ParabolaValue(double U, RDC::OCC::Ax2 Pos, double Focal)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    ::gp_Pnt _nativeResult = ::ElCLib::ParabolaValue(U, *(gp_Ax2*)pp_Pos, Focal);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::ElCLib::LineD1(double U, RDC::OCC::Ax1 Pos, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Ax1> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::ElCLib::LineD1(U, *(gp_Ax1*)pp_Pos, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::ElCLib::CircleD1(double U, RDC::OCC::Ax2 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::ElCLib::CircleD1(U, *(gp_Ax2*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::ElCLib::EllipseD1(double U, RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::ElCLib::EllipseD1(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::ElCLib::HyperbolaD1(double U, RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::ElCLib::HyperbolaD1(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::ElCLib::ParabolaD1(double U, RDC::OCC::Ax2 Pos, double Focal, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::ElCLib::ParabolaD1(U, *(gp_Ax2*)pp_Pos, Focal, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::ElCLib::CircleD2(double U, RDC::OCC::Ax2 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ::ElCLib::CircleD2(U, *(gp_Ax2*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::ElCLib::EllipseD2(double U, RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ::ElCLib::EllipseD2(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::ElCLib::HyperbolaD2(double U, RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ::ElCLib::HyperbolaD2(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::ElCLib::ParabolaD2(double U, RDC::OCC::Ax2 Pos, double Focal, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ::ElCLib::ParabolaD2(U, *(gp_Ax2*)pp_Pos, Focal, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::ElCLib::CircleD3(double U, RDC::OCC::Ax2 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ::ElCLib::CircleD3(U, *(gp_Ax2*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

void RDC::OCC::ElCLib::EllipseD3(double U, RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ::ElCLib::EllipseD3(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

void RDC::OCC::ElCLib::HyperbolaD3(double U, RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ::ElCLib::HyperbolaD3(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::ElCLib::LineDN(double U, RDC::OCC::Ax1 Pos, int N)
{
    pin_ptr<RDC::OCC::Ax1> pp_Pos = &Pos;
    ::gp_Vec _nativeResult = ::ElCLib::LineDN(U, *(gp_Ax1*)pp_Pos, N);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElCLib::CircleDN(double U, RDC::OCC::Ax2 Pos, double Radius, int N)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    ::gp_Vec _nativeResult = ::ElCLib::CircleDN(U, *(gp_Ax2*)pp_Pos, Radius, N);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElCLib::EllipseDN(double U, RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius, int N)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    ::gp_Vec _nativeResult = ::ElCLib::EllipseDN(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, N);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElCLib::HyperbolaDN(double U, RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius, int N)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    ::gp_Vec _nativeResult = ::ElCLib::HyperbolaDN(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, N);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElCLib::ParabolaDN(double U, RDC::OCC::Ax2 Pos, double Focal, int N)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    ::gp_Vec _nativeResult = ::ElCLib::ParabolaDN(U, *(gp_Ax2*)pp_Pos, Focal, N);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::ElCLib::LineValue(double U, RDC::OCC::Ax2d Pos)
{
    pin_ptr<RDC::OCC::Ax2d> pp_Pos = &Pos;
    ::gp_Pnt2d _nativeResult = ::ElCLib::LineValue(U, *(gp_Ax2d*)pp_Pos);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::ElCLib::CircleValue(double U, RDC::OCC::Ax22d Pos, double Radius)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    ::gp_Pnt2d _nativeResult = ::ElCLib::CircleValue(U, *(gp_Ax22d*)pp_Pos, Radius);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::ElCLib::EllipseValue(double U, RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    ::gp_Pnt2d _nativeResult = ::ElCLib::EllipseValue(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::ElCLib::HyperbolaValue(double U, RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    ::gp_Pnt2d _nativeResult = ::ElCLib::HyperbolaValue(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::ElCLib::ParabolaValue(double U, RDC::OCC::Ax22d Pos, double Focal)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    ::gp_Pnt2d _nativeResult = ::ElCLib::ParabolaValue(U, *(gp_Ax22d*)pp_Pos, Focal);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::ElCLib::LineD1(double U, RDC::OCC::Ax2d Pos, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Ax2d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ::ElCLib::LineD1(U, *(gp_Ax2d*)pp_Pos, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::ElCLib::CircleD1(double U, RDC::OCC::Ax22d Pos, double Radius, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ::ElCLib::CircleD1(U, *(gp_Ax22d*)pp_Pos, Radius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::ElCLib::EllipseD1(double U, RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ::ElCLib::EllipseD1(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::ElCLib::HyperbolaD1(double U, RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ::ElCLib::HyperbolaD1(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::ElCLib::ParabolaD1(double U, RDC::OCC::Ax22d Pos, double Focal, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ::ElCLib::ParabolaD1(U, *(gp_Ax22d*)pp_Pos, Focal, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::ElCLib::CircleD2(double U, RDC::OCC::Ax22d Pos, double Radius, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ::ElCLib::CircleD2(U, *(gp_Ax22d*)pp_Pos, Radius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::ElCLib::EllipseD2(double U, RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ::ElCLib::EllipseD2(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::ElCLib::HyperbolaD2(double U, RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ::ElCLib::HyperbolaD2(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::ElCLib::ParabolaD2(double U, RDC::OCC::Ax22d Pos, double Focal, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ::ElCLib::ParabolaD2(U, *(gp_Ax22d*)pp_Pos, Focal, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::ElCLib::CircleD3(double U, RDC::OCC::Ax22d Pos, double Radius, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ::ElCLib::CircleD3(U, *(gp_Ax22d*)pp_Pos, Radius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

void RDC::OCC::ElCLib::EllipseD3(double U, RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ::ElCLib::EllipseD3(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

void RDC::OCC::ElCLib::HyperbolaD3(double U, RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ::ElCLib::HyperbolaD3(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::ElCLib::LineDN(double U, RDC::OCC::Ax2d Pos, int N)
{
    pin_ptr<RDC::OCC::Ax2d> pp_Pos = &Pos;
    ::gp_Vec2d _nativeResult = ::ElCLib::LineDN(U, *(gp_Ax2d*)pp_Pos, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::ElCLib::CircleDN(double U, RDC::OCC::Ax22d Pos, double Radius, int N)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    ::gp_Vec2d _nativeResult = ::ElCLib::CircleDN(U, *(gp_Ax22d*)pp_Pos, Radius, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::ElCLib::EllipseDN(double U, RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius, int N)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    ::gp_Vec2d _nativeResult = ::ElCLib::EllipseDN(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::ElCLib::HyperbolaDN(double U, RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius, int N)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    ::gp_Vec2d _nativeResult = ::ElCLib::HyperbolaDN(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::ElCLib::ParabolaDN(double U, RDC::OCC::Ax22d Pos, double Focal, int N)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    ::gp_Vec2d _nativeResult = ::ElCLib::ParabolaDN(U, *(gp_Ax22d*)pp_Pos, Focal, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

double RDC::OCC::ElCLib::Parameter(RDC::OCC::gp_Lin^ L, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    double _result = ::ElCLib::Parameter(*(::gp_Lin*)L->NativeInstance, *(gp_Pnt*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::Parameter(RDC::OCC::gp_Lin2d^ L, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ::ElCLib::Parameter(*(::gp_Lin2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::Parameter(RDC::OCC::gp_Circ^ C, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    double _result = ::ElCLib::Parameter(*(::gp_Circ*)C->NativeInstance, *(gp_Pnt*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::Parameter(RDC::OCC::gp_Circ2d^ C, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ::ElCLib::Parameter(*(::gp_Circ2d*)C->NativeInstance, *(gp_Pnt2d*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::Parameter(RDC::OCC::gp_Elips^ E, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    double _result = ::ElCLib::Parameter(*(::gp_Elips*)E->NativeInstance, *(gp_Pnt*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::Parameter(RDC::OCC::gp_Elips2d^ E, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ::ElCLib::Parameter(*(::gp_Elips2d*)E->NativeInstance, *(gp_Pnt2d*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::Parameter(RDC::OCC::gp_Hypr^ H, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    double _result = ::ElCLib::Parameter(*(::gp_Hypr*)H->NativeInstance, *(gp_Pnt*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::Parameter(RDC::OCC::gp_Hypr2d^ H, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ::ElCLib::Parameter(*(::gp_Hypr2d*)H->NativeInstance, *(gp_Pnt2d*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::Parameter(RDC::OCC::gp_Parab^ Prb, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    double _result = ::ElCLib::Parameter(*(::gp_Parab*)Prb->NativeInstance, *(gp_Pnt*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::Parameter(RDC::OCC::gp_Parab2d^ Prb, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ::ElCLib::Parameter(*(::gp_Parab2d*)Prb->NativeInstance, *(gp_Pnt2d*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::LineParameter(RDC::OCC::Ax1 Pos, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Ax1> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    double _result = ::ElCLib::LineParameter(*(gp_Ax1*)pp_Pos, *(gp_Pnt*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::LineParameter(RDC::OCC::Ax2d Pos, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Ax2d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ::ElCLib::LineParameter(*(gp_Ax2d*)pp_Pos, *(gp_Pnt2d*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::CircleParameter(RDC::OCC::Ax2 Pos, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    double _result = ::ElCLib::CircleParameter(*(gp_Ax2*)pp_Pos, *(gp_Pnt*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::CircleParameter(RDC::OCC::Ax22d Pos, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ::ElCLib::CircleParameter(*(gp_Ax22d*)pp_Pos, *(gp_Pnt2d*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::EllipseParameter(RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    double _result = ::ElCLib::EllipseParameter(*(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::EllipseParameter(RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ::ElCLib::EllipseParameter(*(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::HyperbolaParameter(RDC::OCC::Ax2 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    double _result = ::ElCLib::HyperbolaParameter(*(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::HyperbolaParameter(RDC::OCC::Ax22d Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ::ElCLib::HyperbolaParameter(*(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::ParabolaParameter(RDC::OCC::Ax2 Pos, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    double _result = ::ElCLib::ParabolaParameter(*(gp_Ax2*)pp_Pos, *(gp_Pnt*)pp_P);
    return _result;
}

double RDC::OCC::ElCLib::ParabolaParameter(RDC::OCC::Ax22d Pos, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ::ElCLib::ParabolaParameter(*(gp_Ax22d*)pp_Pos, *(gp_Pnt2d*)pp_P);
    return _result;
}

RDC::OCC::Pnt RDC::OCC::ElCLib::To3d(RDC::OCC::Ax2 Pos, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ::gp_Pnt _nativeResult = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(gp_Pnt2d*)pp_P);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElCLib::To3d(RDC::OCC::Ax2 Pos, RDC::OCC::Vec2d V)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    ::gp_Vec _nativeResult = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(gp_Vec2d*)pp_V);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::ElCLib::To3d(RDC::OCC::Ax2 Pos, RDC::OCC::Dir2d V)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Dir2d> pp_V = &V;
    ::gp_Dir _nativeResult = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(gp_Dir2d*)pp_V);
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::ElCLib::To3d(RDC::OCC::Ax2 Pos, RDC::OCC::Ax2d A)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    ::gp_Ax1 _nativeResult = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(gp_Ax2d*)pp_A);
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax2 RDC::OCC::ElCLib::To3d(RDC::OCC::Ax2 Pos, RDC::OCC::Ax22d A)
{
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    pin_ptr<RDC::OCC::Ax22d> pp_A = &A;
    ::gp_Ax2 _nativeResult = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(gp_Ax22d*)pp_A);
    return RDC::OCC::Ax2(_nativeResult);
}

RDC::OCC::gp_Lin^ RDC::OCC::ElCLib::To3d(RDC::OCC::Ax2 Pos, RDC::OCC::gp_Lin2d^ L)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    *_result = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(::gp_Lin2d*)L->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::ElCLib::To3d(RDC::OCC::Ax2 Pos, RDC::OCC::gp_Circ2d^ C)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    *_result = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(::gp_Circ2d*)C->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Elips^ RDC::OCC::ElCLib::To3d(RDC::OCC::Ax2 Pos, RDC::OCC::gp_Elips2d^ E)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    *_result = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(::gp_Elips2d*)E->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

RDC::OCC::gp_Hypr^ RDC::OCC::ElCLib::To3d(RDC::OCC::Ax2 Pos, RDC::OCC::gp_Hypr2d^ H)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    *_result = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(::gp_Hypr2d*)H->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

RDC::OCC::gp_Parab^ RDC::OCC::ElCLib::To3d(RDC::OCC::Ax2 Pos, RDC::OCC::gp_Parab2d^ Prb)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<RDC::OCC::Ax2> pp_Pos = &Pos;
    *_result = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(::gp_Parab2d*)Prb->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}


