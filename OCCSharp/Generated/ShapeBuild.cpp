// Generated wrapper code for package ShapeBuild

#include "OcctPCH.h"
#include "ShapeBuild.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "TopoDS.h"
#include "TopLoc.h"
#include "Geom2d.h"
#include "gp.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  ShapeBuild
//---------------------------------------------------------------------

RDC::OCC::ShapeBuild::ShapeBuild()
    : RDC::OCC::BaseClass<::ShapeBuild>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeBuild();
}

RDC::OCC::Geom_Plane^ RDC::OCC::ShapeBuild::PlaneXOY()
{
    Handle(::Geom_Plane) _result = ::ShapeBuild::PlaneXOY();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Plane::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  ShapeBuild_Edge
//---------------------------------------------------------------------

RDC::OCC::ShapeBuild_Edge::ShapeBuild_Edge()
    : RDC::OCC::BaseClass<::ShapeBuild_Edge>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeBuild_Edge();
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::ShapeBuild_Edge::CopyReplaceVertices(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::ShapeBuild_Edge*)_NativeInstance)->CopyReplaceVertices(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

void RDC::OCC::ShapeBuild_Edge::CopyRanges(RDC::OCC::TopoDS_Edge^ toedge, RDC::OCC::TopoDS_Edge^ fromedge, double alpha, double beta)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->CopyRanges(*(::TopoDS_Edge*)toedge->NativeInstance, *(::TopoDS_Edge*)fromedge->NativeInstance, alpha, beta);
}

void RDC::OCC::ShapeBuild_Edge::CopyRanges(RDC::OCC::TopoDS_Edge^ toedge, RDC::OCC::TopoDS_Edge^ fromedge, double alpha)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->CopyRanges(*(::TopoDS_Edge*)toedge->NativeInstance, *(::TopoDS_Edge*)fromedge->NativeInstance, alpha, 1);
}

void RDC::OCC::ShapeBuild_Edge::CopyRanges(RDC::OCC::TopoDS_Edge^ toedge, RDC::OCC::TopoDS_Edge^ fromedge)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->CopyRanges(*(::TopoDS_Edge*)toedge->NativeInstance, *(::TopoDS_Edge*)fromedge->NativeInstance, 0.0, 1);
}

void RDC::OCC::ShapeBuild_Edge::SetRange3d(RDC::OCC::TopoDS_Edge^ edge, double first, double last)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->SetRange3d(*(::TopoDS_Edge*)edge->NativeInstance, first, last);
}

void RDC::OCC::ShapeBuild_Edge::CopyPCurves(RDC::OCC::TopoDS_Edge^ toedge, RDC::OCC::TopoDS_Edge^ fromedge)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->CopyPCurves(*(::TopoDS_Edge*)toedge->NativeInstance, *(::TopoDS_Edge*)fromedge->NativeInstance);
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::ShapeBuild_Edge::Copy(RDC::OCC::TopoDS_Edge^ edge, bool sharepcurves)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::ShapeBuild_Edge*)_NativeInstance)->Copy(*(::TopoDS_Edge*)edge->NativeInstance, sharepcurves);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::ShapeBuild_Edge::Copy(RDC::OCC::TopoDS_Edge^ edge)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::ShapeBuild_Edge*)_NativeInstance)->Copy(*(::TopoDS_Edge*)edge->NativeInstance, true);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

void RDC::OCC::ShapeBuild_Edge::RemovePCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->RemovePCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
}

void RDC::OCC::ShapeBuild_Edge::RemovePCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Surface^ surf)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->RemovePCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surf->NativeInstance));
}

void RDC::OCC::ShapeBuild_Edge::RemovePCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Surface^ surf, RDC::OCC::TopLoc_Location^ loc)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->RemovePCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surf->NativeInstance), *(::TopLoc_Location*)loc->NativeInstance);
}

void RDC::OCC::ShapeBuild_Edge::ReplacePCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::TopoDS_Face^ face)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->ReplacePCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom2d_Curve)(pcurve->NativeInstance), *(::TopoDS_Face*)face->NativeInstance);
}

bool RDC::OCC::ShapeBuild_Edge::ReassignPCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ old, RDC::OCC::TopoDS_Face^ sub)
{
    bool _result = ((::ShapeBuild_Edge*)_NativeInstance)->ReassignPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)old->NativeInstance, *(::TopoDS_Face*)sub->NativeInstance);
    return _result;
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::ShapeBuild_Edge::TransformPCurve(RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::Trsf2d trans, double uFact, double% aFirst, double% aLast)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_trans = &trans;
    pin_ptr<double> pp_aFirst = &aFirst;
    pin_ptr<double> pp_aLast = &aLast;
    Handle(::Geom2d_Curve) _result = ((::ShapeBuild_Edge*)_NativeInstance)->TransformPCurve(Handle(::Geom2d_Curve)(pcurve->NativeInstance), *(gp_Trsf2d*)pp_trans, uFact, *(double*)pp_aFirst, *(double*)pp_aLast);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::ShapeBuild_Edge::RemoveCurve3d(RDC::OCC::TopoDS_Edge^ edge)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->RemoveCurve3d(*(::TopoDS_Edge*)edge->NativeInstance);
}

