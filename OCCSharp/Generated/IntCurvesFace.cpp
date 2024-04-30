// Generated wrapper code for package IntCurvesFace

#include "OcctPCH.h"
#include "IntCurvesFace.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "gp.h"
#include "Adaptor3d.h"
#include "GeomAbs.h"
#include "TopAbs.h"
#include "Bnd.h"


//---------------------------------------------------------------------
//  Class  IntCurvesFace_Intersector
//---------------------------------------------------------------------

RDC::OCC::IntCurvesFace_Intersector::IntCurvesFace_Intersector(RDC::OCC::TopoDS_Face^ F, double aTol, bool aRestr, bool UseBToler)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::IntCurvesFace_Intersector(*(::TopoDS_Face*)F->NativeInstance, aTol, aRestr, UseBToler);
}

RDC::OCC::IntCurvesFace_Intersector::IntCurvesFace_Intersector(RDC::OCC::TopoDS_Face^ F, double aTol, bool aRestr)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::IntCurvesFace_Intersector(*(::TopoDS_Face*)F->NativeInstance, aTol, aRestr, true);
}

RDC::OCC::IntCurvesFace_Intersector::IntCurvesFace_Intersector(RDC::OCC::TopoDS_Face^ F, double aTol)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::IntCurvesFace_Intersector(*(::TopoDS_Face*)F->NativeInstance, aTol, true, true);
}

void RDC::OCC::IntCurvesFace_Intersector::Perform(RDC::OCC::gp_Lin^ L, double PInf, double PSup)
{
	((::IntCurvesFace_Intersector*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, PInf, PSup);
}

void RDC::OCC::IntCurvesFace_Intersector::Perform(RDC::OCC::Adaptor3d_Curve^ HCu, double PInf, double PSup)
{
	((::IntCurvesFace_Intersector*)_NativeInstance)->Perform(Handle(::Adaptor3d_Curve)(HCu->NativeInstance), PInf, PSup);
}

RDC::OCC::GeomAbs_SurfaceType RDC::OCC::IntCurvesFace_Intersector::SurfaceType()
{
	::GeomAbs_SurfaceType _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->SurfaceType();
	return (RDC::OCC::GeomAbs_SurfaceType)_result;
}

bool RDC::OCC::IntCurvesFace_Intersector::IsDone()
{
	bool _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->IsDone();
	return _result;
}

int RDC::OCC::IntCurvesFace_Intersector::NbPnt()
{
	int _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->NbPnt();
	return _result;
}

double RDC::OCC::IntCurvesFace_Intersector::UParameter(int I)
{
	double _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->UParameter(I);
	return _result;
}

double RDC::OCC::IntCurvesFace_Intersector::VParameter(int I)
{
	double _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->VParameter(I);
	return _result;
}

double RDC::OCC::IntCurvesFace_Intersector::WParameter(int I)
{
	double _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->WParameter(I);
	return _result;
}

RDC::OCC::Pnt RDC::OCC::IntCurvesFace_Intersector::Pnt(int I)
{
	::gp_Pnt _nativeResult = ((::IntCurvesFace_Intersector*)_NativeInstance)->Pnt(I);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::TopAbs_State RDC::OCC::IntCurvesFace_Intersector::State(int I)
{
	::TopAbs_State _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->State(I);
	return (RDC::OCC::TopAbs_State)_result;
}

bool RDC::OCC::IntCurvesFace_Intersector::IsParallel()
{
	bool _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->IsParallel();
	return _result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::IntCurvesFace_Intersector::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = (::TopoDS_Face)((::IntCurvesFace_Intersector*)_NativeInstance)->Face();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopAbs_State RDC::OCC::IntCurvesFace_Intersector::ClassifyUVPoint(RDC::OCC::Pnt2d Puv)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_Puv = &Puv;
	::TopAbs_State _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->ClassifyUVPoint(*(gp_Pnt2d*)pp_Puv);
	return (RDC::OCC::TopAbs_State)_result;
}

RDC::OCC::Bnd_Box^ RDC::OCC::IntCurvesFace_Intersector::Bounding()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::IntCurvesFace_Intersector*)_NativeInstance)->Bounding();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

void RDC::OCC::IntCurvesFace_Intersector::SetUseBoundToler(bool UseBToler)
{
	((::IntCurvesFace_Intersector*)_NativeInstance)->SetUseBoundToler(UseBToler);
}

bool RDC::OCC::IntCurvesFace_Intersector::GetUseBoundToler()
{
	bool _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->GetUseBoundToler();
	return _result;
}

RDC::OCC::IntCurvesFace_Intersector^ RDC::OCC::IntCurvesFace_Intersector::CreateDowncasted(::IntCurvesFace_Intersector* instance)
{
	return gcnew RDC::OCC::IntCurvesFace_Intersector(instance);
}



//---------------------------------------------------------------------
//  Class  IntCurvesFace_ShapeIntersector
//---------------------------------------------------------------------

RDC::OCC::IntCurvesFace_ShapeIntersector::IntCurvesFace_ShapeIntersector()
	: RDC::OCC::BaseClass<::IntCurvesFace_ShapeIntersector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntCurvesFace_ShapeIntersector();
}

void RDC::OCC::IntCurvesFace_ShapeIntersector::Load(RDC::OCC::TopoDS_Shape^ Sh, double Tol)
{
	((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Load(*(::TopoDS_Shape*)Sh->NativeInstance, Tol);
}

void RDC::OCC::IntCurvesFace_ShapeIntersector::Perform(RDC::OCC::gp_Lin^ L, double PInf, double PSup)
{
	((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, PInf, PSup);
}

void RDC::OCC::IntCurvesFace_ShapeIntersector::PerformNearest(RDC::OCC::gp_Lin^ L, double PInf, double PSup)
{
	((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->PerformNearest(*(::gp_Lin*)L->NativeInstance, PInf, PSup);
}

void RDC::OCC::IntCurvesFace_ShapeIntersector::Perform(RDC::OCC::Adaptor3d_Curve^ HCu, double PInf, double PSup)
{
	((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Perform(Handle(::Adaptor3d_Curve)(HCu->NativeInstance), PInf, PSup);
}

bool RDC::OCC::IntCurvesFace_ShapeIntersector::IsDone()
{
	bool _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->IsDone();
	return _result;
}

int RDC::OCC::IntCurvesFace_ShapeIntersector::NbPnt()
{
	int _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->NbPnt();
	return _result;
}

double RDC::OCC::IntCurvesFace_ShapeIntersector::UParameter(int I)
{
	double _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->UParameter(I);
	return _result;
}

double RDC::OCC::IntCurvesFace_ShapeIntersector::VParameter(int I)
{
	double _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->VParameter(I);
	return _result;
}

double RDC::OCC::IntCurvesFace_ShapeIntersector::WParameter(int I)
{
	double _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->WParameter(I);
	return _result;
}

RDC::OCC::Pnt RDC::OCC::IntCurvesFace_ShapeIntersector::Pnt(int I)
{
	::gp_Pnt _nativeResult = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Pnt(I);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::TopAbs_State RDC::OCC::IntCurvesFace_ShapeIntersector::State(int I)
{
	::TopAbs_State _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->State(I);
	return (RDC::OCC::TopAbs_State)_result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::IntCurvesFace_ShapeIntersector::Face(int I)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = (::TopoDS_Face)((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Face(I);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

void RDC::OCC::IntCurvesFace_ShapeIntersector::SortResult()
{
	((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->SortResult();
}


