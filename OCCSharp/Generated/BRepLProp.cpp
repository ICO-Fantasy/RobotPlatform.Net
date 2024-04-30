// Generated wrapper code for package BRepLProp

#include "OcctPCH.h"
#include "BRepLProp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "GeomAbs.h"
#include "BRepAdaptor.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  BRepLProp
//---------------------------------------------------------------------

RDC::OCC::BRepLProp::BRepLProp()
	: RDC::OCC::BaseClass<::BRepLProp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp();
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepLProp::Continuity(RDC::OCC::BRepAdaptor_Curve^ C1, RDC::OCC::BRepAdaptor_Curve^ C2, double u1, double u2, double tl, double ta)
{
	::GeomAbs_Shape _result = ::BRepLProp::Continuity(*(::BRepAdaptor_Curve*)C1->NativeInstance, *(::BRepAdaptor_Curve*)C2->NativeInstance, u1, u2, tl, ta);
	return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepLProp::Continuity(RDC::OCC::BRepAdaptor_Curve^ C1, RDC::OCC::BRepAdaptor_Curve^ C2, double u1, double u2)
{
	::GeomAbs_Shape _result = ::BRepLProp::Continuity(*(::BRepAdaptor_Curve*)C1->NativeInstance, *(::BRepAdaptor_Curve*)C2->NativeInstance, u1, u2);
	return (RDC::OCC::GeomAbs_Shape)_result;
}



//---------------------------------------------------------------------
//  Class  BRepLProp_CurveTool
//---------------------------------------------------------------------

RDC::OCC::BRepLProp_CurveTool::BRepLProp_CurveTool()
	: RDC::OCC::BaseClass<::BRepLProp_CurveTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_CurveTool();
}

