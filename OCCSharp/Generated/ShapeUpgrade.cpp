// Generated wrapper code for package ShapeUpgrade

#include "OcctPCH.h"
#include "ShapeUpgrade.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "Geom2d.h"
#include "ShapeBuild.h"
#include "TColStd.h"
#include "TopoDS.h"
#include "TopLoc.h"
#include "ShapeAnalysis.h"
#include "TopTools.h"
#include "TopAbs.h"
#include "Message.h"
#include "GeomAbs.h"
#include "BRepTools.h"


//---------------------------------------------------------------------
//  Class  ShapeUpgrade
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade::ShapeUpgrade()
	: RDC::OCC::BaseClass<::ShapeUpgrade>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade();
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_Tool
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_Tool::ShapeUpgrade_Tool()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_Tool();
}

void RDC::OCC::ShapeUpgrade_Tool::Set(RDC::OCC::ShapeUpgrade_Tool^ tool)
{
	((::ShapeUpgrade_Tool*)_NativeInstance)->Set(Handle(::ShapeUpgrade_Tool)(tool->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_Tool::SetContext(RDC::OCC::ShapeBuild_ReShape^ context)
{
	((::ShapeUpgrade_Tool*)_NativeInstance)->SetContext(Handle(::ShapeBuild_ReShape)(context->NativeInstance));
}

RDC::OCC::ShapeBuild_ReShape^ RDC::OCC::ShapeUpgrade_Tool::Context()
{
	Handle(::ShapeBuild_ReShape) _result = ((::ShapeUpgrade_Tool*)_NativeInstance)->Context();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeBuild_ReShape::CreateDowncasted(_result.get());
}

void RDC::OCC::ShapeUpgrade_Tool::SetPrecision(double preci)
{
	((::ShapeUpgrade_Tool*)_NativeInstance)->SetPrecision(preci);
}

double RDC::OCC::ShapeUpgrade_Tool::Precision()
{
	double _result = ((::ShapeUpgrade_Tool*)_NativeInstance)->Precision();
	return _result;
}

void RDC::OCC::ShapeUpgrade_Tool::SetMinTolerance(double mintol)
{
	((::ShapeUpgrade_Tool*)_NativeInstance)->SetMinTolerance(mintol);
}

double RDC::OCC::ShapeUpgrade_Tool::MinTolerance()
{
	double _result = ((::ShapeUpgrade_Tool*)_NativeInstance)->MinTolerance();
	return _result;
}

void RDC::OCC::ShapeUpgrade_Tool::SetMaxTolerance(double maxtol)
{
	((::ShapeUpgrade_Tool*)_NativeInstance)->SetMaxTolerance(maxtol);
}

double RDC::OCC::ShapeUpgrade_Tool::MaxTolerance()
{
	double _result = ((::ShapeUpgrade_Tool*)_NativeInstance)->MaxTolerance();
	return _result;
}

double RDC::OCC::ShapeUpgrade_Tool::LimitTolerance(double toler)
{
	double _result = ((::ShapeUpgrade_Tool*)_NativeInstance)->LimitTolerance(toler);
	return _result;
}

RDC::OCC::ShapeUpgrade_Tool^ RDC::OCC::ShapeUpgrade_Tool::CreateDowncasted(::ShapeUpgrade_Tool* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_EdgeDivide)))
		return RDC::OCC::ShapeUpgrade_EdgeDivide::CreateDowncasted((::ShapeUpgrade_EdgeDivide*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_WireDivide)))
		return RDC::OCC::ShapeUpgrade_WireDivide::CreateDowncasted((::ShapeUpgrade_WireDivide*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_FaceDivide)))
		return RDC::OCC::ShapeUpgrade_FaceDivide::CreateDowncasted((::ShapeUpgrade_FaceDivide*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_FixSmallCurves)))
		return RDC::OCC::ShapeUpgrade_FixSmallCurves::CreateDowncasted((::ShapeUpgrade_FixSmallCurves*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_RemoveInternalWires)))
		return RDC::OCC::ShapeUpgrade_RemoveInternalWires::CreateDowncasted((::ShapeUpgrade_RemoveInternalWires*)instance);

	return gcnew RDC::OCC::ShapeUpgrade_Tool(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_SplitCurve::ShapeUpgrade_SplitCurve()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve();
}

void RDC::OCC::ShapeUpgrade_SplitCurve::Init(double First, double Last)
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Init(First, Last);
}

void RDC::OCC::ShapeUpgrade_SplitCurve::SetSplitValues(RDC::OCC::TColStd_HSequenceOfReal^ SplitValues)
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->SetSplitValues(Handle(::TColStd_HSequenceOfReal)(SplitValues->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_SplitCurve::Build(bool Segment)
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Build(Segment);
}

RDC::OCC::TColStd_HSequenceOfReal^ RDC::OCC::ShapeUpgrade_SplitCurve::SplitValues()
{
	Handle(::TColStd_HSequenceOfReal) _result = ((::ShapeUpgrade_SplitCurve*)_NativeInstance)->SplitValues();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HSequenceOfReal::CreateDowncasted(_result.get());
}

void RDC::OCC::ShapeUpgrade_SplitCurve::Compute()
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Compute();
}

void RDC::OCC::ShapeUpgrade_SplitCurve::Perform(bool Segment)
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Perform(Segment);
}

void RDC::OCC::ShapeUpgrade_SplitCurve::Perform()
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Perform(true);
}

RDC::OCC::ShapeUpgrade_SplitCurve^ RDC::OCC::ShapeUpgrade_SplitCurve::CreateDowncasted(::ShapeUpgrade_SplitCurve* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitCurve3d)))
		return RDC::OCC::ShapeUpgrade_SplitCurve3d::CreateDowncasted((::ShapeUpgrade_SplitCurve3d*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitCurve2d)))
		return RDC::OCC::ShapeUpgrade_SplitCurve2d::CreateDowncasted((::ShapeUpgrade_SplitCurve2d*)instance);

	return gcnew RDC::OCC::ShapeUpgrade_SplitCurve(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve2d
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_SplitCurve2d::ShapeUpgrade_SplitCurve2d()
	: RDC::OCC::ShapeUpgrade_SplitCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve2d();
}

