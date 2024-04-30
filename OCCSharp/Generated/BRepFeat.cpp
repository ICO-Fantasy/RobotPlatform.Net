// Generated wrapper code for package BRepFeat

#include "OcctPCH.h"
#include "BRepFeat.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "TColgp.h"
#include "gp.h"
#include "Geom.h"
#include "Geom2dAdaptor.h"
#include "TopAbs.h"
#include "TopTools.h"
#include "Message.h"


//---------------------------------------------------------------------
//  Class  BRepFeat
//---------------------------------------------------------------------

RDC::OCC::BRepFeat::BRepFeat()
	: RDC::OCC::BaseClass<::BRepFeat>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat();
}

void RDC::OCC::BRepFeat::SampleEdges(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TColgp_SequenceOfPnt^ Pt)
{
	::BRepFeat::SampleEdges(*(::TopoDS_Shape*)S->NativeInstance, *(::TColgp_SequenceOfPnt*)Pt->NativeInstance);
}

void RDC::OCC::BRepFeat::Barycenter(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Pnt% Pt)
{
	pin_ptr<RDC::OCC::Pnt> pp_Pt = &Pt;
	::BRepFeat::Barycenter(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Pnt*)pp_Pt);
}

double RDC::OCC::BRepFeat::ParametricBarycenter(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Geom_Curve^ C)
{
	double _result = ::BRepFeat::ParametricBarycenter(*(::TopoDS_Shape*)S->NativeInstance, Handle(::Geom_Curve)(C->NativeInstance));
	return _result;
}

void RDC::OCC::BRepFeat::ParametricMinMax(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Geom_Curve^ C, double% prmin, double% prmax, double% prbmin, double% prbmax, bool% flag, bool Ori)
{
	pin_ptr<double> pp_prmin = &prmin;
	pin_ptr<double> pp_prmax = &prmax;
	pin_ptr<double> pp_prbmin = &prbmin;
	pin_ptr<double> pp_prbmax = &prbmax;
	pin_ptr<bool> pp_flag = &flag;
	::BRepFeat::ParametricMinMax(*(::TopoDS_Shape*)S->NativeInstance, Handle(::Geom_Curve)(C->NativeInstance), *(double*)pp_prmin, *(double*)pp_prmax, *(double*)pp_prbmin, *(double*)pp_prbmax, *(bool*)pp_flag, Ori);
}

void RDC::OCC::BRepFeat::ParametricMinMax(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Geom_Curve^ C, double% prmin, double% prmax, double% prbmin, double% prbmax, bool% flag)
{
	pin_ptr<double> pp_prmin = &prmin;
	pin_ptr<double> pp_prmax = &prmax;
	pin_ptr<double> pp_prbmin = &prbmin;
	pin_ptr<double> pp_prbmax = &prbmax;
	pin_ptr<bool> pp_flag = &flag;
	::BRepFeat::ParametricMinMax(*(::TopoDS_Shape*)S->NativeInstance, Handle(::Geom_Curve)(C->NativeInstance), *(double*)pp_prmin, *(double*)pp_prmax, *(double*)pp_prbmin, *(double*)pp_prbmax, *(bool*)pp_flag, false);
}

