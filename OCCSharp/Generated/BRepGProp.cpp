// Generated wrapper code for package BRepGProp

#include "OcctPCH.h"
#include "BRepGProp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "GProp.h"
#include "gp.h"
#include "BRepAdaptor.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "TColgp.h"
#include "TopLoc.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  BRepGProp
//---------------------------------------------------------------------

RDC::OCC::BRepGProp::BRepGProp()
    : RDC::OCC::BaseClass<::BRepGProp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp();
}

void RDC::OCC::BRepGProp::LinearProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ LProps, bool SkipShared, bool UseTriangulation)
{
    ::BRepGProp::LinearProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)LProps->NativeInstance, SkipShared, UseTriangulation);
}

void RDC::OCC::BRepGProp::LinearProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ LProps, bool SkipShared)
{
    ::BRepGProp::LinearProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)LProps->NativeInstance, SkipShared, false);
}

void RDC::OCC::BRepGProp::LinearProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ LProps)
{
    ::BRepGProp::LinearProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)LProps->NativeInstance, false, false);
}

void RDC::OCC::BRepGProp::SurfaceProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ SProps, bool SkipShared, bool UseTriangulation)
{
    ::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, SkipShared, UseTriangulation);
}

void RDC::OCC::BRepGProp::SurfaceProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ SProps, bool SkipShared)
{
    ::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, SkipShared, false);
}

void RDC::OCC::BRepGProp::SurfaceProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ SProps)
{
    ::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, false, false);
}

double RDC::OCC::BRepGProp::SurfaceProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ SProps, double Eps, bool SkipShared)
{
    double _result = ::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, Eps, SkipShared);
    return _result;
}

double RDC::OCC::BRepGProp::SurfaceProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ SProps, double Eps)
{
    double _result = ::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, Eps, false);
    return _result;
}

void RDC::OCC::BRepGProp::VolumeProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, bool OnlyClosed, bool SkipShared, bool UseTriangulation)
{
    ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, OnlyClosed, SkipShared, UseTriangulation);
}

void RDC::OCC::BRepGProp::VolumeProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, bool OnlyClosed, bool SkipShared)
{
    ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, OnlyClosed, SkipShared, false);
}

void RDC::OCC::BRepGProp::VolumeProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, bool OnlyClosed)
{
    ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, OnlyClosed, false, false);
}

void RDC::OCC::BRepGProp::VolumeProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps)
{
    ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, false, false, false);
}

double RDC::OCC::BRepGProp::VolumeProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool SkipShared)
{
    double _result = ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, SkipShared);
    return _result;
}

double RDC::OCC::BRepGProp::VolumeProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, double Eps, bool OnlyClosed)
{
    double _result = ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumeProperties(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, double Eps)
{
    double _result = ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, false, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag, bool SkipShared)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, SkipShared);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, CGFlag, false, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, false, false, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, double Eps, bool OnlyClosed)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, false, false, false, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, double Eps)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, false, false, false, false, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, 0.001, false, false, false, false, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, RDC::OCC::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag, bool SkipShared)
{
    pin_ptr<RDC::OCC::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, SkipShared);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, RDC::OCC::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag)
{
    pin_ptr<RDC::OCC::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, RDC::OCC::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag)
{
    pin_ptr<RDC::OCC::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, CGFlag, false, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, RDC::OCC::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan)
{
    pin_ptr<RDC::OCC::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, false, false, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, RDC::OCC::Pln thePln, double Eps, bool OnlyClosed)
{
    pin_ptr<RDC::OCC::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, false, false, false, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, RDC::OCC::Pln thePln, double Eps)
{
    pin_ptr<RDC::OCC::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, false, false, false, false, false);
    return _result;
}

double RDC::OCC::BRepGProp::VolumePropertiesGK(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::GProp_GProps^ VProps, RDC::OCC::Pln thePln)
{
    pin_ptr<RDC::OCC::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, 0.001, false, false, false, false, false);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepGProp_Cinert
//---------------------------------------------------------------------

