// Generated wrapper code for package Geom2dConvert

#include "OcctPCH.h"
#include "Geom2dConvert.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Geom2d.h"
#include "Convert.h"
#include "TColStd.h"
#include "gp.h"
#include "Adaptor2d.h"
#include "GeomAbs.h"


//---------------------------------------------------------------------
//  Class  Geom2dConvert_SequenceOfPPoint
//---------------------------------------------------------------------

RDC::OCC::Geom2dConvert_SequenceOfPPoint::Geom2dConvert_SequenceOfPPoint()
	: RDC::OCC::BaseClass<::Geom2dConvert_SequenceOfPPoint>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_SequenceOfPPoint();
}

RDC::OCC::Geom2dConvert_SequenceOfPPoint::Geom2dConvert_SequenceOfPPoint(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::Geom2dConvert_SequenceOfPPoint>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_SequenceOfPPoint(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::Geom2dConvert_SequenceOfPPoint::Size()
{
	int _result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Geom2dConvert_SequenceOfPPoint::Length()
{
	int _result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::Geom2dConvert_SequenceOfPPoint::Lower()
{
	int _result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Geom2dConvert_SequenceOfPPoint::Upper()
{
	int _result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::Geom2dConvert_SequenceOfPPoint::IsEmpty()
{
	bool _result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::Reverse()
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Reverse();
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::Exchange(int I, int J)
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::Clear()
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Clear(0L);
}

RDC::OCC::Geom2dConvert_SequenceOfPPoint^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::Assign(RDC::OCC::Geom2dConvert_SequenceOfPPoint^ theOther)
{
	::Geom2dConvert_SequenceOfPPoint* _result = new ::Geom2dConvert_SequenceOfPPoint();
	*_result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Assign(*(::Geom2dConvert_SequenceOfPPoint*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom2dConvert_SequenceOfPPoint(_result);
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::Remove(RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator^ thePosition)
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Remove(*(::Geom2dConvert_SequenceOfPPoint::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::Append(RDC::OCC::Geom2dConvert_PPoint^ theItem)
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Append(*(::Geom2dConvert_PPoint*)theItem->NativeInstance);
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::Prepend(RDC::OCC::Geom2dConvert_PPoint^ theItem)
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Prepend(*(::Geom2dConvert_PPoint*)theItem->NativeInstance);
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::InsertBefore(int theIndex, RDC::OCC::Geom2dConvert_PPoint^ theItem)
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->InsertBefore(theIndex, *(::Geom2dConvert_PPoint*)theItem->NativeInstance);
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::InsertAfter(RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator^ thePosition, RDC::OCC::Geom2dConvert_PPoint^ theItem)
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->InsertAfter(*(::Geom2dConvert_SequenceOfPPoint::Iterator*)thePosition->NativeInstance, *(::Geom2dConvert_PPoint*)theItem->NativeInstance);
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::Split(int theIndex, RDC::OCC::Geom2dConvert_SequenceOfPPoint^ theSeq)
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Split(theIndex, *(::Geom2dConvert_SequenceOfPPoint*)theSeq->NativeInstance);
}

RDC::OCC::Geom2dConvert_PPoint^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::First()
{
	::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
	*_result = (::Geom2dConvert_PPoint)((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom2dConvert_PPoint(_result);
}

RDC::OCC::Geom2dConvert_PPoint^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::ChangeFirst()
{
	::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
	*_result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom2dConvert_PPoint(_result);
}

RDC::OCC::Geom2dConvert_PPoint^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::Last()
{
	::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
	*_result = (::Geom2dConvert_PPoint)((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom2dConvert_PPoint(_result);
}

RDC::OCC::Geom2dConvert_PPoint^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::ChangeLast()
{
	::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
	*_result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom2dConvert_PPoint(_result);
}

RDC::OCC::Geom2dConvert_PPoint^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::Value(int theIndex)
{
	::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
	*_result = (::Geom2dConvert_PPoint)((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom2dConvert_PPoint(_result);
}

RDC::OCC::Geom2dConvert_PPoint^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::ChangeValue(int theIndex)
{
	::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
	*_result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom2dConvert_PPoint(_result);
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::SetValue(int theIndex, RDC::OCC::Geom2dConvert_PPoint^ theItem)
{
	((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->SetValue(theIndex, *(::Geom2dConvert_PPoint*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Geom2dConvert_PPoint^>^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Geom2dConvert_PPoint^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Geom2dConvert_PPoint^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_SequenceOfPPoint::Iterator
//---------------------------------------------------------------------

RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator::Iterator()
	: RDC::OCC::BaseClass<::Geom2dConvert_SequenceOfPPoint::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_SequenceOfPPoint::Iterator();
}

bool RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator::More()
{
	bool _result = ((::Geom2dConvert_SequenceOfPPoint::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator::Next()
{
	((::Geom2dConvert_SequenceOfPPoint::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Geom2dConvert_PPoint^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator::Value()
{
	::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
	*_result = (::Geom2dConvert_PPoint)((::Geom2dConvert_SequenceOfPPoint::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom2dConvert_PPoint(_result);
}

RDC::OCC::Geom2dConvert_PPoint^ RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator::ChangeValue()
{
	::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
	*_result = ((::Geom2dConvert_SequenceOfPPoint::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom2dConvert_PPoint(_result);
}

bool RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator::IsEqual(RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator^ theOther)
{
	bool _result = ((::Geom2dConvert_SequenceOfPPoint::Iterator*)_NativeInstance)->IsEqual(*(::Geom2dConvert_SequenceOfPPoint::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::Geom2dConvert_SequenceOfPPoint::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert
//---------------------------------------------------------------------

RDC::OCC::Geom2dConvert::Geom2dConvert()
	: RDC::OCC::BaseClass<::Geom2dConvert>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert();
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dConvert::SplitBSplineCurve(RDC::OCC::Geom2d_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation)
{
	Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromK1, ToK2, SameOrientation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dConvert::SplitBSplineCurve(RDC::OCC::Geom2d_BSplineCurve^ C, int FromK1, int ToK2)
{
	Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromK1, ToK2, true);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dConvert::SplitBSplineCurve(RDC::OCC::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation)
{
	Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromU1, ToU2, ParametricTolerance, SameOrientation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dConvert::SplitBSplineCurve(RDC::OCC::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance)
{
	Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromU1, ToU2, ParametricTolerance, true);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dConvert::CurveToBSplineCurve(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Convert_ParameterisationType Parameterisation)
{
	Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::CurveToBSplineCurve(Handle(::Geom2d_Curve)(C->NativeInstance), (::Convert_ParameterisationType)Parameterisation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dConvert::CurveToBSplineCurve(RDC::OCC::Geom2d_Curve^ C)
{
	Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::CurveToBSplineCurve(Handle(::Geom2d_Curve)(C->NativeInstance), Convert_TgtThetaOver2);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2dConvert::C0BSplineToC1BSplineCurve(RDC::OCC::Geom2d_BSplineCurve^ BS, double Tolerance)
{
	Handle(::Geom2d_BSplineCurve) h_BS = BS->NativeInstance;
	::Geom2dConvert::C0BSplineToC1BSplineCurve(h_BS, Tolerance);
	BS->NativeInstance = h_BS.get();
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_PPoint
//---------------------------------------------------------------------

RDC::OCC::Geom2dConvert_PPoint::Geom2dConvert_PPoint()
	: RDC::OCC::BaseClass<::Geom2dConvert_PPoint>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_PPoint();
}

RDC::OCC::Geom2dConvert_PPoint::Geom2dConvert_PPoint(double theParameter, RDC::OCC::XY thePoint, RDC::OCC::XY theD1)
	: RDC::OCC::BaseClass<::Geom2dConvert_PPoint>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::XY> pp_thePoint = &thePoint;
	pin_ptr<RDC::OCC::XY> pp_theD1 = &theD1;
	_NativeInstance = new ::Geom2dConvert_PPoint(theParameter, *(gp_XY*)pp_thePoint, *(gp_XY*)pp_theD1);
}

RDC::OCC::Geom2dConvert_PPoint::Geom2dConvert_PPoint(double theParameter, RDC::OCC::Adaptor2d_Curve2d^ theAdaptor)
	: RDC::OCC::BaseClass<::Geom2dConvert_PPoint>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_PPoint(theParameter, *(::Adaptor2d_Curve2d*)theAdaptor->NativeInstance);
}

double RDC::OCC::Geom2dConvert_PPoint::Dist(RDC::OCC::Geom2dConvert_PPoint^ theOth)
{
	double _result = ((::Geom2dConvert_PPoint*)_NativeInstance)->Dist(*(::Geom2dConvert_PPoint*)theOth->NativeInstance);
	return _result;
}

double RDC::OCC::Geom2dConvert_PPoint::Parameter()
{
	double _result = ((::Geom2dConvert_PPoint*)_NativeInstance)->Parameter();
	return _result;
}

RDC::OCC::XY RDC::OCC::Geom2dConvert_PPoint::Point()
{
	::gp_XY _nativeResult = ((::Geom2dConvert_PPoint*)_NativeInstance)->Point();
	return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::Geom2dConvert_PPoint::D1()
{
	::gp_XY _nativeResult = ((::Geom2dConvert_PPoint*)_NativeInstance)->D1();
	return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::Geom2dConvert_PPoint::SetD1(RDC::OCC::XY theD1)
{
	pin_ptr<RDC::OCC::XY> pp_theD1 = &theD1;
	((::Geom2dConvert_PPoint*)_NativeInstance)->SetD1(*(gp_XY*)pp_theD1);
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_ApproxArcsSegments
//---------------------------------------------------------------------

RDC::OCC::Geom2dConvert_ApproxArcsSegments::Geom2dConvert_ApproxArcsSegments(RDC::OCC::Adaptor2d_Curve2d^ theCurve, double theTolerance, double theAngleTol)
	: RDC::OCC::BaseClass<::Geom2dConvert_ApproxArcsSegments>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_ApproxArcsSegments(*(::Adaptor2d_Curve2d*)theCurve->NativeInstance, theTolerance, theAngleTol);
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_ApproxCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2dConvert_ApproxCurve::Geom2dConvert_ApproxCurve(RDC::OCC::Geom2d_Curve^ Curve, double Tol2d, RDC::OCC::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
	: RDC::OCC::BaseClass<::Geom2dConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_ApproxCurve(Handle(::Geom2d_Curve)(Curve->NativeInstance), Tol2d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

RDC::OCC::Geom2dConvert_ApproxCurve::Geom2dConvert_ApproxCurve(RDC::OCC::Adaptor2d_Curve2d^ Curve, double Tol2d, RDC::OCC::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
	: RDC::OCC::BaseClass<::Geom2dConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_ApproxCurve(Handle(::Adaptor2d_Curve2d)(Curve->NativeInstance), Tol2d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dConvert_ApproxCurve::Curve()
{
	Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->Curve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

bool RDC::OCC::Geom2dConvert_ApproxCurve::IsDone()
{
	bool _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->IsDone();
	return _result;
}

bool RDC::OCC::Geom2dConvert_ApproxCurve::HasResult()
{
	bool _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->HasResult();
	return _result;
}

double RDC::OCC::Geom2dConvert_ApproxCurve::MaxError()
{
	double _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->MaxError();
	return _result;
}

void RDC::OCC::Geom2dConvert_ApproxCurve::Dump(System::IO::TextWriter^ o)
{
	std::ostringstream oss_o;
	((::Geom2dConvert_ApproxCurve*)_NativeInstance)->Dump(oss_o);
	o->Write(gcnew System::String(oss_o.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------

RDC::OCC::Geom2dConvert_BSplineCurveKnotSplitting::Geom2dConvert_BSplineCurveKnotSplitting(RDC::OCC::Geom2d_BSplineCurve^ BasisCurve, int ContinuityRange)
	: RDC::OCC::BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_BSplineCurveKnotSplitting(Handle(::Geom2d_BSplineCurve)(BasisCurve->NativeInstance), ContinuityRange);
}

int RDC::OCC::Geom2dConvert_BSplineCurveKnotSplitting::NbSplits()
{
	int _result = ((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->NbSplits();
	return _result;
}

void RDC::OCC::Geom2dConvert_BSplineCurveKnotSplitting::Splitting(RDC::OCC::TColStd_Array1OfInteger^ SplitValues)
{
	((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->Splitting(*(::TColStd_Array1OfInteger*)SplitValues->NativeInstance);
}

int RDC::OCC::Geom2dConvert_BSplineCurveKnotSplitting::SplitValue(int Index)
{
	int _result = ((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->SplitValue(Index);
	return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2dConvert_BSplineCurveToBezierCurve::Geom2dConvert_BSplineCurveToBezierCurve(RDC::OCC::Geom2d_BSplineCurve^ BasisCurve)
	: RDC::OCC::BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_BSplineCurveToBezierCurve(Handle(::Geom2d_BSplineCurve)(BasisCurve->NativeInstance));
}

RDC::OCC::Geom2dConvert_BSplineCurveToBezierCurve::Geom2dConvert_BSplineCurveToBezierCurve(RDC::OCC::Geom2d_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance)
	: RDC::OCC::BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_BSplineCurveToBezierCurve(Handle(::Geom2d_BSplineCurve)(BasisCurve->NativeInstance), U1, U2, ParametricTolerance);
}

RDC::OCC::Geom2d_BezierCurve^ RDC::OCC::Geom2dConvert_BSplineCurveToBezierCurve::Arc(int Index)
{
	Handle(::Geom2d_BezierCurve) _result = ((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Arc(Index);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2dConvert_BSplineCurveToBezierCurve::Knots(RDC::OCC::TColStd_Array1OfReal^ TKnots)
{
	((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Knots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

int RDC::OCC::Geom2dConvert_BSplineCurveToBezierCurve::NbArcs()
{
	int _result = ((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->NbArcs();
	return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(RDC::OCC::Convert_ParameterisationType Parameterisation)
	: RDC::OCC::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve((::Convert_ParameterisationType)Parameterisation);
}

RDC::OCC::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve()
	: RDC::OCC::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(Convert_TgtThetaOver2);
}

RDC::OCC::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(RDC::OCC::Geom2d_BoundedCurve^ BasisCurve, RDC::OCC::Convert_ParameterisationType Parameterisation)
	: RDC::OCC::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(Handle(::Geom2d_BoundedCurve)(BasisCurve->NativeInstance), (::Convert_ParameterisationType)Parameterisation);
}

RDC::OCC::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(RDC::OCC::Geom2d_BoundedCurve^ BasisCurve)
	: RDC::OCC::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(Handle(::Geom2d_BoundedCurve)(BasisCurve->NativeInstance), Convert_TgtThetaOver2);
}

bool RDC::OCC::Geom2dConvert_CompCurveToBSplineCurve::Add(RDC::OCC::Geom2d_BoundedCurve^ NewCurve, double Tolerance, bool After)
{
	bool _result = ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom2d_BoundedCurve)(NewCurve->NativeInstance), Tolerance, After);
	return _result;
}

bool RDC::OCC::Geom2dConvert_CompCurveToBSplineCurve::Add(RDC::OCC::Geom2d_BoundedCurve^ NewCurve, double Tolerance)
{
	bool _result = ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom2d_BoundedCurve)(NewCurve->NativeInstance), Tolerance, false);
	return _result;
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dConvert_CompCurveToBSplineCurve::BSplineCurve()
{
	Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->BSplineCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2dConvert_CompCurveToBSplineCurve::Clear()
{
	((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Clear();
}


