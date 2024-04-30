// Generated wrapper code for package IntAna

#include "OcctPCH.h"
#include "IntAna.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "gp.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  IntAna_ListOfCurve
//---------------------------------------------------------------------

RDC::OCC::IntAna_ListOfCurve::IntAna_ListOfCurve()
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_ListOfCurve();
}

RDC::OCC::IntAna_ListOfCurve::IntAna_ListOfCurve(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_ListOfCurve(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::IntAna_ListOfCurve::Size()
{
	int _result = ((::IntAna_ListOfCurve*)_NativeInstance)->Size();
	return _result;
}

RDC::OCC::IntAna_ListOfCurve^ RDC::OCC::IntAna_ListOfCurve::Assign(RDC::OCC::IntAna_ListOfCurve^ theOther)
{
	::IntAna_ListOfCurve* _result = new ::IntAna_ListOfCurve();
	*_result = ((::IntAna_ListOfCurve*)_NativeInstance)->Assign(*(::IntAna_ListOfCurve*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_ListOfCurve(_result);
}

void RDC::OCC::IntAna_ListOfCurve::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::IntAna_ListOfCurve*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::IntAna_ListOfCurve::Clear()
{
	((::IntAna_ListOfCurve*)_NativeInstance)->Clear(0L);
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_ListOfCurve::First()
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = (::IntAna_Curve)((::IntAna_ListOfCurve*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_ListOfCurve::Last()
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = (::IntAna_Curve)((::IntAna_ListOfCurve*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_ListOfCurve::Append(RDC::OCC::IntAna_Curve^ theItem)
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = ((::IntAna_ListOfCurve*)_NativeInstance)->Append(*(::IntAna_Curve*)theItem->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_ListOfCurve::Prepend(RDC::OCC::IntAna_Curve^ theItem)
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = ((::IntAna_ListOfCurve*)_NativeInstance)->Prepend(*(::IntAna_Curve*)theItem->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}

void RDC::OCC::IntAna_ListOfCurve::RemoveFirst()
{
	((::IntAna_ListOfCurve*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::IntAna_ListOfCurve::Remove(RDC::OCC::IntAna_ListOfCurve::Iterator^ theIter)
{
	((::IntAna_ListOfCurve*)_NativeInstance)->Remove(*(::IntAna_ListOfCurve::Iterator*)theIter->NativeInstance);
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_ListOfCurve::InsertBefore(RDC::OCC::IntAna_Curve^ theItem, RDC::OCC::IntAna_ListOfCurve::Iterator^ theIter)
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = ((::IntAna_ListOfCurve*)_NativeInstance)->InsertBefore(*(::IntAna_Curve*)theItem->NativeInstance, *(::IntAna_ListOfCurve::Iterator*)theIter->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_ListOfCurve::InsertAfter(RDC::OCC::IntAna_Curve^ theItem, RDC::OCC::IntAna_ListOfCurve::Iterator^ theIter)
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = ((::IntAna_ListOfCurve*)_NativeInstance)->InsertAfter(*(::IntAna_Curve*)theItem->NativeInstance, *(::IntAna_ListOfCurve::Iterator*)theIter->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}

void RDC::OCC::IntAna_ListOfCurve::Reverse()
{
	((::IntAna_ListOfCurve*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<RDC::OCC::IntAna_Curve^>^ RDC::OCC::IntAna_ListOfCurve::GetEnumerator()
{
	return gcnew RDC::OCC::IntAna_ListOfCurve::Iterator(new ::IntAna_ListOfCurve::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ RDC::OCC::IntAna_ListOfCurve::GetEnumerator2()
{
	return gcnew RDC::OCC::IntAna_ListOfCurve::Iterator(new ::IntAna_ListOfCurve::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  IntAna_ListOfCurve::Iterator
//---------------------------------------------------------------------

RDC::OCC::IntAna_ListOfCurve::Iterator::Iterator()
	: RDC::OCC::IteratorEnumerator<RDC::OCC::IntAna_Curve^, ::IntAna_ListOfCurve::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_ListOfCurve::Iterator();
}

bool RDC::OCC::IntAna_ListOfCurve::Iterator::More()
{
	bool _result = ((::IntAna_ListOfCurve::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::IntAna_ListOfCurve::Iterator::Next()
{
	((::IntAna_ListOfCurve::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_ListOfCurve::Iterator::Value()
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = (::IntAna_Curve)((::IntAna_ListOfCurve::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_ListOfCurve::Iterator::ChangeValue()
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = ((::IntAna_ListOfCurve::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}



//---------------------------------------------------------------------
//  Class  IntAna_ListIteratorOfListOfCurve
//---------------------------------------------------------------------

RDC::OCC::IntAna_ListIteratorOfListOfCurve::IntAna_ListIteratorOfListOfCurve()
	: RDC::OCC::BaseClass<::IntAna_ListIteratorOfListOfCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_ListIteratorOfListOfCurve();
}

RDC::OCC::IntAna_ListIteratorOfListOfCurve::IntAna_ListIteratorOfListOfCurve(RDC::OCC::NCollection_BaseList^ theList)
	: RDC::OCC::BaseClass<::IntAna_ListIteratorOfListOfCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_ListIteratorOfListOfCurve(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::IntAna_ListIteratorOfListOfCurve::More()
{
	bool _result = ((::IntAna_ListIteratorOfListOfCurve*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::IntAna_ListIteratorOfListOfCurve::Next()
{
	((::IntAna_ListIteratorOfListOfCurve*)_NativeInstance)->Next();
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_ListIteratorOfListOfCurve::Value()
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = (::IntAna_Curve)((::IntAna_ListIteratorOfListOfCurve*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_ListIteratorOfListOfCurve::ChangeValue()
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = ((::IntAna_ListIteratorOfListOfCurve*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}



//---------------------------------------------------------------------
//  Class  IntAna_Curve
//---------------------------------------------------------------------

RDC::OCC::IntAna_Curve::IntAna_Curve()
	: RDC::OCC::BaseClass<::IntAna_Curve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Curve();
}

void RDC::OCC::IntAna_Curve::SetCylinderQuadValues(RDC::OCC::gp_Cylinder^ Cylinder, double Qxx, double Qyy, double Qzz, double Qxy, double Qxz, double Qyz, double Qx, double Qy, double Qz, double Q1, double Tol, double DomInf, double DomSup, bool TwoZForATheta, bool ZIsPositive)
{
	((::IntAna_Curve*)_NativeInstance)->SetCylinderQuadValues(*(::gp_Cylinder*)Cylinder->NativeInstance, Qxx, Qyy, Qzz, Qxy, Qxz, Qyz, Qx, Qy, Qz, Q1, Tol, DomInf, DomSup, TwoZForATheta, ZIsPositive);
}

void RDC::OCC::IntAna_Curve::SetConeQuadValues(RDC::OCC::gp_Cone^ Cone, double Qxx, double Qyy, double Qzz, double Qxy, double Qxz, double Qyz, double Qx, double Qy, double Qz, double Q1, double Tol, double DomInf, double DomSup, bool TwoZForATheta, bool ZIsPositive)
{
	((::IntAna_Curve*)_NativeInstance)->SetConeQuadValues(*(::gp_Cone*)Cone->NativeInstance, Qxx, Qyy, Qzz, Qxy, Qxz, Qyz, Qx, Qy, Qz, Q1, Tol, DomInf, DomSup, TwoZForATheta, ZIsPositive);
}

bool RDC::OCC::IntAna_Curve::IsOpen()
{
	bool _result = ((::IntAna_Curve*)_NativeInstance)->IsOpen();
	return _result;
}

void RDC::OCC::IntAna_Curve::Domain(double% theFirst, double% theLast)
{
	pin_ptr<double> pp_theFirst = &theFirst;
	pin_ptr<double> pp_theLast = &theLast;
	((::IntAna_Curve*)_NativeInstance)->Domain(*(double*)pp_theFirst, *(double*)pp_theLast);
}

bool RDC::OCC::IntAna_Curve::IsConstant()
{
	bool _result = ((::IntAna_Curve*)_NativeInstance)->IsConstant();
	return _result;
}

bool RDC::OCC::IntAna_Curve::IsFirstOpen()
{
	bool _result = ((::IntAna_Curve*)_NativeInstance)->IsFirstOpen();
	return _result;
}

bool RDC::OCC::IntAna_Curve::IsLastOpen()
{
	bool _result = ((::IntAna_Curve*)_NativeInstance)->IsLastOpen();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::IntAna_Curve::Value(double Theta)
{
	::gp_Pnt _nativeResult = ((::IntAna_Curve*)_NativeInstance)->Value(Theta);
	return RDC::OCC::Pnt(_nativeResult);
}

bool RDC::OCC::IntAna_Curve::D1u(double Theta, RDC::OCC::Pnt% P, RDC::OCC::Vec% V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V = &V;
	bool _result = ((::IntAna_Curve*)_NativeInstance)->D1u(Theta, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
	return _result;
}

void RDC::OCC::IntAna_Curve::FindParameter(RDC::OCC::Pnt P, RDC::OCC::TColStd_ListOfReal^ theParams)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::IntAna_Curve*)_NativeInstance)->FindParameter(*(gp_Pnt*)pp_P, *(::TColStd_ListOfReal*)theParams->NativeInstance);
}

void RDC::OCC::IntAna_Curve::SetIsFirstOpen(bool Flag)
{
	((::IntAna_Curve*)_NativeInstance)->SetIsFirstOpen(Flag);
}

void RDC::OCC::IntAna_Curve::SetIsLastOpen(bool Flag)
{
	((::IntAna_Curve*)_NativeInstance)->SetIsLastOpen(Flag);
}

void RDC::OCC::IntAna_Curve::SetDomain(double theFirst, double theLast)
{
	((::IntAna_Curve*)_NativeInstance)->SetDomain(theFirst, theLast);
}



//---------------------------------------------------------------------
//  Class  IntAna_Int3Pln
//---------------------------------------------------------------------

RDC::OCC::IntAna_Int3Pln::IntAna_Int3Pln()
	: RDC::OCC::BaseClass<::IntAna_Int3Pln>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Int3Pln();
}

RDC::OCC::IntAna_Int3Pln::IntAna_Int3Pln(RDC::OCC::Pln P1, RDC::OCC::Pln P2, RDC::OCC::Pln P3)
	: RDC::OCC::BaseClass<::IntAna_Int3Pln>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pln> pp_P2 = &P2;
	pin_ptr<RDC::OCC::Pln> pp_P3 = &P3;
	_NativeInstance = new ::IntAna_Int3Pln(*(gp_Pln*)pp_P1, *(gp_Pln*)pp_P2, *(gp_Pln*)pp_P3);
}

void RDC::OCC::IntAna_Int3Pln::Perform(RDC::OCC::Pln P1, RDC::OCC::Pln P2, RDC::OCC::Pln P3)
{
	pin_ptr<RDC::OCC::Pln> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pln> pp_P2 = &P2;
	pin_ptr<RDC::OCC::Pln> pp_P3 = &P3;
	((::IntAna_Int3Pln*)_NativeInstance)->Perform(*(gp_Pln*)pp_P1, *(gp_Pln*)pp_P2, *(gp_Pln*)pp_P3);
}

bool RDC::OCC::IntAna_Int3Pln::IsDone()
{
	bool _result = ((::IntAna_Int3Pln*)_NativeInstance)->IsDone();
	return _result;
}

bool RDC::OCC::IntAna_Int3Pln::IsEmpty()
{
	bool _result = ((::IntAna_Int3Pln*)_NativeInstance)->IsEmpty();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::IntAna_Int3Pln::Value()
{
	::gp_Pnt _nativeResult = ((::IntAna_Int3Pln*)_NativeInstance)->Value();
	return RDC::OCC::Pnt(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  IntAna_Quadric
//---------------------------------------------------------------------

RDC::OCC::IntAna_Quadric::IntAna_Quadric()
	: RDC::OCC::BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Quadric();
}

RDC::OCC::IntAna_Quadric::IntAna_Quadric(RDC::OCC::Pln P)
	: RDC::OCC::BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_Quadric(*(gp_Pln*)pp_P);
}

RDC::OCC::IntAna_Quadric::IntAna_Quadric(RDC::OCC::gp_Sphere^ Sph)
	: RDC::OCC::BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Quadric(*(::gp_Sphere*)Sph->NativeInstance);
}

RDC::OCC::IntAna_Quadric::IntAna_Quadric(RDC::OCC::gp_Cylinder^ Cyl)
	: RDC::OCC::BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Quadric(*(::gp_Cylinder*)Cyl->NativeInstance);
}

RDC::OCC::IntAna_Quadric::IntAna_Quadric(RDC::OCC::gp_Cone^ Cone)
	: RDC::OCC::BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Quadric(*(::gp_Cone*)Cone->NativeInstance);
}

void RDC::OCC::IntAna_Quadric::SetQuadric(RDC::OCC::Pln P)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_Quadric*)_NativeInstance)->SetQuadric(*(gp_Pln*)pp_P);
}

void RDC::OCC::IntAna_Quadric::SetQuadric(RDC::OCC::gp_Sphere^ Sph)
{
	((::IntAna_Quadric*)_NativeInstance)->SetQuadric(*(::gp_Sphere*)Sph->NativeInstance);
}

void RDC::OCC::IntAna_Quadric::SetQuadric(RDC::OCC::gp_Cone^ Con)
{
	((::IntAna_Quadric*)_NativeInstance)->SetQuadric(*(::gp_Cone*)Con->NativeInstance);
}

void RDC::OCC::IntAna_Quadric::SetQuadric(RDC::OCC::gp_Cylinder^ Cyl)
{
	((::IntAna_Quadric*)_NativeInstance)->SetQuadric(*(::gp_Cylinder*)Cyl->NativeInstance);
}

void RDC::OCC::IntAna_Quadric::Coefficients(double% xCXX, double% xCYY, double% xCZZ, double% xCXY, double% xCXZ, double% xCYZ, double% xCX, double% xCY, double% xCZ, double% xCCte)
{
	pin_ptr<double> pp_xCXX = &xCXX;
	pin_ptr<double> pp_xCYY = &xCYY;
	pin_ptr<double> pp_xCZZ = &xCZZ;
	pin_ptr<double> pp_xCXY = &xCXY;
	pin_ptr<double> pp_xCXZ = &xCXZ;
	pin_ptr<double> pp_xCYZ = &xCYZ;
	pin_ptr<double> pp_xCX = &xCX;
	pin_ptr<double> pp_xCY = &xCY;
	pin_ptr<double> pp_xCZ = &xCZ;
	pin_ptr<double> pp_xCCte = &xCCte;
	((::IntAna_Quadric*)_NativeInstance)->Coefficients(*(double*)pp_xCXX, *(double*)pp_xCYY, *(double*)pp_xCZZ, *(double*)pp_xCXY, *(double*)pp_xCXZ, *(double*)pp_xCYZ, *(double*)pp_xCX, *(double*)pp_xCY, *(double*)pp_xCZ, *(double*)pp_xCCte);
}

void RDC::OCC::IntAna_Quadric::NewCoefficients(double% xCXX, double% xCYY, double% xCZZ, double% xCXY, double% xCXZ, double% xCYZ, double% xCX, double% xCY, double% xCZ, double% xCCte, RDC::OCC::Ax3 Axis)
{
	pin_ptr<double> pp_xCXX = &xCXX;
	pin_ptr<double> pp_xCYY = &xCYY;
	pin_ptr<double> pp_xCZZ = &xCZZ;
	pin_ptr<double> pp_xCXY = &xCXY;
	pin_ptr<double> pp_xCXZ = &xCXZ;
	pin_ptr<double> pp_xCYZ = &xCYZ;
	pin_ptr<double> pp_xCX = &xCX;
	pin_ptr<double> pp_xCY = &xCY;
	pin_ptr<double> pp_xCZ = &xCZ;
	pin_ptr<double> pp_xCCte = &xCCte;
	pin_ptr<RDC::OCC::Ax3> pp_Axis = &Axis;
	((::IntAna_Quadric*)_NativeInstance)->NewCoefficients(*(double*)pp_xCXX, *(double*)pp_xCYY, *(double*)pp_xCZZ, *(double*)pp_xCXY, *(double*)pp_xCXZ, *(double*)pp_xCYZ, *(double*)pp_xCX, *(double*)pp_xCY, *(double*)pp_xCZ, *(double*)pp_xCCte, *(gp_Ax3*)pp_Axis);
}



//---------------------------------------------------------------------
//  Class  IntAna_IntConicQuad
//---------------------------------------------------------------------

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad()
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad();
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Lin^ L, RDC::OCC::IntAna_Quadric^ Q)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Lin*)L->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Circ^ C, RDC::OCC::IntAna_Quadric^ Q)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Circ*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Elips^ E, RDC::OCC::IntAna_Quadric^ Q)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Elips*)E->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Parab^ P, RDC::OCC::IntAna_Quadric^ Q)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Parab*)P->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Hypr^ H, RDC::OCC::IntAna_Quadric^ Q)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Hypr*)H->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Lin^ L, RDC::OCC::Pln P, double Tolang, double Tol, double Len)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol, Len);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Lin^ L, RDC::OCC::Pln P, double Tolang, double Tol)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol, 0.0);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Lin^ L, RDC::OCC::Pln P, double Tolang)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, 0.0, 0.0);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Circ^ C, RDC::OCC::Pln P, double Tolang, double Tol)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Circ*)C->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Elips^ E, RDC::OCC::Pln P, double Tolang, double Tol)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Elips*)E->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Parab^ Pb, RDC::OCC::Pln P, double Tolang)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Parab*)Pb->NativeInstance, *(gp_Pln*)pp_P, Tolang);
}

RDC::OCC::IntAna_IntConicQuad::IntAna_IntConicQuad(RDC::OCC::gp_Hypr^ H, RDC::OCC::Pln P, double Tolang)
	: RDC::OCC::BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Hypr*)H->NativeInstance, *(gp_Pln*)pp_P, Tolang);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Lin^ L, RDC::OCC::IntAna_Quadric^ Q)
{
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Circ^ C, RDC::OCC::IntAna_Quadric^ Q)
{
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Elips^ E, RDC::OCC::IntAna_Quadric^ Q)
{
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Elips*)E->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Parab^ P, RDC::OCC::IntAna_Quadric^ Q)
{
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Parab*)P->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Hypr^ H, RDC::OCC::IntAna_Quadric^ Q)
{
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Hypr*)H->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Lin^ L, RDC::OCC::Pln P, double Tolang, double Tol, double Len)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol, Len);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Lin^ L, RDC::OCC::Pln P, double Tolang, double Tol)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol, 0.0);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Lin^ L, RDC::OCC::Pln P, double Tolang)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, 0.0, 0.0);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Circ^ C, RDC::OCC::Pln P, double Tolang, double Tol)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Elips^ E, RDC::OCC::Pln P, double Tolang, double Tol)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Elips*)E->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Parab^ Pb, RDC::OCC::Pln P, double Tolang)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Parab*)Pb->NativeInstance, *(gp_Pln*)pp_P, Tolang);
}