RDC::OCC::BRepGProp_Cinert::BRepGProp_Cinert()
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Cinert();
}

RDC::OCC::BRepGProp_Cinert::BRepGProp_Cinert(RDC::OCC::BRepAdaptor_Curve^ C, RDC::OCC::Pnt CLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_CLocation = &CLocation;
    _NativeInstance = new ::BRepGProp_Cinert(*(::BRepAdaptor_Curve*)C->NativeInstance, *(gp_Pnt*)pp_CLocation);
}

void RDC::OCC::BRepGProp_Cinert::SetLocation(RDC::OCC::Pnt CLocation)
{
    pin_ptr<RDC::OCC::Pnt> pp_CLocation = &CLocation;
    ((::BRepGProp_Cinert*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_CLocation);
}

void RDC::OCC::BRepGProp_Cinert::Perform(RDC::OCC::BRepAdaptor_Curve^ C)
{
    ((::BRepGProp_Cinert*)_NativeInstance)->Perform(*(::BRepAdaptor_Curve*)C->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BRepGProp_Domain
//---------------------------------------------------------------------

RDC::OCC::BRepGProp_Domain::BRepGProp_Domain()
    : RDC::OCC::BaseClass<::BRepGProp_Domain>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Domain();
}

RDC::OCC::BRepGProp_Domain::BRepGProp_Domain(RDC::OCC::TopoDS_Face^ F)
    : RDC::OCC::BaseClass<::BRepGProp_Domain>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Domain(*(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepGProp_Domain::Init(RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepGProp_Domain*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

bool RDC::OCC::BRepGProp_Domain::More()
{
    bool _result = ((::BRepGProp_Domain*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::BRepGProp_Domain::Init()
{
    ((::BRepGProp_Domain*)_NativeInstance)->Init();
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepGProp_Domain::Value()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepGProp_Domain*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

void RDC::OCC::BRepGProp_Domain::Next()
{
    ((::BRepGProp_Domain*)_NativeInstance)->Next();
}



//---------------------------------------------------------------------
//  Class  BRepGProp_EdgeTool
//---------------------------------------------------------------------

RDC::OCC::BRepGProp_EdgeTool::BRepGProp_EdgeTool()
    : RDC::OCC::BaseClass<::BRepGProp_EdgeTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_EdgeTool();
}

double RDC::OCC::BRepGProp_EdgeTool::FirstParameter(RDC::OCC::BRepAdaptor_Curve^ C)
{
    double _result = ::BRepGProp_EdgeTool::FirstParameter(*(::BRepAdaptor_Curve*)C->NativeInstance);
    return _result;
}

double RDC::OCC::BRepGProp_EdgeTool::LastParameter(RDC::OCC::BRepAdaptor_Curve^ C)
{
    double _result = ::BRepGProp_EdgeTool::LastParameter(*(::BRepAdaptor_Curve*)C->NativeInstance);
    return _result;
}

int RDC::OCC::BRepGProp_EdgeTool::IntegrationOrder(RDC::OCC::BRepAdaptor_Curve^ C)
{
    int _result = ::BRepGProp_EdgeTool::IntegrationOrder(*(::BRepAdaptor_Curve*)C->NativeInstance);
    return _result;
}

RDC::OCC::Pnt RDC::OCC::BRepGProp_EdgeTool::Value(RDC::OCC::BRepAdaptor_Curve^ C, double U)
{
    ::gp_Pnt _nativeResult = ::BRepGProp_EdgeTool::Value(*(::BRepAdaptor_Curve*)C->NativeInstance, U);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::BRepGProp_EdgeTool::D1(RDC::OCC::BRepAdaptor_Curve^ C, double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    ::BRepGProp_EdgeTool::D1(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

int RDC::OCC::BRepGProp_EdgeTool::NbIntervals(RDC::OCC::BRepAdaptor_Curve^ C, RDC::OCC::GeomAbs_Shape S)
{
    int _result = ::BRepGProp_EdgeTool::NbIntervals(*(::BRepAdaptor_Curve*)C->NativeInstance, (::GeomAbs_Shape)S);
    return _result;
}

void RDC::OCC::BRepGProp_EdgeTool::Intervals(RDC::OCC::BRepAdaptor_Curve^ C, RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ::BRepGProp_EdgeTool::Intervals(*(::BRepAdaptor_Curve*)C->NativeInstance, *(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}



//---------------------------------------------------------------------
//  Class  BRepGProp_Face
//---------------------------------------------------------------------

RDC::OCC::BRepGProp_Face::BRepGProp_Face(bool IsUseSpan)
    : RDC::OCC::BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Face(IsUseSpan);
}

RDC::OCC::BRepGProp_Face::BRepGProp_Face()
    : RDC::OCC::BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Face(false);
}

RDC::OCC::BRepGProp_Face::BRepGProp_Face(RDC::OCC::TopoDS_Face^ F, bool IsUseSpan)
    : RDC::OCC::BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Face(*(::TopoDS_Face*)F->NativeInstance, IsUseSpan);
}

RDC::OCC::BRepGProp_Face::BRepGProp_Face(RDC::OCC::TopoDS_Face^ F)
    : RDC::OCC::BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Face(*(::TopoDS_Face*)F->NativeInstance, false);
}

void RDC::OCC::BRepGProp_Face::Load(RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepGProp_Face*)_NativeInstance)->Load(*(::TopoDS_Face*)F->NativeInstance);
}

int RDC::OCC::BRepGProp_Face::VIntegrationOrder()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->VIntegrationOrder();
    return _result;
}

bool RDC::OCC::BRepGProp_Face::NaturalRestriction()
{
    bool _result = ((::BRepGProp_Face*)_NativeInstance)->NaturalRestriction();
    return _result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepGProp_Face::GetFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepGProp_Face*)_NativeInstance)->GetFace();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::Pnt2d RDC::OCC::BRepGProp_Face::Value2d(double U)
{
    ::gp_Pnt2d _nativeResult = ((::BRepGProp_Face*)_NativeInstance)->Value2d(U);
    return RDC::OCC::Pnt2d(_nativeResult);
}

int RDC::OCC::BRepGProp_Face::SIntOrder(double Eps)
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->SIntOrder(Eps);
    return _result;
}

int RDC::OCC::BRepGProp_Face::SVIntSubs()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->SVIntSubs();
    return _result;
}

int RDC::OCC::BRepGProp_Face::SUIntSubs()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->SUIntSubs();
    return _result;
}

void RDC::OCC::BRepGProp_Face::UKnots(RDC::OCC::TColStd_Array1OfReal^ Knots)
{
    ((::BRepGProp_Face*)_NativeInstance)->UKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance);
}

void RDC::OCC::BRepGProp_Face::VKnots(RDC::OCC::TColStd_Array1OfReal^ Knots)
{
    ((::BRepGProp_Face*)_NativeInstance)->VKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance);
}

