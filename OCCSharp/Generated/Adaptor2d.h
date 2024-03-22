// Generated wrapper code for package Adaptor2d

#pragma once


namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Class  Adaptor2d_Curve2d
//---------------------------------------------------------------------
/// <summary>
/// Root class for 2D curves on which geometric
/// algorithms work.
/// An adapted curve is an interface between the
/// services provided by a curve, and those required of
/// the curve by algorithms, which use it.
/// A derived concrete class is provided:
/// Geom2dAdaptor_Curve for a curve from the Geom2d package.
/// 
/// Polynomial coefficients of BSpline curves used for their evaluation are
/// cached for better performance. Therefore these evaluations are not
/// thread-safe and parallel evaluations need to be prevented.
/// </summary>
public ref class Adaptor2d_Curve2d
	: public RDC::OCC::Standard_Transient {

	#ifdef Include_Adaptor2d_Curve2d_h
public:
	Include_Adaptor2d_Curve2d_h
		#endif

protected:
	Adaptor2d_Curve2d(InitMode init)
		: RDC::OCC::Standard_Transient(init) {
	}

public:
	Adaptor2d_Curve2d(::Adaptor2d_Curve2d* nativeInstance)
		: RDC::OCC::Standard_Transient(nativeInstance) {
	}

	Adaptor2d_Curve2d(::Adaptor2d_Curve2d& nativeInstance)
		: RDC::OCC::Standard_Transient(nativeInstance) {
	}

	property ::Adaptor2d_Curve2d* NativeInstance
	{
		::Adaptor2d_Curve2d* get() {
			return static_cast<::Adaptor2d_Curve2d*>(_NativeInstance);
		}
	}

public:
	Adaptor2d_Curve2d();
	/// <summary>
	/// Shallow copy of adaptor
	/// </summary>
	RDC::OCC::Adaptor2d_Curve2d^ ShallowCopy();
	double FirstParameter();
	double LastParameter();
	RDC::OCC::GeomAbs_Shape Continuity();
	/// <summary>
	/// If necessary,  breaks the  curve in  intervals  of
	/// continuity  <S>.    And  returns   the number   of
	/// intervals.
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
	RDC::OCC::Adaptor2d_Curve2d^ Trim(double First, double Last, double Tol);
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	/// <summary>
	/// Computes the point of parameter U on the curve.
	/// </summary>
	RDC::OCC::Pnt2d Value(double U);
	/// <summary>
	/// Computes the point of parameter U on the curve.
	/// </summary>
	void D0(double U, RDC::OCC::Pnt2d% P);
	/// <summary>
	/// Computes the point of parameter U on the curve with its
	/// first derivative.
	/// Raised if the continuity of the current interval
	/// is not C1.
	/// </summary>
	void D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V);
	/// <summary>
	/// Returns the point P of parameter U, the first and second
	/// derivatives V1 and V2.
	/// Raised if the continuity of the current interval
	/// is not C2.
	/// </summary>
	void D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2);
	/// <summary>
	/// Returns the point P of parameter U, the first, the second
	/// and the third derivative.
	/// Raised if the continuity of the current interval
	/// is not C3.
	/// </summary>
	void D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3);
	/// <summary>
	/// The returned vector gives the value of the derivative for the
	/// order of derivation N.
	/// Raised if the continuity of the current interval
	/// is not CN.
	/// Raised if N < 1.
	/// </summary>
	RDC::OCC::Vec2d DN(double U, int N);
	/// <summary>
	/// Returns the parametric  resolution corresponding
	/// to the real space resolution <R3d>.
	/// </summary>
	double Resolution(double R3d);
	/// <summary>
	/// Returns  the  type of the   curve  in the  current
	/// interval :   Line,   Circle,   Ellipse, Hyperbola,
	/// Parabola, BezierCurve, BSplineCurve, OtherCurve.
	/// </summary>
	RDC::OCC::GeomAbs_CurveType GetCurveType();
	RDC::OCC::gp_Lin2d^ Line();
	RDC::OCC::gp_Circ2d^ Circle();
	RDC::OCC::gp_Elips2d^ Ellipse();
	RDC::OCC::gp_Hypr2d^ Hyperbola();
	RDC::OCC::gp_Parab2d^ Parabola();
	int Degree();
	bool IsRational();
	int NbPoles();
	int NbKnots();
	int NbSamples();
	RDC::OCC::Geom2d_BezierCurve^ Bezier();
	RDC::OCC::Geom2d_BSplineCurve^ BSpline();
	static RDC::OCC::Adaptor2d_Curve2d^ CreateDowncasted(::Adaptor2d_Curve2d* instance);
}; // class Adaptor2d_Curve2d