void RDC::OCC::IntAna_IntConicQuad::Perform(RDC::OCC::gp_Hypr^ H, RDC::OCC::Pln P, double Tolang)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Hypr*)H->NativeInstance, *(gp_Pln*)pp_P, Tolang);
}

bool RDC::OCC::IntAna_IntConicQuad::IsDone()
{
	bool _result = ((::IntAna_IntConicQuad*)_NativeInstance)->IsDone();
	return _result;
}

bool RDC::OCC::IntAna_IntConicQuad::IsInQuadric()
{
	bool _result = ((::IntAna_IntConicQuad*)_NativeInstance)->IsInQuadric();
	return _result;
}

bool RDC::OCC::IntAna_IntConicQuad::IsParallel()
{
	bool _result = ((::IntAna_IntConicQuad*)_NativeInstance)->IsParallel();
	return _result;
}

int RDC::OCC::IntAna_IntConicQuad::NbPoints()
{
	int _result = ((::IntAna_IntConicQuad*)_NativeInstance)->NbPoints();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::IntAna_IntConicQuad::Point(int N)
{
	::gp_Pnt _nativeResult = ((::IntAna_IntConicQuad*)_NativeInstance)->Point(N);
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::IntAna_IntConicQuad::ParamOnConic(int N)
{
	double _result = ((::IntAna_IntConicQuad*)_NativeInstance)->ParamOnConic(N);
	return _result;
}



//---------------------------------------------------------------------
//  Class  IntAna_IntLinTorus
//---------------------------------------------------------------------

RDC::OCC::IntAna_IntLinTorus::IntAna_IntLinTorus()
	: RDC::OCC::BaseClass<::IntAna_IntLinTorus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntLinTorus();
}

RDC::OCC::IntAna_IntLinTorus::IntAna_IntLinTorus(RDC::OCC::gp_Lin^ L, RDC::OCC::gp_Torus^ T)
	: RDC::OCC::BaseClass<::IntAna_IntLinTorus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntLinTorus(*(::gp_Lin*)L->NativeInstance, *(::gp_Torus*)T->NativeInstance);
}