int RDC::OCC::BRepGProp_Face::LIntOrder(double Eps)
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->LIntOrder(Eps);
    return _result;
}

int RDC::OCC::BRepGProp_Face::LIntSubs()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->LIntSubs();
    return _result;
}

void RDC::OCC::BRepGProp_Face::LKnots(RDC::OCC::TColStd_Array1OfReal^ Knots)
{
    ((::BRepGProp_Face*)_NativeInstance)->LKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance);
}

int RDC::OCC::BRepGProp_Face::UIntegrationOrder()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->UIntegrationOrder();
    return _result;
}

void RDC::OCC::BRepGProp_Face::Bounds(double% U1, double% U2, double% V1, double% V2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_V2 = &V2;
    ((::BRepGProp_Face*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

void RDC::OCC::BRepGProp_Face::Normal(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% VNor)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_VNor = &VNor;
    ((::BRepGProp_Face*)_NativeInstance)->Normal(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_VNor);
}

bool RDC::OCC::BRepGProp_Face::Load(RDC::OCC::TopoDS_Edge^ E)
{
    bool _result = ((::BRepGProp_Face*)_NativeInstance)->Load(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

double RDC::OCC::BRepGProp_Face::FirstParameter()
{
    double _result = ((::BRepGProp_Face*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::BRepGProp_Face::LastParameter()
{
    double _result = ((::BRepGProp_Face*)_NativeInstance)->LastParameter();
    return _result;
}

int RDC::OCC::BRepGProp_Face::IntegrationOrder()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->IntegrationOrder();
    return _result;
}

void RDC::OCC::BRepGProp_Face::D12d(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::BRepGProp_Face*)_NativeInstance)->D12d(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::BRepGProp_Face::Load(bool IsFirstParam, RDC::OCC::GeomAbs_IsoType theIsoType)
{
    ((::BRepGProp_Face*)_NativeInstance)->Load(IsFirstParam, (::GeomAbs_IsoType)theIsoType);
}

void RDC::OCC::BRepGProp_Face::GetUKnots(double theUMin, double theUMax, RDC::OCC::TColStd_HArray1OfReal^ theUKnots)
{
    Handle(::TColStd_HArray1OfReal) h_theUKnots = theUKnots->NativeInstance;
    ((::BRepGProp_Face*)_NativeInstance)->GetUKnots(theUMin, theUMax, h_theUKnots);
    theUKnots->NativeInstance = h_theUKnots.get();
}

void RDC::OCC::BRepGProp_Face::GetTKnots(double theTMin, double theTMax, RDC::OCC::TColStd_HArray1OfReal^ theTKnots)
{
    Handle(::TColStd_HArray1OfReal) h_theTKnots = theTKnots->NativeInstance;
    ((::BRepGProp_Face*)_NativeInstance)->GetTKnots(theTMin, theTMax, h_theTKnots);
    theTKnots->NativeInstance = h_theTKnots.get();
}



//---------------------------------------------------------------------
//  Class  BRepGProp_Gauss
//---------------------------------------------------------------------

RDC::OCC::BRepGProp_Gauss::BRepGProp_Gauss(RDC::OCC::BRepGProp_Gauss::BRepGProp_GaussType theType)
    : RDC::OCC::BaseClass<::BRepGProp_Gauss>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Gauss((::BRepGProp_Gauss::BRepGProp_GaussType)theType);
}

void RDC::OCC::BRepGProp_Gauss::Compute(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt theLocation, double theCoeff, bool theIsByPoint, double% theOutMass, RDC::OCC::Pnt% theOutGravityCenter, RDC::OCC::Mat% theOutInertia)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theCoeff = &theCoeff;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<RDC::OCC::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<RDC::OCC::Mat> pp_theOutInertia = &theOutInertia;
    ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, (double*)pp_theCoeff, theIsByPoint, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
}

void RDC::OCC::BRepGProp_Gauss::Compute(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt theLocation, double% theOutMass, RDC::OCC::Pnt% theOutGravityCenter, RDC::OCC::Mat% theOutInertia)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<RDC::OCC::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<RDC::OCC::Mat> pp_theOutInertia = &theOutInertia;
    ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
}

void RDC::OCC::BRepGProp_Gauss::Compute(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt theLocation, double theCoeff, bool theIsByPoint, double% theOutMass, RDC::OCC::Pnt% theOutGravityCenter, RDC::OCC::Mat% theOutInertia)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theCoeff = &theCoeff;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<RDC::OCC::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<RDC::OCC::Mat> pp_theOutInertia = &theOutInertia;
    ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, (double*)pp_theCoeff, theIsByPoint, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
}

void RDC::OCC::BRepGProp_Gauss::Compute(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt theLocation, double% theOutMass, RDC::OCC::Pnt% theOutGravityCenter, RDC::OCC::Mat% theOutInertia)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<RDC::OCC::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<RDC::OCC::Mat> pp_theOutInertia = &theOutInertia;
    ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
}

double RDC::OCC::BRepGProp_Gauss::Compute(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt theLocation, double theEps, double theCoeff, bool theByPoint, double% theOutMass, RDC::OCC::Pnt% theOutGravityCenter, RDC::OCC::Mat% theOutInertia)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theCoeff = &theCoeff;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<RDC::OCC::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<RDC::OCC::Mat> pp_theOutInertia = &theOutInertia;
    double _result = ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, theEps, (double*)pp_theCoeff, theByPoint, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
    return _result;
}

