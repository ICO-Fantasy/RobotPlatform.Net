// Generated wrapper code for package BRepIntCurveSurface

#include "OcctPCH.h"
#include "BRepIntCurveSurface.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "GeomAdaptor.h"
#include "gp.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  BRepIntCurveSurface_Inter
//---------------------------------------------------------------------

RDC::OCC::BRepIntCurveSurface_Inter::BRepIntCurveSurface_Inter()
	: RDC::OCC::BaseClass<::BRepIntCurveSurface_Inter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepIntCurveSurface_Inter();
}

void RDC::OCC::BRepIntCurveSurface_Inter::Init(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::GeomAdaptor_Curve^ theCurve, double theTol)
{
	((::BRepIntCurveSurface_Inter*)_NativeInstance)->Init(*(::TopoDS_Shape*)theShape->NativeInstance, *(::GeomAdaptor_Curve*)theCurve->NativeInstance, theTol);
}

void RDC::OCC::BRepIntCurveSurface_Inter::Init(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::gp_Lin^ theLine, double theTol)
{
	((::BRepIntCurveSurface_Inter*)_NativeInstance)->Init(*(::TopoDS_Shape*)theShape->NativeInstance, *(::gp_Lin*)theLine->NativeInstance, theTol);
}

void RDC::OCC::BRepIntCurveSurface_Inter::Load(RDC::OCC::TopoDS_Shape^ theShape, double theTol)
{
	((::BRepIntCurveSurface_Inter*)_NativeInstance)->Load(*(::TopoDS_Shape*)theShape->NativeInstance, theTol);
}

void RDC::OCC::BRepIntCurveSurface_Inter::Init(RDC::OCC::GeomAdaptor_Curve^ theCurve)
{
	((::BRepIntCurveSurface_Inter*)_NativeInstance)->Init(*(::GeomAdaptor_Curve*)theCurve->NativeInstance);
}

bool RDC::OCC::BRepIntCurveSurface_Inter::More()
{
	bool _result = ((::BRepIntCurveSurface_Inter*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::BRepIntCurveSurface_Inter::Next()
{
	((::BRepIntCurveSurface_Inter*)_NativeInstance)->Next();
}

RDC::OCC::Pnt RDC::OCC::BRepIntCurveSurface_Inter::Pnt()
{
	::gp_Pnt _nativeResult = ((::BRepIntCurveSurface_Inter*)_NativeInstance)->Pnt();
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::BRepIntCurveSurface_Inter::U()
{
	double _result = ((::BRepIntCurveSurface_Inter*)_NativeInstance)->U();
	return _result;
}

double RDC::OCC::BRepIntCurveSurface_Inter::V()
{
	double _result = ((::BRepIntCurveSurface_Inter*)_NativeInstance)->V();
	return _result;
}

double RDC::OCC::BRepIntCurveSurface_Inter::W()
{
	double _result = ((::BRepIntCurveSurface_Inter*)_NativeInstance)->W();
	return _result;
}

RDC::OCC::TopAbs_State RDC::OCC::BRepIntCurveSurface_Inter::State()
{
	::TopAbs_State _result = ((::BRepIntCurveSurface_Inter*)_NativeInstance)->State();
	return (RDC::OCC::TopAbs_State)_result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepIntCurveSurface_Inter::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = (::TopoDS_Face)((::BRepIntCurveSurface_Inter*)_NativeInstance)->Face();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}