void RDC::OCC::IntAna_IntLinTorus::Perform(RDC::OCC::gp_Lin^ L, RDC::OCC::gp_Torus^ T)
{
	((::IntAna_IntLinTorus*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, *(::gp_Torus*)T->NativeInstance);
}

bool RDC::OCC::IntAna_IntLinTorus::IsDone()
{
	bool _result = ((::IntAna_IntLinTorus*)_NativeInstance)->IsDone();
	return _result;
}

int RDC::OCC::IntAna_IntLinTorus::NbPoints()
{
	int _result = ((::IntAna_IntLinTorus*)_NativeInstance)->NbPoints();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::IntAna_IntLinTorus::Value(int Index)
{
	::gp_Pnt _nativeResult = ((::IntAna_IntLinTorus*)_NativeInstance)->Value(Index);
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::IntAna_IntLinTorus::ParamOnLine(int Index)
{
	double _result = ((::IntAna_IntLinTorus*)_NativeInstance)->ParamOnLine(Index);
	return _result;
}

void RDC::OCC::IntAna_IntLinTorus::ParamOnTorus(int Index, double% FI, double% THETA)
{
	pin_ptr<double> pp_FI = &FI;
	pin_ptr<double> pp_THETA = &THETA;
	((::IntAna_IntLinTorus*)_NativeInstance)->ParamOnTorus(Index, *(double*)pp_FI, *(double*)pp_THETA);
}



//---------------------------------------------------------------------
//  Class  IntAna_IntQuadQuad
//---------------------------------------------------------------------

RDC::OCC::IntAna_IntQuadQuad::IntAna_IntQuadQuad()
	: RDC::OCC::BaseClass<::IntAna_IntQuadQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntQuadQuad();
}

RDC::OCC::IntAna_IntQuadQuad::IntAna_IntQuadQuad(RDC::OCC::gp_Cylinder^ C, RDC::OCC::IntAna_Quadric^ Q, double Tol)
	: RDC::OCC::BaseClass<::IntAna_IntQuadQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntQuadQuad(*(::gp_Cylinder*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance, Tol);
}

RDC::OCC::IntAna_IntQuadQuad::IntAna_IntQuadQuad(RDC::OCC::gp_Cone^ C, RDC::OCC::IntAna_Quadric^ Q, double Tol)
	: RDC::OCC::BaseClass<::IntAna_IntQuadQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntQuadQuad(*(::gp_Cone*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance, Tol);
}

void RDC::OCC::IntAna_IntQuadQuad::Perform(RDC::OCC::gp_Cylinder^ C, RDC::OCC::IntAna_Quadric^ Q, double Tol)
{
	((::IntAna_IntQuadQuad*)_NativeInstance)->Perform(*(::gp_Cylinder*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance, Tol);
}

void RDC::OCC::IntAna_IntQuadQuad::Perform(RDC::OCC::gp_Cone^ C, RDC::OCC::IntAna_Quadric^ Q, double Tol)
{
	((::IntAna_IntQuadQuad*)_NativeInstance)->Perform(*(::gp_Cone*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance, Tol);
}

bool RDC::OCC::IntAna_IntQuadQuad::IsDone()
{
	bool _result = ((::IntAna_IntQuadQuad*)_NativeInstance)->IsDone();
	return _result;
}

bool RDC::OCC::IntAna_IntQuadQuad::IdenticalElements()
{
	bool _result = ((::IntAna_IntQuadQuad*)_NativeInstance)->IdenticalElements();
	return _result;
}

int RDC::OCC::IntAna_IntQuadQuad::NbCurve()
{
	int _result = ((::IntAna_IntQuadQuad*)_NativeInstance)->NbCurve();
	return _result;
}

RDC::OCC::IntAna_Curve^ RDC::OCC::IntAna_IntQuadQuad::Curve(int N)
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = (::IntAna_Curve)((::IntAna_IntQuadQuad*)_NativeInstance)->Curve(N);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::IntAna_Curve(_result);
}

int RDC::OCC::IntAna_IntQuadQuad::NbPnt()
{
	int _result = ((::IntAna_IntQuadQuad*)_NativeInstance)->NbPnt();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::IntAna_IntQuadQuad::Point(int N)
{
	::gp_Pnt _nativeResult = ((::IntAna_IntQuadQuad*)_NativeInstance)->Point(N);
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::IntAna_IntQuadQuad::Parameters(int N, double% U1, double% U2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	((::IntAna_IntQuadQuad*)_NativeInstance)->Parameters(N, *(double*)pp_U1, *(double*)pp_U2);
}

bool RDC::OCC::IntAna_IntQuadQuad::HasNextCurve(int I)
{
	bool _result = ((::IntAna_IntQuadQuad*)_NativeInstance)->HasNextCurve(I);
	return _result;
}

int RDC::OCC::IntAna_IntQuadQuad::NextCurve(int I, bool% theOpposite)
{
	pin_ptr<bool> pp_theOpposite = &theOpposite;
	int _result = ((::IntAna_IntQuadQuad*)_NativeInstance)->NextCurve(I, *(bool*)pp_theOpposite);
	return _result;
}

bool RDC::OCC::IntAna_IntQuadQuad::HasPreviousCurve(int I)
{
	bool _result = ((::IntAna_IntQuadQuad*)_NativeInstance)->HasPreviousCurve(I);
	return _result;
}

int RDC::OCC::IntAna_IntQuadQuad::PreviousCurve(int I, bool% theOpposite)
{
	pin_ptr<bool> pp_theOpposite = &theOpposite;
	int _result = ((::IntAna_IntQuadQuad*)_NativeInstance)->PreviousCurve(I, *(bool*)pp_theOpposite);
	return _result;
}



//---------------------------------------------------------------------
//  Class  IntAna_QuadQuadGeo
//---------------------------------------------------------------------

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo()
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo();
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::Pln P1, RDC::OCC::Pln P2, double TolAng, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pln> pp_P2 = &P2;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_P1, *(gp_Pln*)pp_P2, TolAng, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::Pln P, RDC::OCC::gp_Cylinder^ C, double Tolang, double Tol, double H)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_P, *(::gp_Cylinder*)C->NativeInstance, Tolang, Tol, H);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::Pln P, RDC::OCC::gp_Cylinder^ C, double Tolang, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_P, *(::gp_Cylinder*)C->NativeInstance, Tolang, Tol, 0.0);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::Pln P, RDC::OCC::gp_Sphere^ S)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_P, *(::gp_Sphere*)S->NativeInstance);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::Pln P, RDC::OCC::gp_Cone^ C, double Tolang, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_P, *(::gp_Cone*)C->NativeInstance, Tolang, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::gp_Cylinder^ Cyl1, RDC::OCC::gp_Cylinder^ Cyl2, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cylinder*)Cyl1->NativeInstance, *(::gp_Cylinder*)Cyl2->NativeInstance, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::gp_Cylinder^ Cyl, RDC::OCC::gp_Sphere^ Sph, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Sphere*)Sph->NativeInstance, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::gp_Cylinder^ Cyl, RDC::OCC::gp_Cone^ Con, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Cone*)Con->NativeInstance, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::gp_Sphere^ Sph1, RDC::OCC::gp_Sphere^ Sph2, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Sphere*)Sph1->NativeInstance, *(::gp_Sphere*)Sph2->NativeInstance, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::gp_Sphere^ Sph, RDC::OCC::gp_Cone^ Con, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Sphere*)Sph->NativeInstance, *(::gp_Cone*)Con->NativeInstance, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::gp_Cone^ Con1, RDC::OCC::gp_Cone^ Con2, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cone*)Con1->NativeInstance, *(::gp_Cone*)Con2->NativeInstance, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::Pln Pln, RDC::OCC::gp_Torus^ Tor, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_Pln = &Pln;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_Pln, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::gp_Cylinder^ Cyl, RDC::OCC::gp_Torus^ Tor, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::gp_Cone^ Con, RDC::OCC::gp_Torus^ Tor, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cone*)Con->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::gp_Sphere^ Sph, RDC::OCC::gp_Torus^ Tor, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Sphere*)Sph->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