void RDC::OCC::BRepLProp_CurveTool::Value(RDC::OCC::BRepAdaptor_Curve^ C, double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::BRepLProp_CurveTool::Value(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::BRepLProp_CurveTool::D1(RDC::OCC::BRepAdaptor_Curve^ C, double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	::BRepLProp_CurveTool::D1(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::BRepLProp_CurveTool::D2(RDC::OCC::BRepAdaptor_Curve^ C, double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	::BRepLProp_CurveTool::D2(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::BRepLProp_CurveTool::D3(RDC::OCC::BRepAdaptor_Curve^ C, double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	::BRepLProp_CurveTool::D3(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

int RDC::OCC::BRepLProp_CurveTool::Continuity(RDC::OCC::BRepAdaptor_Curve^ C)
{
	int _result = ::BRepLProp_CurveTool::Continuity(*(::BRepAdaptor_Curve*)C->NativeInstance);
	return _result;
}

double RDC::OCC::BRepLProp_CurveTool::FirstParameter(RDC::OCC::BRepAdaptor_Curve^ C)
{
	double _result = ::BRepLProp_CurveTool::FirstParameter(*(::BRepAdaptor_Curve*)C->NativeInstance);
	return _result;
}

double RDC::OCC::BRepLProp_CurveTool::LastParameter(RDC::OCC::BRepAdaptor_Curve^ C)
{
	double _result = ::BRepLProp_CurveTool::LastParameter(*(::BRepAdaptor_Curve*)C->NativeInstance);
	return _result;
}



//---------------------------------------------------------------------
//  Class  BRepLProp_CLProps
//---------------------------------------------------------------------

RDC::OCC::BRepLProp_CLProps::BRepLProp_CLProps(RDC::OCC::BRepAdaptor_Curve^ C, int N, double Resolution)
	: RDC::OCC::BaseClass<::BRepLProp_CLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_CLProps(*(::BRepAdaptor_Curve*)C->NativeInstance, N, Resolution);
}

RDC::OCC::BRepLProp_CLProps::BRepLProp_CLProps(RDC::OCC::BRepAdaptor_Curve^ C, double U, int N, double Resolution)
	: RDC::OCC::BaseClass<::BRepLProp_CLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_CLProps(*(::BRepAdaptor_Curve*)C->NativeInstance, U, N, Resolution);
}

RDC::OCC::BRepLProp_CLProps::BRepLProp_CLProps(int N, double Resolution)
	: RDC::OCC::BaseClass<::BRepLProp_CLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_CLProps(N, Resolution);
}

void RDC::OCC::BRepLProp_CLProps::SetParameter(double U)
{
	((::BRepLProp_CLProps*)_NativeInstance)->SetParameter(U);
}

void RDC::OCC::BRepLProp_CLProps::SetCurve(RDC::OCC::BRepAdaptor_Curve^ C)
{
	((::BRepLProp_CLProps*)_NativeInstance)->SetCurve(*(::BRepAdaptor_Curve*)C->NativeInstance);
}

RDC::OCC::Pnt RDC::OCC::BRepLProp_CLProps::Value()
{
	::gp_Pnt _nativeResult = ((::BRepLProp_CLProps*)_NativeInstance)->Value();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::BRepLProp_CLProps::D1()
{
	::gp_Vec _nativeResult = ((::BRepLProp_CLProps*)_NativeInstance)->D1();
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::BRepLProp_CLProps::D2()
{
	::gp_Vec _nativeResult = ((::BRepLProp_CLProps*)_NativeInstance)->D2();
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::BRepLProp_CLProps::D3()
{
	::gp_Vec _nativeResult = ((::BRepLProp_CLProps*)_NativeInstance)->D3();
	return RDC::OCC::Vec(_nativeResult);
}

bool RDC::OCC::BRepLProp_CLProps::IsTangentDefined()
{
	bool _result = ((::BRepLProp_CLProps*)_NativeInstance)->IsTangentDefined();
	return _result;
}

void RDC::OCC::BRepLProp_CLProps::Tangent(RDC::OCC::Dir% D)
{
	pin_ptr<RDC::OCC::Dir> pp_D = &D;
	((::BRepLProp_CLProps*)_NativeInstance)->Tangent(*(gp_Dir*)pp_D);
}

double RDC::OCC::BRepLProp_CLProps::Curvature()
{
	double _result = ((::BRepLProp_CLProps*)_NativeInstance)->Curvature();
	return _result;
}

void RDC::OCC::BRepLProp_CLProps::Normal(RDC::OCC::Dir% N)
{
	pin_ptr<RDC::OCC::Dir> pp_N = &N;
	((::BRepLProp_CLProps*)_NativeInstance)->Normal(*(gp_Dir*)pp_N);
}

void RDC::OCC::BRepLProp_CLProps::CentreOfCurvature(RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::BRepLProp_CLProps*)_NativeInstance)->CentreOfCurvature(*(gp_Pnt*)pp_P);
}



//---------------------------------------------------------------------
//  Class  BRepLProp_SurfaceTool
//---------------------------------------------------------------------

RDC::OCC::BRepLProp_SurfaceTool::BRepLProp_SurfaceTool()
	: RDC::OCC::BaseClass<::BRepLProp_SurfaceTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_SurfaceTool();
}

void RDC::OCC::BRepLProp_SurfaceTool::Value(RDC::OCC::BRepAdaptor_Surface^ S, double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	::BRepLProp_SurfaceTool::Value(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::BRepLProp_SurfaceTool::D1(RDC::OCC::BRepAdaptor_Surface^ S, double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	::BRepLProp_SurfaceTool::D1(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::BRepLProp_SurfaceTool::D2(RDC::OCC::BRepAdaptor_Surface^ S, double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% DUV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_DUV = &DUV;
	::BRepLProp_SurfaceTool::D2(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_DUV);
}

RDC::OCC::Vec RDC::OCC::BRepLProp_SurfaceTool::DN(RDC::OCC::BRepAdaptor_Surface^ S, double U, double V, int IU, int IV)
{
	::gp_Vec _nativeResult = ::BRepLProp_SurfaceTool::DN(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, IU, IV);
	return RDC::OCC::Vec(_nativeResult);
}

int RDC::OCC::BRepLProp_SurfaceTool::Continuity(RDC::OCC::BRepAdaptor_Surface^ S)
{
	int _result = ::BRepLProp_SurfaceTool::Continuity(*(::BRepAdaptor_Surface*)S->NativeInstance);
	return _result;
}

void RDC::OCC::BRepLProp_SurfaceTool::Bounds(RDC::OCC::BRepAdaptor_Surface^ S, double% U1, double% V1, double% U2, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V2 = &V2;
	::BRepLProp_SurfaceTool::Bounds(*(::BRepAdaptor_Surface*)S->NativeInstance, *(double*)pp_U1, *(double*)pp_V1, *(double*)pp_U2, *(double*)pp_V2);
}



//---------------------------------------------------------------------
//  Class  BRepLProp_SLProps
//---------------------------------------------------------------------

RDC::OCC::BRepLProp_SLProps::BRepLProp_SLProps(RDC::OCC::BRepAdaptor_Surface^ S, double U, double V, int N, double Resolution)
	: RDC::OCC::BaseClass<::BRepLProp_SLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_SLProps(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, N, Resolution);
}

RDC::OCC::BRepLProp_SLProps::BRepLProp_SLProps(RDC::OCC::BRepAdaptor_Surface^ S, int N, double Resolution)
	: RDC::OCC::BaseClass<::BRepLProp_SLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_SLProps(*(::BRepAdaptor_Surface*)S->NativeInstance, N, Resolution);
}

RDC::OCC::BRepLProp_SLProps::BRepLProp_SLProps(int N, double Resolution)
	: RDC::OCC::BaseClass<::BRepLProp_SLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_SLProps(N, Resolution);
}

void RDC::OCC::BRepLProp_SLProps::SetSurface(RDC::OCC::BRepAdaptor_Surface^ S)
{
	((::BRepLProp_SLProps*)_NativeInstance)->SetSurface(*(::BRepAdaptor_Surface*)S->NativeInstance);
}

void RDC::OCC::BRepLProp_SLProps::SetParameters(double U, double V)
{
	((::BRepLProp_SLProps*)_NativeInstance)->SetParameters(U, V);
}

RDC::OCC::Pnt RDC::OCC::BRepLProp_SLProps::Value()
{
	::gp_Pnt _nativeResult = ((::BRepLProp_SLProps*)_NativeInstance)->Value();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::BRepLProp_SLProps::D1U()
{
	::gp_Vec _nativeResult = ((::BRepLProp_SLProps*)_NativeInstance)->D1U();
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::BRepLProp_SLProps::D1V()
{
	::gp_Vec _nativeResult = ((::BRepLProp_SLProps*)_NativeInstance)->D1V();
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::BRepLProp_SLProps::D2U()
{
	::gp_Vec _nativeResult = ((::BRepLProp_SLProps*)_NativeInstance)->D2U();
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::BRepLProp_SLProps::D2V()
{
	::gp_Vec _nativeResult = ((::BRepLProp_SLProps*)_NativeInstance)->D2V();
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::BRepLProp_SLProps::DUV()
{
	::gp_Vec _nativeResult = ((::BRepLProp_SLProps*)_NativeInstance)->DUV();
	return RDC::OCC::Vec(_nativeResult);
}

bool RDC::OCC::BRepLProp_SLProps::IsTangentUDefined()
{
	bool _result = ((::BRepLProp_SLProps*)_NativeInstance)->IsTangentUDefined();
	return _result;
}

void RDC::OCC::BRepLProp_SLProps::TangentU(RDC::OCC::Dir% D)
{
	pin_ptr<RDC::OCC::Dir> pp_D = &D;
	((::BRepLProp_SLProps*)_NativeInstance)->TangentU(*(gp_Dir*)pp_D);
}

bool RDC::OCC::BRepLProp_SLProps::IsTangentVDefined()
{
	bool _result = ((::BRepLProp_SLProps*)_NativeInstance)->IsTangentVDefined();
	return _result;
}

void RDC::OCC::BRepLProp_SLProps::TangentV(RDC::OCC::Dir% D)
{
	pin_ptr<RDC::OCC::Dir> pp_D = &D;
	((::BRepLProp_SLProps*)_NativeInstance)->TangentV(*(gp_Dir*)pp_D);
}

bool RDC::OCC::BRepLProp_SLProps::IsNormalDefined()
{
	bool _result = ((::BRepLProp_SLProps*)_NativeInstance)->IsNormalDefined();
	return _result;
}

RDC::OCC::Dir RDC::OCC::BRepLProp_SLProps::Normal()
{
	::gp_Dir _nativeResult = ((::BRepLProp_SLProps*)_NativeInstance)->Normal();
	return RDC::OCC::Dir(_nativeResult);
}

bool RDC::OCC::BRepLProp_SLProps::IsCurvatureDefined()
{
	bool _result = ((::BRepLProp_SLProps*)_NativeInstance)->IsCurvatureDefined();
	return _result;
}

bool RDC::OCC::BRepLProp_SLProps::IsUmbilic()
{
	bool _result = ((::BRepLProp_SLProps*)_NativeInstance)->IsUmbilic();
	return _result;
}

double RDC::OCC::BRepLProp_SLProps::MaxCurvature()
{
	double _result = ((::BRepLProp_SLProps*)_NativeInstance)->MaxCurvature();
	return _result;
}

double RDC::OCC::BRepLProp_SLProps::MinCurvature()
{
	double _result = ((::BRepLProp_SLProps*)_NativeInstance)->MinCurvature();
	return _result;
}

void RDC::OCC::BRepLProp_SLProps::CurvatureDirections(RDC::OCC::Dir% MaxD, RDC::OCC::Dir% MinD)
{
	pin_ptr<RDC::OCC::Dir> pp_MaxD = &MaxD;
	pin_ptr<RDC::OCC::Dir> pp_MinD = &MinD;
	((::BRepLProp_SLProps*)_NativeInstance)->CurvatureDirections(*(gp_Dir*)pp_MaxD, *(gp_Dir*)pp_MinD);
}

double RDC::OCC::BRepLProp_SLProps::MeanCurvature()
{
	double _result = ((::BRepLProp_SLProps*)_NativeInstance)->MeanCurvature();
	return _result;
}

double RDC::OCC::BRepLProp_SLProps::GaussianCurvature()
{
	double _result = ((::BRepLProp_SLProps*)_NativeInstance)->GaussianCurvature();
	return _result;
}