bool RDC::OCC::ShapeBuild_Edge::BuildCurve3d(RDC::OCC::TopoDS_Edge^ edge)
{
    bool _result = ((::ShapeBuild_Edge*)_NativeInstance)->BuildCurve3d(*(::TopoDS_Edge*)edge->NativeInstance);
    return _result;
}

void RDC::OCC::ShapeBuild_Edge::MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Curve^ curve, RDC::OCC::TopLoc_Location^ L)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Curve)(curve->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
}

void RDC::OCC::ShapeBuild_Edge::MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Curve^ curve, RDC::OCC::TopLoc_Location^ L, double p1, double p2)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Curve)(curve->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, p1, p2);
}

void RDC::OCC::ShapeBuild_Edge::MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::TopoDS_Face^ face)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom2d_Curve)(pcurve->NativeInstance), *(::TopoDS_Face*)face->NativeInstance);
}

void RDC::OCC::ShapeBuild_Edge::MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::TopoDS_Face^ face, double p1, double p2)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom2d_Curve)(pcurve->NativeInstance), *(::TopoDS_Face*)face->NativeInstance, p1, p2);
}

void RDC::OCC::ShapeBuild_Edge::MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopLoc_Location^ L)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom2d_Curve)(pcurve->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
}

void RDC::OCC::ShapeBuild_Edge::MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopLoc_Location^ L, double p1, double p2)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom2d_Curve)(pcurve->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, p1, p2);
}



//---------------------------------------------------------------------
//  Class  ShapeBuild_ReShape
//---------------------------------------------------------------------

RDC::OCC::ShapeBuild_ReShape::ShapeBuild_ReShape()
    : RDC::OCC::BRepTools_ReShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeBuild_ReShape();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeBuild_ReShape::Apply(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopAbs_ShapeEnum until, int buildmode)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::ShapeBuild_ReShape*)_NativeInstance)->Apply(*(::TopoDS_Shape*)shape->NativeInstance, (::TopAbs_ShapeEnum)until, buildmode);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeBuild_ReShape::Apply(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopAbs_ShapeEnum until)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::ShapeBuild_ReShape*)_NativeInstance)->Apply(*(::TopoDS_Shape*)shape->NativeInstance, (::TopAbs_ShapeEnum)until);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeBuild_ReShape::Apply(RDC::OCC::TopoDS_Shape^ shape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::ShapeBuild_ReShape*)_NativeInstance)->Apply(*(::TopoDS_Shape*)shape->NativeInstance, TopAbs_SHAPE);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

int RDC::OCC::ShapeBuild_ReShape::Status(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopoDS_Shape^ newsh, bool last)
{
    int _result = ((::ShapeBuild_ReShape*)_NativeInstance)->Status(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newsh->NativeInstance, last);
    return _result;
}

int RDC::OCC::ShapeBuild_ReShape::Status(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopoDS_Shape^ newsh)
{
    int _result = ((::ShapeBuild_ReShape*)_NativeInstance)->Status(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newsh->NativeInstance, false);
    return _result;
}

RDC::OCC::ShapeBuild_ReShape^ RDC::OCC::ShapeBuild_ReShape::CreateDowncasted(::ShapeBuild_ReShape* instance)
{
    return gcnew RDC::OCC::ShapeBuild_ReShape( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeBuild_Vertex
//---------------------------------------------------------------------

RDC::OCC::ShapeBuild_Vertex::ShapeBuild_Vertex()
    : RDC::OCC::BaseClass<::ShapeBuild_Vertex>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeBuild_Vertex();
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::ShapeBuild_Vertex::CombineVertex(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double tolFactor)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::ShapeBuild_Vertex*)_NativeInstance)->CombineVertex(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, tolFactor);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::ShapeBuild_Vertex::CombineVertex(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::ShapeBuild_Vertex*)_NativeInstance)->CombineVertex(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, 1.0001);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::ShapeBuild_Vertex::CombineVertex(RDC::OCC::Pnt pnt1, RDC::OCC::Pnt pnt2, double tol1, double tol2, double tolFactor)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    pin_ptr<RDC::OCC::Pnt> pp_pnt1 = &pnt1;
    pin_ptr<RDC::OCC::Pnt> pp_pnt2 = &pnt2;
    *_result = ((::ShapeBuild_Vertex*)_NativeInstance)->CombineVertex(*(gp_Pnt*)pp_pnt1, *(gp_Pnt*)pp_pnt2, tol1, tol2, tolFactor);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::ShapeBuild_Vertex::CombineVertex(RDC::OCC::Pnt pnt1, RDC::OCC::Pnt pnt2, double tol1, double tol2)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    pin_ptr<RDC::OCC::Pnt> pp_pnt1 = &pnt1;
    pin_ptr<RDC::OCC::Pnt> pp_pnt2 = &pnt2;
    *_result = ((::ShapeBuild_Vertex*)_NativeInstance)->CombineVertex(*(gp_Pnt*)pp_pnt1, *(gp_Pnt*)pp_pnt2, tol1, tol2, 1.0001);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}