//---------------------------------------------------------------------
//  Class  Adaptor2d_Line2d
//---------------------------------------------------------------------
/// <summary>
/// Use by the TopolTool to trim a surface.
/// </summary>
public ref class Adaptor2d_Line2d sealed
	: public RDC::OCC::Adaptor2d_Curve2d {

	#ifdef Include_Adaptor2d_Line2d_h
public:
	Include_Adaptor2d_Line2d_h
		#endif

public:
	Adaptor2d_Line2d(::Adaptor2d_Line2d* nativeInstance)
		: RDC::OCC::Adaptor2d_Curve2d(nativeInstance) {
	}

	Adaptor2d_Line2d(::Adaptor2d_Line2d& nativeInstance)
		: RDC::OCC::Adaptor2d_Curve2d(nativeInstance) {
	}

	property ::Adaptor2d_Line2d* NativeInstance
	{
		::Adaptor2d_Line2d* get() {
			return static_cast<::Adaptor2d_Line2d*>(_NativeInstance);
		}
	}

public:
	Adaptor2d_Line2d();
	Adaptor2d_Line2d(RDC::OCC::Pnt2d P, RDC::OCC::Dir2d D, double UFirst, double ULast);
	/// <summary>
	/// Shallow copy of adaptor
	/// </summary>
	RDC::OCC::Adaptor2d_Curve2d^ ShallowCopy();
	void Load(RDC::OCC::gp_Lin2d^ L);
	void Load(RDC::OCC::gp_Lin2d^ L, double UFirst, double ULast);
	double FirstParameter();
	double LastParameter();
	RDC::OCC::GeomAbs_Shape Continuity();
	/// <summary>
	/// If necessary,  breaks the  curve in  intervals  of
	/// continuity  <S>.    And  returns   the number   of
	/// intervals.
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
	RDC::OCC::Adaptor2d_Curve2d^ Trim(double First, double Last, double Tol);
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	RDC::OCC::Pnt2d Value(double X);
	void D0(double X, RDC::OCC::Pnt2d% P);
	void D1(double X, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V);
	void D2(double X, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2);
	void D3(double X, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3);
	RDC::OCC::Vec2d DN(double U, int N);
	double Resolution(double R3d);
	RDC::OCC::GeomAbs_CurveType GetCurveType();
	RDC::OCC::gp_Lin2d^ Line();
	RDC::OCC::gp_Circ2d^ Circle();
	RDC::OCC::gp_Elips2d^ Ellipse();
	RDC::OCC::gp_Hypr2d^ Hyperbola();
	RDC::OCC::gp_Parab2d^ Parabola();
	int Degree();
	bool IsRational();
	int NbPoles();
	int NbKnots();
	RDC::OCC::Geom2d_BezierCurve^ Bezier();
	RDC::OCC::Geom2d_BSplineCurve^ BSpline();
	static RDC::OCC::Adaptor2d_Line2d^ CreateDowncasted(::Adaptor2d_Line2d* instance);
}; // class Adaptor2d_Line2d

