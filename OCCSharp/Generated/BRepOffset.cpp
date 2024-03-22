// Generated wrapper code for package BRepOffset

#include "OcctPCH.h"
#include "BRepOffset.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "GeomAbs.h"
#include "Message.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  BRepOffset_MakeOffset
//---------------------------------------------------------------------

RDC::OCC::BRepOffset_MakeOffset::BRepOffset_MakeOffset()
    : RDC::OCC::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset();
}

RDC::OCC::BRepOffset_MakeOffset::BRepOffset_MakeOffset(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges, RDC::OCC::Message_ProgressRange^ theRange)
    : RDC::OCC::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, RemoveIntEdges, *(::Message_ProgressRange*)theRange->NativeInstance);
}

RDC::OCC::BRepOffset_MakeOffset::BRepOffset_MakeOffset(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges)
    : RDC::OCC::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, RemoveIntEdges, ::Message_ProgressRange());
}

RDC::OCC::BRepOffset_MakeOffset::BRepOffset_MakeOffset(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join, bool Thickening)
    : RDC::OCC::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, false, ::Message_ProgressRange());
}

RDC::OCC::BRepOffset_MakeOffset::BRepOffset_MakeOffset(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join)
    : RDC::OCC::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, false, false, ::Message_ProgressRange());
}

RDC::OCC::BRepOffset_MakeOffset::BRepOffset_MakeOffset(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter)
    : RDC::OCC::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, GeomAbs_Arc, false, false, ::Message_ProgressRange());
}

RDC::OCC::BRepOffset_MakeOffset::BRepOffset_MakeOffset(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection)
    : RDC::OCC::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, false, GeomAbs_Arc, false, false, ::Message_ProgressRange());
}

RDC::OCC::BRepOffset_MakeOffset::BRepOffset_MakeOffset(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode)
    : RDC::OCC::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, false, false, GeomAbs_Arc, false, false, ::Message_ProgressRange());
}

RDC::OCC::BRepOffset_MakeOffset::BRepOffset_MakeOffset(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol)
    : RDC::OCC::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, BRepOffset_Skin, false, false, GeomAbs_Arc, false, false, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffset_MakeOffset::Initialize(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, RemoveIntEdges);
}

void RDC::OCC::BRepOffset_MakeOffset::Initialize(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join, bool Thickening)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, false);
}

void RDC::OCC::BRepOffset_MakeOffset::Initialize(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, false, false);
}

void RDC::OCC::BRepOffset_MakeOffset::Initialize(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, GeomAbs_Arc, false, false);
}

void RDC::OCC::BRepOffset_MakeOffset::Initialize(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, false, GeomAbs_Arc, false, false);
}

void RDC::OCC::BRepOffset_MakeOffset::Initialize(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, false, false, GeomAbs_Arc, false, false);
}

void RDC::OCC::BRepOffset_MakeOffset::Initialize(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, BRepOffset_Skin, false, false, GeomAbs_Arc, false, false);
}

void RDC::OCC::BRepOffset_MakeOffset::Clear()
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Clear();
}

void RDC::OCC::BRepOffset_MakeOffset::AllowLinearization(bool theIsAllowed)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->AllowLinearization(theIsAllowed);
}

void RDC::OCC::BRepOffset_MakeOffset::AddFace(RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->AddFace(*(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepOffset_MakeOffset::SetOffsetOnFace(RDC::OCC::TopoDS_Face^ F, double Off)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->SetOffsetOnFace(*(::TopoDS_Face*)F->NativeInstance, Off);
}

void RDC::OCC::BRepOffset_MakeOffset::MakeOffsetShape(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->MakeOffsetShape(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffset_MakeOffset::MakeOffsetShape()
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->MakeOffsetShape(::Message_ProgressRange());
}

void RDC::OCC::BRepOffset_MakeOffset::MakeThickSolid(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->MakeThickSolid(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffset_MakeOffset::MakeThickSolid()
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->MakeThickSolid(::Message_ProgressRange());
}

bool RDC::OCC::BRepOffset_MakeOffset::IsDone()
{
    bool _result = ((::BRepOffset_MakeOffset*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffset_MakeOffset::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepOffset_MakeOffset*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffset_MakeOffset::InitShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepOffset_MakeOffset*)_NativeInstance)->InitShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::BRepOffset_Error RDC::OCC::BRepOffset_MakeOffset::Error()
{
    ::BRepOffset_Error _result = ((::BRepOffset_MakeOffset*)_NativeInstance)->Error();
    return (RDC::OCC::BRepOffset_Error)_result;
}

RDC::OCC::GeomAbs_JoinType RDC::OCC::BRepOffset_MakeOffset::GetJoinType()
{
    ::GeomAbs_JoinType _result = ((::BRepOffset_MakeOffset*)_NativeInstance)->GetJoinType();
    return (RDC::OCC::GeomAbs_JoinType)_result;
}

RDC::OCC::TopTools_IndexedMapOfShape^ RDC::OCC::BRepOffset_MakeOffset::ClosingFaces()
{
    ::TopTools_IndexedMapOfShape* _result = new ::TopTools_IndexedMapOfShape();
    *_result = (::TopTools_IndexedMapOfShape)((::BRepOffset_MakeOffset*)_NativeInstance)->ClosingFaces();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_IndexedMapOfShape(_result);
}

bool RDC::OCC::BRepOffset_MakeOffset::CheckInputData(RDC::OCC::Message_ProgressRange^ theRange)
{
    bool _result = ((::BRepOffset_MakeOffset*)_NativeInstance)->CheckInputData(*(::Message_ProgressRange*)theRange->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffset_MakeOffset::GetBadShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepOffset_MakeOffset*)_NativeInstance)->GetBadShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffset_MakeOffset::Generated(RDC::OCC::TopoDS_Shape^ theS)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepOffset_MakeOffset*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffset_MakeOffset::Modified(RDC::OCC::TopoDS_Shape^ theS)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepOffset_MakeOffset*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepOffset_MakeOffset::IsDeleted(RDC::OCC::TopoDS_Shape^ S)
{
    bool _result = ((::BRepOffset_MakeOffset*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}


