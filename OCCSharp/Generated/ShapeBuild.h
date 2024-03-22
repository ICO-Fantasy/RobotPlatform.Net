// Generated wrapper code for package ShapeBuild

#pragma once

#include "BRepTools.h"

namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Class  ShapeBuild
//---------------------------------------------------------------------
/// <summary>
/// This package provides basic building tools for other packages in ShapeHealing.
/// These tools are rather internal for ShapeHealing .
/// </summary>
public ref class ShapeBuild sealed
    : public RDC::OCC::BaseClass<::ShapeBuild>
{

#ifdef Include_ShapeBuild_h
public:
    Include_ShapeBuild_h
#endif

public:
    ShapeBuild(::ShapeBuild* nativeInstance)
        : RDC::OCC::BaseClass<::ShapeBuild>( nativeInstance, true )
    {}

    ShapeBuild(::ShapeBuild& nativeInstance)
        : RDC::OCC::BaseClass<::ShapeBuild>( &nativeInstance, false )
    {}

    property ::ShapeBuild* NativeInstance
    {
        ::ShapeBuild* get()
        {
            return static_cast<::ShapeBuild*>(_NativeInstance);
        }
    }

public:
    ShapeBuild();
    /// <summary>
    /// Rebuilds a shape with substitution of some components
    /// Returns a Geom_Surface which is the Plane XOY (Z positive)
    /// This allows to consider an UV space homologous to a 3D space,
    /// with this support surface
    /// </summary>
    static RDC::OCC::Geom_Plane^ PlaneXOY();
}; // class ShapeBuild