double RDC::OCC::BRepGProp_Gauss::Compute(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt theLocation, double theEps, double% theOutMass, RDC::OCC::Pnt% theOutGravityCenter, RDC::OCC::Mat% theOutInertia)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<RDC::OCC::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<RDC::OCC::Mat> pp_theOutInertia = &theOutInertia;
    double _result = ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, theEps, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepGProp_MeshCinert
//---------------------------------------------------------------------

RDC::OCC::BRepGProp_MeshCinert::BRepGProp_MeshCinert()
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_MeshCinert();
}

void RDC::OCC::BRepGProp_MeshCinert::SetLocation(RDC::OCC::Pnt CLocation)
{
    pin_ptr<RDC::OCC::Pnt> pp_CLocation = &CLocation;
    ((::BRepGProp_MeshCinert*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_CLocation);
}

void RDC::OCC::BRepGProp_MeshCinert::Perform(RDC::OCC::TColgp_Array1OfPnt^ theNodes)
{
    ((::BRepGProp_MeshCinert*)_NativeInstance)->Perform(*(::TColgp_Array1OfPnt*)theNodes->NativeInstance);
}

void RDC::OCC::BRepGProp_MeshCinert::PreparePolygon(RDC::OCC::TopoDS_Edge^ theE, RDC::OCC::TColgp_HArray1OfPnt^ thePolyg)
{
    Handle(::TColgp_HArray1OfPnt) h_thePolyg = thePolyg->NativeInstance;
    ::BRepGProp_MeshCinert::PreparePolygon(*(::TopoDS_Edge*)theE->NativeInstance, h_thePolyg);
    thePolyg->NativeInstance = h_thePolyg.get();
}



//---------------------------------------------------------------------
//  Class  BRepGProp_MeshProps
//---------------------------------------------------------------------

RDC::OCC::BRepGProp_MeshProps::BRepGProp_MeshProps(RDC::OCC::BRepGProp_MeshProps::BRepGProp_MeshObjType theType)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_MeshProps((::BRepGProp_MeshProps::BRepGProp_MeshObjType)theType);
}