RDC::OCC::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(RDC::OCC::gp_Torus^ Tor1, RDC::OCC::gp_Torus^ Tor2, double Tol)
	: RDC::OCC::BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Torus*)Tor1->NativeInstance, *(::gp_Torus*)Tor2->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::Pln P1, RDC::OCC::Pln P2, double TolAng, double Tol)
{
	pin_ptr<RDC::OCC::Pln> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pln> pp_P2 = &P2;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_P1, *(gp_Pln*)pp_P2, TolAng, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::Pln P, RDC::OCC::gp_Cylinder^ C, double Tolang, double Tol, double H)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_P, *(::gp_Cylinder*)C->NativeInstance, Tolang, Tol, H);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::Pln P, RDC::OCC::gp_Cylinder^ C, double Tolang, double Tol)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_P, *(::gp_Cylinder*)C->NativeInstance, Tolang, Tol, 0.0);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::Pln P, RDC::OCC::gp_Sphere^ S)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_P, *(::gp_Sphere*)S->NativeInstance);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::Pln P, RDC::OCC::gp_Cone^ C, double Tolang, double Tol)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_P, *(::gp_Cone*)C->NativeInstance, Tolang, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::gp_Cylinder^ Cyl1, RDC::OCC::gp_Cylinder^ Cyl2, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cylinder*)Cyl1->NativeInstance, *(::gp_Cylinder*)Cyl2->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::gp_Cylinder^ Cyl, RDC::OCC::gp_Sphere^ Sph, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Sphere*)Sph->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::gp_Cylinder^ Cyl, RDC::OCC::gp_Cone^ Con, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Cone*)Con->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::gp_Sphere^ Sph1, RDC::OCC::gp_Sphere^ Sph2, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Sphere*)Sph1->NativeInstance, *(::gp_Sphere*)Sph2->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::gp_Sphere^ Sph, RDC::OCC::gp_Cone^ Con, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Sphere*)Sph->NativeInstance, *(::gp_Cone*)Con->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::gp_Cone^ Con1, RDC::OCC::gp_Cone^ Con2, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cone*)Con1->NativeInstance, *(::gp_Cone*)Con2->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::Pln Pln, RDC::OCC::gp_Torus^ Tor, double Tol)
{
	pin_ptr<RDC::OCC::Pln> pp_Pln = &Pln;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_Pln, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::gp_Cylinder^ Cyl, RDC::OCC::gp_Torus^ Tor, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::gp_Cone^ Con, RDC::OCC::gp_Torus^ Tor, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cone*)Con->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::gp_Sphere^ Sph, RDC::OCC::gp_Torus^ Tor, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Sphere*)Sph->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

