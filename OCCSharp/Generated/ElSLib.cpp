// Generated wrapper code for package ElSLib

#include "OcctPCH.h"
#include "ElSLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"


//---------------------------------------------------------------------
//  Class  ElSLib
//---------------------------------------------------------------------

RDC::OCC::ElSLib::ElSLib()
	: RDC::OCC::BaseClass<::ElSLib>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ElSLib();
}

RDC::OCC::Pnt RDC::OCC::ElSLib::Value(double U, double V, RDC::OCC::Pln Pl)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	::gp_Pnt _nativeResult = ::ElSLib::Value(U, V, *(gp_Pln*)pp_Pl);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElSLib::Value(double U, double V, RDC::OCC::gp_Cone^ C)
{
	::gp_Pnt _nativeResult = ::ElSLib::Value(U, V, *(::gp_Cone*)C->NativeInstance);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElSLib::Value(double U, double V, RDC::OCC::gp_Cylinder^ C)
{
	::gp_Pnt _nativeResult = ::ElSLib::Value(U, V, *(::gp_Cylinder*)C->NativeInstance);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElSLib::Value(double U, double V, RDC::OCC::gp_Sphere^ S)
{
	::gp_Pnt _nativeResult = ::ElSLib::Value(U, V, *(::gp_Sphere*)S->NativeInstance);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElSLib::Value(double U, double V, RDC::OCC::gp_Torus^ T)
{
	::gp_Pnt _nativeResult = ::ElSLib::Value(U, V, *(::gp_Torus*)T->NativeInstance);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElSLib::DN(double U, double V, RDC::OCC::Pln Pl, int Nu, int Nv)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	::gp_Vec _nativeResult = ::ElSLib::DN(U, V, *(gp_Pln*)pp_Pl, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElSLib::DN(double U, double V, RDC::OCC::gp_Cone^ C, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ::ElSLib::DN(U, V, *(::gp_Cone*)C->NativeInstance, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElSLib::DN(double U, double V, RDC::OCC::gp_Cylinder^ C, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ::ElSLib::DN(U, V, *(::gp_Cylinder*)C->NativeInstance, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElSLib::DN(double U, double V, RDC::OCC::gp_Sphere^ S, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ::ElSLib::DN(U, V, *(::gp_Sphere*)S->NativeInstance, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElSLib::DN(double U, double V, RDC::OCC::gp_Torus^ T, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ::ElSLib::DN(U, V, *(::gp_Torus*)T->NativeInstance, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::ElSLib::D0(double U, double V, RDC::OCC::Pln Pl, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::ElSLib::D0(U, V, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ElSLib::D0(double U, double V, RDC::OCC::gp_Cone^ C, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::ElSLib::D0(U, V, *(::gp_Cone*)C->NativeInstance, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ElSLib::D0(double U, double V, RDC::OCC::gp_Cylinder^ C, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::ElSLib::D0(U, V, *(::gp_Cylinder*)C->NativeInstance, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ElSLib::D0(double U, double V, RDC::OCC::gp_Sphere^ S, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::ElSLib::D0(U, V, *(::gp_Sphere*)S->NativeInstance, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ElSLib::D0(double U, double V, RDC::OCC::gp_Torus^ T, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::ElSLib::D0(U, V, *(::gp_Torus*)T->NativeInstance, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ElSLib::D1(double U, double V, RDC::OCC::Pln Pl, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	::ElSLib::D1(U, V, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::ElSLib::D1(double U, double V, RDC::OCC::gp_Cone^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	::ElSLib::D1(U, V, *(::gp_Cone*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::ElSLib::D1(double U, double V, RDC::OCC::gp_Cylinder^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	::ElSLib::D1(U, V, *(::gp_Cylinder*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::ElSLib::D1(double U, double V, RDC::OCC::gp_Sphere^ S, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	::ElSLib::D1(U, V, *(::gp_Sphere*)S->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::ElSLib::D1(double U, double V, RDC::OCC::gp_Torus^ T, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	::ElSLib::D1(U, V, *(::gp_Torus*)T->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::ElSLib::D2(double U, double V, RDC::OCC::gp_Cone^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	::ElSLib::D2(U, V, *(::gp_Cone*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void RDC::OCC::ElSLib::D2(double U, double V, RDC::OCC::gp_Cylinder^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	::ElSLib::D2(U, V, *(::gp_Cylinder*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void RDC::OCC::ElSLib::D2(double U, double V, RDC::OCC::gp_Sphere^ S, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	::ElSLib::D2(U, V, *(::gp_Sphere*)S->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void RDC::OCC::ElSLib::D2(double U, double V, RDC::OCC::gp_Torus^ T, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	::ElSLib::D2(U, V, *(::gp_Torus*)T->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void RDC::OCC::ElSLib::D3(double U, double V, RDC::OCC::gp_Cone^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuu = &Vuuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvvv = &Vvvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuv = &Vuuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuvv = &Vuvv;
	::ElSLib::D3(U, V, *(::gp_Cone*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void RDC::OCC::ElSLib::D3(double U, double V, RDC::OCC::gp_Cylinder^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuu = &Vuuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvvv = &Vvvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuv = &Vuuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuvv = &Vuvv;
	::ElSLib::D3(U, V, *(::gp_Cylinder*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void RDC::OCC::ElSLib::D3(double U, double V, RDC::OCC::gp_Sphere^ S, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuu = &Vuuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvvv = &Vvvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuv = &Vuuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuvv = &Vuvv;
	::ElSLib::D3(U, V, *(::gp_Sphere*)S->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void RDC::OCC::ElSLib::D3(double U, double V, RDC::OCC::gp_Torus^ T, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuu = &Vuuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvvv = &Vvvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuv = &Vuuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuvv = &Vuvv;
	::ElSLib::D3(U, V, *(::gp_Torus*)T->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

RDC::OCC::Pnt RDC::OCC::ElSLib::PlaneValue(double U, double V, RDC::OCC::Ax3 Pos)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	::gp_Pnt _nativeResult = ::ElSLib::PlaneValue(U, V, *(gp_Ax3*)pp_Pos);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElSLib::CylinderValue(double U, double V, RDC::OCC::Ax3 Pos, double Radius)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	::gp_Pnt _nativeResult = ::ElSLib::CylinderValue(U, V, *(gp_Ax3*)pp_Pos, Radius);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElSLib::ConeValue(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	::gp_Pnt _nativeResult = ::ElSLib::ConeValue(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElSLib::SphereValue(double U, double V, RDC::OCC::Ax3 Pos, double Radius)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	::gp_Pnt _nativeResult = ::ElSLib::SphereValue(U, V, *(gp_Ax3*)pp_Pos, Radius);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ElSLib::TorusValue(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	::gp_Pnt _nativeResult = ::ElSLib::TorusValue(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElSLib::PlaneDN(double U, double V, RDC::OCC::Ax3 Pos, int Nu, int Nv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	::gp_Vec _nativeResult = ::ElSLib::PlaneDN(U, V, *(gp_Ax3*)pp_Pos, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElSLib::CylinderDN(double U, double V, RDC::OCC::Ax3 Pos, double Radius, int Nu, int Nv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	::gp_Vec _nativeResult = ::ElSLib::CylinderDN(U, V, *(gp_Ax3*)pp_Pos, Radius, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElSLib::ConeDN(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle, int Nu, int Nv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	::gp_Vec _nativeResult = ::ElSLib::ConeDN(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElSLib::SphereDN(double U, double V, RDC::OCC::Ax3 Pos, double Radius, int Nu, int Nv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	::gp_Vec _nativeResult = ::ElSLib::SphereDN(U, V, *(gp_Ax3*)pp_Pos, Radius, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::ElSLib::TorusDN(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, int Nu, int Nv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	::gp_Vec _nativeResult = ::ElSLib::TorusDN(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::ElSLib::PlaneD0(double U, double V, RDC::OCC::Ax3 Pos, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::ElSLib::PlaneD0(U, V, *(gp_Ax3*)pp_Pos, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ElSLib::ConeD0(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::ElSLib::ConeD0(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ElSLib::CylinderD0(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::ElSLib::CylinderD0(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ElSLib::SphereD0(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::ElSLib::SphereD0(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ElSLib::TorusD0(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::ElSLib::TorusD0(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ElSLib::PlaneD1(double U, double V, RDC::OCC::Ax3 Pos, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	::ElSLib::PlaneD1(U, V, *(gp_Ax3*)pp_Pos, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::ElSLib::ConeD1(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	::ElSLib::ConeD1(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::ElSLib::CylinderD1(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	::ElSLib::CylinderD1(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::ElSLib::SphereD1(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	::ElSLib::SphereD1(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::ElSLib::TorusD1(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	::ElSLib::TorusD1(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::ElSLib::ConeD2(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	::ElSLib::ConeD2(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void RDC::OCC::ElSLib::CylinderD2(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	::ElSLib::CylinderD2(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void RDC::OCC::ElSLib::SphereD2(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	::ElSLib::SphereD2(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void RDC::OCC::ElSLib::TorusD2(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	::ElSLib::TorusD2(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void RDC::OCC::ElSLib::ConeD3(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuu = &Vuuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvvv = &Vvvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuv = &Vuuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuvv = &Vuvv;
	::ElSLib::ConeD3(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void RDC::OCC::ElSLib::CylinderD3(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuu = &Vuuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvvv = &Vvvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuv = &Vuuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuvv = &Vuvv;
	::ElSLib::CylinderD3(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void RDC::OCC::ElSLib::SphereD3(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuu = &Vuuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvvv = &Vvvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuv = &Vuuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuvv = &Vuvv;
	::ElSLib::SphereD3(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void RDC::OCC::ElSLib::TorusD3(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
	pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
	pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuu = &Vuuu;
	pin_ptr<RDC::OCC::Vec> pp_Vvvv = &Vvvv;
	pin_ptr<RDC::OCC::Vec> pp_Vuuv = &Vuuv;
	pin_ptr<RDC::OCC::Vec> pp_Vuvv = &Vuvv;
	::ElSLib::TorusD3(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void RDC::OCC::ElSLib::Parameters(RDC::OCC::Pln Pl, RDC::OCC::Pnt P, double% U, double% V)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	::ElSLib::Parameters(*(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::ElSLib::Parameters(RDC::OCC::gp_Cylinder^ C, RDC::OCC::Pnt P, double% U, double% V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	::ElSLib::Parameters(*(::gp_Cylinder*)C->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::ElSLib::Parameters(RDC::OCC::gp_Cone^ C, RDC::OCC::Pnt P, double% U, double% V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	::ElSLib::Parameters(*(::gp_Cone*)C->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::ElSLib::Parameters(RDC::OCC::gp_Sphere^ S, RDC::OCC::Pnt P, double% U, double% V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	::ElSLib::Parameters(*(::gp_Sphere*)S->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::ElSLib::Parameters(RDC::OCC::gp_Torus^ T, RDC::OCC::Pnt P, double% U, double% V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	::ElSLib::Parameters(*(::gp_Torus*)T->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::ElSLib::PlaneParameters(RDC::OCC::Ax3 Pos, RDC::OCC::Pnt P, double% U, double% V)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	::ElSLib::PlaneParameters(*(gp_Ax3*)pp_Pos, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::ElSLib::CylinderParameters(RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt P, double% U, double% V)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	::ElSLib::CylinderParameters(*(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::ElSLib::ConeParameters(RDC::OCC::Ax3 Pos, double Radius, double SAngle, RDC::OCC::Pnt P, double% U, double% V)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	::ElSLib::ConeParameters(*(gp_Ax3*)pp_Pos, Radius, SAngle, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::ElSLib::SphereParameters(RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt P, double% U, double% V)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	::ElSLib::SphereParameters(*(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::ElSLib::TorusParameters(RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt P, double% U, double% V)
{
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	::ElSLib::TorusParameters(*(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

RDC::OCC::gp_Lin^ RDC::OCC::ElSLib::PlaneUIso(RDC::OCC::Ax3 Pos, double U)
{
	::gp_Lin* _result = new ::gp_Lin();
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	*_result = ::ElSLib::PlaneUIso(*(gp_Ax3*)pp_Pos, U);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Lin^ RDC::OCC::ElSLib::CylinderUIso(RDC::OCC::Ax3 Pos, double Radius, double U)
{
	::gp_Lin* _result = new ::gp_Lin();
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	*_result = ::ElSLib::CylinderUIso(*(gp_Ax3*)pp_Pos, Radius, U);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Lin^ RDC::OCC::ElSLib::ConeUIso(RDC::OCC::Ax3 Pos, double Radius, double SAngle, double U)
{
	::gp_Lin* _result = new ::gp_Lin();
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	*_result = ::ElSLib::ConeUIso(*(gp_Ax3*)pp_Pos, Radius, SAngle, U);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::ElSLib::SphereUIso(RDC::OCC::Ax3 Pos, double Radius, double U)
{
	::gp_Circ* _result = new ::gp_Circ();
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	*_result = ::ElSLib::SphereUIso(*(gp_Ax3*)pp_Pos, Radius, U);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::ElSLib::TorusUIso(RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, double U)
{
	::gp_Circ* _result = new ::gp_Circ();
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	*_result = ::ElSLib::TorusUIso(*(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, U);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Lin^ RDC::OCC::ElSLib::PlaneVIso(RDC::OCC::Ax3 Pos, double V)
{
	::gp_Lin* _result = new ::gp_Lin();
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	*_result = ::ElSLib::PlaneVIso(*(gp_Ax3*)pp_Pos, V);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::ElSLib::CylinderVIso(RDC::OCC::Ax3 Pos, double Radius, double V)
{
	::gp_Circ* _result = new ::gp_Circ();
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	*_result = ::ElSLib::CylinderVIso(*(gp_Ax3*)pp_Pos, Radius, V);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::ElSLib::ConeVIso(RDC::OCC::Ax3 Pos, double Radius, double SAngle, double V)
{
	::gp_Circ* _result = new ::gp_Circ();
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	*_result = ::ElSLib::ConeVIso(*(gp_Ax3*)pp_Pos, Radius, SAngle, V);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::ElSLib::SphereVIso(RDC::OCC::Ax3 Pos, double Radius, double V)
{
	::gp_Circ* _result = new ::gp_Circ();
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	*_result = ::ElSLib::SphereVIso(*(gp_Ax3*)pp_Pos, Radius, V);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::ElSLib::TorusVIso(RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, double V)
{
	::gp_Circ* _result = new ::gp_Circ();
	pin_ptr<RDC::OCC::Ax3> pp_Pos = &Pos;
	*_result = ::ElSLib::TorusVIso(*(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, V);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}