void RDC::OCC::BRepGProp_MeshProps::SetLocation(RDC::OCC::Pnt theLocation)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    ((::BRepGProp_MeshProps*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLocation);
}

void RDC::OCC::BRepGProp_MeshProps::CalculateProps(RDC::OCC::Pnt p1, RDC::OCC::Pnt p2, RDC::OCC::Pnt p3, RDC::OCC::Pnt Apex, bool isVolume, double% GProps, int NbGaussPoints, double GaussPnts)
{
    pin_ptr<RDC::OCC::Pnt> pp_p1 = &p1;
    pin_ptr<RDC::OCC::Pnt> pp_p2 = &p2;
    pin_ptr<RDC::OCC::Pnt> pp_p3 = &p3;
    pin_ptr<RDC::OCC::Pnt> pp_Apex = &Apex;
    pin_ptr<double> pp_GProps = &GProps;
    pin_ptr<double> pp_GaussPnts = &GaussPnts;
    ::BRepGProp_MeshProps::CalculateProps(*(gp_Pnt*)pp_p1, *(gp_Pnt*)pp_p2, *(gp_Pnt*)pp_p3, *(gp_Pnt*)pp_Apex, isVolume, (double*)pp_GProps, NbGaussPoints, (double*)pp_GaussPnts);
}

RDC::OCC::BRepGProp_MeshProps::BRepGProp_MeshObjType RDC::OCC::BRepGProp_MeshProps::GetMeshObjType()
{
    ::BRepGProp_MeshProps::BRepGProp_MeshObjType _result = ((::BRepGProp_MeshProps*)_NativeInstance)->GetMeshObjType();
    return (RDC::OCC::BRepGProp_MeshProps::BRepGProp_MeshObjType)_result;
}