//---------------------------------------------------------------------
//  Class  Adaptor2d_OffsetCurve
//---------------------------------------------------------------------
/// <summary>
/// Defines an Offset curve (algorithmic 2d curve).
/// </summary>
public ref class Adaptor2d_OffsetCurve sealed
	: public RDC::OCC::Adaptor2d_Curve2d {

	#ifdef Include_Adaptor2d_OffsetCurve_h
public:
	Include_Adaptor2d_OffsetCurve_h
		#endif

public:
	Adaptor2d_OffsetCurve(::Adaptor2d_OffsetCurve* nativeInstance)
		: RDC::OCC::Adaptor2d_Curve2d(nativeInstance) {
	}

	Adaptor2d_OffsetCurve(::Adaptor2d_OffsetCurve& nativeInstance)
		: RDC::OCC::Adaptor2d_Curve2d(nativeInstance) {
	}

	property ::Adaptor2d_OffsetCurve* NativeInstance
	{
		::Adaptor2d_OffsetCurve* get() {
			return static_cast<::Adaptor2d_OffsetCurve*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// The Offset is set to 0.
	/// </summary>
	Adaptor2d_OffsetCurve();
	/// <summary>
	/// The curve is loaded. The Offset is set to 0.
	/// </summary>
	Adaptor2d_OffsetCurve(RDC::OCC::Adaptor2d_Curve2d^ C);
	/// <summary>
	/// Creates  an  OffsetCurve curve.
	/// The Offset is set to Offset.
	/// </summary>
	Adaptor2d_OffsetCurve(RDC::OCC::Adaptor2d_Curve2d^ C, double Offset);
	/// <summary>
	/// Create an Offset curve.
	/// WFirst,WLast define the bounds of the Offset curve.
	/// </summary>
	Adaptor2d_OffsetCurve(RDC::OCC::Adaptor2d_Curve2d^ C, double Offset, double WFirst, double WLast);
	/// <summary>
	/// Shallow copy of adaptor
	/// </summary>
	RDC::OCC::Adaptor2d_Curve2d^ ShallowCopy();
	/// <summary>
	/// Changes  the curve.  The Offset is reset to 0.
	/// </summary>
	void Load(RDC::OCC::Adaptor2d_Curve2d^ S);
	/// <summary>
	/// Changes the Offset on the current Curve.
	/// </summary>
	void Load(double Offset);
	/// <summary>
	/// Changes the Offset Curve on the current Curve.
	/// </summary>
	void Load(double Offset, double WFirst, double WLast);
	RDC::OCC::Adaptor2d_Curve2d^ Curve();
	double Offset();
	double FirstParameter();
	double LastParameter();
	RDC::OCC::GeomAbs_Shape Continuity();
	/// <summary>
	/// If necessary,  breaks the  curve in  intervals  of
	/// continuity  <S>.    And  returns   the number   of
	/// intervals.
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
	RDC::OCC::Adaptor2d_Curve2d^ Trim(double First, double Last, double Tol);
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	/// <summary>
	/// Computes the point of parameter U on the curve.
	/// </summary>
	RDC::OCC::Pnt2d Value(double U);
	/// <summary>
	/// Computes the point of parameter U on the curve.
	/// </summary>
	void D0(double U, RDC::OCC::Pnt2d% P);
	/// <summary>
	/// Computes the point of parameter U on the curve with its
	/// first derivative.
	/// Raised if the continuity of the current interval
	/// is not C1.
	/// </summary>
	void D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V);
	/// <summary>
	/// Returns the point P of parameter U, the first and second
	/// derivatives V1 and V2.
	/// Raised if the continuity of the current interval
	/// is not C2.
	/// </summary>
	void D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2);
	/// <summary>
	/// Returns the point P of parameter U, the first, the second
	/// and the third derivative.
	/// Raised if the continuity of the current interval
	/// is not C3.
	/// </summary>
	void D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3);
	/// <summary>
	/// The returned vector gives the value of the derivative for the
	/// order of derivation N.
	/// Raised if the continuity of the current interval
	/// is not CN.
	/// Raised if N < 1.
	/// </summary>
	RDC::OCC::Vec2d DN(double U, int N);
	/// <summary>
	/// Returns the parametric  resolution corresponding
	/// to the real space resolution <R3d>.
	/// </summary>
	double Resolution(double R3d);
	/// <summary>
	/// Returns  the  type of the   curve  in the  current
	/// interval :   Line,   Circle,   Ellipse, Hyperbola,
	/// Parabola, BezierCurve, BSplineCurve, OtherCurve.
	/// </summary>
	RDC::OCC::GeomAbs_CurveType GetCurveType();
	RDC::OCC::gp_Lin2d^ Line();
	RDC::OCC::gp_Circ2d^ Circle();
	RDC::OCC::gp_Elips2d^ Ellipse();
	RDC::OCC::gp_Hypr2d^ Hyperbola();
	RDC::OCC::gp_Parab2d^ Parabola();
	int Degree();
	bool IsRational();
	int NbPoles();
	int NbKnots();
	RDC::OCC::Geom2d_BezierCurve^ Bezier();
	RDC::OCC::Geom2d_BSplineCurve^ BSpline();
	int NbSamples();
	static RDC::OCC::Adaptor2d_OffsetCurve^ CreateDowncasted(::Adaptor2d_OffsetCurve* instance);
}; // class Adaptor2d_OffsetCurve

}; // namespace OCC
}; // namespace RDC
