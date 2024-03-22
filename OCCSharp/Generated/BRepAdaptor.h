// Generated wrapper code for package BRepAdaptor

#pragma once

#include "Adaptor3d.h"
#include "Standard.h"
#include "Geom2dAdaptor.h"

namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Class  BRepAdaptor_Array1OfCurve
//---------------------------------------------------------------------
public ref class BRepAdaptor_Array1OfCurve sealed
    : public RDC::OCC::BaseClass<::BRepAdaptor_Array1OfCurve>
    , public IIndexEnumerable<RDC::OCC::BRepAdaptor_Curve^>
{

#ifdef Include_BRepAdaptor_Array1OfCurve_h
public:
    Include_BRepAdaptor_Array1OfCurve_h
#endif

public:
    BRepAdaptor_Array1OfCurve(::BRepAdaptor_Array1OfCurve* nativeInstance)
        : RDC::OCC::BaseClass<::BRepAdaptor_Array1OfCurve>( nativeInstance, true )
    {}

    BRepAdaptor_Array1OfCurve(::BRepAdaptor_Array1OfCurve& nativeInstance)
        : RDC::OCC::BaseClass<::BRepAdaptor_Array1OfCurve>( &nativeInstance, false )
    {}

    property ::BRepAdaptor_Array1OfCurve* NativeInstance
    {
        ::BRepAdaptor_Array1OfCurve* get()
        {
            return static_cast<::BRepAdaptor_Array1OfCurve*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::BRepAdaptor_Array1OfCurve::Iterator>
    {

#ifdef Include_BRepAdaptor_Array1OfCurve_Iterator_h
    public:
        Include_BRepAdaptor_Array1OfCurve_Iterator_h
#endif

    public:
        Iterator(::BRepAdaptor_Array1OfCurve::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::BRepAdaptor_Array1OfCurve::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepAdaptor_Array1OfCurve::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::BRepAdaptor_Array1OfCurve::Iterator>( &nativeInstance, false )
        {}

        property ::BRepAdaptor_Array1OfCurve::Iterator* NativeInstance
        {
            ::BRepAdaptor_Array1OfCurve::Iterator* get()
            {
                return static_cast<::BRepAdaptor_Array1OfCurve::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    BRepAdaptor_Array1OfCurve();
    BRepAdaptor_Array1OfCurve(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void BRepAdaptor_Array1OfCurve(allocator_type theAlloc, int theLower, int theUpper, ) */
    BRepAdaptor_Array1OfCurve(RDC::OCC::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    BRepAdaptor_Array1OfCurve(RDC::OCC::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper);
    void Init(RDC::OCC::BRepAdaptor_Curve^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::BRepAdaptor_Array1OfCurve^ Assign(RDC::OCC::BRepAdaptor_Array1OfCurve^ theOther);
    RDC::OCC::BRepAdaptor_Array1OfCurve^ Move(RDC::OCC::BRepAdaptor_Array1OfCurve^ theOther);
    RDC::OCC::BRepAdaptor_Curve^ First();
    RDC::OCC::BRepAdaptor_Curve^ ChangeFirst();
    RDC::OCC::BRepAdaptor_Curve^ Last();
    RDC::OCC::BRepAdaptor_Curve^ ChangeLast();
    virtual RDC::OCC::BRepAdaptor_Curve^ Value(int theIndex);
    RDC::OCC::BRepAdaptor_Curve^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::BRepAdaptor_Curve^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::BRepAdaptor_Curve^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepAdaptor_Array1OfCurve

//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve
//---------------------------------------------------------------------
/// <summary>
/// The Curve from BRepAdaptor  allows to use  an Edge
/// of the BRep topology like a 3D curve.
/// 
/// It has the methods the class Curve from Adaptor3d.
/// 
/// It  is created or  Initialized  with  an Edge.  It
/// takes  into account local  coordinate systems.  If
/// the Edge has a 3D curve it is  use  with priority.
/// If the edge  has no 3D curve one  of the curves on
/// surface is used. It is possible to enforce using a
/// curve on surface by creating  or initialising with
/// an Edge and a Face.
/// </summary>
public ref class BRepAdaptor_Curve sealed
    : public RDC::OCC::Adaptor3d_Curve
{

#ifdef Include_BRepAdaptor_Curve_h
public:
    Include_BRepAdaptor_Curve_h
#endif

public:
    BRepAdaptor_Curve(::BRepAdaptor_Curve* nativeInstance)
        : RDC::OCC::Adaptor3d_Curve( nativeInstance )
    {}

    BRepAdaptor_Curve(::BRepAdaptor_Curve& nativeInstance)
        : RDC::OCC::Adaptor3d_Curve( nativeInstance )
    {}

    property ::BRepAdaptor_Curve* NativeInstance
    {
        ::BRepAdaptor_Curve* get()
        {
            return static_cast<::BRepAdaptor_Curve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an undefined Curve with no Edge loaded.
    /// </summary>
    BRepAdaptor_Curve();
    /// <summary>
    /// Creates a Curve  to  access the geometry of edge
    /// <E>.
    /// </summary>
    BRepAdaptor_Curve(RDC::OCC::TopoDS_Edge^ E);
    /// <summary>
    /// Creates a Curve to access  the geometry  of edge
    /// <E>.   The geometry  will   be  computed using the
    /// parametric curve of <E> on the face  <F>. An Error
    /// is  raised if  the edge does  not have a pcurve on
    /// the face.
    /// </summary>
    BRepAdaptor_Curve(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Reset currently loaded curve (undone Load()).
    /// </summary>
    void Reset();
    /// <summary>
    /// Sets  the Curve <me>  to access the  geometry of
    /// edge <E>.
    /// </summary>
    void Initialize(RDC::OCC::TopoDS_Edge^ E);
    /// <summary>
    /// Sets the Curve <me>  to access  the  geometry of
    /// edge <E>.  The geometry will be computed using the
    /// parametric curve of <E>  on the face <F>. An Error
    /// is raised if the edge  does not  have a pcurve  on
    /// the face.
    /// </summary>
    void Initialize(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F);
    /// <summary>
    /// Returns the coordinate system of the curve.
    /// </summary>
    RDC::OCC::Trsf Trsf();
    /// <summary>
    /// Returns True if the edge geometry is computed from
    /// a 3D curve.
    /// </summary>
    bool Is3DCurve();
    /// <summary>
    /// Returns True if the edge geometry is computed from
    /// a pcurve on a surface.
    /// </summary>
    bool IsCurveOnSurface();
    /// <summary>
    /// Returns the Curve of  the  edge.
    /// </summary>
    RDC::OCC::GeomAdaptor_Curve^ Curve();
    /// <summary>
    /// Returns the CurveOnSurface of the edge.
    /// </summary>
    RDC::OCC::Adaptor3d_CurveOnSurface^ CurveOnSurface();
    /// <summary>
    /// Returns the edge.
    /// </summary>
    RDC::OCC::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the edge tolerance.
    /// </summary>
    double Tolerance();
    double FirstParameter();
    double LastParameter();
    RDC::OCC::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns  the number  of  intervals for  continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    int NbIntervals(RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide  enough room to  accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    void Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  curve equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ Trim(double First, double Last, double Tol);
    bool IsClosed();
    bool IsPeriodic();
    double Period();
    /// <summary>
    /// Computes the point of parameter U on the curve
    /// </summary>
    RDC::OCC::Pnt Value(double U);
    /// <summary>
    /// Computes the point of parameter U.
    /// </summary>
    void D0(double U, RDC::OCC::Pnt% P);
    /// <summary>
    /// Computes the point of parameter U on the curve
    /// with its first derivative.
    /// Raised if the continuity of the current interval
    /// is not C1.
    /// </summary>
    void D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// Raised if the continuity of the current interval
    /// is not C2.
    /// </summary>
    void D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first, the second
    /// and the third derivative.
    /// Raised if the continuity of the current interval
    /// is not C3.
    /// </summary>
    void D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if the continuity of the current interval
    /// is not CN.
    /// Raised if N < 1.
    /// </summary>
    RDC::OCC::Vec DN(double U, int N);
    /// <summary>
    /// returns the parametric resolution
    /// </summary>
    double Resolution(double R3d);
    RDC::OCC::GeomAbs_CurveType GetCurveType();
    RDC::OCC::gp_Lin^ Line();
    RDC::OCC::gp_Circ^ Circle();
    RDC::OCC::gp_Elips^ Ellipse();
    RDC::OCC::gp_Hypr^ Hyperbola();
    RDC::OCC::gp_Parab^ Parabola();
    int Degree();
    bool IsRational();
    int NbPoles();
    int NbKnots();
    /// <summary>
    /// Warning:
    /// This will make a copy of the Bezier Curve since it applies to it myTsrf.
    /// Be careful when using this method.
    /// </summary>
    RDC::OCC::Geom_BezierCurve^ Bezier();
    /// <summary>
    /// Warning:
    /// This will make a copy of the BSpline Curve since it applies to it myTsrf.
    /// Be careful when using this method.
    /// </summary>
    RDC::OCC::Geom_BSplineCurve^ BSpline();
    RDC::OCC::Geom_OffsetCurve^ OffsetCurve();
    static RDC::OCC::BRepAdaptor_Curve^ CreateDowncasted(::BRepAdaptor_Curve* instance);
}; // class BRepAdaptor_Curve

//---------------------------------------------------------------------
//  Class  BRepAdaptor_HArray1OfCurve
//---------------------------------------------------------------------
public ref class BRepAdaptor_HArray1OfCurve sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::BRepAdaptor_Curve^>
{

#ifdef Include_BRepAdaptor_HArray1OfCurve_h
public:
    Include_BRepAdaptor_HArray1OfCurve_h
#endif

public:
    BRepAdaptor_HArray1OfCurve(::BRepAdaptor_HArray1OfCurve* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    BRepAdaptor_HArray1OfCurve(::BRepAdaptor_HArray1OfCurve& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::BRepAdaptor_HArray1OfCurve* NativeInstance
    {
        ::BRepAdaptor_HArray1OfCurve* get()
        {
            return static_cast<::BRepAdaptor_HArray1OfCurve*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::BRepAdaptor_HArray1OfCurve::Iterator>
    {

#ifdef Include_BRepAdaptor_HArray1OfCurve_Iterator_h
    public:
        Include_BRepAdaptor_HArray1OfCurve_Iterator_h
#endif

    public:
        Iterator(::BRepAdaptor_HArray1OfCurve::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::BRepAdaptor_HArray1OfCurve::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepAdaptor_HArray1OfCurve::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::BRepAdaptor_HArray1OfCurve::Iterator>( &nativeInstance, false )
        {}

        property ::BRepAdaptor_HArray1OfCurve::Iterator* NativeInstance
        {
            ::BRepAdaptor_HArray1OfCurve::Iterator* get()
            {
                return static_cast<::BRepAdaptor_HArray1OfCurve::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    BRepAdaptor_HArray1OfCurve();
    BRepAdaptor_HArray1OfCurve(int theLower, int theUpper);
    BRepAdaptor_HArray1OfCurve(int theLower, int theUpper, RDC::OCC::BRepAdaptor_Curve^ theValue);
    BRepAdaptor_HArray1OfCurve(RDC::OCC::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper, bool parameter1);
    BRepAdaptor_HArray1OfCurve(RDC::OCC::BRepAdaptor_Array1OfCurve^ theOther);
    RDC::OCC::BRepAdaptor_Array1OfCurve^ Array1();
    RDC::OCC::BRepAdaptor_Array1OfCurve^ ChangeArray1();
    void Init(RDC::OCC::BRepAdaptor_Curve^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::BRepAdaptor_HArray1OfCurve^ Assign(RDC::OCC::BRepAdaptor_HArray1OfCurve^ theOther);
    RDC::OCC::BRepAdaptor_HArray1OfCurve^ Move(RDC::OCC::BRepAdaptor_HArray1OfCurve^ theOther);
    RDC::OCC::BRepAdaptor_Curve^ First();
    RDC::OCC::BRepAdaptor_Curve^ ChangeFirst();
    RDC::OCC::BRepAdaptor_Curve^ Last();
    RDC::OCC::BRepAdaptor_Curve^ ChangeLast();
    virtual RDC::OCC::BRepAdaptor_Curve^ Value(int theIndex);
    RDC::OCC::BRepAdaptor_Curve^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::BRepAdaptor_Curve^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::BRepAdaptor_HArray1OfCurve^ CreateDowncasted(::BRepAdaptor_HArray1OfCurve* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::BRepAdaptor_Curve^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepAdaptor_HArray1OfCurve

//---------------------------------------------------------------------
//  Class  BRepAdaptor_CompCurve
//---------------------------------------------------------------------
/// <summary>
/// The Curve from BRepAdaptor allows to use a Wire
/// of the BRep topology like a 3D curve.
/// Warning: With this  class of curve,  C0 and C1 continuities
/// are not assumed. So be careful with some algorithm!
/// Please note that BRepAdaptor_CompCurve cannot be
/// periodic curve at all (even if it contains single
/// periodic edge).
/// 
/// BRepAdaptor_CompCurve can only work on valid wires where all edges are
/// connected to each other to make a chain.
/// </summary>
public ref class BRepAdaptor_CompCurve sealed
    : public RDC::OCC::Adaptor3d_Curve
{

#ifdef Include_BRepAdaptor_CompCurve_h
public:
    Include_BRepAdaptor_CompCurve_h
#endif

public:
    BRepAdaptor_CompCurve(::BRepAdaptor_CompCurve* nativeInstance)
        : RDC::OCC::Adaptor3d_Curve( nativeInstance )
    {}

    BRepAdaptor_CompCurve(::BRepAdaptor_CompCurve& nativeInstance)
        : RDC::OCC::Adaptor3d_Curve( nativeInstance )
    {}

    property ::BRepAdaptor_CompCurve* NativeInstance
    {
        ::BRepAdaptor_CompCurve* get()
        {
            return static_cast<::BRepAdaptor_CompCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an undefined Curve with no Wire loaded.
    /// </summary>
    BRepAdaptor_CompCurve();
    BRepAdaptor_CompCurve(RDC::OCC::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa);
    BRepAdaptor_CompCurve(RDC::OCC::TopoDS_Wire^ W);
    /// <summary>
    /// Creates a Curve  to  access the geometry of edge
    /// <W>.
    /// </summary>
    BRepAdaptor_CompCurve(RDC::OCC::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Sets the  wire <W>.
    /// </summary>
    void Initialize(RDC::OCC::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa);
    /// <summary>
    /// Sets wire <W> and trimmed  parameter.
    /// </summary>
    void Initialize(RDC::OCC::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol);
    /// <summary>
    /// Returns the wire.
    /// </summary>
    RDC::OCC::TopoDS_Wire^ Wire();
    /// <summary>
    /// returns an  edge  and   one  parameter on them
    /// corresponding to the parameter U.
    /// </summary>
    void Edge(double U, RDC::OCC::TopoDS_Edge^ E, double% UonE);
    double FirstParameter();
    double LastParameter();
    RDC::OCC::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns  the number  of  intervals for  continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    int NbIntervals(RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide  enough room to  accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    void Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  curve equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ Trim(double First, double Last, double Tol);
    bool IsClosed();
    bool IsPeriodic();
    double Period();
    /// <summary>
    /// Computes the point of parameter U on the curve
    /// </summary>
    RDC::OCC::Pnt Value(double U);
    /// <summary>
    /// Computes the point of parameter U.
    /// </summary>
    void D0(double U, RDC::OCC::Pnt% P);
    /// <summary>
    /// Computes the point of parameter U on the curve
    /// with its first derivative.
    /// Raised if the continuity of the current interval
    /// is not C1.
    /// </summary>
    void D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// Raised if the continuity of the current interval
    /// is not C2.
    /// </summary>
    void D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first, the second
    /// and the third derivative.
    /// Raised if the continuity of the current interval
    /// is not C3.
    /// </summary>
    void D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if the continuity of the current interval
    /// is not CN.
    /// Raised if N < 1.
    /// </summary>
    RDC::OCC::Vec DN(double U, int N);
    /// <summary>
    /// returns the parametric resolution
    /// </summary>
    double Resolution(double R3d);
    RDC::OCC::GeomAbs_CurveType GetCurveType();
    RDC::OCC::gp_Lin^ Line();
    RDC::OCC::gp_Circ^ Circle();
    RDC::OCC::gp_Elips^ Ellipse();
    RDC::OCC::gp_Hypr^ Hyperbola();
    RDC::OCC::gp_Parab^ Parabola();
    int Degree();
    bool IsRational();
    int NbPoles();
    int NbKnots();
    RDC::OCC::Geom_BezierCurve^ Bezier();
    RDC::OCC::Geom_BSplineCurve^ BSpline();
    static RDC::OCC::BRepAdaptor_CompCurve^ CreateDowncasted(::BRepAdaptor_CompCurve* instance);
}; // class BRepAdaptor_CompCurve

//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve2d
//---------------------------------------------------------------------
/// <summary>
/// The Curve2d from BRepAdaptor allows to use an Edge
/// on   a Face like   a  2d   curve. (curve  in   the
/// parametric space).
/// 
/// It  has  the methods    of the class Curve2d  from
/// Adpator.
/// 
/// It  is created or  initialized with a  Face and an
/// Edge.  The methods are  inherited from  Curve from
/// Geom2dAdaptor.
/// </summary>
public ref class BRepAdaptor_Curve2d sealed
    : public RDC::OCC::Geom2dAdaptor_Curve
{

#ifdef Include_BRepAdaptor_Curve2d_h
public:
    Include_BRepAdaptor_Curve2d_h
#endif

public:
    BRepAdaptor_Curve2d(::BRepAdaptor_Curve2d* nativeInstance)
        : RDC::OCC::Geom2dAdaptor_Curve( nativeInstance )
    {}

    BRepAdaptor_Curve2d(::BRepAdaptor_Curve2d& nativeInstance)
        : RDC::OCC::Geom2dAdaptor_Curve( nativeInstance )
    {}

    property ::BRepAdaptor_Curve2d* NativeInstance
    {
        ::BRepAdaptor_Curve2d* get()
        {
            return static_cast<::BRepAdaptor_Curve2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an uninitialized curve2d.
    /// </summary>
    BRepAdaptor_Curve2d();
    /// <summary>
    /// Creates with the pcurve of <E> on <F>.
    /// </summary>
    BRepAdaptor_Curve2d(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    RDC::OCC::Adaptor2d_Curve2d^ ShallowCopy();
    /// <summary>
    /// Initialize with the pcurve of <E> on <F>.
    /// </summary>
    void Initialize(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F);
    /// <summary>
    /// Returns the Edge.
    /// </summary>
    RDC::OCC::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the Face.
    /// </summary>
    RDC::OCC::TopoDS_Face^ Face();
    static RDC::OCC::BRepAdaptor_Curve2d^ CreateDowncasted(::BRepAdaptor_Curve2d* instance);
}; // class BRepAdaptor_Curve2d

//---------------------------------------------------------------------
//  Class  BRepAdaptor_Surface
//---------------------------------------------------------------------
/// <summary>
/// The Surface from BRepAdaptor allows to  use a Face
/// of the BRep topology look like a 3D surface.
/// 
/// It  has  the methods  of  the class   Surface from
/// Adaptor3d.
/// 
/// It is created or initialized with a Face. It takes
/// into account the local coordinates system.
/// 
/// The  u,v parameter range is   the minmax value for
/// the  restriction,  unless  the flag restriction is
/// set to false.
/// </summary>
public ref class BRepAdaptor_Surface sealed
    : public RDC::OCC::Adaptor3d_Surface
{

#ifdef Include_BRepAdaptor_Surface_h
public:
    Include_BRepAdaptor_Surface_h
#endif

public:
    BRepAdaptor_Surface(::BRepAdaptor_Surface* nativeInstance)
        : RDC::OCC::Adaptor3d_Surface( nativeInstance )
    {}

    BRepAdaptor_Surface(::BRepAdaptor_Surface& nativeInstance)
        : RDC::OCC::Adaptor3d_Surface( nativeInstance )
    {}

    property ::BRepAdaptor_Surface* NativeInstance
    {
        ::BRepAdaptor_Surface* get()
        {
            return static_cast<::BRepAdaptor_Surface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an undefined surface with no face loaded.
    /// </summary>
    BRepAdaptor_Surface();
    /// <summary>
    /// Creates a surface to  access the geometry  of <F>.
    /// If  <Restriction> is  true  the parameter range is
    /// the  parameter  range  in   the  UV space  of  the
    /// restriction.
    /// </summary>
    BRepAdaptor_Surface(RDC::OCC::TopoDS_Face^ F, bool R);
    /// <summary>
    /// Creates a surface to  access the geometry  of <F>.
    /// If  <Restriction> is  true  the parameter range is
    /// the  parameter  range  in   the  UV space  of  the
    /// restriction.
    /// </summary>
    BRepAdaptor_Surface(RDC::OCC::TopoDS_Face^ F);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    RDC::OCC::Adaptor3d_Surface^ ShallowCopy();
    /// <summary>
    /// Sets the surface to the geometry of <F>.
    /// </summary>
    void Initialize(RDC::OCC::TopoDS_Face^ F, bool Restriction);
    /// <summary>
    /// Sets the surface to the geometry of <F>.
    /// </summary>
    void Initialize(RDC::OCC::TopoDS_Face^ F);
    /// <summary>
    /// Returns the surface.
    /// </summary>
    RDC::OCC::GeomAdaptor_Surface^ Surface();
    /// <summary>
    /// Returns the surface.
    /// </summary>
    RDC::OCC::GeomAdaptor_Surface^ ChangeSurface();
    /// <summary>
    /// Returns the surface coordinate system.
    /// </summary>
    RDC::OCC::Trsf Trsf();
    /// <summary>
    /// Returns the face.
    /// </summary>
    RDC::OCC::TopoDS_Face^ Face();
    /// <summary>
    /// Returns the face tolerance.
    /// </summary>
    double Tolerance();
    double FirstUParameter();
    double LastUParameter();
    double FirstVParameter();
    double LastVParameter();
    RDC::OCC::GeomAbs_Shape UContinuity();
    RDC::OCC::GeomAbs_Shape VContinuity();
    /// <summary>
    /// If necessary, breaks the surface in U intervals of
    /// continuity    <S>.  And   returns  the  number  of
    /// intervals.
    /// </summary>
    int NbUIntervals(RDC::OCC::GeomAbs_Shape theSh);
    /// <summary>
    /// If necessary, breaks the surface in V intervals of
    /// continuity    <S>.  And   returns  the  number  of
    /// intervals.
    /// </summary>
    int NbVIntervals(RDC::OCC::GeomAbs_Shape theSh);
    /// <summary>
    /// Returns the  intervals with the requested continuity
    /// in the U direction.
    /// </summary>
    void UIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns the  intervals with the requested continuity
    /// in the V direction.
    /// </summary>
    void VIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  surface trimmed in the U direction
    /// equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    RDC::OCC::Adaptor3d_Surface^ UTrim(double First, double Last, double Tol);
    /// <summary>
    /// Returns    a  surface trimmed in the V direction  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    RDC::OCC::Adaptor3d_Surface^ VTrim(double First, double Last, double Tol);
    bool IsUClosed();
    bool IsVClosed();
    bool IsUPeriodic();
    double UPeriod();
    bool IsVPeriodic();
    double VPeriod();
    /// <summary>
    /// Computes the point of parameters U,V on the surface.
    /// Tip: use GeomLib::NormEstim() to calculate surface normal at specified (U, V) point.
    /// </summary>
    RDC::OCC::Pnt Value(double U, double V);
    /// <summary>
    /// Computes the point of parameters U,V on the surface.
    /// </summary>
    void D0(double U, double V, RDC::OCC::Pnt% P);
    /// <summary>
    /// Computes the point  and the first derivatives on the surface.
    /// Raised if the continuity of the current intervals is not C1.
    /// 
    /// Tip: use GeomLib::NormEstim() to calculate surface normal at specified (U, V) point.
    /// </summary>
    void D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V);
    /// <summary>
    /// Computes   the point,  the  first  and  second
    /// derivatives on the surface.
    /// Raised  if   the   continuity   of the current
    /// intervals is not C2.
    /// </summary>
    void D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV);
    /// <summary>
    /// Computes the point,  the first, second and third
    /// derivatives on the surface.
    /// Raised  if   the   continuity   of the current
    /// intervals is not C3.
    /// </summary>
    void D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction
    /// U and Nv in the direction V at the point P(U, V).
    /// Raised if the current U  interval is not not CNu
    /// and the current V interval is not CNv.
    /// Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// </summary>
    RDC::OCC::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Returns the parametric U  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double UResolution(double theR3d);
    /// <summary>
    /// Returns the parametric V  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double VResolution(double theR3d);
    /// <summary>
    /// Returns the type of the surface : Plane, Cylinder,
    /// Cone,      Sphere,        Torus,    BezierSurface,
    /// BSplineSurface,               SurfaceOfRevolution,
    /// SurfaceOfExtrusion, OtherSurface
    /// </summary>
    RDC::OCC::GeomAbs_SurfaceType GetSurfaceType();
    RDC::OCC::Pln Plane();
    RDC::OCC::gp_Cylinder^ Cylinder();
    RDC::OCC::gp_Cone^ Cone();
    RDC::OCC::gp_Sphere^ Sphere();
    RDC::OCC::gp_Torus^ Torus();
    int UDegree();
    int NbUPoles();
    int VDegree();
    int NbVPoles();
    int NbUKnots();
    int NbVKnots();
    bool IsURational();
    bool IsVRational();
    RDC::OCC::Geom_BezierSurface^ Bezier();
    /// <summary>
    /// Warning : this will make a copy of the
    /// BSpline Surface since it applies
    /// to it the myTsrf transformation
    /// Be Careful when using this method
    /// </summary>
    RDC::OCC::Geom_BSplineSurface^ BSpline();
    RDC::OCC::Ax1 AxeOfRevolution();
    RDC::OCC::Dir Direction();
    /// <summary>
    /// only for SurfaceOfExtrusion and SurfaceOfRevolution
    /// Warning: this will make a copy of the underlying curve
    /// since it applies to it the transformation
    /// myTrsf. Be careful when using this method.
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ BasisCurve();
    RDC::OCC::Adaptor3d_Surface^ BasisSurface();
    double OffsetValue();
    static RDC::OCC::BRepAdaptor_Surface^ CreateDowncasted(::BRepAdaptor_Surface* instance);
}; // class BRepAdaptor_Surface

}; // namespace OCC
}; // namespace RDC