//---------------------------------------------------------------------
//  Class  ShapeBuild_Edge
//---------------------------------------------------------------------
/// <summary>
/// This class provides low-level operators for building an edge
/// 3d curve, copying edge with replaced vertices etc.
/// </summary>
public ref class ShapeBuild_Edge sealed
    : public RDC::OCC::BaseClass<::ShapeBuild_Edge>
{

#ifdef Include_ShapeBuild_Edge_h
public:
    Include_ShapeBuild_Edge_h
#endif

public:
    ShapeBuild_Edge(::ShapeBuild_Edge* nativeInstance)
        : RDC::OCC::BaseClass<::ShapeBuild_Edge>( nativeInstance, true )
    {}

    ShapeBuild_Edge(::ShapeBuild_Edge& nativeInstance)
        : RDC::OCC::BaseClass<::ShapeBuild_Edge>( &nativeInstance, false )
    {}

    property ::ShapeBuild_Edge* NativeInstance
    {
        ::ShapeBuild_Edge* get()
        {
            return static_cast<::ShapeBuild_Edge*>(_NativeInstance);
        }
    }

public:
    ShapeBuild_Edge();
    /// <summary>
    /// Copy edge and replace one or both its vertices to a given
    /// one(s). Vertex V1 replaces FORWARD vertex, and V2 - REVERSED,
    /// as they are found by TopoDS_Iterator.
    /// If V1 or V2 is NULL, the original vertex is taken
    /// </summary>
    RDC::OCC::TopoDS_Edge^ CopyReplaceVertices(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2);
    /// <summary>
    /// Copies ranges for curve3d and all common pcurves from
    /// edge <fromedge> into edge <toedge>.
    /// </summary>
    void CopyRanges(RDC::OCC::TopoDS_Edge^ toedge, RDC::OCC::TopoDS_Edge^ fromedge, double alpha, double beta);
    /// <summary>
    /// Copies ranges for curve3d and all common pcurves from
    /// edge <fromedge> into edge <toedge>.
    /// </summary>
    void CopyRanges(RDC::OCC::TopoDS_Edge^ toedge, RDC::OCC::TopoDS_Edge^ fromedge, double alpha);
    /// <summary>
    /// Copies ranges for curve3d and all common pcurves from
    /// edge <fromedge> into edge <toedge>.
    /// </summary>
    void CopyRanges(RDC::OCC::TopoDS_Edge^ toedge, RDC::OCC::TopoDS_Edge^ fromedge);
    /// <summary>
    /// Sets range on 3d curve only.
    /// </summary>
    void SetRange3d(RDC::OCC::TopoDS_Edge^ edge, double first, double last);
    /// <summary>
    /// Makes a copy of pcurves from edge <fromedge> into edge
    /// <toedge>. Pcurves which are already present in <toedge>,
    /// are replaced by copies, other are copied. Ranges are also
    /// copied.
    /// </summary>
    void CopyPCurves(RDC::OCC::TopoDS_Edge^ toedge, RDC::OCC::TopoDS_Edge^ fromedge);
    /// <summary>
    /// Make a copy of <edge> by call to CopyReplaceVertices()
    /// (i.e. construct new TEdge with the same pcurves and vertices).
    /// If <sharepcurves> is False, pcurves are also replaced by
    /// their copies with help of method CopyPCurves
    /// </summary>
    RDC::OCC::TopoDS_Edge^ Copy(RDC::OCC::TopoDS_Edge^ edge, bool sharepcurves);
    /// <summary>
    /// Make a copy of <edge> by call to CopyReplaceVertices()
    /// (i.e. construct new TEdge with the same pcurves and vertices).
    /// If <sharepcurves> is False, pcurves are also replaced by
    /// their copies with help of method CopyPCurves
    /// </summary>
    RDC::OCC::TopoDS_Edge^ Copy(RDC::OCC::TopoDS_Edge^ edge);
    /// <summary>
    /// Removes the PCurve(s) which could be recorded in an Edge for
    /// the given Face
    /// </summary>
    void RemovePCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face);
    /// <summary>
    /// Removes the PCurve(s) which could be recorded in an Edge for
    /// the given Surface
    /// </summary>
    void RemovePCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Surface^ surf);
    /// <summary>
    /// Removes the PCurve(s) which could be recorded in an Edge for
    /// the given Surface, with given Location
    /// </summary>
    void RemovePCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Surface^ surf, RDC::OCC::TopLoc_Location^ loc);
    /// <summary>
    /// Replace the PCurve in an Edge for the given Face
    /// In case if edge is seam, i.e. has 2 pcurves on that face,
    /// only pcurve corresponding to the orientation of the edge is
    /// replaced
    /// </summary>
    void ReplacePCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::TopoDS_Face^ face);
    /// <summary>
    /// Reassign edge pcurve lying on face <old> to another face <sub>.
    /// If edge has two pcurves on <old> face, only one of them will be
    /// reassigned, and other will left alone. Similarly, if edge already
    /// had a pcurve on face <sub>, it will have two pcurves on it.
    /// Returns True if succeeded, False if no pcurve lying on <old> found.
    /// </summary>
    bool ReassignPCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ old, RDC::OCC::TopoDS_Face^ sub);
    /// <summary>
    /// Transforms the PCurve with given matrix and affinity U factor.
    /// </summary>
    RDC::OCC::Geom2d_Curve^ TransformPCurve(RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::Trsf2d trans, double uFact, double% aFirst, double% aLast);
    /// <summary>
    /// Removes the Curve3D recorded in an Edge
    /// </summary>
    void RemoveCurve3d(RDC::OCC::TopoDS_Edge^ edge);
    /// <summary>
    /// Calls BRepTools::BuildCurve3D
    /// </summary>
    bool BuildCurve3d(RDC::OCC::TopoDS_Edge^ edge);
    /// <summary>
    /// Makes edge with curve and location
    /// </summary>
    void MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Curve^ curve, RDC::OCC::TopLoc_Location^ L);
    /// <summary>
    /// Makes edge with curve, location and range [p1, p2]
    /// </summary>
    void MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Curve^ curve, RDC::OCC::TopLoc_Location^ L, double p1, double p2);
    /// <summary>
    /// Makes edge with pcurve and face
    /// </summary>
    void MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::TopoDS_Face^ face);
    /// <summary>
    /// Makes edge with pcurve, face and range [p1, p2]
    /// </summary>
    void MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::TopoDS_Face^ face, double p1, double p2);
    /// <summary>
    /// Makes edge with pcurve, surface and location
    /// </summary>
    void MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopLoc_Location^ L);
    /// <summary>
    /// Makes edge with pcurve, surface, location and range [p1, p2]
    /// </summary>
    void MakeEdge(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom2d_Curve^ pcurve, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopLoc_Location^ L, double p1, double p2);
}; // class ShapeBuild_Edge

