// Generated wrapper code for package GeomPlate

#include "OcctPCH.h"
#include "GeomPlate.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TColgp.h"
#include "Geom.h"


//---------------------------------------------------------------------
//  Class  GeomPlate_BuildAveragePlane
//---------------------------------------------------------------------

RDC::OCC::GeomPlate_BuildAveragePlane::GeomPlate_BuildAveragePlane(RDC::OCC::TColgp_HArray1OfPnt^ Pts, int NbBoundPoints, double Tol, int POption, int NOption)
	: RDC::OCC::BaseClass<::GeomPlate_BuildAveragePlane>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomPlate_BuildAveragePlane(Handle(::TColgp_HArray1OfPnt)(Pts->NativeInstance), NbBoundPoints, Tol, POption, NOption);
}

RDC::OCC::GeomPlate_BuildAveragePlane::GeomPlate_BuildAveragePlane(RDC::OCC::TColgp_SequenceOfVec^ Normals, RDC::OCC::TColgp_HArray1OfPnt^ Pts)
	: RDC::OCC::BaseClass<::GeomPlate_BuildAveragePlane>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomPlate_BuildAveragePlane(*(::TColgp_SequenceOfVec*)Normals->NativeInstance, Handle(::TColgp_HArray1OfPnt)(Pts->NativeInstance));
}

RDC::OCC::Geom_Plane^ RDC::OCC::GeomPlate_BuildAveragePlane::Plane()
{
	Handle(::Geom_Plane) _result = ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->Plane();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Plane::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Line^ RDC::OCC::GeomPlate_BuildAveragePlane::Line()
{
	Handle(::Geom_Line) _result = ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->Line();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Line::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomPlate_BuildAveragePlane::IsPlane()
{
	bool _result = ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->IsPlane();
	return _result;
}

bool RDC::OCC::GeomPlate_BuildAveragePlane::IsLine()
{
	bool _result = ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->IsLine();
	return _result;
}

void RDC::OCC::GeomPlate_BuildAveragePlane::MinMaxBox(double% Umin, double% Umax, double% Vmin, double% Vmax)
{
	pin_ptr<double> pp_Umin = &Umin;
	pin_ptr<double> pp_Umax = &Umax;
	pin_ptr<double> pp_Vmin = &Vmin;
	pin_ptr<double> pp_Vmax = &Vmax;
	((::GeomPlate_BuildAveragePlane*)_NativeInstance)->MinMaxBox(*(double*)pp_Umin, *(double*)pp_Umax, *(double*)pp_Vmin, *(double*)pp_Vmax);
}