bool RDC::OCC::BRepFeat::IsInside(RDC::OCC::TopoDS_Face^ F1, RDC::OCC::TopoDS_Face^ F2)
{
	bool _result = ::BRepFeat::IsInside(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
	return _result;
}

void RDC::OCC::BRepFeat::FaceUntil(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopoDS_Face^ F)
{
	::BRepFeat::FaceUntil(*(::TopoDS_Shape*)S->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

RDC::OCC::TopoDS_Solid^ RDC::OCC::BRepFeat::Tool(RDC::OCC::TopoDS_Shape^ SRef, RDC::OCC::TopoDS_Face^ Fac, RDC::OCC::TopAbs_Orientation Orf)
{
	::TopoDS_Solid* _result = new ::TopoDS_Solid();
	*_result = ::BRepFeat::Tool(*(::TopoDS_Shape*)SRef->NativeInstance, *(::TopoDS_Face*)Fac->NativeInstance, (::TopAbs_Orientation)Orf);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Solid(_result);
}

System::IO::TextWriter^ RDC::OCC::BRepFeat::Print(RDC::OCC::BRepFeat_StatusError SE, System::IO::TextWriter^ S)
{
	throw gcnew System::NotImplementedException();
}



//---------------------------------------------------------------------
//  Class  BRepFeat_Builder
//---------------------------------------------------------------------

RDC::OCC::BRepFeat_Builder::BRepFeat_Builder()
	: RDC::OCC::BOPAlgo_BOP(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_Builder();
}

void RDC::OCC::BRepFeat_Builder::Clear()
{
	((::BRepFeat_Builder*)_NativeInstance)->Clear();
}

void RDC::OCC::BRepFeat_Builder::Init(RDC::OCC::TopoDS_Shape^ theShape)
{
	((::BRepFeat_Builder*)_NativeInstance)->Init(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void RDC::OCC::BRepFeat_Builder::Init(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::TopoDS_Shape^ theTool)
{
	((::BRepFeat_Builder*)_NativeInstance)->Init(*(::TopoDS_Shape*)theShape->NativeInstance, *(::TopoDS_Shape*)theTool->NativeInstance);
}

void RDC::OCC::BRepFeat_Builder::SetOperation(int theFuse)
{
	((::BRepFeat_Builder*)_NativeInstance)->SetOperation(theFuse);
}

void RDC::OCC::BRepFeat_Builder::SetOperation(int theFuse, bool theFlag)
{
	((::BRepFeat_Builder*)_NativeInstance)->SetOperation(theFuse, theFlag);
}

void RDC::OCC::BRepFeat_Builder::PartsOfTool(RDC::OCC::TopTools_ListOfShape^ theLT)
{
	((::BRepFeat_Builder*)_NativeInstance)->PartsOfTool(*(::TopTools_ListOfShape*)theLT->NativeInstance);
}

void RDC::OCC::BRepFeat_Builder::KeepParts(RDC::OCC::TopTools_ListOfShape^ theIm)
{
	((::BRepFeat_Builder*)_NativeInstance)->KeepParts(*(::TopTools_ListOfShape*)theIm->NativeInstance);
}

void RDC::OCC::BRepFeat_Builder::KeepPart(RDC::OCC::TopoDS_Shape^ theS)
{
	((::BRepFeat_Builder*)_NativeInstance)->KeepPart(*(::TopoDS_Shape*)theS->NativeInstance);
}

void RDC::OCC::BRepFeat_Builder::PerformResult(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepFeat_Builder*)_NativeInstance)->PerformResult(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepFeat_Builder::PerformResult()
{
	((::BRepFeat_Builder*)_NativeInstance)->PerformResult(::Message_ProgressRange());
}

void RDC::OCC::BRepFeat_Builder::RebuildFaces()
{
	((::BRepFeat_Builder*)_NativeInstance)->RebuildFaces();
}

void RDC::OCC::BRepFeat_Builder::RebuildEdge(RDC::OCC::TopoDS_Shape^ theE, RDC::OCC::TopoDS_Face^ theF, RDC::OCC::TopTools_MapOfShape^ theME, RDC::OCC::TopTools_ListOfShape^ aLEIm)
{
	((::BRepFeat_Builder*)_NativeInstance)->RebuildEdge(*(::TopoDS_Shape*)theE->NativeInstance, *(::TopoDS_Face*)theF->NativeInstance, *(::TopTools_MapOfShape*)theME->NativeInstance, *(::TopTools_ListOfShape*)aLEIm->NativeInstance);
}

void RDC::OCC::BRepFeat_Builder::CheckSolidImages()
{
	((::BRepFeat_Builder*)_NativeInstance)->CheckSolidImages();
}

void RDC::OCC::BRepFeat_Builder::FillRemoved()
{
	((::BRepFeat_Builder*)_NativeInstance)->FillRemoved();
}

void RDC::OCC::BRepFeat_Builder::FillRemoved(RDC::OCC::TopoDS_Shape^ theS, RDC::OCC::TopTools_MapOfShape^ theM)
{
	((::BRepFeat_Builder*)_NativeInstance)->FillRemoved(*(::TopoDS_Shape*)theS->NativeInstance, *(::TopTools_MapOfShape*)theM->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BRepFeat_Form
//---------------------------------------------------------------------

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_Form::Modified(RDC::OCC::TopoDS_Shape^ F)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->Modified(*(::TopoDS_Shape*)F->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_Form::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepFeat_Form::IsDeleted(RDC::OCC::TopoDS_Shape^ S)
{
	bool _result = ((::BRepFeat_Form*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
	return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_Form::FirstShape()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->FirstShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_Form::LastShape()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->LastShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_Form::NewEdges()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->NewEdges();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_Form::TgtEdges()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->TgtEdges();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

void RDC::OCC::BRepFeat_Form::BasisShapeValid()
{
	((::BRepFeat_Form*)_NativeInstance)->BasisShapeValid();
}

void RDC::OCC::BRepFeat_Form::GeneratedShapeValid()
{
	((::BRepFeat_Form*)_NativeInstance)->GeneratedShapeValid();
}

void RDC::OCC::BRepFeat_Form::ShapeFromValid()
{
	((::BRepFeat_Form*)_NativeInstance)->ShapeFromValid();
}

void RDC::OCC::BRepFeat_Form::ShapeUntilValid()
{
	((::BRepFeat_Form*)_NativeInstance)->ShapeUntilValid();
}

void RDC::OCC::BRepFeat_Form::GluedFacesValid()
{
	((::BRepFeat_Form*)_NativeInstance)->GluedFacesValid();
}

void RDC::OCC::BRepFeat_Form::SketchFaceValid()
{
	((::BRepFeat_Form*)_NativeInstance)->SketchFaceValid();
}

void RDC::OCC::BRepFeat_Form::PerfSelectionValid()
{
	((::BRepFeat_Form*)_NativeInstance)->PerfSelectionValid();
}

RDC::OCC::Geom_Curve^ RDC::OCC::BRepFeat_Form::BarycCurve()
{
	Handle(::Geom_Curve) _result = ((::BRepFeat_Form*)_NativeInstance)->BarycCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::BRepFeat_StatusError RDC::OCC::BRepFeat_Form::CurrentStatusError()
{
	::BRepFeat_StatusError _result = ((::BRepFeat_Form*)_NativeInstance)->CurrentStatusError();
	return (RDC::OCC::BRepFeat_StatusError)_result;
}



//---------------------------------------------------------------------
//  Class  BRepFeat_Gluer
//---------------------------------------------------------------------

RDC::OCC::BRepFeat_Gluer::BRepFeat_Gluer()
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_Gluer();
}

RDC::OCC::BRepFeat_Gluer::BRepFeat_Gluer(RDC::OCC::TopoDS_Shape^ Snew, RDC::OCC::TopoDS_Shape^ Sbase)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_Gluer(*(::TopoDS_Shape*)Snew->NativeInstance, *(::TopoDS_Shape*)Sbase->NativeInstance);
}

void RDC::OCC::BRepFeat_Gluer::Init(RDC::OCC::TopoDS_Shape^ Snew, RDC::OCC::TopoDS_Shape^ Sbase)
{
	((::BRepFeat_Gluer*)_NativeInstance)->Init(*(::TopoDS_Shape*)Snew->NativeInstance, *(::TopoDS_Shape*)Sbase->NativeInstance);
}

void RDC::OCC::BRepFeat_Gluer::Bind(RDC::OCC::TopoDS_Face^ Fnew, RDC::OCC::TopoDS_Face^ Fbase)
{
	((::BRepFeat_Gluer*)_NativeInstance)->Bind(*(::TopoDS_Face*)Fnew->NativeInstance, *(::TopoDS_Face*)Fbase->NativeInstance);
}

void RDC::OCC::BRepFeat_Gluer::Bind(RDC::OCC::TopoDS_Edge^ Enew, RDC::OCC::TopoDS_Edge^ Ebase)
{
	((::BRepFeat_Gluer*)_NativeInstance)->Bind(*(::TopoDS_Edge*)Enew->NativeInstance, *(::TopoDS_Edge*)Ebase->NativeInstance);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepFeat_Gluer::BasisShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepFeat_Gluer*)_NativeInstance)->BasisShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepFeat_Gluer::GluedShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepFeat_Gluer*)_NativeInstance)->GluedShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepFeat_Gluer::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepFeat_Gluer*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepFeat_Gluer::Build()
{
	((::BRepFeat_Gluer*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool RDC::OCC::BRepFeat_Gluer::IsDeleted(RDC::OCC::TopoDS_Shape^ F)
{
	bool _result = ((::BRepFeat_Gluer*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)F->NativeInstance);
	return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_Gluer::Modified(RDC::OCC::TopoDS_Shape^ F)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_Gluer*)_NativeInstance)->Modified(*(::TopoDS_Shape*)F->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakeCylindricalHole
//---------------------------------------------------------------------

RDC::OCC::BRepFeat_MakeCylindricalHole::BRepFeat_MakeCylindricalHole()
	: RDC::OCC::BRepFeat_Builder(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_MakeCylindricalHole();
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::Init(RDC::OCC::Ax1 Axis)
{
	pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Init(*(gp_Ax1*)pp_Axis);
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::Init(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Ax1 Axis)
{
	pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Ax1*)pp_Axis);
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::Perform(double Radius)
{
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Perform(Radius);
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::Perform(double Radius, double PFrom, double PTo, bool WithControl)
{
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Perform(Radius, PFrom, PTo, WithControl);
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::Perform(double Radius, double PFrom, double PTo)
{
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Perform(Radius, PFrom, PTo, true);
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::PerformThruNext(double Radius, bool WithControl)
{
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformThruNext(Radius, WithControl);
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::PerformThruNext(double Radius)
{
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformThruNext(Radius, true);
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::PerformUntilEnd(double Radius, bool WithControl)
{
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformUntilEnd(Radius, WithControl);
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::PerformUntilEnd(double Radius)
{
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformUntilEnd(Radius, true);
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::PerformBlind(double Radius, double Length, bool WithControl)
{
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformBlind(Radius, Length, WithControl);
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::PerformBlind(double Radius, double Length)
{
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformBlind(Radius, Length, true);
}

RDC::OCC::BRepFeat_Status RDC::OCC::BRepFeat_MakeCylindricalHole::Status()
{
	::BRepFeat_Status _result = ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Status();
	return (RDC::OCC::BRepFeat_Status)_result;
}

void RDC::OCC::BRepFeat_MakeCylindricalHole::Build()
{
	((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Build();
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakeDPrism
//---------------------------------------------------------------------

RDC::OCC::BRepFeat_MakeDPrism::BRepFeat_MakeDPrism(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Face^ Pbase, RDC::OCC::TopoDS_Face^ Skface, double Angle, int Fuse, bool Modify)
	: RDC::OCC::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_MakeDPrism(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Face*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, Angle, Fuse, Modify);
}

RDC::OCC::BRepFeat_MakeDPrism::BRepFeat_MakeDPrism()
	: RDC::OCC::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_MakeDPrism();
}

void RDC::OCC::BRepFeat_MakeDPrism::Init(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Face^ Pbase, RDC::OCC::TopoDS_Face^ Skface, double Angle, int Fuse, bool Modify)
{
	((::BRepFeat_MakeDPrism*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Face*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, Angle, Fuse, Modify);
}

void RDC::OCC::BRepFeat_MakeDPrism::Add(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ OnFace)
{
	((::BRepFeat_MakeDPrism*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void RDC::OCC::BRepFeat_MakeDPrism::Perform(double Height)
{
	((::BRepFeat_MakeDPrism*)_NativeInstance)->Perform(Height);
}

void RDC::OCC::BRepFeat_MakeDPrism::Perform(RDC::OCC::TopoDS_Shape^ Until)
{
	((::BRepFeat_MakeDPrism*)_NativeInstance)->Perform(*(::TopoDS_Shape*)Until->NativeInstance);
}

void RDC::OCC::BRepFeat_MakeDPrism::Perform(RDC::OCC::TopoDS_Shape^ From, RDC::OCC::TopoDS_Shape^ Until)
{
	((::BRepFeat_MakeDPrism*)_NativeInstance)->Perform(*(::TopoDS_Shape*)From->NativeInstance, *(::TopoDS_Shape*)Until->NativeInstance);
}

void RDC::OCC::BRepFeat_MakeDPrism::PerformUntilEnd()
{
	((::BRepFeat_MakeDPrism*)_NativeInstance)->PerformUntilEnd();
}

void RDC::OCC::BRepFeat_MakeDPrism::PerformFromEnd(RDC::OCC::TopoDS_Shape^ FUntil)
{
	((::BRepFeat_MakeDPrism*)_NativeInstance)->PerformFromEnd(*(::TopoDS_Shape*)FUntil->NativeInstance);
}

void RDC::OCC::BRepFeat_MakeDPrism::PerformThruAll()
{
	((::BRepFeat_MakeDPrism*)_NativeInstance)->PerformThruAll();
}

void RDC::OCC::BRepFeat_MakeDPrism::PerformUntilHeight(RDC::OCC::TopoDS_Shape^ Until, double Height)
{
	((::BRepFeat_MakeDPrism*)_NativeInstance)->PerformUntilHeight(*(::TopoDS_Shape*)Until->NativeInstance, Height);
}

RDC::OCC::Geom_Curve^ RDC::OCC::BRepFeat_MakeDPrism::BarycCurve()
{
	Handle(::Geom_Curve) _result = ((::BRepFeat_MakeDPrism*)_NativeInstance)->BarycCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::BRepFeat_MakeDPrism::BossEdges(int sig)
{
	((::BRepFeat_MakeDPrism*)_NativeInstance)->BossEdges(sig);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_MakeDPrism::TopEdges()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_MakeDPrism*)_NativeInstance)->TopEdges();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_MakeDPrism::LatEdges()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_MakeDPrism*)_NativeInstance)->LatEdges();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFeat_RibSlot
//---------------------------------------------------------------------

bool RDC::OCC::BRepFeat_RibSlot::IsDeleted(RDC::OCC::TopoDS_Shape^ F)
{
	bool _result = ((::BRepFeat_RibSlot*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)F->NativeInstance);
	return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_RibSlot::Modified(RDC::OCC::TopoDS_Shape^ F)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->Modified(*(::TopoDS_Shape*)F->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_RibSlot::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_RibSlot::FirstShape()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->FirstShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_RibSlot::LastShape()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->LastShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_RibSlot::FacesForDraft()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->FacesForDraft();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_RibSlot::NewEdges()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->NewEdges();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_RibSlot::TgtEdges()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->TgtEdges();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

double RDC::OCC::BRepFeat_RibSlot::IntPar(RDC::OCC::Geom_Curve^ C, RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	double _result = ::BRepFeat_RibSlot::IntPar(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Pnt*)pp_P);
	return _result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepFeat_RibSlot::ChoiceOfFaces(RDC::OCC::TopTools_ListOfShape^ faces, RDC::OCC::Geom_Curve^ cc, double par, double bnd, RDC::OCC::Geom_Plane^ Pln)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ::BRepFeat_RibSlot::ChoiceOfFaces(*(::TopTools_ListOfShape*)faces->NativeInstance, Handle(::Geom_Curve)(cc->NativeInstance), par, bnd, Handle(::Geom_Plane)(Pln->NativeInstance));
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::BRepFeat_StatusError RDC::OCC::BRepFeat_RibSlot::CurrentStatusError()
{
	::BRepFeat_StatusError _result = ((::BRepFeat_RibSlot*)_NativeInstance)->CurrentStatusError();
	return (RDC::OCC::BRepFeat_StatusError)_result;
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakeLinearForm
//---------------------------------------------------------------------

RDC::OCC::BRepFeat_MakeLinearForm::BRepFeat_MakeLinearForm()
	: RDC::OCC::BRepFeat_RibSlot(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_MakeLinearForm();
}

RDC::OCC::BRepFeat_MakeLinearForm::BRepFeat_MakeLinearForm(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Wire^ W, RDC::OCC::Geom_Plane^ P, RDC::OCC::Vec Direction, RDC::OCC::Vec Direction1, int Fuse, bool Modify)
	: RDC::OCC::BRepFeat_RibSlot(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Vec> pp_Direction = &Direction;
	pin_ptr<RDC::OCC::Vec> pp_Direction1 = &Direction1;
	_NativeInstance = new ::BRepFeat_MakeLinearForm(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Handle(::Geom_Plane)(P->NativeInstance), *(gp_Vec*)pp_Direction, *(gp_Vec*)pp_Direction1, Fuse, Modify);
}

void RDC::OCC::BRepFeat_MakeLinearForm::Init(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Wire^ W, RDC::OCC::Geom_Plane^ P, RDC::OCC::Vec Direction, RDC::OCC::Vec Direction1, int Fuse, bool Modify)
{
	pin_ptr<RDC::OCC::Vec> pp_Direction = &Direction;
	pin_ptr<RDC::OCC::Vec> pp_Direction1 = &Direction1;
	((::BRepFeat_MakeLinearForm*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Handle(::Geom_Plane)(P->NativeInstance), *(gp_Vec*)pp_Direction, *(gp_Vec*)pp_Direction1, Fuse, Modify);
}

void RDC::OCC::BRepFeat_MakeLinearForm::Add(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ OnFace)
{
	((::BRepFeat_MakeLinearForm*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void RDC::OCC::BRepFeat_MakeLinearForm::Perform()
{
	((::BRepFeat_MakeLinearForm*)_NativeInstance)->Perform();
}

bool RDC::OCC::BRepFeat_MakeLinearForm::Propagate(RDC::OCC::TopTools_ListOfShape^ L, RDC::OCC::TopoDS_Face^ F, RDC::OCC::Pnt FPoint, RDC::OCC::Pnt LPoint, bool% falseside)
{
	pin_ptr<RDC::OCC::Pnt> pp_FPoint = &FPoint;
	pin_ptr<RDC::OCC::Pnt> pp_LPoint = &LPoint;
	pin_ptr<bool> pp_falseside = &falseside;
	bool _result = ((::BRepFeat_MakeLinearForm*)_NativeInstance)->Propagate(*(::TopTools_ListOfShape*)L->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_FPoint, *(gp_Pnt*)pp_LPoint, *(bool*)pp_falseside);
	return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakePipe
//---------------------------------------------------------------------

RDC::OCC::BRepFeat_MakePipe::BRepFeat_MakePipe()
	: RDC::OCC::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_MakePipe();
}

RDC::OCC::BRepFeat_MakePipe::BRepFeat_MakePipe(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Shape^ Pbase, RDC::OCC::TopoDS_Face^ Skface, RDC::OCC::TopoDS_Wire^ Spine, int Fuse, bool Modify)
	: RDC::OCC::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_MakePipe(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(::TopoDS_Wire*)Spine->NativeInstance, Fuse, Modify);
}

void RDC::OCC::BRepFeat_MakePipe::Init(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Shape^ Pbase, RDC::OCC::TopoDS_Face^ Skface, RDC::OCC::TopoDS_Wire^ Spine, int Fuse, bool Modify)
{
	((::BRepFeat_MakePipe*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(::TopoDS_Wire*)Spine->NativeInstance, Fuse, Modify);
}

void RDC::OCC::BRepFeat_MakePipe::Add(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ OnFace)
{
	((::BRepFeat_MakePipe*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void RDC::OCC::BRepFeat_MakePipe::Perform()
{
	((::BRepFeat_MakePipe*)_NativeInstance)->Perform();
}

void RDC::OCC::BRepFeat_MakePipe::Perform(RDC::OCC::TopoDS_Shape^ Until)
{
	((::BRepFeat_MakePipe*)_NativeInstance)->Perform(*(::TopoDS_Shape*)Until->NativeInstance);
}

void RDC::OCC::BRepFeat_MakePipe::Perform(RDC::OCC::TopoDS_Shape^ From, RDC::OCC::TopoDS_Shape^ Until)
{
	((::BRepFeat_MakePipe*)_NativeInstance)->Perform(*(::TopoDS_Shape*)From->NativeInstance, *(::TopoDS_Shape*)Until->NativeInstance);
}

RDC::OCC::Geom_Curve^ RDC::OCC::BRepFeat_MakePipe::BarycCurve()
{
	Handle(::Geom_Curve) _result = ((::BRepFeat_MakePipe*)_NativeInstance)->BarycCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakePrism
//---------------------------------------------------------------------

RDC::OCC::BRepFeat_MakePrism::BRepFeat_MakePrism()
	: RDC::OCC::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_MakePrism();
}

RDC::OCC::BRepFeat_MakePrism::BRepFeat_MakePrism(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Shape^ Pbase, RDC::OCC::TopoDS_Face^ Skface, RDC::OCC::Dir Direction, int Fuse, bool Modify)
	: RDC::OCC::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Dir> pp_Direction = &Direction;
	_NativeInstance = new ::BRepFeat_MakePrism(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(gp_Dir*)pp_Direction, Fuse, Modify);
}

void RDC::OCC::BRepFeat_MakePrism::Init(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Shape^ Pbase, RDC::OCC::TopoDS_Face^ Skface, RDC::OCC::Dir Direction, int Fuse, bool Modify)
{
	pin_ptr<RDC::OCC::Dir> pp_Direction = &Direction;
	((::BRepFeat_MakePrism*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(gp_Dir*)pp_Direction, Fuse, Modify);
}

void RDC::OCC::BRepFeat_MakePrism::Add(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ OnFace)
{
	((::BRepFeat_MakePrism*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void RDC::OCC::BRepFeat_MakePrism::Perform(double Length)
{
	((::BRepFeat_MakePrism*)_NativeInstance)->Perform(Length);
}

void RDC::OCC::BRepFeat_MakePrism::Perform(RDC::OCC::TopoDS_Shape^ Until)
{
	((::BRepFeat_MakePrism*)_NativeInstance)->Perform(*(::TopoDS_Shape*)Until->NativeInstance);
}

void RDC::OCC::BRepFeat_MakePrism::Perform(RDC::OCC::TopoDS_Shape^ From, RDC::OCC::TopoDS_Shape^ Until)
{
	((::BRepFeat_MakePrism*)_NativeInstance)->Perform(*(::TopoDS_Shape*)From->NativeInstance, *(::TopoDS_Shape*)Until->NativeInstance);
}

void RDC::OCC::BRepFeat_MakePrism::PerformUntilEnd()
{
	((::BRepFeat_MakePrism*)_NativeInstance)->PerformUntilEnd();
}

void RDC::OCC::BRepFeat_MakePrism::PerformFromEnd(RDC::OCC::TopoDS_Shape^ FUntil)
{
	((::BRepFeat_MakePrism*)_NativeInstance)->PerformFromEnd(*(::TopoDS_Shape*)FUntil->NativeInstance);
}

void RDC::OCC::BRepFeat_MakePrism::PerformThruAll()
{
	((::BRepFeat_MakePrism*)_NativeInstance)->PerformThruAll();
}

void RDC::OCC::BRepFeat_MakePrism::PerformUntilHeight(RDC::OCC::TopoDS_Shape^ Until, double Length)
{
	((::BRepFeat_MakePrism*)_NativeInstance)->PerformUntilHeight(*(::TopoDS_Shape*)Until->NativeInstance, Length);
}

RDC::OCC::Geom_Curve^ RDC::OCC::BRepFeat_MakePrism::BarycCurve()
{
	Handle(::Geom_Curve) _result = ((::BRepFeat_MakePrism*)_NativeInstance)->BarycCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakeRevol
//---------------------------------------------------------------------

RDC::OCC::BRepFeat_MakeRevol::BRepFeat_MakeRevol()
	: RDC::OCC::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_MakeRevol();
}

RDC::OCC::BRepFeat_MakeRevol::BRepFeat_MakeRevol(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Shape^ Pbase, RDC::OCC::TopoDS_Face^ Skface, RDC::OCC::Ax1 Axis, int Fuse, bool Modify)
	: RDC::OCC::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
	_NativeInstance = new ::BRepFeat_MakeRevol(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(gp_Ax1*)pp_Axis, Fuse, Modify);
}

void RDC::OCC::BRepFeat_MakeRevol::Init(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Shape^ Pbase, RDC::OCC::TopoDS_Face^ Skface, RDC::OCC::Ax1 Axis, int Fuse, bool Modify)
{
	pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
	((::BRepFeat_MakeRevol*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(gp_Ax1*)pp_Axis, Fuse, Modify);
}

void RDC::OCC::BRepFeat_MakeRevol::Add(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ OnFace)
{
	((::BRepFeat_MakeRevol*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void RDC::OCC::BRepFeat_MakeRevol::Perform(double Angle)
{
	((::BRepFeat_MakeRevol*)_NativeInstance)->Perform(Angle);
}

void RDC::OCC::BRepFeat_MakeRevol::Perform(RDC::OCC::TopoDS_Shape^ Until)
{
	((::BRepFeat_MakeRevol*)_NativeInstance)->Perform(*(::TopoDS_Shape*)Until->NativeInstance);
}

void RDC::OCC::BRepFeat_MakeRevol::Perform(RDC::OCC::TopoDS_Shape^ From, RDC::OCC::TopoDS_Shape^ Until)
{
	((::BRepFeat_MakeRevol*)_NativeInstance)->Perform(*(::TopoDS_Shape*)From->NativeInstance, *(::TopoDS_Shape*)Until->NativeInstance);
}

void RDC::OCC::BRepFeat_MakeRevol::PerformThruAll()
{
	((::BRepFeat_MakeRevol*)_NativeInstance)->PerformThruAll();
}

void RDC::OCC::BRepFeat_MakeRevol::PerformUntilAngle(RDC::OCC::TopoDS_Shape^ Until, double Angle)
{
	((::BRepFeat_MakeRevol*)_NativeInstance)->PerformUntilAngle(*(::TopoDS_Shape*)Until->NativeInstance, Angle);
}

RDC::OCC::Geom_Curve^ RDC::OCC::BRepFeat_MakeRevol::BarycCurve()
{
	Handle(::Geom_Curve) _result = ((::BRepFeat_MakeRevol*)_NativeInstance)->BarycCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakeRevolutionForm
//---------------------------------------------------------------------

RDC::OCC::BRepFeat_MakeRevolutionForm::BRepFeat_MakeRevolutionForm()
	: RDC::OCC::BRepFeat_RibSlot(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_MakeRevolutionForm();
}

RDC::OCC::BRepFeat_MakeRevolutionForm::BRepFeat_MakeRevolutionForm(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Wire^ W, RDC::OCC::Geom_Plane^ Plane, RDC::OCC::Ax1 Axis, double Height1, double Height2, int Fuse, bool% Sliding)
	: RDC::OCC::BRepFeat_RibSlot(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
	pin_ptr<bool> pp_Sliding = &Sliding;
	_NativeInstance = new ::BRepFeat_MakeRevolutionForm(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Handle(::Geom_Plane)(Plane->NativeInstance), *(gp_Ax1*)pp_Axis, Height1, Height2, Fuse, *(bool*)pp_Sliding);
}

void RDC::OCC::BRepFeat_MakeRevolutionForm::Init(RDC::OCC::TopoDS_Shape^ Sbase, RDC::OCC::TopoDS_Wire^ W, RDC::OCC::Geom_Plane^ Plane, RDC::OCC::Ax1 Axis, double Height1, double Height2, int Fuse, bool% Sliding)
{
	pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
	pin_ptr<bool> pp_Sliding = &Sliding;
	((::BRepFeat_MakeRevolutionForm*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Handle(::Geom_Plane)(Plane->NativeInstance), *(gp_Ax1*)pp_Axis, Height1, Height2, Fuse, *(bool*)pp_Sliding);
}

void RDC::OCC::BRepFeat_MakeRevolutionForm::Add(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ OnFace)
{
	((::BRepFeat_MakeRevolutionForm*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void RDC::OCC::BRepFeat_MakeRevolutionForm::Perform()
{
	((::BRepFeat_MakeRevolutionForm*)_NativeInstance)->Perform();
}

bool RDC::OCC::BRepFeat_MakeRevolutionForm::Propagate(RDC::OCC::TopTools_ListOfShape^ L, RDC::OCC::TopoDS_Face^ F, RDC::OCC::Pnt FPoint, RDC::OCC::Pnt LPoint, bool% falseside)
{
	pin_ptr<RDC::OCC::Pnt> pp_FPoint = &FPoint;
	pin_ptr<RDC::OCC::Pnt> pp_LPoint = &LPoint;
	pin_ptr<bool> pp_falseside = &falseside;
	bool _result = ((::BRepFeat_MakeRevolutionForm*)_NativeInstance)->Propagate(*(::TopTools_ListOfShape*)L->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_FPoint, *(gp_Pnt*)pp_LPoint, *(bool*)pp_falseside);
	return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFeat_SplitShape
//---------------------------------------------------------------------

RDC::OCC::BRepFeat_SplitShape::BRepFeat_SplitShape()
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_SplitShape();
}

RDC::OCC::BRepFeat_SplitShape::BRepFeat_SplitShape(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepFeat_SplitShape(*(::TopoDS_Shape*)S->NativeInstance);
}

bool RDC::OCC::BRepFeat_SplitShape::Add(RDC::OCC::TopTools_SequenceOfShape^ theEdges)
{
	bool _result = ((::BRepFeat_SplitShape*)_NativeInstance)->Add(*(::TopTools_SequenceOfShape*)theEdges->NativeInstance);
	return _result;
}

void RDC::OCC::BRepFeat_SplitShape::Init(RDC::OCC::TopoDS_Shape^ S)
{
	((::BRepFeat_SplitShape*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepFeat_SplitShape::SetCheckInterior(bool ToCheckInterior)
{
	((::BRepFeat_SplitShape*)_NativeInstance)->SetCheckInterior(ToCheckInterior);
}

void RDC::OCC::BRepFeat_SplitShape::Add(RDC::OCC::TopoDS_Wire^ W, RDC::OCC::TopoDS_Face^ F)
{
	((::BRepFeat_SplitShape*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepFeat_SplitShape::Add(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F)
{
	((::BRepFeat_SplitShape*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepFeat_SplitShape::Add(RDC::OCC::TopoDS_Compound^ Comp, RDC::OCC::TopoDS_Face^ F)
{
	((::BRepFeat_SplitShape*)_NativeInstance)->Add(*(::TopoDS_Compound*)Comp->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepFeat_SplitShape::Add(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Edge^ EOn)
{
	((::BRepFeat_SplitShape*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Edge*)EOn->NativeInstance);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_SplitShape::DirectLeft()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_SplitShape*)_NativeInstance)->DirectLeft();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_SplitShape::Left()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_SplitShape*)_NativeInstance)->Left();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_SplitShape::Right()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_SplitShape*)_NativeInstance)->Right();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

void RDC::OCC::BRepFeat_SplitShape::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepFeat_SplitShape*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepFeat_SplitShape::Build()
{
	((::BRepFeat_SplitShape*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool RDC::OCC::BRepFeat_SplitShape::IsDeleted(RDC::OCC::TopoDS_Shape^ S)
{
	bool _result = ((::BRepFeat_SplitShape*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
	return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepFeat_SplitShape::Modified(RDC::OCC::TopoDS_Shape^ F)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepFeat_SplitShape*)_NativeInstance)->Modified(*(::TopoDS_Shape*)F->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}