//---------------------------------------------------------------------
//  Class  ShapeBuild_ReShape
//---------------------------------------------------------------------
/// <summary>
/// Rebuilds a Shape by making pre-defined substitutions on some
/// of its components
/// 
/// In a first phase, it records requests to replace or remove
/// some individual shapes
/// For each shape, the last given request is recorded
/// Requests may be applied "Oriented" (i.e. only to an item with
/// the SAME orientation) or not (the orientation of replacing
/// shape is respectful of that of the original one)
/// 
/// Then, these requests may be applied to any shape which may
/// contain one or more of these individual shapes
/// </summary>
public ref class ShapeBuild_ReShape sealed
    : public RDC::OCC::BRepTools_ReShape
{

#ifdef Include_ShapeBuild_ReShape_h
public:
    Include_ShapeBuild_ReShape_h
#endif

public:
    ShapeBuild_ReShape(::ShapeBuild_ReShape* nativeInstance)
        : RDC::OCC::BRepTools_ReShape( nativeInstance )
    {}

    ShapeBuild_ReShape(::ShapeBuild_ReShape& nativeInstance)
        : RDC::OCC::BRepTools_ReShape( nativeInstance )
    {}

    property ::ShapeBuild_ReShape* NativeInstance
    {
        ::ShapeBuild_ReShape* get()
        {
            return static_cast<::ShapeBuild_ReShape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns an empty Reshape
    /// </summary>
    ShapeBuild_ReShape();
    /// <summary>
    /// Applies the substitutions requests to a shape
    /// 
    /// <until> gives the level of type until which requests are taken
    /// into account. For subshapes of the type <until> no rebuild
    /// and further exploring are done.
    /// ACTUALLY, NOT IMPLEMENTED BELOW  TopAbs_FACE
    /// 
    /// <buildmode> says how to do on a SOLID,SHELL ... if one of its
    /// sub-shapes has been changed:
    /// 0: at least one Replace or Remove -> COMPOUND, else as such
    /// 1: at least one Remove (Replace are ignored) -> COMPOUND
    /// 2: Replace and Remove are both ignored
    /// If Replace/Remove are ignored or absent, the result as same
    /// type as the starting shape
    /// </summary>
    RDC::OCC::TopoDS_Shape^ Apply(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopAbs_ShapeEnum until, int buildmode);
    /// <summary>
    /// Applies the substitutions requests to a shape.
    /// 
    /// <until> gives the level of type until which requests are taken
    /// into account. For subshapes of the type <until> no rebuild
    /// and further exploring are done.
    /// 
    /// NOTE: each subshape can be replaced by shape of the same type
    /// or by shape containing only shapes of that type (for
    /// example, TopoDS_Edge can be replaced by TopoDS_Edge,
    /// TopoDS_Wire or TopoDS_Compound containing TopoDS_Edges).
    /// If incompatible shape type is encountered, it is ignored
    /// and flag FAIL1 is set in Status.
    /// </summary>
    RDC::OCC::TopoDS_Shape^ Apply(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopAbs_ShapeEnum until);
    /// <summary>
    /// Applies the substitutions requests to a shape.
    /// 
    /// <until> gives the level of type until which requests are taken
    /// into account. For subshapes of the type <until> no rebuild
    /// and further exploring are done.
    /// 
    /// NOTE: each subshape can be replaced by shape of the same type
    /// or by shape containing only shapes of that type (for
    /// example, TopoDS_Edge can be replaced by TopoDS_Edge,
    /// TopoDS_Wire or TopoDS_Compound containing TopoDS_Edges).
    /// If incompatible shape type is encountered, it is ignored
    /// and flag FAIL1 is set in Status.
    /// </summary>
    RDC::OCC::TopoDS_Shape^ Apply(RDC::OCC::TopoDS_Shape^ shape);
    /// <summary>
    /// Returns a complete substitution status for a shape
    /// 0  : not recorded,   <newsh> = original <shape>
    /// < 0: to be removed,  <newsh> is NULL
    /// > 0: to be replaced, <newsh> is a new item
    /// If <last> is False, returns status and new shape recorded in
    /// the map directly for the shape, if True and status > 0 then
    /// recursively searches for the last status and new shape.
    /// </summary>
    int Status(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopoDS_Shape^ newsh, bool last);
    /// <summary>
    /// Returns a complete substitution status for a shape
    /// 0  : not recorded,   <newsh> = original <shape>
    /// < 0: to be removed,  <newsh> is NULL
    /// > 0: to be replaced, <newsh> is a new item
    /// If <last> is False, returns status and new shape recorded in
    /// the map directly for the shape, if True and status > 0 then
    /// recursively searches for the last status and new shape.
    /// </summary>
    int Status(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopoDS_Shape^ newsh);
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    static RDC::OCC::ShapeBuild_ReShape^ CreateDowncasted(::ShapeBuild_ReShape* instance);
}; // class ShapeBuild_ReShape

//---------------------------------------------------------------------
//  Class  ShapeBuild_Vertex
//---------------------------------------------------------------------
/// <summary>
/// Provides low-level functions used for constructing vertices
/// </summary>
public ref class ShapeBuild_Vertex sealed
    : public RDC::OCC::BaseClass<::ShapeBuild_Vertex>
{

#ifdef Include_ShapeBuild_Vertex_h
public:
    Include_ShapeBuild_Vertex_h
#endif

public:
    ShapeBuild_Vertex(::ShapeBuild_Vertex* nativeInstance)
        : RDC::OCC::BaseClass<::ShapeBuild_Vertex>( nativeInstance, true )
    {}

    ShapeBuild_Vertex(::ShapeBuild_Vertex& nativeInstance)
        : RDC::OCC::BaseClass<::ShapeBuild_Vertex>( &nativeInstance, false )
    {}

    property ::ShapeBuild_Vertex* NativeInstance
    {
        ::ShapeBuild_Vertex* get()
        {
            return static_cast<::ShapeBuild_Vertex*>(_NativeInstance);
        }
    }

public:
    ShapeBuild_Vertex();
    /// <summary>
    /// Combines new vertex from two others. This new one is the
    /// smallest vertex which comprises both of the source vertices.
    /// The function takes into account the positions and tolerances
    /// of the source vertices.
    /// The tolerance of the new vertex will be equal to the minimal
    /// tolerance that is required to comprise source vertices
    /// multiplied by tolFactor (in order to avoid errors because
    /// of discreteness of calculations).
    /// </summary>
    RDC::OCC::TopoDS_Vertex^ CombineVertex(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double tolFactor);
    /// <summary>
    /// Combines new vertex from two others. This new one is the
    /// smallest vertex which comprises both of the source vertices.
    /// The function takes into account the positions and tolerances
    /// of the source vertices.
    /// The tolerance of the new vertex will be equal to the minimal
    /// tolerance that is required to comprise source vertices
    /// multiplied by tolFactor (in order to avoid errors because
    /// of discreteness of calculations).
    /// </summary>
    RDC::OCC::TopoDS_Vertex^ CombineVertex(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2);
    /// <summary>
    /// The same function as above, except that it accepts two points
    /// and two tolerances instead of vertices
    /// </summary>
    RDC::OCC::TopoDS_Vertex^ CombineVertex(RDC::OCC::Pnt pnt1, RDC::OCC::Pnt pnt2, double tol1, double tol2, double tolFactor);
    /// <summary>
    /// The same function as above, except that it accepts two points
    /// and two tolerances instead of vertices
    /// </summary>
    RDC::OCC::TopoDS_Vertex^ CombineVertex(RDC::OCC::Pnt pnt1, RDC::OCC::Pnt pnt2, double tol1, double tol2);
}; // class ShapeBuild_Vertex

}; // namespace OCC
}; // namespace RDC