//---------------------------------------------------------------------
//  Class  BRepGProp_Sinert
//---------------------------------------------------------------------

RDC::OCC::BRepGProp_Sinert::BRepGProp_Sinert()
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Sinert();
}

RDC::OCC::BRepGProp_Sinert::BRepGProp_Sinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pnt SLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::BRepGProp_Sinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_SLocation);
}

RDC::OCC::BRepGProp_Sinert::BRepGProp_Sinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pnt SLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::BRepGProp_Sinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_SLocation);
}

RDC::OCC::BRepGProp_Sinert::BRepGProp_Sinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pnt SLocation, double Eps)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::BRepGProp_Sinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_SLocation, Eps);
}

RDC::OCC::BRepGProp_Sinert::BRepGProp_Sinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pnt SLocation, double Eps)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::BRepGProp_Sinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_SLocation, Eps);
}

void RDC::OCC::BRepGProp_Sinert::SetLocation(RDC::OCC::Pnt SLocation)
{
    pin_ptr<RDC::OCC::Pnt> pp_SLocation = &SLocation;
    ((::BRepGProp_Sinert*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_SLocation);
}

void RDC::OCC::BRepGProp_Sinert::Perform(RDC::OCC::BRepGProp_Face^ S)
{
    ((::BRepGProp_Sinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance);
}

void RDC::OCC::BRepGProp_Sinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D)
{
    ((::BRepGProp_Sinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance);
}

double RDC::OCC::BRepGProp_Sinert::Perform(RDC::OCC::BRepGProp_Face^ S, double Eps)
{
    double _result = ((::BRepGProp_Sinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, Eps);
    return _result;
}

double RDC::OCC::BRepGProp_Sinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, double Eps)
{
    double _result = ((::BRepGProp_Sinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, Eps);
    return _result;
}

double RDC::OCC::BRepGProp_Sinert::GetEpsilon()
{
    double _result = ((::BRepGProp_Sinert*)_NativeInstance)->GetEpsilon();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepGProp_Vinert
//---------------------------------------------------------------------

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert()
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Vinert();
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pnt VLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_VLocation);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pnt VLocation, double Eps)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_VLocation, Eps);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pnt O, RDC::OCC::Pnt VLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_O = &O;
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_O, *(gp_Pnt*)pp_VLocation);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pnt O, RDC::OCC::Pnt VLocation, double Eps)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_O = &O;
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_O, *(gp_Pnt*)pp_VLocation, Eps);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pln Pl, RDC::OCC::Pnt VLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_VLocation);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pln Pl, RDC::OCC::Pnt VLocation, double Eps)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_VLocation, Eps);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pnt VLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_VLocation);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pnt VLocation, double Eps)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_VLocation, Eps);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pnt O, RDC::OCC::Pnt VLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_O = &O;
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_O, *(gp_Pnt*)pp_VLocation);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pnt O, RDC::OCC::Pnt VLocation, double Eps)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_O = &O;
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_O, *(gp_Pnt*)pp_VLocation, Eps);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pln Pl, RDC::OCC::Pnt VLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_VLocation);
}

RDC::OCC::BRepGProp_Vinert::BRepGProp_Vinert(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pln Pl, RDC::OCC::Pnt VLocation, double Eps)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_VLocation, Eps);
}

void RDC::OCC::BRepGProp_Vinert::SetLocation(RDC::OCC::Pnt VLocation)
{
    pin_ptr<RDC::OCC::Pnt> pp_VLocation = &VLocation;
    ((::BRepGProp_Vinert*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_VLocation);
}

void RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S)
{
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance);
}

double RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, double Eps)
{
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, Eps);
    return _result;
}

void RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pnt O)
{
    pin_ptr<RDC::OCC::Pnt> pp_O = &O;
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_O);
}

double RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pnt O, double Eps)
{
    pin_ptr<RDC::OCC::Pnt> pp_O = &O;
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_O, Eps);
    return _result;
}

void RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pln Pl)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pln*)pp_Pl);
}

double RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::Pln Pl, double Eps)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pln*)pp_Pl, Eps);
    return _result;
}

void RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D)
{
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance);
}

double RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, double Eps)
{
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, Eps);
    return _result;
}

void RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pnt O)
{
    pin_ptr<RDC::OCC::Pnt> pp_O = &O;
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_O);
}

double RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pnt O, double Eps)
{
    pin_ptr<RDC::OCC::Pnt> pp_O = &O;
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_O, Eps);
    return _result;
}

void RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pln Pl)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pln*)pp_Pl);
}

double RDC::OCC::BRepGProp_Vinert::Perform(RDC::OCC::BRepGProp_Face^ S, RDC::OCC::BRepGProp_Domain^ D, RDC::OCC::Pln Pl, double Eps)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pln*)pp_Pl, Eps);
    return _result;
}

double RDC::OCC::BRepGProp_Vinert::GetEpsilon()
{
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->GetEpsilon();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepGProp_VinertGK
//---------------------------------------------------------------------

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK()
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_VinertGK();
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt theLocation, double theTolerance)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt theLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt thePoint, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt thePoint, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt thePoint, RDC::OCC::Pnt theLocation, double theTolerance)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt thePoint, RDC::OCC::Pnt theLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt theLocation, double theTolerance)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt theLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt thePoint, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt thePoint, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt thePoint, RDC::OCC::Pnt theLocation, double theTolerance)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt thePoint, RDC::OCC::Pnt theLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pln thePlane, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pln thePlane, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pln thePlane, RDC::OCC::Pnt theLocation, double theTolerance)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pln thePlane, RDC::OCC::Pnt theLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pln thePlane, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pln thePlane, RDC::OCC::Pnt theLocation, double theTolerance, bool theCGFlag)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pln thePlane, RDC::OCC::Pnt theLocation, double theTolerance)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

RDC::OCC::BRepGProp_VinertGK::BRepGProp_VinertGK(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pln thePlane, RDC::OCC::Pnt theLocation)
    : RDC::OCC::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    _NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

void RDC::OCC::BRepGProp_VinertGK::SetLocation(RDC::OCC::Pnt theLocation)
{
    pin_ptr<RDC::OCC::Pnt> pp_theLocation = &theLocation;
    ((::BRepGProp_VinertGK*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLocation);
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, double theTolerance, bool theCGFlag, bool theIFlag)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, double theTolerance, bool theCGFlag)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, theTolerance, theCGFlag, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, double theTolerance)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, theTolerance, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, 0.001, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt thePoint, double theTolerance, bool theCGFlag, bool theIFlag)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt thePoint, double theTolerance, bool theCGFlag)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt thePoint, double theTolerance)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pnt thePoint)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, 0.001, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, double theTolerance, bool theCGFlag, bool theIFlag)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, double theTolerance, bool theCGFlag)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, theTolerance, theCGFlag, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, double theTolerance)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, theTolerance, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, 0.001, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt thePoint, double theTolerance, bool theCGFlag, bool theIFlag)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt thePoint, double theTolerance, bool theCGFlag)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt thePoint, double theTolerance)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pnt thePoint)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, 0.001, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pln thePlane, double theTolerance, bool theCGFlag, bool theIFlag)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pln thePlane, double theTolerance, bool theCGFlag)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pln thePlane, double theTolerance)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::Pln thePlane)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, 0.001, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pln thePlane, double theTolerance, bool theCGFlag, bool theIFlag)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pln thePlane, double theTolerance, bool theCGFlag)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pln thePlane, double theTolerance)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::Perform(RDC::OCC::BRepGProp_Face^ theSurface, RDC::OCC::BRepGProp_Domain^ theDomain, RDC::OCC::Pln thePlane)
{
    pin_ptr<RDC::OCC::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, 0.001, false, false);
    return _result;
}

double RDC::OCC::BRepGProp_VinertGK::GetErrorReached()
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->GetErrorReached();
    return _result;
}