void RDC::OCC::IntAna_QuadQuadGeo::Perform(RDC::OCC::gp_Torus^ Tor1, RDC::OCC::gp_Torus^ Tor2, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Torus*)Tor1->NativeInstance, *(::gp_Torus*)Tor2->NativeInstance, Tol);
}

bool RDC::OCC::IntAna_QuadQuadGeo::IsDone()
{
	bool _result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->IsDone();
	return _result;
}

RDC::OCC::IntAna_ResultType RDC::OCC::IntAna_QuadQuadGeo::TypeInter()
{
	::IntAna_ResultType _result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->TypeInter();
	return (RDC::OCC::IntAna_ResultType)_result;
}

int RDC::OCC::IntAna_QuadQuadGeo::NbSolutions()
{
	int _result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->NbSolutions();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::IntAna_QuadQuadGeo::Point(int Num)
{
	::gp_Pnt _nativeResult = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Point(Num);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::gp_Lin^ RDC::OCC::IntAna_QuadQuadGeo::Line(int Num)
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Line(Num);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::IntAna_QuadQuadGeo::Circle(int Num)
{
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Circle(Num);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Elips^ RDC::OCC::IntAna_QuadQuadGeo::Ellipse(int Num)
{
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Ellipse(Num);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

RDC::OCC::gp_Parab^ RDC::OCC::IntAna_QuadQuadGeo::Parabola(int Num)
{
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Parabola(Num);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

RDC::OCC::gp_Hypr^ RDC::OCC::IntAna_QuadQuadGeo::Hyperbola(int Num)
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Hyperbola(Num);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

bool RDC::OCC::IntAna_QuadQuadGeo::HasCommonGen()
{
	bool _result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->HasCommonGen();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::IntAna_QuadQuadGeo::PChar()
{
	::gp_Pnt _nativeResult = ((::IntAna_QuadQuadGeo*)_NativeInstance)->PChar();
	return RDC::OCC::Pnt(_nativeResult);
}