void RDC::OCC::ShapeUpgrade_SplitCurve2d::Init(RDC::OCC::Geom2d_Curve^ C)
{
	((::ShapeUpgrade_SplitCurve2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_SplitCurve2d::Init(RDC::OCC::Geom2d_Curve^ C, double First, double Last)
{
	((::ShapeUpgrade_SplitCurve2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), First, Last);
}

void RDC::OCC::ShapeUpgrade_SplitCurve2d::Build(bool Segment)
{
	((::ShapeUpgrade_SplitCurve2d*)_NativeInstance)->Build(Segment);
}

RDC::OCC::ShapeUpgrade_SplitCurve2d^ RDC::OCC::ShapeUpgrade_SplitCurve2d::CreateDowncasted(::ShapeUpgrade_SplitCurve2d* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_ConvertCurve2dToBezier)))
		return RDC::OCC::ShapeUpgrade_ConvertCurve2dToBezier::CreateDowncasted((::ShapeUpgrade_ConvertCurve2dToBezier*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitCurve2dContinuity)))
		return RDC::OCC::ShapeUpgrade_SplitCurve2dContinuity::CreateDowncasted((::ShapeUpgrade_SplitCurve2dContinuity*)instance);

	return gcnew RDC::OCC::ShapeUpgrade_SplitCurve2d(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_EdgeDivide
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_EdgeDivide::ShapeUpgrade_EdgeDivide()
	: RDC::OCC::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_EdgeDivide();
}

void RDC::OCC::ShapeUpgrade_EdgeDivide::Clear()
{
	((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->Clear();
}

void RDC::OCC::ShapeUpgrade_EdgeDivide::SetFace(RDC::OCC::TopoDS_Face^ F)
{
	((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->SetFace(*(::TopoDS_Face*)F->NativeInstance);
}

bool RDC::OCC::ShapeUpgrade_EdgeDivide::Compute(RDC::OCC::TopoDS_Edge^ E)
{
	bool _result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->Compute(*(::TopoDS_Edge*)E->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeUpgrade_EdgeDivide::HasCurve2d()
{
	bool _result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->HasCurve2d();
	return _result;
}

bool RDC::OCC::ShapeUpgrade_EdgeDivide::HasCurve3d()
{
	bool _result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->HasCurve3d();
	return _result;
}

RDC::OCC::TColStd_HSequenceOfReal^ RDC::OCC::ShapeUpgrade_EdgeDivide::Knots2d()
{
	Handle(::TColStd_HSequenceOfReal) _result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->Knots2d();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HSequenceOfReal::CreateDowncasted(_result.get());
}

RDC::OCC::TColStd_HSequenceOfReal^ RDC::OCC::ShapeUpgrade_EdgeDivide::Knots3d()
{
	Handle(::TColStd_HSequenceOfReal) _result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->Knots3d();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HSequenceOfReal::CreateDowncasted(_result.get());
}

void RDC::OCC::ShapeUpgrade_EdgeDivide::SetSplitCurve2dTool(RDC::OCC::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool)
{
	((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->SetSplitCurve2dTool(Handle(::ShapeUpgrade_SplitCurve2d)(splitCurve2dTool->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_EdgeDivide::SetSplitCurve3dTool(RDC::OCC::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool)
{
	((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->SetSplitCurve3dTool(Handle(::ShapeUpgrade_SplitCurve3d)(splitCurve3dTool->NativeInstance));
}

RDC::OCC::ShapeUpgrade_SplitCurve2d^ RDC::OCC::ShapeUpgrade_EdgeDivide::GetSplitCurve2dTool()
{
	Handle(::ShapeUpgrade_SplitCurve2d) _result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->GetSplitCurve2dTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeUpgrade_SplitCurve2d::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeUpgrade_SplitCurve3d^ RDC::OCC::ShapeUpgrade_EdgeDivide::GetSplitCurve3dTool()
{
	Handle(::ShapeUpgrade_SplitCurve3d) _result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->GetSplitCurve3dTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeUpgrade_SplitCurve3d::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeUpgrade_EdgeDivide^ RDC::OCC::ShapeUpgrade_EdgeDivide::CreateDowncasted(::ShapeUpgrade_EdgeDivide* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_ClosedEdgeDivide)))
		return RDC::OCC::ShapeUpgrade_ClosedEdgeDivide::CreateDowncasted((::ShapeUpgrade_ClosedEdgeDivide*)instance);

	return gcnew RDC::OCC::ShapeUpgrade_EdgeDivide(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ClosedEdgeDivide
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ClosedEdgeDivide::ShapeUpgrade_ClosedEdgeDivide()
	: RDC::OCC::ShapeUpgrade_EdgeDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ClosedEdgeDivide();
}

bool RDC::OCC::ShapeUpgrade_ClosedEdgeDivide::Compute(RDC::OCC::TopoDS_Edge^ anEdge)
{
	bool _result = ((::ShapeUpgrade_ClosedEdgeDivide*)_NativeInstance)->Compute(*(::TopoDS_Edge*)anEdge->NativeInstance);
	return _result;
}

RDC::OCC::ShapeUpgrade_ClosedEdgeDivide^ RDC::OCC::ShapeUpgrade_ClosedEdgeDivide::CreateDowncasted(::ShapeUpgrade_ClosedEdgeDivide* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_ClosedEdgeDivide(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurface
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_SplitSurface::ShapeUpgrade_SplitSurface()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurface();
}

void RDC::OCC::ShapeUpgrade_SplitSurface::Init(RDC::OCC::Geom_Surface^ S)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_SplitSurface::Init(RDC::OCC::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double theArea)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UFirst, ULast, VFirst, VLast, theArea);
}

void RDC::OCC::ShapeUpgrade_SplitSurface::Init(RDC::OCC::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UFirst, ULast, VFirst, VLast, 0.);
}

void RDC::OCC::ShapeUpgrade_SplitSurface::SetUSplitValues(RDC::OCC::TColStd_HSequenceOfReal^ UValues)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->SetUSplitValues(Handle(::TColStd_HSequenceOfReal)(UValues->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_SplitSurface::SetVSplitValues(RDC::OCC::TColStd_HSequenceOfReal^ VValues)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->SetVSplitValues(Handle(::TColStd_HSequenceOfReal)(VValues->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_SplitSurface::Build(bool Segment)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Build(Segment);
}

void RDC::OCC::ShapeUpgrade_SplitSurface::Compute(bool Segment)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Compute(Segment);
}

void RDC::OCC::ShapeUpgrade_SplitSurface::Compute()
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Compute(true);
}

void RDC::OCC::ShapeUpgrade_SplitSurface::Perform(bool Segment)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Perform(Segment);
}

void RDC::OCC::ShapeUpgrade_SplitSurface::Perform()
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Perform(true);
}

RDC::OCC::TColStd_HSequenceOfReal^ RDC::OCC::ShapeUpgrade_SplitSurface::USplitValues()
{
	Handle(::TColStd_HSequenceOfReal) _result = ((::ShapeUpgrade_SplitSurface*)_NativeInstance)->USplitValues();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HSequenceOfReal::CreateDowncasted(_result.get());
}

RDC::OCC::TColStd_HSequenceOfReal^ RDC::OCC::ShapeUpgrade_SplitSurface::VSplitValues()
{
	Handle(::TColStd_HSequenceOfReal) _result = ((::ShapeUpgrade_SplitSurface*)_NativeInstance)->VSplitValues();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HSequenceOfReal::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeUpgrade_SplitSurface^ RDC::OCC::ShapeUpgrade_SplitSurface::CreateDowncasted(::ShapeUpgrade_SplitSurface* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_ConvertSurfaceToBezierBasis)))
		return RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::CreateDowncasted((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitSurfaceAngle)))
		return RDC::OCC::ShapeUpgrade_SplitSurfaceAngle::CreateDowncasted((::ShapeUpgrade_SplitSurfaceAngle*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitSurfaceArea)))
		return RDC::OCC::ShapeUpgrade_SplitSurfaceArea::CreateDowncasted((::ShapeUpgrade_SplitSurfaceArea*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitSurfaceContinuity)))
		return RDC::OCC::ShapeUpgrade_SplitSurfaceContinuity::CreateDowncasted((::ShapeUpgrade_SplitSurfaceContinuity*)instance);

	return gcnew RDC::OCC::ShapeUpgrade_SplitSurface(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_WireDivide
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_WireDivide::ShapeUpgrade_WireDivide()
	: RDC::OCC::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_WireDivide();
}

void RDC::OCC::ShapeUpgrade_WireDivide::Init(RDC::OCC::TopoDS_Wire^ W, RDC::OCC::TopoDS_Face^ F)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_WireDivide::Init(RDC::OCC::TopoDS_Wire^ W, RDC::OCC::Geom_Surface^ S)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_WireDivide::Load(RDC::OCC::TopoDS_Wire^ W)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->Load(*(::TopoDS_Wire*)W->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_WireDivide::Load(RDC::OCC::TopoDS_Edge^ E)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->Load(*(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_WireDivide::SetFace(RDC::OCC::TopoDS_Face^ F)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetFace(*(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_WireDivide::SetSurface(RDC::OCC::Geom_Surface^ S)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetSurface(Handle(::Geom_Surface)(S->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_WireDivide::SetSurface(RDC::OCC::Geom_Surface^ S, RDC::OCC::TopLoc_Location^ L)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetSurface(Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_WireDivide::Perform()
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->Perform();
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::ShapeUpgrade_WireDivide::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = (::TopoDS_Wire)((::ShapeUpgrade_WireDivide*)_NativeInstance)->Wire();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}

void RDC::OCC::ShapeUpgrade_WireDivide::SetSplitCurve3dTool(RDC::OCC::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetSplitCurve3dTool(Handle(::ShapeUpgrade_SplitCurve3d)(splitCurve3dTool->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_WireDivide::SetSplitCurve2dTool(RDC::OCC::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetSplitCurve2dTool(Handle(::ShapeUpgrade_SplitCurve2d)(splitCurve2dTool->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_WireDivide::SetTransferParamTool(RDC::OCC::ShapeAnalysis_TransferParameters^ TransferParam)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetTransferParamTool(Handle(::ShapeAnalysis_TransferParameters)(TransferParam->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_WireDivide::SetEdgeDivideTool(RDC::OCC::ShapeUpgrade_EdgeDivide^ edgeDivideTool)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetEdgeDivideTool(Handle(::ShapeUpgrade_EdgeDivide)(edgeDivideTool->NativeInstance));
}

RDC::OCC::ShapeUpgrade_EdgeDivide^ RDC::OCC::ShapeUpgrade_WireDivide::GetEdgeDivideTool()
{
	Handle(::ShapeUpgrade_EdgeDivide) _result = ((::ShapeUpgrade_WireDivide*)_NativeInstance)->GetEdgeDivideTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeUpgrade_EdgeDivide::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeAnalysis_TransferParameters^ RDC::OCC::ShapeUpgrade_WireDivide::GetTransferParamTool()
{
	Handle(::ShapeAnalysis_TransferParameters) _result = ((::ShapeUpgrade_WireDivide*)_NativeInstance)->GetTransferParamTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeAnalysis_TransferParameters::CreateDowncasted(_result.get());
}

void RDC::OCC::ShapeUpgrade_WireDivide::SetEdgeMode(int EdgeMode)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetEdgeMode(EdgeMode);
}

void RDC::OCC::ShapeUpgrade_WireDivide::SetFixSmallCurveTool(RDC::OCC::ShapeUpgrade_FixSmallCurves^ FixSmallCurvesTool)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetFixSmallCurveTool(Handle(::ShapeUpgrade_FixSmallCurves)(FixSmallCurvesTool->NativeInstance));
}

RDC::OCC::ShapeUpgrade_FixSmallCurves^ RDC::OCC::ShapeUpgrade_WireDivide::GetFixSmallCurveTool()
{
	Handle(::ShapeUpgrade_FixSmallCurves) _result = ((::ShapeUpgrade_WireDivide*)_NativeInstance)->GetFixSmallCurveTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeUpgrade_FixSmallCurves::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeUpgrade_WireDivide^ RDC::OCC::ShapeUpgrade_WireDivide::CreateDowncasted(::ShapeUpgrade_WireDivide* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_WireDivide(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FaceDivide
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_FaceDivide::ShapeUpgrade_FaceDivide()
	: RDC::OCC::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FaceDivide();
}

RDC::OCC::ShapeUpgrade_FaceDivide::ShapeUpgrade_FaceDivide(RDC::OCC::TopoDS_Face^ F)
	: RDC::OCC::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FaceDivide(*(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_FaceDivide::Init(RDC::OCC::TopoDS_Face^ F)
{
	((::ShapeUpgrade_FaceDivide*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_FaceDivide::SetSurfaceSegmentMode(bool Segment)
{
	((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SetSurfaceSegmentMode(Segment);
}

bool RDC::OCC::ShapeUpgrade_FaceDivide::Perform(double theArea)
{
	bool _result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->Perform(theArea);
	return _result;
}

bool RDC::OCC::ShapeUpgrade_FaceDivide::Perform()
{
	bool _result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->Perform(0.);
	return _result;
}

bool RDC::OCC::ShapeUpgrade_FaceDivide::SplitSurface(double theArea)
{
	bool _result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SplitSurface(theArea);
	return _result;
}

bool RDC::OCC::ShapeUpgrade_FaceDivide::SplitSurface()
{
	bool _result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SplitSurface(0.);
	return _result;
}

bool RDC::OCC::ShapeUpgrade_FaceDivide::SplitCurves()
{
	bool _result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SplitCurves();
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeUpgrade_FaceDivide::Result()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->Result();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::ShapeUpgrade_FaceDivide::SetSplitSurfaceTool(RDC::OCC::ShapeUpgrade_SplitSurface^ splitSurfaceTool)
{
	((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SetSplitSurfaceTool(Handle(::ShapeUpgrade_SplitSurface)(splitSurfaceTool->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_FaceDivide::SetWireDivideTool(RDC::OCC::ShapeUpgrade_WireDivide^ wireDivideTool)
{
	((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SetWireDivideTool(Handle(::ShapeUpgrade_WireDivide)(wireDivideTool->NativeInstance));
}

RDC::OCC::ShapeUpgrade_SplitSurface^ RDC::OCC::ShapeUpgrade_FaceDivide::GetSplitSurfaceTool()
{
	Handle(::ShapeUpgrade_SplitSurface) _result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->GetSplitSurfaceTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeUpgrade_SplitSurface::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeUpgrade_WireDivide^ RDC::OCC::ShapeUpgrade_FaceDivide::GetWireDivideTool()
{
	Handle(::ShapeUpgrade_WireDivide) _result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->GetWireDivideTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeUpgrade_WireDivide::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeUpgrade_FaceDivide^ RDC::OCC::ShapeUpgrade_FaceDivide::CreateDowncasted(::ShapeUpgrade_FaceDivide* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_ClosedFaceDivide)))
		return RDC::OCC::ShapeUpgrade_ClosedFaceDivide::CreateDowncasted((::ShapeUpgrade_ClosedFaceDivide*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_FaceDivideArea)))
		return RDC::OCC::ShapeUpgrade_FaceDivideArea::CreateDowncasted((::ShapeUpgrade_FaceDivideArea*)instance);

	return gcnew RDC::OCC::ShapeUpgrade_FaceDivide(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ClosedFaceDivide
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ClosedFaceDivide::ShapeUpgrade_ClosedFaceDivide()
	: RDC::OCC::ShapeUpgrade_FaceDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ClosedFaceDivide();
}

RDC::OCC::ShapeUpgrade_ClosedFaceDivide::ShapeUpgrade_ClosedFaceDivide(RDC::OCC::TopoDS_Face^ F)
	: RDC::OCC::ShapeUpgrade_FaceDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ClosedFaceDivide(*(::TopoDS_Face*)F->NativeInstance);
}

bool RDC::OCC::ShapeUpgrade_ClosedFaceDivide::SplitSurface(double theArea)
{
	bool _result = ((::ShapeUpgrade_ClosedFaceDivide*)_NativeInstance)->SplitSurface(theArea);
	return _result;
}

bool RDC::OCC::ShapeUpgrade_ClosedFaceDivide::SplitSurface()
{
	bool _result = ((::ShapeUpgrade_ClosedFaceDivide*)_NativeInstance)->SplitSurface(0.);
	return _result;
}

void RDC::OCC::ShapeUpgrade_ClosedFaceDivide::SetNbSplitPoints(int num)
{
	((::ShapeUpgrade_ClosedFaceDivide*)_NativeInstance)->SetNbSplitPoints(num);
}

int RDC::OCC::ShapeUpgrade_ClosedFaceDivide::GetNbSplitPoints()
{
	int _result = ((::ShapeUpgrade_ClosedFaceDivide*)_NativeInstance)->GetNbSplitPoints();
	return _result;
}

RDC::OCC::ShapeUpgrade_ClosedFaceDivide^ RDC::OCC::ShapeUpgrade_ClosedFaceDivide::CreateDowncasted(::ShapeUpgrade_ClosedFaceDivide* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_ClosedFaceDivide(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve3d
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_SplitCurve3d::ShapeUpgrade_SplitCurve3d()
	: RDC::OCC::ShapeUpgrade_SplitCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve3d();
}

void RDC::OCC::ShapeUpgrade_SplitCurve3d::Init(RDC::OCC::Geom_Curve^ C)
{
	((::ShapeUpgrade_SplitCurve3d*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_SplitCurve3d::Init(RDC::OCC::Geom_Curve^ C, double First, double Last)
{
	((::ShapeUpgrade_SplitCurve3d*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), First, Last);
}

void RDC::OCC::ShapeUpgrade_SplitCurve3d::Build(bool Segment)
{
	((::ShapeUpgrade_SplitCurve3d*)_NativeInstance)->Build(Segment);
}

RDC::OCC::ShapeUpgrade_SplitCurve3d^ RDC::OCC::ShapeUpgrade_SplitCurve3d::CreateDowncasted(::ShapeUpgrade_SplitCurve3d* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_ConvertCurve3dToBezier)))
		return RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::CreateDowncasted((::ShapeUpgrade_ConvertCurve3dToBezier*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitCurve3dContinuity)))
		return RDC::OCC::ShapeUpgrade_SplitCurve3dContinuity::CreateDowncasted((::ShapeUpgrade_SplitCurve3dContinuity*)instance);

	return gcnew RDC::OCC::ShapeUpgrade_SplitCurve3d(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertCurve2dToBezier
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ConvertCurve2dToBezier::ShapeUpgrade_ConvertCurve2dToBezier()
	: RDC::OCC::ShapeUpgrade_SplitCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ConvertCurve2dToBezier();
}

void RDC::OCC::ShapeUpgrade_ConvertCurve2dToBezier::Compute()
{
	((::ShapeUpgrade_ConvertCurve2dToBezier*)_NativeInstance)->Compute();
}

void RDC::OCC::ShapeUpgrade_ConvertCurve2dToBezier::Build(bool Segment)
{
	((::ShapeUpgrade_ConvertCurve2dToBezier*)_NativeInstance)->Build(Segment);
}

RDC::OCC::TColStd_HSequenceOfReal^ RDC::OCC::ShapeUpgrade_ConvertCurve2dToBezier::SplitParams()
{
	Handle(::TColStd_HSequenceOfReal) _result = ((::ShapeUpgrade_ConvertCurve2dToBezier*)_NativeInstance)->SplitParams();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HSequenceOfReal::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeUpgrade_ConvertCurve2dToBezier^ RDC::OCC::ShapeUpgrade_ConvertCurve2dToBezier::CreateDowncasted(::ShapeUpgrade_ConvertCurve2dToBezier* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_ConvertCurve2dToBezier(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertCurve3dToBezier
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::ShapeUpgrade_ConvertCurve3dToBezier()
	: RDC::OCC::ShapeUpgrade_SplitCurve3d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ConvertCurve3dToBezier();
}

void RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::SetLineMode(bool mode)
{
	((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->SetLineMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::GetLineMode()
{
	bool _result = ((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->GetLineMode();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::SetCircleMode(bool mode)
{
	((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->SetCircleMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::GetCircleMode()
{
	bool _result = ((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->GetCircleMode();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::SetConicMode(bool mode)
{
	((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->SetConicMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::GetConicMode()
{
	bool _result = ((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->GetConicMode();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::Compute()
{
	((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->Compute();
}

void RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::Build(bool Segment)
{
	((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->Build(Segment);
}

RDC::OCC::TColStd_HSequenceOfReal^ RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::SplitParams()
{
	Handle(::TColStd_HSequenceOfReal) _result = ((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->SplitParams();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HSequenceOfReal::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier^ RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier::CreateDowncasted(::ShapeUpgrade_ConvertCurve3dToBezier* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_ConvertCurve3dToBezier(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertSurfaceToBezierBasis
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::ShapeUpgrade_ConvertSurfaceToBezierBasis()
	: RDC::OCC::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ConvertSurfaceToBezierBasis();
}

void RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::Build(bool Segment)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->Build(Segment);
}

void RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::Compute(bool Segment)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->Compute(Segment);
}

void RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::SetPlaneMode(bool mode)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->SetPlaneMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::GetPlaneMode()
{
	bool _result = ((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->GetPlaneMode();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::SetRevolutionMode(bool mode)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->SetRevolutionMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::GetRevolutionMode()
{
	bool _result = ((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->GetRevolutionMode();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::SetExtrusionMode(bool mode)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->SetExtrusionMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::GetExtrusionMode()
{
	bool _result = ((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->GetExtrusionMode();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::SetBSplineMode(bool mode)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->SetBSplineMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::GetBSplineMode()
{
	bool _result = ((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->GetBSplineMode();
	return _result;
}

RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis^ RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis::CreateDowncasted(::ShapeUpgrade_ConvertSurfaceToBezierBasis* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_ConvertSurfaceToBezierBasis(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FaceDivideArea
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_FaceDivideArea::ShapeUpgrade_FaceDivideArea()
	: RDC::OCC::ShapeUpgrade_FaceDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FaceDivideArea();
}

RDC::OCC::ShapeUpgrade_FaceDivideArea::ShapeUpgrade_FaceDivideArea(RDC::OCC::TopoDS_Face^ F)
	: RDC::OCC::ShapeUpgrade_FaceDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FaceDivideArea(*(::TopoDS_Face*)F->NativeInstance);
}

bool RDC::OCC::ShapeUpgrade_FaceDivideArea::Perform(double theArea)
{
	bool _result = ((::ShapeUpgrade_FaceDivideArea*)_NativeInstance)->Perform(theArea);
	return _result;
}

bool RDC::OCC::ShapeUpgrade_FaceDivideArea::Perform()
{
	bool _result = ((::ShapeUpgrade_FaceDivideArea*)_NativeInstance)->Perform(0.);
	return _result;
}

void RDC::OCC::ShapeUpgrade_FaceDivideArea::SetNumbersUVSplits(int theNbUsplits, int theNbVsplits)
{
	((::ShapeUpgrade_FaceDivideArea*)_NativeInstance)->SetNumbersUVSplits(theNbUsplits, theNbVsplits);
}

void RDC::OCC::ShapeUpgrade_FaceDivideArea::SetSplittingByNumber(bool theIsSplittingByNumber)
{
	((::ShapeUpgrade_FaceDivideArea*)_NativeInstance)->SetSplittingByNumber(theIsSplittingByNumber);
}

RDC::OCC::ShapeUpgrade_FaceDivideArea^ RDC::OCC::ShapeUpgrade_FaceDivideArea::CreateDowncasted(::ShapeUpgrade_FaceDivideArea* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_FaceDivideArea(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FixSmallCurves
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_FixSmallCurves::ShapeUpgrade_FixSmallCurves()
	: RDC::OCC::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FixSmallCurves();
}

void RDC::OCC::ShapeUpgrade_FixSmallCurves::Init(RDC::OCC::TopoDS_Edge^ theEdge, RDC::OCC::TopoDS_Face^ theFace)
{
	((::ShapeUpgrade_FixSmallCurves*)_NativeInstance)->Init(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
}

bool RDC::OCC::ShapeUpgrade_FixSmallCurves::Approx(RDC::OCC::Geom_Curve^ Curve3d, RDC::OCC::Geom2d_Curve^ Curve2d, RDC::OCC::Geom2d_Curve^ Curve2dR, double% First, double% Last)
{
	Handle(::Geom_Curve) h_Curve3d = Curve3d->NativeInstance;
	Handle(::Geom2d_Curve) h_Curve2d = Curve2d->NativeInstance;
	Handle(::Geom2d_Curve) h_Curve2dR = Curve2dR->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	bool _result = ((::ShapeUpgrade_FixSmallCurves*)_NativeInstance)->Approx(h_Curve3d, h_Curve2d, h_Curve2dR, *(double*)pp_First, *(double*)pp_Last);
	Curve3d->NativeInstance = h_Curve3d.get();
	Curve2d->NativeInstance = h_Curve2d.get();
	Curve2dR->NativeInstance = h_Curve2dR.get();
	return _result;
}

void RDC::OCC::ShapeUpgrade_FixSmallCurves::SetSplitCurve3dTool(RDC::OCC::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool)
{
	((::ShapeUpgrade_FixSmallCurves*)_NativeInstance)->SetSplitCurve3dTool(Handle(::ShapeUpgrade_SplitCurve3d)(splitCurve3dTool->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_FixSmallCurves::SetSplitCurve2dTool(RDC::OCC::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool)
{
	((::ShapeUpgrade_FixSmallCurves*)_NativeInstance)->SetSplitCurve2dTool(Handle(::ShapeUpgrade_SplitCurve2d)(splitCurve2dTool->NativeInstance));
}

RDC::OCC::ShapeUpgrade_FixSmallCurves^ RDC::OCC::ShapeUpgrade_FixSmallCurves::CreateDowncasted(::ShapeUpgrade_FixSmallCurves* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_FixSmallBezierCurves)))
		return RDC::OCC::ShapeUpgrade_FixSmallBezierCurves::CreateDowncasted((::ShapeUpgrade_FixSmallBezierCurves*)instance);

	return gcnew RDC::OCC::ShapeUpgrade_FixSmallCurves(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FixSmallBezierCurves
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_FixSmallBezierCurves::ShapeUpgrade_FixSmallBezierCurves()
	: RDC::OCC::ShapeUpgrade_FixSmallCurves(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FixSmallBezierCurves();
}

bool RDC::OCC::ShapeUpgrade_FixSmallBezierCurves::Approx(RDC::OCC::Geom_Curve^ Curve3d, RDC::OCC::Geom2d_Curve^ Curve2d, RDC::OCC::Geom2d_Curve^ Curve2dR, double% First, double% Last)
{
	Handle(::Geom_Curve) h_Curve3d = Curve3d->NativeInstance;
	Handle(::Geom2d_Curve) h_Curve2d = Curve2d->NativeInstance;
	Handle(::Geom2d_Curve) h_Curve2dR = Curve2dR->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	bool _result = ((::ShapeUpgrade_FixSmallBezierCurves*)_NativeInstance)->Approx(h_Curve3d, h_Curve2d, h_Curve2dR, *(double*)pp_First, *(double*)pp_Last);
	Curve3d->NativeInstance = h_Curve3d.get();
	Curve2d->NativeInstance = h_Curve2d.get();
	Curve2dR->NativeInstance = h_Curve2dR.get();
	return _result;
}

RDC::OCC::ShapeUpgrade_FixSmallBezierCurves^ RDC::OCC::ShapeUpgrade_FixSmallBezierCurves::CreateDowncasted(::ShapeUpgrade_FixSmallBezierCurves* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_FixSmallBezierCurves(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_RemoveInternalWires
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_RemoveInternalWires::ShapeUpgrade_RemoveInternalWires()
	: RDC::OCC::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_RemoveInternalWires();
}

RDC::OCC::ShapeUpgrade_RemoveInternalWires::ShapeUpgrade_RemoveInternalWires(RDC::OCC::TopoDS_Shape^ theShape)
	: RDC::OCC::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_RemoveInternalWires(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_RemoveInternalWires::Init(RDC::OCC::TopoDS_Shape^ theShape)
{
	((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->Init(*(::TopoDS_Shape*)theShape->NativeInstance);
}

bool RDC::OCC::ShapeUpgrade_RemoveInternalWires::Perform()
{
	bool _result = ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->Perform();
	return _result;
}

bool RDC::OCC::ShapeUpgrade_RemoveInternalWires::Perform(RDC::OCC::TopTools_SequenceOfShape^ theSeqShapes)
{
	bool _result = ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->Perform(*(::TopTools_SequenceOfShape*)theSeqShapes->NativeInstance);
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeUpgrade_RemoveInternalWires::GetResult()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->GetResult();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_SequenceOfShape^ RDC::OCC::ShapeUpgrade_RemoveInternalWires::RemovedFaces()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = (::TopTools_SequenceOfShape)((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->RemovedFaces();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_SequenceOfShape(_result);
}

RDC::OCC::TopTools_SequenceOfShape^ RDC::OCC::ShapeUpgrade_RemoveInternalWires::RemovedWires()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = (::TopTools_SequenceOfShape)((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->RemovedWires();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_SequenceOfShape(_result);
}

RDC::OCC::ShapeUpgrade_RemoveInternalWires^ RDC::OCC::ShapeUpgrade_RemoveInternalWires::CreateDowncasted(::ShapeUpgrade_RemoveInternalWires* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_RemoveInternalWires(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_RemoveLocations
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_RemoveLocations::ShapeUpgrade_RemoveLocations()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_RemoveLocations();
}

bool RDC::OCC::ShapeUpgrade_RemoveLocations::Remove(RDC::OCC::TopoDS_Shape^ theShape)
{
	bool _result = ((::ShapeUpgrade_RemoveLocations*)_NativeInstance)->Remove(*(::TopoDS_Shape*)theShape->NativeInstance);
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeUpgrade_RemoveLocations::GetResult()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_RemoveLocations*)_NativeInstance)->GetResult();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::ShapeUpgrade_RemoveLocations::SetRemoveLevel(RDC::OCC::TopAbs_ShapeEnum theLevel)
{
	((::ShapeUpgrade_RemoveLocations*)_NativeInstance)->SetRemoveLevel((::TopAbs_ShapeEnum)theLevel);
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::ShapeUpgrade_RemoveLocations::RemoveLevel()
{
	::TopAbs_ShapeEnum _result = ((::ShapeUpgrade_RemoveLocations*)_NativeInstance)->RemoveLevel();
	return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeUpgrade_RemoveLocations::ModifiedShape(RDC::OCC::TopoDS_Shape^ theInitShape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_RemoveLocations*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)theInitShape->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::ShapeUpgrade_RemoveLocations^ RDC::OCC::ShapeUpgrade_RemoveLocations::CreateDowncasted(::ShapeUpgrade_RemoveLocations* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_RemoveLocations(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivide
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ShapeDivide::ShapeUpgrade_ShapeDivide()
	: RDC::OCC::BaseClass<::ShapeUpgrade_ShapeDivide>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivide();
}

RDC::OCC::ShapeUpgrade_ShapeDivide::ShapeUpgrade_ShapeDivide(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::BaseClass<::ShapeUpgrade_ShapeDivide>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivide(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_ShapeDivide::Init(RDC::OCC::TopoDS_Shape^ S)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_ShapeDivide::SetPrecision(double Prec)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetPrecision(Prec);
}

void RDC::OCC::ShapeUpgrade_ShapeDivide::SetMaxTolerance(double maxtol)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetMaxTolerance(maxtol);
}

void RDC::OCC::ShapeUpgrade_ShapeDivide::SetMinTolerance(double mintol)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetMinTolerance(mintol);
}

void RDC::OCC::ShapeUpgrade_ShapeDivide::SetSurfaceSegmentMode(bool Segment)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetSurfaceSegmentMode(Segment);
}

bool RDC::OCC::ShapeUpgrade_ShapeDivide::Perform(bool newContext)
{
	bool _result = ((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->Perform(newContext);
	return _result;
}

bool RDC::OCC::ShapeUpgrade_ShapeDivide::Perform()
{
	bool _result = ((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->Perform(true);
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeUpgrade_ShapeDivide::Result()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->Result();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::ShapeBuild_ReShape^ RDC::OCC::ShapeUpgrade_ShapeDivide::GetContext()
{
	Handle(::ShapeBuild_ReShape) _result = ((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->GetContext();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeBuild_ReShape::CreateDowncasted(_result.get());
}

void RDC::OCC::ShapeUpgrade_ShapeDivide::SetContext(RDC::OCC::ShapeBuild_ReShape^ context)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetContext(Handle(::ShapeBuild_ReShape)(context->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_ShapeDivide::SetSplitFaceTool(RDC::OCC::ShapeUpgrade_FaceDivide^ splitFaceTool)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetSplitFaceTool(Handle(::ShapeUpgrade_FaceDivide)(splitFaceTool->NativeInstance));
}

void RDC::OCC::ShapeUpgrade_ShapeDivide::SetEdgeMode(int aEdgeMode)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetEdgeMode(aEdgeMode);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeConvertToBezier
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::ShapeUpgrade_ShapeConvertToBezier()
	: RDC::OCC::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeConvertToBezier();
}

RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::ShapeUpgrade_ShapeConvertToBezier(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeConvertToBezier(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Set2dConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Set2dConversion(mode);
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Get2dConversion()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Get2dConversion();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Set3dConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Set3dConversion(mode);
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Get3dConversion()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Get3dConversion();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::SetSurfaceConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->SetSurfaceConversion(mode);
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::GetSurfaceConversion()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->GetSurfaceConversion();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Set3dLineConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Set3dLineConversion(mode);
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Get3dLineConversion()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Get3dLineConversion();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Set3dCircleConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Set3dCircleConversion(mode);
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Get3dCircleConversion()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Get3dCircleConversion();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Set3dConicConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Set3dConicConversion(mode);
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Get3dConicConversion()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Get3dConicConversion();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::SetPlaneMode(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->SetPlaneMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::GetPlaneMode()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->GetPlaneMode();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::SetRevolutionMode(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->SetRevolutionMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::GetRevolutionMode()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->GetRevolutionMode();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::SetExtrusionMode(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->SetExtrusionMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::GetExtrusionMode()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->GetExtrusionMode();
	return _result;
}

void RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::SetBSplineMode(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->SetBSplineMode(mode);
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::GetBSplineMode()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->GetBSplineMode();
	return _result;
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Perform(bool newContext)
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Perform(newContext);
	return _result;
}

bool RDC::OCC::ShapeUpgrade_ShapeConvertToBezier::Perform()
{
	bool _result = ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Perform(true);
	return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideAngle
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ShapeDivideAngle::ShapeUpgrade_ShapeDivideAngle(double MaxAngle)
	: RDC::OCC::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideAngle(MaxAngle);
}

RDC::OCC::ShapeUpgrade_ShapeDivideAngle::ShapeUpgrade_ShapeDivideAngle(double MaxAngle, RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideAngle(MaxAngle, *(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideAngle::InitTool(double MaxAngle)
{
	((::ShapeUpgrade_ShapeDivideAngle*)_NativeInstance)->InitTool(MaxAngle);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideAngle::SetMaxAngle(double MaxAngle)
{
	((::ShapeUpgrade_ShapeDivideAngle*)_NativeInstance)->SetMaxAngle(MaxAngle);
}

double RDC::OCC::ShapeUpgrade_ShapeDivideAngle::MaxAngle()
{
	double _result = ((::ShapeUpgrade_ShapeDivideAngle*)_NativeInstance)->MaxAngle();
	return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideArea
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ShapeDivideArea::ShapeUpgrade_ShapeDivideArea()
	: RDC::OCC::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideArea();
}

RDC::OCC::ShapeUpgrade_ShapeDivideArea::ShapeUpgrade_ShapeDivideArea(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideArea(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideArea::SetNumbersUVSplits(int theNbUsplits, int theNbVsplits)
{
	((::ShapeUpgrade_ShapeDivideArea*)_NativeInstance)->SetNumbersUVSplits(theNbUsplits, theNbVsplits);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideArea::SetSplittingByNumber(bool theIsSplittingByNumber)
{
	((::ShapeUpgrade_ShapeDivideArea*)_NativeInstance)->SetSplittingByNumber(theIsSplittingByNumber);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideClosed
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ShapeDivideClosed::ShapeUpgrade_ShapeDivideClosed(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideClosed(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideClosed::SetNbSplitPoints(int num)
{
	((::ShapeUpgrade_ShapeDivideClosed*)_NativeInstance)->SetNbSplitPoints(num);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideClosedEdges
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ShapeDivideClosedEdges::ShapeUpgrade_ShapeDivideClosedEdges(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideClosedEdges(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideClosedEdges::SetNbSplitPoints(int num)
{
	((::ShapeUpgrade_ShapeDivideClosedEdges*)_NativeInstance)->SetNbSplitPoints(num);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideContinuity
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ShapeDivideContinuity::ShapeUpgrade_ShapeDivideContinuity()
	: RDC::OCC::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideContinuity();
}

RDC::OCC::ShapeUpgrade_ShapeDivideContinuity::ShapeUpgrade_ShapeDivideContinuity(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideContinuity(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideContinuity::SetTolerance(double Tol)
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetTolerance(Tol);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideContinuity::SetTolerance2d(double Tol)
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetTolerance2d(Tol);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideContinuity::SetBoundaryCriterion(RDC::OCC::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetBoundaryCriterion((::GeomAbs_Shape)Criterion);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideContinuity::SetBoundaryCriterion()
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetBoundaryCriterion(GeomAbs_C1);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideContinuity::SetPCurveCriterion(RDC::OCC::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetPCurveCriterion((::GeomAbs_Shape)Criterion);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideContinuity::SetPCurveCriterion()
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetPCurveCriterion(GeomAbs_C1);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideContinuity::SetSurfaceCriterion(RDC::OCC::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetSurfaceCriterion((::GeomAbs_Shape)Criterion);
}

void RDC::OCC::ShapeUpgrade_ShapeDivideContinuity::SetSurfaceCriterion()
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetSurfaceCriterion(GeomAbs_C1);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShellSewing
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_ShellSewing::ShapeUpgrade_ShellSewing()
	: RDC::OCC::BaseClass<::ShapeUpgrade_ShellSewing>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShellSewing();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeUpgrade_ShellSewing::ApplySewing(RDC::OCC::TopoDS_Shape^ shape, double tol)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_ShellSewing*)_NativeInstance)->ApplySewing(*(::TopoDS_Shape*)shape->NativeInstance, tol);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeUpgrade_ShellSewing::ApplySewing(RDC::OCC::TopoDS_Shape^ shape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_ShellSewing*)_NativeInstance)->ApplySewing(*(::TopoDS_Shape*)shape->NativeInstance, 0.);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve2dContinuity
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_SplitCurve2dContinuity::ShapeUpgrade_SplitCurve2dContinuity()
	: RDC::OCC::ShapeUpgrade_SplitCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve2dContinuity();
}

void RDC::OCC::ShapeUpgrade_SplitCurve2dContinuity::SetCriterion(RDC::OCC::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_SplitCurve2dContinuity*)_NativeInstance)->SetCriterion((::GeomAbs_Shape)Criterion);
}

void RDC::OCC::ShapeUpgrade_SplitCurve2dContinuity::SetTolerance(double Tol)
{
	((::ShapeUpgrade_SplitCurve2dContinuity*)_NativeInstance)->SetTolerance(Tol);
}

void RDC::OCC::ShapeUpgrade_SplitCurve2dContinuity::Compute()
{
	((::ShapeUpgrade_SplitCurve2dContinuity*)_NativeInstance)->Compute();
}

RDC::OCC::ShapeUpgrade_SplitCurve2dContinuity^ RDC::OCC::ShapeUpgrade_SplitCurve2dContinuity::CreateDowncasted(::ShapeUpgrade_SplitCurve2dContinuity* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_SplitCurve2dContinuity(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve3dContinuity
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_SplitCurve3dContinuity::ShapeUpgrade_SplitCurve3dContinuity()
	: RDC::OCC::ShapeUpgrade_SplitCurve3d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve3dContinuity();
}

void RDC::OCC::ShapeUpgrade_SplitCurve3dContinuity::SetCriterion(RDC::OCC::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_SplitCurve3dContinuity*)_NativeInstance)->SetCriterion((::GeomAbs_Shape)Criterion);
}

void RDC::OCC::ShapeUpgrade_SplitCurve3dContinuity::SetTolerance(double Tol)
{
	((::ShapeUpgrade_SplitCurve3dContinuity*)_NativeInstance)->SetTolerance(Tol);
}

void RDC::OCC::ShapeUpgrade_SplitCurve3dContinuity::Compute()
{
	((::ShapeUpgrade_SplitCurve3dContinuity*)_NativeInstance)->Compute();
}

RDC::OCC::Geom_Curve^ RDC::OCC::ShapeUpgrade_SplitCurve3dContinuity::GetCurve()
{
	Handle(::Geom_Curve) _result = ((::ShapeUpgrade_SplitCurve3dContinuity*)_NativeInstance)->GetCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeUpgrade_SplitCurve3dContinuity^ RDC::OCC::ShapeUpgrade_SplitCurve3dContinuity::CreateDowncasted(::ShapeUpgrade_SplitCurve3dContinuity* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_SplitCurve3dContinuity(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceAngle
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_SplitSurfaceAngle::ShapeUpgrade_SplitSurfaceAngle(double MaxAngle)
	: RDC::OCC::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurfaceAngle(MaxAngle);
}

void RDC::OCC::ShapeUpgrade_SplitSurfaceAngle::SetMaxAngle(double MaxAngle)
{
	((::ShapeUpgrade_SplitSurfaceAngle*)_NativeInstance)->SetMaxAngle(MaxAngle);
}

double RDC::OCC::ShapeUpgrade_SplitSurfaceAngle::MaxAngle()
{
	double _result = ((::ShapeUpgrade_SplitSurfaceAngle*)_NativeInstance)->MaxAngle();
	return _result;
}

void RDC::OCC::ShapeUpgrade_SplitSurfaceAngle::Compute(bool Segment)
{
	((::ShapeUpgrade_SplitSurfaceAngle*)_NativeInstance)->Compute(Segment);
}

RDC::OCC::ShapeUpgrade_SplitSurfaceAngle^ RDC::OCC::ShapeUpgrade_SplitSurfaceAngle::CreateDowncasted(::ShapeUpgrade_SplitSurfaceAngle* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_SplitSurfaceAngle(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceArea
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_SplitSurfaceArea::ShapeUpgrade_SplitSurfaceArea()
	: RDC::OCC::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurfaceArea();
}

void RDC::OCC::ShapeUpgrade_SplitSurfaceArea::SetSplittingIntoSquares(bool theIsSplittingIntoSquares)
{
	((::ShapeUpgrade_SplitSurfaceArea*)_NativeInstance)->SetSplittingIntoSquares(theIsSplittingIntoSquares);
}

void RDC::OCC::ShapeUpgrade_SplitSurfaceArea::SetNumbersUVSplits(int theNbUsplits, int theNbVsplits)
{
	((::ShapeUpgrade_SplitSurfaceArea*)_NativeInstance)->SetNumbersUVSplits(theNbUsplits, theNbVsplits);
}

void RDC::OCC::ShapeUpgrade_SplitSurfaceArea::Compute(bool Segment)
{
	((::ShapeUpgrade_SplitSurfaceArea*)_NativeInstance)->Compute(Segment);
}

void RDC::OCC::ShapeUpgrade_SplitSurfaceArea::Compute()
{
	((::ShapeUpgrade_SplitSurfaceArea*)_NativeInstance)->Compute(true);
}

RDC::OCC::ShapeUpgrade_SplitSurfaceArea^ RDC::OCC::ShapeUpgrade_SplitSurfaceArea::CreateDowncasted(::ShapeUpgrade_SplitSurfaceArea* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_SplitSurfaceArea(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceContinuity
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_SplitSurfaceContinuity::ShapeUpgrade_SplitSurfaceContinuity()
	: RDC::OCC::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurfaceContinuity();
}

void RDC::OCC::ShapeUpgrade_SplitSurfaceContinuity::SetCriterion(RDC::OCC::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_SplitSurfaceContinuity*)_NativeInstance)->SetCriterion((::GeomAbs_Shape)Criterion);
}

void RDC::OCC::ShapeUpgrade_SplitSurfaceContinuity::SetTolerance(double Tol)
{
	((::ShapeUpgrade_SplitSurfaceContinuity*)_NativeInstance)->SetTolerance(Tol);
}

void RDC::OCC::ShapeUpgrade_SplitSurfaceContinuity::Compute(bool Segment)
{
	((::ShapeUpgrade_SplitSurfaceContinuity*)_NativeInstance)->Compute(Segment);
}

RDC::OCC::ShapeUpgrade_SplitSurfaceContinuity^ RDC::OCC::ShapeUpgrade_SplitSurfaceContinuity::CreateDowncasted(::ShapeUpgrade_SplitSurfaceContinuity* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_SplitSurfaceContinuity(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_UnifySameDomain
//---------------------------------------------------------------------

RDC::OCC::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain();
}

RDC::OCC::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain(RDC::OCC::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces, bool ConcatBSplines)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, UnifyFaces, ConcatBSplines);
}

RDC::OCC::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain(RDC::OCC::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, UnifyFaces, false);
}

RDC::OCC::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain(RDC::OCC::TopoDS_Shape^ aShape, bool UnifyEdges)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, true, false);
}

RDC::OCC::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain(RDC::OCC::TopoDS_Shape^ aShape)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain(*(::TopoDS_Shape*)aShape->NativeInstance, true, true, false);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::Initialize(RDC::OCC::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces, bool ConcatBSplines)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, UnifyFaces, ConcatBSplines);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::Initialize(RDC::OCC::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, UnifyFaces, false);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::Initialize(RDC::OCC::TopoDS_Shape^ aShape, bool UnifyEdges)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, true, false);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::Initialize(RDC::OCC::TopoDS_Shape^ aShape)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)aShape->NativeInstance, true, true, false);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::AllowInternalEdges(bool theValue)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->AllowInternalEdges(theValue);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::KeepShape(RDC::OCC::TopoDS_Shape^ theShape)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->KeepShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::KeepShapes(RDC::OCC::TopTools_MapOfShape^ theShapes)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->KeepShapes(*(::TopTools_MapOfShape*)theShapes->NativeInstance);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::SetSafeInputMode(bool theValue)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->SetSafeInputMode(theValue);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::SetLinearTolerance(double theValue)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->SetLinearTolerance(theValue);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::SetAngularTolerance(double theValue)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->SetAngularTolerance(theValue);
}

void RDC::OCC::ShapeUpgrade_UnifySameDomain::Build()
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Build();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeUpgrade_UnifySameDomain::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Shape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::BRepTools_History^ RDC::OCC::ShapeUpgrade_UnifySameDomain::History()
{
	Handle(::BRepTools_History) _result = ((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->History();
	return _result.IsNull() ? nullptr : RDC::OCC::BRepTools_History::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeUpgrade_UnifySameDomain^ RDC::OCC::ShapeUpgrade_UnifySameDomain::CreateDowncasted(::ShapeUpgrade_UnifySameDomain* instance)
{
	return gcnew RDC::OCC::ShapeUpgrade_UnifySameDomain(instance);
}


