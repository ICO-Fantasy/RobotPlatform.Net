// Generated wrapper code for package Bnd

#include "OcctPCH.h"
#include "Bnd.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "TColStd.h"
#include "TColgp.h"


//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox
//---------------------------------------------------------------------

RDC::OCC::Bnd_Array1OfBox::Bnd_Array1OfBox()
	: RDC::OCC::BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox();
}

RDC::OCC::Bnd_Array1OfBox::Bnd_Array1OfBox(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox(theLower, theUpper);
}

RDC::OCC::Bnd_Array1OfBox::Bnd_Array1OfBox(RDC::OCC::Bnd_Box^ theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox(*(::Bnd_Box*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

RDC::OCC::Bnd_Array1OfBox::Bnd_Array1OfBox(RDC::OCC::Bnd_Box^ theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox(*(::Bnd_Box*)theBegin->NativeInstance, theLower, theUpper, true);
}

void RDC::OCC::Bnd_Array1OfBox::Init(RDC::OCC::Bnd_Box^ theValue)
{
	((::Bnd_Array1OfBox*)_NativeInstance)->Init(*(::Bnd_Box*)theValue->NativeInstance);
}

int RDC::OCC::Bnd_Array1OfBox::Size()
{
	int _result = ((::Bnd_Array1OfBox*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Bnd_Array1OfBox::Length()
{
	int _result = ((::Bnd_Array1OfBox*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::Bnd_Array1OfBox::IsEmpty()
{
	bool _result = ((::Bnd_Array1OfBox*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::Bnd_Array1OfBox::Lower()
{
	int _result = ((::Bnd_Array1OfBox*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Bnd_Array1OfBox::Upper()
{
	int _result = ((::Bnd_Array1OfBox*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::Bnd_Array1OfBox^ RDC::OCC::Bnd_Array1OfBox::Assign(RDC::OCC::Bnd_Array1OfBox^ theOther)
{
	::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
	*_result = ((::Bnd_Array1OfBox*)_NativeInstance)->Assign(*(::Bnd_Array1OfBox*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfBox(_result);
}

RDC::OCC::Bnd_Array1OfBox^ RDC::OCC::Bnd_Array1OfBox::Move(RDC::OCC::Bnd_Array1OfBox^ theOther)
{
	::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
	*_result = ((::Bnd_Array1OfBox*)_NativeInstance)->Move(*(::Bnd_Array1OfBox*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfBox(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_Array1OfBox::First()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = (::Bnd_Box)((::Bnd_Array1OfBox*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_Array1OfBox::ChangeFirst()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_Array1OfBox*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_Array1OfBox::Last()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = (::Bnd_Box)((::Bnd_Array1OfBox*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_Array1OfBox::ChangeLast()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_Array1OfBox*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_Array1OfBox::Value(int theIndex)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = (::Bnd_Box)((::Bnd_Array1OfBox*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_Array1OfBox::ChangeValue(int theIndex)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_Array1OfBox*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

void RDC::OCC::Bnd_Array1OfBox::SetValue(int theIndex, RDC::OCC::Bnd_Box^ theItem)
{
	((::Bnd_Array1OfBox*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box*)theItem->NativeInstance);
}

void RDC::OCC::Bnd_Array1OfBox::UpdateLowerBound(int theLower)
{
	((::Bnd_Array1OfBox*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::Bnd_Array1OfBox::UpdateUpperBound(int theUpper)
{
	((::Bnd_Array1OfBox*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::Bnd_Array1OfBox::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_Array1OfBox*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::Bnd_Array1OfBox::IsDeletable()
{
	bool _result = ((::Bnd_Array1OfBox*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Bnd_Box^>^ RDC::OCC::Bnd_Array1OfBox::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Box^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Bnd_Array1OfBox::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Box^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox2d
//---------------------------------------------------------------------

RDC::OCC::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d()
	: RDC::OCC::BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox2d();
}

RDC::OCC::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox2d(theLower, theUpper);
}

RDC::OCC::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d(RDC::OCC::Bnd_Box2d^ theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox2d(*(::Bnd_Box2d*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

RDC::OCC::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d(RDC::OCC::Bnd_Box2d^ theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox2d(*(::Bnd_Box2d*)theBegin->NativeInstance, theLower, theUpper, true);
}

void RDC::OCC::Bnd_Array1OfBox2d::Init(RDC::OCC::Bnd_Box2d^ theValue)
{
	((::Bnd_Array1OfBox2d*)_NativeInstance)->Init(*(::Bnd_Box2d*)theValue->NativeInstance);
}

int RDC::OCC::Bnd_Array1OfBox2d::Size()
{
	int _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Bnd_Array1OfBox2d::Length()
{
	int _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::Bnd_Array1OfBox2d::IsEmpty()
{
	bool _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::Bnd_Array1OfBox2d::Lower()
{
	int _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Bnd_Array1OfBox2d::Upper()
{
	int _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::Bnd_Array1OfBox2d^ RDC::OCC::Bnd_Array1OfBox2d::Assign(RDC::OCC::Bnd_Array1OfBox2d^ theOther)
{
	::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
	*_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Assign(*(::Bnd_Array1OfBox2d*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfBox2d(_result);
}

RDC::OCC::Bnd_Array1OfBox2d^ RDC::OCC::Bnd_Array1OfBox2d::Move(RDC::OCC::Bnd_Array1OfBox2d^ theOther)
{
	::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
	*_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Move(*(::Bnd_Array1OfBox2d*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfBox2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_Array1OfBox2d::First()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = (::Bnd_Box2d)((::Bnd_Array1OfBox2d*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_Array1OfBox2d::ChangeFirst()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_Array1OfBox2d::Last()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = (::Bnd_Box2d)((::Bnd_Array1OfBox2d*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_Array1OfBox2d::ChangeLast()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_Array1OfBox2d::Value(int theIndex)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = (::Bnd_Box2d)((::Bnd_Array1OfBox2d*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_Array1OfBox2d::ChangeValue(int theIndex)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

void RDC::OCC::Bnd_Array1OfBox2d::SetValue(int theIndex, RDC::OCC::Bnd_Box2d^ theItem)
{
	((::Bnd_Array1OfBox2d*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box2d*)theItem->NativeInstance);
}

void RDC::OCC::Bnd_Array1OfBox2d::UpdateLowerBound(int theLower)
{
	((::Bnd_Array1OfBox2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::Bnd_Array1OfBox2d::UpdateUpperBound(int theUpper)
{
	((::Bnd_Array1OfBox2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::Bnd_Array1OfBox2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_Array1OfBox2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::Bnd_Array1OfBox2d::IsDeletable()
{
	bool _result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Bnd_Box2d^>^ RDC::OCC::Bnd_Array1OfBox2d::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Box2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Bnd_Array1OfBox2d::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Box2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Bnd_Array1OfSphere
//---------------------------------------------------------------------

RDC::OCC::Bnd_Array1OfSphere::Bnd_Array1OfSphere()
	: RDC::OCC::BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfSphere();
}

RDC::OCC::Bnd_Array1OfSphere::Bnd_Array1OfSphere(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfSphere(theLower, theUpper);
}

RDC::OCC::Bnd_Array1OfSphere::Bnd_Array1OfSphere(RDC::OCC::Bnd_Sphere^ theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfSphere(*(::Bnd_Sphere*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

RDC::OCC::Bnd_Array1OfSphere::Bnd_Array1OfSphere(RDC::OCC::Bnd_Sphere^ theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfSphere(*(::Bnd_Sphere*)theBegin->NativeInstance, theLower, theUpper, true);
}

void RDC::OCC::Bnd_Array1OfSphere::Init(RDC::OCC::Bnd_Sphere^ theValue)
{
	((::Bnd_Array1OfSphere*)_NativeInstance)->Init(*(::Bnd_Sphere*)theValue->NativeInstance);
}

int RDC::OCC::Bnd_Array1OfSphere::Size()
{
	int _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Bnd_Array1OfSphere::Length()
{
	int _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::Bnd_Array1OfSphere::IsEmpty()
{
	bool _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::Bnd_Array1OfSphere::Lower()
{
	int _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Bnd_Array1OfSphere::Upper()
{
	int _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::Bnd_Array1OfSphere^ RDC::OCC::Bnd_Array1OfSphere::Assign(RDC::OCC::Bnd_Array1OfSphere^ theOther)
{
	::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
	*_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Assign(*(::Bnd_Array1OfSphere*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfSphere(_result);
}

RDC::OCC::Bnd_Array1OfSphere^ RDC::OCC::Bnd_Array1OfSphere::Move(RDC::OCC::Bnd_Array1OfSphere^ theOther)
{
	::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
	*_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Move(*(::Bnd_Array1OfSphere*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfSphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_Array1OfSphere::First()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = (::Bnd_Sphere)((::Bnd_Array1OfSphere*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_Array1OfSphere::ChangeFirst()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_Array1OfSphere::Last()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = (::Bnd_Sphere)((::Bnd_Array1OfSphere*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_Array1OfSphere::ChangeLast()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_Array1OfSphere::Value(int theIndex)
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = (::Bnd_Sphere)((::Bnd_Array1OfSphere*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_Array1OfSphere::ChangeValue(int theIndex)
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

void RDC::OCC::Bnd_Array1OfSphere::SetValue(int theIndex, RDC::OCC::Bnd_Sphere^ theItem)
{
	((::Bnd_Array1OfSphere*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Sphere*)theItem->NativeInstance);
}

void RDC::OCC::Bnd_Array1OfSphere::UpdateLowerBound(int theLower)
{
	((::Bnd_Array1OfSphere*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::Bnd_Array1OfSphere::UpdateUpperBound(int theUpper)
{
	((::Bnd_Array1OfSphere*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::Bnd_Array1OfSphere::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_Array1OfSphere*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::Bnd_Array1OfSphere::IsDeletable()
{
	bool _result = ((::Bnd_Array1OfSphere*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Bnd_Sphere^>^ RDC::OCC::Bnd_Array1OfSphere::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Sphere^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Bnd_Array1OfSphere::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Sphere^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_Array1OfSphere::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Bnd_Box
//---------------------------------------------------------------------

RDC::OCC::Bnd_Box::Bnd_Box()
	: RDC::OCC::BaseClass<::Bnd_Box>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Box();
}

RDC::OCC::Bnd_Box::Bnd_Box(RDC::OCC::Pnt theMin, RDC::OCC::Pnt theMax)
	: RDC::OCC::BaseClass<::Bnd_Box>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt> pp_theMin = &theMin;
	pin_ptr<RDC::OCC::Pnt> pp_theMax = &theMax;
	_NativeInstance = new ::Bnd_Box(*(gp_Pnt*)pp_theMin, *(gp_Pnt*)pp_theMax);
}

void RDC::OCC::Bnd_Box::SetWhole()
{
	((::Bnd_Box*)_NativeInstance)->SetWhole();
}

void RDC::OCC::Bnd_Box::SetVoid()
{
	((::Bnd_Box*)_NativeInstance)->SetVoid();
}

void RDC::OCC::Bnd_Box::Set(RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Bnd_Box*)_NativeInstance)->Set(*(gp_Pnt*)pp_P);
}

void RDC::OCC::Bnd_Box::Set(RDC::OCC::Pnt P, RDC::OCC::Dir D)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Dir> pp_D = &D;
	((::Bnd_Box*)_NativeInstance)->Set(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_D);
}

void RDC::OCC::Bnd_Box::Update(double aXmin, double aYmin, double aZmin, double aXmax, double aYmax, double aZmax)
{
	((::Bnd_Box*)_NativeInstance)->Update(aXmin, aYmin, aZmin, aXmax, aYmax, aZmax);
}

void RDC::OCC::Bnd_Box::Update(double X, double Y, double Z)
{
	((::Bnd_Box*)_NativeInstance)->Update(X, Y, Z);
}

double RDC::OCC::Bnd_Box::GetGap()
{
	double _result = ((::Bnd_Box*)_NativeInstance)->GetGap();
	return _result;
}

void RDC::OCC::Bnd_Box::SetGap(double Tol)
{
	((::Bnd_Box*)_NativeInstance)->SetGap(Tol);
}

void RDC::OCC::Bnd_Box::Enlarge(double Tol)
{
	((::Bnd_Box*)_NativeInstance)->Enlarge(Tol);
}

void RDC::OCC::Bnd_Box::Get(double% theXmin, double% theYmin, double% theZmin, double% theXmax, double% theYmax, double% theZmax)
{
	pin_ptr<double> pp_theXmin = &theXmin;
	pin_ptr<double> pp_theYmin = &theYmin;
	pin_ptr<double> pp_theZmin = &theZmin;
	pin_ptr<double> pp_theXmax = &theXmax;
	pin_ptr<double> pp_theYmax = &theYmax;
	pin_ptr<double> pp_theZmax = &theZmax;
	((::Bnd_Box*)_NativeInstance)->Get(*(double*)pp_theXmin, *(double*)pp_theYmin, *(double*)pp_theZmin, *(double*)pp_theXmax, *(double*)pp_theYmax, *(double*)pp_theZmax);
}

RDC::OCC::Pnt RDC::OCC::Bnd_Box::CornerMin()
{
	::gp_Pnt _nativeResult = ((::Bnd_Box*)_NativeInstance)->CornerMin();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Bnd_Box::CornerMax()
{
	::gp_Pnt _nativeResult = ((::Bnd_Box*)_NativeInstance)->CornerMax();
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Bnd_Box::OpenXmin()
{
	((::Bnd_Box*)_NativeInstance)->OpenXmin();
}

void RDC::OCC::Bnd_Box::OpenXmax()
{
	((::Bnd_Box*)_NativeInstance)->OpenXmax();
}

void RDC::OCC::Bnd_Box::OpenYmin()
{
	((::Bnd_Box*)_NativeInstance)->OpenYmin();
}

void RDC::OCC::Bnd_Box::OpenYmax()
{
	((::Bnd_Box*)_NativeInstance)->OpenYmax();
}

void RDC::OCC::Bnd_Box::OpenZmin()
{
	((::Bnd_Box*)_NativeInstance)->OpenZmin();
}

void RDC::OCC::Bnd_Box::OpenZmax()
{
	((::Bnd_Box*)_NativeInstance)->OpenZmax();
}

bool RDC::OCC::Bnd_Box::IsOpen()
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpen();
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOpenXmin()
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenXmin();
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOpenXmax()
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenXmax();
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOpenYmin()
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenYmin();
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOpenYmax()
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenYmax();
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOpenZmin()
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenZmin();
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOpenZmax()
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOpenZmax();
	return _result;
}

bool RDC::OCC::Bnd_Box::IsWhole()
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsWhole();
	return _result;
}

bool RDC::OCC::Bnd_Box::IsVoid()
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsVoid();
	return _result;
}

bool RDC::OCC::Bnd_Box::IsXThin(double tol)
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsXThin(tol);
	return _result;
}

bool RDC::OCC::Bnd_Box::IsYThin(double tol)
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsYThin(tol);
	return _result;
}

bool RDC::OCC::Bnd_Box::IsZThin(double tol)
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsZThin(tol);
	return _result;
}

bool RDC::OCC::Bnd_Box::IsThin(double tol)
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsThin(tol);
	return _result;
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_Box::Transformed(RDC::OCC::Trsf T)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	*_result = ((::Bnd_Box*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

void RDC::OCC::Bnd_Box::Add(RDC::OCC::Bnd_Box^ Other)
{
	((::Bnd_Box*)_NativeInstance)->Add(*(::Bnd_Box*)Other->NativeInstance);
}

void RDC::OCC::Bnd_Box::Add(RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Bnd_Box*)_NativeInstance)->Add(*(gp_Pnt*)pp_P);
}

void RDC::OCC::Bnd_Box::Add(RDC::OCC::Pnt P, RDC::OCC::Dir D)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Dir> pp_D = &D;
	((::Bnd_Box*)_NativeInstance)->Add(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_D);
}

void RDC::OCC::Bnd_Box::Add(RDC::OCC::Dir D)
{
	pin_ptr<RDC::OCC::Dir> pp_D = &D;
	((::Bnd_Box*)_NativeInstance)->Add(*(gp_Dir*)pp_D);
}

bool RDC::OCC::Bnd_Box::IsOut(RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Pnt*)pp_P);
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOut(RDC::OCC::gp_Lin^ L)
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(::gp_Lin*)L->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOut(RDC::OCC::Pln P)
{
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Pln*)pp_P);
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOut(RDC::OCC::Bnd_Box^ Other)
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(::Bnd_Box*)Other->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOut(RDC::OCC::Bnd_Box^ Other, RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(::Bnd_Box*)Other->NativeInstance, *(gp_Trsf*)pp_T);
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOut(RDC::OCC::Trsf T1, RDC::OCC::Bnd_Box^ Other, RDC::OCC::Trsf T2)
{
	pin_ptr<RDC::OCC::Trsf> pp_T1 = &T1;
	pin_ptr<RDC::OCC::Trsf> pp_T2 = &T2;
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Trsf*)pp_T1, *(::Bnd_Box*)Other->NativeInstance, *(gp_Trsf*)pp_T2);
	return _result;
}

bool RDC::OCC::Bnd_Box::IsOut(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Dir D)
{
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	pin_ptr<RDC::OCC::Dir> pp_D = &D;
	bool _result = ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Dir*)pp_D);
	return _result;
}

double RDC::OCC::Bnd_Box::Distance(RDC::OCC::Bnd_Box^ Other)
{
	double _result = ((::Bnd_Box*)_NativeInstance)->Distance(*(::Bnd_Box*)Other->NativeInstance);
	return _result;
}

void RDC::OCC::Bnd_Box::Dump()
{
	((::Bnd_Box*)_NativeInstance)->Dump();
}

double RDC::OCC::Bnd_Box::SquareExtent()
{
	double _result = ((::Bnd_Box*)_NativeInstance)->SquareExtent();
	return _result;
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_Box::FinitePart()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_Box*)_NativeInstance)->FinitePart();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

bool RDC::OCC::Bnd_Box::HasFinitePart()
{
	bool _result = ((::Bnd_Box*)_NativeInstance)->HasFinitePart();
	return _result;
}

void RDC::OCC::Bnd_Box::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Bnd_Box*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Bnd_Box::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Bnd_Box*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Bnd_Box2d
//---------------------------------------------------------------------

RDC::OCC::Bnd_Box2d::Bnd_Box2d()
	: RDC::OCC::BaseClass<::Bnd_Box2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Box2d();
}

void RDC::OCC::Bnd_Box2d::SetWhole()
{
	((::Bnd_Box2d*)_NativeInstance)->SetWhole();
}

void RDC::OCC::Bnd_Box2d::SetVoid()
{
	((::Bnd_Box2d*)_NativeInstance)->SetVoid();
}

void RDC::OCC::Bnd_Box2d::Set(RDC::OCC::Pnt2d thePnt)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_thePnt = &thePnt;
	((::Bnd_Box2d*)_NativeInstance)->Set(*(gp_Pnt2d*)pp_thePnt);
}

void RDC::OCC::Bnd_Box2d::Set(RDC::OCC::Pnt2d thePnt, RDC::OCC::Dir2d theDir)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_thePnt = &thePnt;
	pin_ptr<RDC::OCC::Dir2d> pp_theDir = &theDir;
	((::Bnd_Box2d*)_NativeInstance)->Set(*(gp_Pnt2d*)pp_thePnt, *(gp_Dir2d*)pp_theDir);
}

void RDC::OCC::Bnd_Box2d::Update(double aXmin, double aYmin, double aXmax, double aYmax)
{
	((::Bnd_Box2d*)_NativeInstance)->Update(aXmin, aYmin, aXmax, aYmax);
}

void RDC::OCC::Bnd_Box2d::Update(double X, double Y)
{
	((::Bnd_Box2d*)_NativeInstance)->Update(X, Y);
}

double RDC::OCC::Bnd_Box2d::GetGap()
{
	double _result = ((::Bnd_Box2d*)_NativeInstance)->GetGap();
	return _result;
}

void RDC::OCC::Bnd_Box2d::SetGap(double Tol)
{
	((::Bnd_Box2d*)_NativeInstance)->SetGap(Tol);
}

void RDC::OCC::Bnd_Box2d::Enlarge(double theTol)
{
	((::Bnd_Box2d*)_NativeInstance)->Enlarge(theTol);
}

void RDC::OCC::Bnd_Box2d::Get(double% aXmin, double% aYmin, double% aXmax, double% aYmax)
{
	pin_ptr<double> pp_aXmin = &aXmin;
	pin_ptr<double> pp_aYmin = &aYmin;
	pin_ptr<double> pp_aXmax = &aXmax;
	pin_ptr<double> pp_aYmax = &aYmax;
	((::Bnd_Box2d*)_NativeInstance)->Get(*(double*)pp_aXmin, *(double*)pp_aYmin, *(double*)pp_aXmax, *(double*)pp_aYmax);
}

void RDC::OCC::Bnd_Box2d::OpenXmin()
{
	((::Bnd_Box2d*)_NativeInstance)->OpenXmin();
}

void RDC::OCC::Bnd_Box2d::OpenXmax()
{
	((::Bnd_Box2d*)_NativeInstance)->OpenXmax();
}

void RDC::OCC::Bnd_Box2d::OpenYmin()
{
	((::Bnd_Box2d*)_NativeInstance)->OpenYmin();
}

void RDC::OCC::Bnd_Box2d::OpenYmax()
{
	((::Bnd_Box2d*)_NativeInstance)->OpenYmax();
}

bool RDC::OCC::Bnd_Box2d::IsOpenXmin()
{
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOpenXmin();
	return _result;
}

bool RDC::OCC::Bnd_Box2d::IsOpenXmax()
{
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOpenXmax();
	return _result;
}

bool RDC::OCC::Bnd_Box2d::IsOpenYmin()
{
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOpenYmin();
	return _result;
}

bool RDC::OCC::Bnd_Box2d::IsOpenYmax()
{
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOpenYmax();
	return _result;
}

bool RDC::OCC::Bnd_Box2d::IsWhole()
{
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsWhole();
	return _result;
}

bool RDC::OCC::Bnd_Box2d::IsVoid()
{
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsVoid();
	return _result;
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_Box2d::Transformed(RDC::OCC::Trsf2d T)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
	*_result = ((::Bnd_Box2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_T);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

void RDC::OCC::Bnd_Box2d::Add(RDC::OCC::Bnd_Box2d^ Other)
{
	((::Bnd_Box2d*)_NativeInstance)->Add(*(::Bnd_Box2d*)Other->NativeInstance);
}

void RDC::OCC::Bnd_Box2d::Add(RDC::OCC::Pnt2d thePnt)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_thePnt = &thePnt;
	((::Bnd_Box2d*)_NativeInstance)->Add(*(gp_Pnt2d*)pp_thePnt);
}

void RDC::OCC::Bnd_Box2d::Add(RDC::OCC::Pnt2d thePnt, RDC::OCC::Dir2d theDir)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_thePnt = &thePnt;
	pin_ptr<RDC::OCC::Dir2d> pp_theDir = &theDir;
	((::Bnd_Box2d*)_NativeInstance)->Add(*(gp_Pnt2d*)pp_thePnt, *(gp_Dir2d*)pp_theDir);
}

void RDC::OCC::Bnd_Box2d::Add(RDC::OCC::Dir2d D)
{
	pin_ptr<RDC::OCC::Dir2d> pp_D = &D;
	((::Bnd_Box2d*)_NativeInstance)->Add(*(gp_Dir2d*)pp_D);
}

bool RDC::OCC::Bnd_Box2d::IsOut(RDC::OCC::Pnt2d P)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(gp_Pnt2d*)pp_P);
	return _result;
}

bool RDC::OCC::Bnd_Box2d::IsOut(RDC::OCC::gp_Lin2d^ theL)
{
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(::gp_Lin2d*)theL->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_Box2d::IsOut(RDC::OCC::Pnt2d theP0, RDC::OCC::Pnt2d theP1)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_theP0 = &theP0;
	pin_ptr<RDC::OCC::Pnt2d> pp_theP1 = &theP1;
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(gp_Pnt2d*)pp_theP0, *(gp_Pnt2d*)pp_theP1);
	return _result;
}

bool RDC::OCC::Bnd_Box2d::IsOut(RDC::OCC::Bnd_Box2d^ Other)
{
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(::Bnd_Box2d*)Other->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_Box2d::IsOut(RDC::OCC::Bnd_Box2d^ theOther, RDC::OCC::Trsf2d theTrsf)
{
	pin_ptr<RDC::OCC::Trsf2d> pp_theTrsf = &theTrsf;
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(::Bnd_Box2d*)theOther->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
	return _result;
}

bool RDC::OCC::Bnd_Box2d::IsOut(RDC::OCC::Trsf2d T1, RDC::OCC::Bnd_Box2d^ Other, RDC::OCC::Trsf2d T2)
{
	pin_ptr<RDC::OCC::Trsf2d> pp_T1 = &T1;
	pin_ptr<RDC::OCC::Trsf2d> pp_T2 = &T2;
	bool _result = ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(gp_Trsf2d*)pp_T1, *(::Bnd_Box2d*)Other->NativeInstance, *(gp_Trsf2d*)pp_T2);
	return _result;
}

void RDC::OCC::Bnd_Box2d::Dump()
{
	((::Bnd_Box2d*)_NativeInstance)->Dump();
}

double RDC::OCC::Bnd_Box2d::SquareExtent()
{
	double _result = ((::Bnd_Box2d*)_NativeInstance)->SquareExtent();
	return _result;
}



//---------------------------------------------------------------------
//  Class  Bnd_Sphere
//---------------------------------------------------------------------

RDC::OCC::Bnd_Sphere::Bnd_Sphere()
	: RDC::OCC::BaseClass<::Bnd_Sphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Sphere();
}

RDC::OCC::Bnd_Sphere::Bnd_Sphere(RDC::OCC::XYZ theCntr, double theRad, int theU, int theV)
	: RDC::OCC::BaseClass<::Bnd_Sphere>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::XYZ> pp_theCntr = &theCntr;
	_NativeInstance = new ::Bnd_Sphere(*(gp_XYZ*)pp_theCntr, theRad, theU, theV);
}

int RDC::OCC::Bnd_Sphere::U()
{
	int _result = ((::Bnd_Sphere*)_NativeInstance)->U();
	return _result;
}

int RDC::OCC::Bnd_Sphere::V()
{
	int _result = ((::Bnd_Sphere*)_NativeInstance)->V();
	return _result;
}

bool RDC::OCC::Bnd_Sphere::IsValid()
{
	bool _result = ((::Bnd_Sphere*)_NativeInstance)->IsValid();
	return _result;
}

void RDC::OCC::Bnd_Sphere::SetValid(bool isValid)
{
	((::Bnd_Sphere*)_NativeInstance)->SetValid(isValid);
}

RDC::OCC::XYZ RDC::OCC::Bnd_Sphere::Center()
{
	::gp_XYZ _nativeResult = ((::Bnd_Sphere*)_NativeInstance)->Center();
	return RDC::OCC::XYZ(_nativeResult);
}

double RDC::OCC::Bnd_Sphere::Radius()
{
	double _result = ((::Bnd_Sphere*)_NativeInstance)->Radius();
	return _result;
}

void RDC::OCC::Bnd_Sphere::Distances(RDC::OCC::XYZ theXYZ, double% theMin, double% theMax)
{
	pin_ptr<RDC::OCC::XYZ> pp_theXYZ = &theXYZ;
	pin_ptr<double> pp_theMin = &theMin;
	pin_ptr<double> pp_theMax = &theMax;
	((::Bnd_Sphere*)_NativeInstance)->Distances(*(gp_XYZ*)pp_theXYZ, *(double*)pp_theMin, *(double*)pp_theMax);
}

void RDC::OCC::Bnd_Sphere::SquareDistances(RDC::OCC::XYZ theXYZ, double% theMin, double% theMax)
{
	pin_ptr<RDC::OCC::XYZ> pp_theXYZ = &theXYZ;
	pin_ptr<double> pp_theMin = &theMin;
	pin_ptr<double> pp_theMax = &theMax;
	((::Bnd_Sphere*)_NativeInstance)->SquareDistances(*(gp_XYZ*)pp_theXYZ, *(double*)pp_theMin, *(double*)pp_theMax);
}

bool RDC::OCC::Bnd_Sphere::Project(RDC::OCC::XYZ theNode, RDC::OCC::XYZ% theProjNode, double% theDist, bool% theInside)
{
	pin_ptr<RDC::OCC::XYZ> pp_theNode = &theNode;
	pin_ptr<RDC::OCC::XYZ> pp_theProjNode = &theProjNode;
	pin_ptr<double> pp_theDist = &theDist;
	pin_ptr<bool> pp_theInside = &theInside;
	bool _result = ((::Bnd_Sphere*)_NativeInstance)->Project(*(gp_XYZ*)pp_theNode, *(gp_XYZ*)pp_theProjNode, *(double*)pp_theDist, *(bool*)pp_theInside);
	return _result;
}

double RDC::OCC::Bnd_Sphere::Distance(RDC::OCC::XYZ theNode)
{
	pin_ptr<RDC::OCC::XYZ> pp_theNode = &theNode;
	double _result = ((::Bnd_Sphere*)_NativeInstance)->Distance(*(gp_XYZ*)pp_theNode);
	return _result;
}

double RDC::OCC::Bnd_Sphere::SquareDistance(RDC::OCC::XYZ theNode)
{
	pin_ptr<RDC::OCC::XYZ> pp_theNode = &theNode;
	double _result = ((::Bnd_Sphere*)_NativeInstance)->SquareDistance(*(gp_XYZ*)pp_theNode);
	return _result;
}

void RDC::OCC::Bnd_Sphere::Add(RDC::OCC::Bnd_Sphere^ theOther)
{
	((::Bnd_Sphere*)_NativeInstance)->Add(*(::Bnd_Sphere*)theOther->NativeInstance);
}

bool RDC::OCC::Bnd_Sphere::IsOut(RDC::OCC::Bnd_Sphere^ theOther)
{
	bool _result = ((::Bnd_Sphere*)_NativeInstance)->IsOut(*(::Bnd_Sphere*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_Sphere::IsOut(RDC::OCC::XYZ thePnt, double% theMaxDist)
{
	pin_ptr<RDC::OCC::XYZ> pp_thePnt = &thePnt;
	pin_ptr<double> pp_theMaxDist = &theMaxDist;
	bool _result = ((::Bnd_Sphere*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_thePnt, *(double*)pp_theMaxDist);
	return _result;
}

double RDC::OCC::Bnd_Sphere::SquareExtent()
{
	double _result = ((::Bnd_Sphere*)_NativeInstance)->SquareExtent();
	return _result;
}



//---------------------------------------------------------------------
//  Class  Bnd_B2d
//---------------------------------------------------------------------

RDC::OCC::Bnd_B2d::Bnd_B2d()
	: RDC::OCC::BaseClass<::Bnd_B2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B2d();
}

RDC::OCC::Bnd_B2d::Bnd_B2d(RDC::OCC::XY theCenter, RDC::OCC::XY theHSize)
	: RDC::OCC::BaseClass<::Bnd_B2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::XY> pp_theCenter = &theCenter;
	pin_ptr<RDC::OCC::XY> pp_theHSize = &theHSize;
	_NativeInstance = new ::Bnd_B2d(*(gp_XY*)pp_theCenter, *(gp_XY*)pp_theHSize);
}

bool RDC::OCC::Bnd_B2d::IsVoid()
{
	bool _result = ((::Bnd_B2d*)_NativeInstance)->IsVoid();
	return _result;
}

void RDC::OCC::Bnd_B2d::Clear()
{
	((::Bnd_B2d*)_NativeInstance)->Clear();
}

void RDC::OCC::Bnd_B2d::Add(RDC::OCC::XY thePnt)
{
	pin_ptr<RDC::OCC::XY> pp_thePnt = &thePnt;
	((::Bnd_B2d*)_NativeInstance)->Add(*(gp_XY*)pp_thePnt);
}

void RDC::OCC::Bnd_B2d::Add(RDC::OCC::Pnt2d thePnt)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_thePnt = &thePnt;
	((::Bnd_B2d*)_NativeInstance)->Add(*(gp_Pnt2d*)pp_thePnt);
}

void RDC::OCC::Bnd_B2d::Add(RDC::OCC::Bnd_B2d^ theBox)
{
	((::Bnd_B2d*)_NativeInstance)->Add(*(::Bnd_B2d*)theBox->NativeInstance);
}

RDC::OCC::XY RDC::OCC::Bnd_B2d::CornerMin()
{
	::gp_XY _nativeResult = ((::Bnd_B2d*)_NativeInstance)->CornerMin();
	return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::Bnd_B2d::CornerMax()
{
	::gp_XY _nativeResult = ((::Bnd_B2d*)_NativeInstance)->CornerMax();
	return RDC::OCC::XY(_nativeResult);
}

double RDC::OCC::Bnd_B2d::SquareExtent()
{
	double _result = ((::Bnd_B2d*)_NativeInstance)->SquareExtent();
	return _result;
}

void RDC::OCC::Bnd_B2d::Enlarge(double theDiff)
{
	((::Bnd_B2d*)_NativeInstance)->Enlarge(theDiff);
}

bool RDC::OCC::Bnd_B2d::Limit(RDC::OCC::Bnd_B2d^ theOtherBox)
{
	bool _result = ((::Bnd_B2d*)_NativeInstance)->Limit(*(::Bnd_B2d*)theOtherBox->NativeInstance);
	return _result;
}

RDC::OCC::Bnd_B2d^ RDC::OCC::Bnd_B2d::Transformed(RDC::OCC::Trsf2d theTrsf)
{
	::Bnd_B2d* _result = new ::Bnd_B2d();
	pin_ptr<RDC::OCC::Trsf2d> pp_theTrsf = &theTrsf;
	*_result = ((::Bnd_B2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theTrsf);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_B2d(_result);
}

bool RDC::OCC::Bnd_B2d::IsOut(RDC::OCC::XY thePnt)
{
	pin_ptr<RDC::OCC::XY> pp_thePnt = &thePnt;
	bool _result = ((::Bnd_B2d*)_NativeInstance)->IsOut(*(gp_XY*)pp_thePnt);
	return _result;
}

bool RDC::OCC::Bnd_B2d::IsOut(RDC::OCC::XY theCenter, double theRadius, bool isCircleHollow)
{
	pin_ptr<RDC::OCC::XY> pp_theCenter = &theCenter;
	bool _result = ((::Bnd_B2d*)_NativeInstance)->IsOut(*(gp_XY*)pp_theCenter, theRadius, isCircleHollow);
	return _result;
}

bool RDC::OCC::Bnd_B2d::IsOut(RDC::OCC::XY theCenter, double theRadius)
{
	pin_ptr<RDC::OCC::XY> pp_theCenter = &theCenter;
	bool _result = ((::Bnd_B2d*)_NativeInstance)->IsOut(*(gp_XY*)pp_theCenter, theRadius, false);
	return _result;
}

bool RDC::OCC::Bnd_B2d::IsOut(RDC::OCC::Bnd_B2d^ theOtherBox)
{
	bool _result = ((::Bnd_B2d*)_NativeInstance)->IsOut(*(::Bnd_B2d*)theOtherBox->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_B2d::IsOut(RDC::OCC::Bnd_B2d^ theOtherBox, RDC::OCC::Trsf2d theTrsf)
{
	pin_ptr<RDC::OCC::Trsf2d> pp_theTrsf = &theTrsf;
	bool _result = ((::Bnd_B2d*)_NativeInstance)->IsOut(*(::Bnd_B2d*)theOtherBox->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
	return _result;
}

bool RDC::OCC::Bnd_B2d::IsOut(RDC::OCC::Ax2d theLine)
{
	pin_ptr<RDC::OCC::Ax2d> pp_theLine = &theLine;
	bool _result = ((::Bnd_B2d*)_NativeInstance)->IsOut(*(gp_Ax2d*)pp_theLine);
	return _result;
}

bool RDC::OCC::Bnd_B2d::IsOut(RDC::OCC::XY theP0, RDC::OCC::XY theP1)
{
	pin_ptr<RDC::OCC::XY> pp_theP0 = &theP0;
	pin_ptr<RDC::OCC::XY> pp_theP1 = &theP1;
	bool _result = ((::Bnd_B2d*)_NativeInstance)->IsOut(*(gp_XY*)pp_theP0, *(gp_XY*)pp_theP1);
	return _result;
}

bool RDC::OCC::Bnd_B2d::IsIn(RDC::OCC::Bnd_B2d^ theBox)
{
	bool _result = ((::Bnd_B2d*)_NativeInstance)->IsIn(*(::Bnd_B2d*)theBox->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_B2d::IsIn(RDC::OCC::Bnd_B2d^ theBox, RDC::OCC::Trsf2d theTrsf)
{
	pin_ptr<RDC::OCC::Trsf2d> pp_theTrsf = &theTrsf;
	bool _result = ((::Bnd_B2d*)_NativeInstance)->IsIn(*(::Bnd_B2d*)theBox->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
	return _result;
}

void RDC::OCC::Bnd_B2d::SetCenter(RDC::OCC::XY theCenter)
{
	pin_ptr<RDC::OCC::XY> pp_theCenter = &theCenter;
	((::Bnd_B2d*)_NativeInstance)->SetCenter(*(gp_XY*)pp_theCenter);
}

void RDC::OCC::Bnd_B2d::SetHSize(RDC::OCC::XY theHSize)
{
	pin_ptr<RDC::OCC::XY> pp_theHSize = &theHSize;
	((::Bnd_B2d*)_NativeInstance)->SetHSize(*(gp_XY*)pp_theHSize);
}



//---------------------------------------------------------------------
//  Class  Bnd_B2f
//---------------------------------------------------------------------

RDC::OCC::Bnd_B2f::Bnd_B2f()
	: RDC::OCC::BaseClass<::Bnd_B2f>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B2f();
}

RDC::OCC::Bnd_B2f::Bnd_B2f(RDC::OCC::XY theCenter, RDC::OCC::XY theHSize)
	: RDC::OCC::BaseClass<::Bnd_B2f>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::XY> pp_theCenter = &theCenter;
	pin_ptr<RDC::OCC::XY> pp_theHSize = &theHSize;
	_NativeInstance = new ::Bnd_B2f(*(gp_XY*)pp_theCenter, *(gp_XY*)pp_theHSize);
}

bool RDC::OCC::Bnd_B2f::IsVoid()
{
	bool _result = ((::Bnd_B2f*)_NativeInstance)->IsVoid();
	return _result;
}

void RDC::OCC::Bnd_B2f::Clear()
{
	((::Bnd_B2f*)_NativeInstance)->Clear();
}

void RDC::OCC::Bnd_B2f::Add(RDC::OCC::XY thePnt)
{
	pin_ptr<RDC::OCC::XY> pp_thePnt = &thePnt;
	((::Bnd_B2f*)_NativeInstance)->Add(*(gp_XY*)pp_thePnt);
}

void RDC::OCC::Bnd_B2f::Add(RDC::OCC::Pnt2d thePnt)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_thePnt = &thePnt;
	((::Bnd_B2f*)_NativeInstance)->Add(*(gp_Pnt2d*)pp_thePnt);
}

void RDC::OCC::Bnd_B2f::Add(RDC::OCC::Bnd_B2f^ theBox)
{
	((::Bnd_B2f*)_NativeInstance)->Add(*(::Bnd_B2f*)theBox->NativeInstance);
}

RDC::OCC::XY RDC::OCC::Bnd_B2f::CornerMin()
{
	::gp_XY _nativeResult = ((::Bnd_B2f*)_NativeInstance)->CornerMin();
	return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::Bnd_B2f::CornerMax()
{
	::gp_XY _nativeResult = ((::Bnd_B2f*)_NativeInstance)->CornerMax();
	return RDC::OCC::XY(_nativeResult);
}

double RDC::OCC::Bnd_B2f::SquareExtent()
{
	double _result = ((::Bnd_B2f*)_NativeInstance)->SquareExtent();
	return _result;
}

void RDC::OCC::Bnd_B2f::Enlarge(double theDiff)
{
	((::Bnd_B2f*)_NativeInstance)->Enlarge(theDiff);
}

bool RDC::OCC::Bnd_B2f::Limit(RDC::OCC::Bnd_B2f^ theOtherBox)
{
	bool _result = ((::Bnd_B2f*)_NativeInstance)->Limit(*(::Bnd_B2f*)theOtherBox->NativeInstance);
	return _result;
}

RDC::OCC::Bnd_B2f^ RDC::OCC::Bnd_B2f::Transformed(RDC::OCC::Trsf2d theTrsf)
{
	::Bnd_B2f* _result = new ::Bnd_B2f();
	pin_ptr<RDC::OCC::Trsf2d> pp_theTrsf = &theTrsf;
	*_result = ((::Bnd_B2f*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theTrsf);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_B2f(_result);
}

bool RDC::OCC::Bnd_B2f::IsOut(RDC::OCC::XY thePnt)
{
	pin_ptr<RDC::OCC::XY> pp_thePnt = &thePnt;
	bool _result = ((::Bnd_B2f*)_NativeInstance)->IsOut(*(gp_XY*)pp_thePnt);
	return _result;
}

bool RDC::OCC::Bnd_B2f::IsOut(RDC::OCC::XY theCenter, double theRadius, bool isCircleHollow)
{
	pin_ptr<RDC::OCC::XY> pp_theCenter = &theCenter;
	bool _result = ((::Bnd_B2f*)_NativeInstance)->IsOut(*(gp_XY*)pp_theCenter, theRadius, isCircleHollow);
	return _result;
}

bool RDC::OCC::Bnd_B2f::IsOut(RDC::OCC::XY theCenter, double theRadius)
{
	pin_ptr<RDC::OCC::XY> pp_theCenter = &theCenter;
	bool _result = ((::Bnd_B2f*)_NativeInstance)->IsOut(*(gp_XY*)pp_theCenter, theRadius, false);
	return _result;
}

bool RDC::OCC::Bnd_B2f::IsOut(RDC::OCC::Bnd_B2f^ theOtherBox)
{
	bool _result = ((::Bnd_B2f*)_NativeInstance)->IsOut(*(::Bnd_B2f*)theOtherBox->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_B2f::IsOut(RDC::OCC::Bnd_B2f^ theOtherBox, RDC::OCC::Trsf2d theTrsf)
{
	pin_ptr<RDC::OCC::Trsf2d> pp_theTrsf = &theTrsf;
	bool _result = ((::Bnd_B2f*)_NativeInstance)->IsOut(*(::Bnd_B2f*)theOtherBox->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
	return _result;
}

bool RDC::OCC::Bnd_B2f::IsOut(RDC::OCC::Ax2d theLine)
{
	pin_ptr<RDC::OCC::Ax2d> pp_theLine = &theLine;
	bool _result = ((::Bnd_B2f*)_NativeInstance)->IsOut(*(gp_Ax2d*)pp_theLine);
	return _result;
}

bool RDC::OCC::Bnd_B2f::IsOut(RDC::OCC::XY theP0, RDC::OCC::XY theP1)
{
	pin_ptr<RDC::OCC::XY> pp_theP0 = &theP0;
	pin_ptr<RDC::OCC::XY> pp_theP1 = &theP1;
	bool _result = ((::Bnd_B2f*)_NativeInstance)->IsOut(*(gp_XY*)pp_theP0, *(gp_XY*)pp_theP1);
	return _result;
}

bool RDC::OCC::Bnd_B2f::IsIn(RDC::OCC::Bnd_B2f^ theBox)
{
	bool _result = ((::Bnd_B2f*)_NativeInstance)->IsIn(*(::Bnd_B2f*)theBox->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_B2f::IsIn(RDC::OCC::Bnd_B2f^ theBox, RDC::OCC::Trsf2d theTrsf)
{
	pin_ptr<RDC::OCC::Trsf2d> pp_theTrsf = &theTrsf;
	bool _result = ((::Bnd_B2f*)_NativeInstance)->IsIn(*(::Bnd_B2f*)theBox->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
	return _result;
}

void RDC::OCC::Bnd_B2f::SetCenter(RDC::OCC::XY theCenter)
{
	pin_ptr<RDC::OCC::XY> pp_theCenter = &theCenter;
	((::Bnd_B2f*)_NativeInstance)->SetCenter(*(gp_XY*)pp_theCenter);
}

void RDC::OCC::Bnd_B2f::SetHSize(RDC::OCC::XY theHSize)
{
	pin_ptr<RDC::OCC::XY> pp_theHSize = &theHSize;
	((::Bnd_B2f*)_NativeInstance)->SetHSize(*(gp_XY*)pp_theHSize);
}



//---------------------------------------------------------------------
//  Class  Bnd_B3d
//---------------------------------------------------------------------

RDC::OCC::Bnd_B3d::Bnd_B3d()
	: RDC::OCC::BaseClass<::Bnd_B3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B3d();
}

RDC::OCC::Bnd_B3d::Bnd_B3d(RDC::OCC::XYZ theCenter, RDC::OCC::XYZ theHSize)
	: RDC::OCC::BaseClass<::Bnd_B3d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::XYZ> pp_theCenter = &theCenter;
	pin_ptr<RDC::OCC::XYZ> pp_theHSize = &theHSize;
	_NativeInstance = new ::Bnd_B3d(*(gp_XYZ*)pp_theCenter, *(gp_XYZ*)pp_theHSize);
}

bool RDC::OCC::Bnd_B3d::IsVoid()
{
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsVoid();
	return _result;
}

void RDC::OCC::Bnd_B3d::Clear()
{
	((::Bnd_B3d*)_NativeInstance)->Clear();
}

void RDC::OCC::Bnd_B3d::Add(RDC::OCC::XYZ thePnt)
{
	pin_ptr<RDC::OCC::XYZ> pp_thePnt = &thePnt;
	((::Bnd_B3d*)_NativeInstance)->Add(*(gp_XYZ*)pp_thePnt);
}

void RDC::OCC::Bnd_B3d::Add(RDC::OCC::Pnt thePnt)
{
	pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
	((::Bnd_B3d*)_NativeInstance)->Add(*(gp_Pnt*)pp_thePnt);
}

void RDC::OCC::Bnd_B3d::Add(RDC::OCC::Bnd_B3d^ theBox)
{
	((::Bnd_B3d*)_NativeInstance)->Add(*(::Bnd_B3d*)theBox->NativeInstance);
}

RDC::OCC::XYZ RDC::OCC::Bnd_B3d::CornerMin()
{
	::gp_XYZ _nativeResult = ((::Bnd_B3d*)_NativeInstance)->CornerMin();
	return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::Bnd_B3d::CornerMax()
{
	::gp_XYZ _nativeResult = ((::Bnd_B3d*)_NativeInstance)->CornerMax();
	return RDC::OCC::XYZ(_nativeResult);
}

double RDC::OCC::Bnd_B3d::SquareExtent()
{
	double _result = ((::Bnd_B3d*)_NativeInstance)->SquareExtent();
	return _result;
}

void RDC::OCC::Bnd_B3d::Enlarge(double theDiff)
{
	((::Bnd_B3d*)_NativeInstance)->Enlarge(theDiff);
}

bool RDC::OCC::Bnd_B3d::Limit(RDC::OCC::Bnd_B3d^ theOtherBox)
{
	bool _result = ((::Bnd_B3d*)_NativeInstance)->Limit(*(::Bnd_B3d*)theOtherBox->NativeInstance);
	return _result;
}

RDC::OCC::Bnd_B3d^ RDC::OCC::Bnd_B3d::Transformed(RDC::OCC::Trsf theTrsf)
{
	::Bnd_B3d* _result = new ::Bnd_B3d();
	pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
	*_result = ((::Bnd_B3d*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theTrsf);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_B3d(_result);
}

bool RDC::OCC::Bnd_B3d::IsOut(RDC::OCC::XYZ thePnt)
{
	pin_ptr<RDC::OCC::XYZ> pp_thePnt = &thePnt;
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_thePnt);
	return _result;
}

bool RDC::OCC::Bnd_B3d::IsOut(RDC::OCC::XYZ theCenter, double theRadius, bool isSphereHollow)
{
	pin_ptr<RDC::OCC::XYZ> pp_theCenter = &theCenter;
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_theCenter, theRadius, isSphereHollow);
	return _result;
}

bool RDC::OCC::Bnd_B3d::IsOut(RDC::OCC::XYZ theCenter, double theRadius)
{
	pin_ptr<RDC::OCC::XYZ> pp_theCenter = &theCenter;
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_theCenter, theRadius, false);
	return _result;
}

bool RDC::OCC::Bnd_B3d::IsOut(RDC::OCC::Bnd_B3d^ theOtherBox)
{
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsOut(*(::Bnd_B3d*)theOtherBox->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_B3d::IsOut(RDC::OCC::Bnd_B3d^ theOtherBox, RDC::OCC::Trsf theTrsf)
{
	pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsOut(*(::Bnd_B3d*)theOtherBox->NativeInstance, *(gp_Trsf*)pp_theTrsf);
	return _result;
}

bool RDC::OCC::Bnd_B3d::IsOut(RDC::OCC::Ax1 theLine, bool isRay, double theOverthickness)
{
	pin_ptr<RDC::OCC::Ax1> pp_theLine = &theLine;
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, isRay, theOverthickness);
	return _result;
}

bool RDC::OCC::Bnd_B3d::IsOut(RDC::OCC::Ax1 theLine, bool isRay)
{
	pin_ptr<RDC::OCC::Ax1> pp_theLine = &theLine;
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, isRay, 0.);
	return _result;
}

bool RDC::OCC::Bnd_B3d::IsOut(RDC::OCC::Ax1 theLine)
{
	pin_ptr<RDC::OCC::Ax1> pp_theLine = &theLine;
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, false, 0.);
	return _result;
}

bool RDC::OCC::Bnd_B3d::IsOut(RDC::OCC::Ax3 thePlane)
{
	pin_ptr<RDC::OCC::Ax3> pp_thePlane = &thePlane;
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_Ax3*)pp_thePlane);
	return _result;
}

bool RDC::OCC::Bnd_B3d::IsIn(RDC::OCC::Bnd_B3d^ theBox)
{
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsIn(*(::Bnd_B3d*)theBox->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_B3d::IsIn(RDC::OCC::Bnd_B3d^ theBox, RDC::OCC::Trsf theTrsf)
{
	pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
	bool _result = ((::Bnd_B3d*)_NativeInstance)->IsIn(*(::Bnd_B3d*)theBox->NativeInstance, *(gp_Trsf*)pp_theTrsf);
	return _result;
}

void RDC::OCC::Bnd_B3d::SetCenter(RDC::OCC::XYZ theCenter)
{
	pin_ptr<RDC::OCC::XYZ> pp_theCenter = &theCenter;
	((::Bnd_B3d*)_NativeInstance)->SetCenter(*(gp_XYZ*)pp_theCenter);
}

void RDC::OCC::Bnd_B3d::SetHSize(RDC::OCC::XYZ theHSize)
{
	pin_ptr<RDC::OCC::XYZ> pp_theHSize = &theHSize;
	((::Bnd_B3d*)_NativeInstance)->SetHSize(*(gp_XYZ*)pp_theHSize);
}



//---------------------------------------------------------------------
//  Class  Bnd_B3f
//---------------------------------------------------------------------

RDC::OCC::Bnd_B3f::Bnd_B3f()
	: RDC::OCC::BaseClass<::Bnd_B3f>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B3f();
}

RDC::OCC::Bnd_B3f::Bnd_B3f(RDC::OCC::XYZ theCenter, RDC::OCC::XYZ theHSize)
	: RDC::OCC::BaseClass<::Bnd_B3f>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::XYZ> pp_theCenter = &theCenter;
	pin_ptr<RDC::OCC::XYZ> pp_theHSize = &theHSize;
	_NativeInstance = new ::Bnd_B3f(*(gp_XYZ*)pp_theCenter, *(gp_XYZ*)pp_theHSize);
}

bool RDC::OCC::Bnd_B3f::IsVoid()
{
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsVoid();
	return _result;
}

void RDC::OCC::Bnd_B3f::Clear()
{
	((::Bnd_B3f*)_NativeInstance)->Clear();
}

void RDC::OCC::Bnd_B3f::Add(RDC::OCC::XYZ thePnt)
{
	pin_ptr<RDC::OCC::XYZ> pp_thePnt = &thePnt;
	((::Bnd_B3f*)_NativeInstance)->Add(*(gp_XYZ*)pp_thePnt);
}

void RDC::OCC::Bnd_B3f::Add(RDC::OCC::Pnt thePnt)
{
	pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
	((::Bnd_B3f*)_NativeInstance)->Add(*(gp_Pnt*)pp_thePnt);
}

void RDC::OCC::Bnd_B3f::Add(RDC::OCC::Bnd_B3f^ theBox)
{
	((::Bnd_B3f*)_NativeInstance)->Add(*(::Bnd_B3f*)theBox->NativeInstance);
}

RDC::OCC::XYZ RDC::OCC::Bnd_B3f::CornerMin()
{
	::gp_XYZ _nativeResult = ((::Bnd_B3f*)_NativeInstance)->CornerMin();
	return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::Bnd_B3f::CornerMax()
{
	::gp_XYZ _nativeResult = ((::Bnd_B3f*)_NativeInstance)->CornerMax();
	return RDC::OCC::XYZ(_nativeResult);
}

double RDC::OCC::Bnd_B3f::SquareExtent()
{
	double _result = ((::Bnd_B3f*)_NativeInstance)->SquareExtent();
	return _result;
}

void RDC::OCC::Bnd_B3f::Enlarge(double theDiff)
{
	((::Bnd_B3f*)_NativeInstance)->Enlarge(theDiff);
}

bool RDC::OCC::Bnd_B3f::Limit(RDC::OCC::Bnd_B3f^ theOtherBox)
{
	bool _result = ((::Bnd_B3f*)_NativeInstance)->Limit(*(::Bnd_B3f*)theOtherBox->NativeInstance);
	return _result;
}

RDC::OCC::Bnd_B3f^ RDC::OCC::Bnd_B3f::Transformed(RDC::OCC::Trsf theTrsf)
{
	::Bnd_B3f* _result = new ::Bnd_B3f();
	pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
	*_result = ((::Bnd_B3f*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theTrsf);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_B3f(_result);
}

bool RDC::OCC::Bnd_B3f::IsOut(RDC::OCC::XYZ thePnt)
{
	pin_ptr<RDC::OCC::XYZ> pp_thePnt = &thePnt;
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_thePnt);
	return _result;
}

bool RDC::OCC::Bnd_B3f::IsOut(RDC::OCC::XYZ theCenter, double theRadius, bool isSphereHollow)
{
	pin_ptr<RDC::OCC::XYZ> pp_theCenter = &theCenter;
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_theCenter, theRadius, isSphereHollow);
	return _result;
}

bool RDC::OCC::Bnd_B3f::IsOut(RDC::OCC::XYZ theCenter, double theRadius)
{
	pin_ptr<RDC::OCC::XYZ> pp_theCenter = &theCenter;
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_theCenter, theRadius, false);
	return _result;
}

bool RDC::OCC::Bnd_B3f::IsOut(RDC::OCC::Bnd_B3f^ theOtherBox)
{
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsOut(*(::Bnd_B3f*)theOtherBox->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_B3f::IsOut(RDC::OCC::Bnd_B3f^ theOtherBox, RDC::OCC::Trsf theTrsf)
{
	pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsOut(*(::Bnd_B3f*)theOtherBox->NativeInstance, *(gp_Trsf*)pp_theTrsf);
	return _result;
}

bool RDC::OCC::Bnd_B3f::IsOut(RDC::OCC::Ax1 theLine, bool isRay, double theOverthickness)
{
	pin_ptr<RDC::OCC::Ax1> pp_theLine = &theLine;
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, isRay, theOverthickness);
	return _result;
}

bool RDC::OCC::Bnd_B3f::IsOut(RDC::OCC::Ax1 theLine, bool isRay)
{
	pin_ptr<RDC::OCC::Ax1> pp_theLine = &theLine;
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, isRay, 0.);
	return _result;
}

bool RDC::OCC::Bnd_B3f::IsOut(RDC::OCC::Ax1 theLine)
{
	pin_ptr<RDC::OCC::Ax1> pp_theLine = &theLine;
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, false, 0.);
	return _result;
}

bool RDC::OCC::Bnd_B3f::IsOut(RDC::OCC::Ax3 thePlane)
{
	pin_ptr<RDC::OCC::Ax3> pp_thePlane = &thePlane;
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_Ax3*)pp_thePlane);
	return _result;
}

bool RDC::OCC::Bnd_B3f::IsIn(RDC::OCC::Bnd_B3f^ theBox)
{
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsIn(*(::Bnd_B3f*)theBox->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_B3f::IsIn(RDC::OCC::Bnd_B3f^ theBox, RDC::OCC::Trsf theTrsf)
{
	pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
	bool _result = ((::Bnd_B3f*)_NativeInstance)->IsIn(*(::Bnd_B3f*)theBox->NativeInstance, *(gp_Trsf*)pp_theTrsf);
	return _result;
}

void RDC::OCC::Bnd_B3f::SetCenter(RDC::OCC::XYZ theCenter)
{
	pin_ptr<RDC::OCC::XYZ> pp_theCenter = &theCenter;
	((::Bnd_B3f*)_NativeInstance)->SetCenter(*(gp_XYZ*)pp_theCenter);
}

void RDC::OCC::Bnd_B3f::SetHSize(RDC::OCC::XYZ theHSize)
{
	pin_ptr<RDC::OCC::XYZ> pp_theHSize = &theHSize;
	((::Bnd_B3f*)_NativeInstance)->SetHSize(*(gp_XYZ*)pp_theHSize);
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox
//---------------------------------------------------------------------

RDC::OCC::Bnd_HArray1OfBox::Bnd_HArray1OfBox()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox();
}

RDC::OCC::Bnd_HArray1OfBox::Bnd_HArray1OfBox(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox(theLower, theUpper);
}

RDC::OCC::Bnd_HArray1OfBox::Bnd_HArray1OfBox(int theLower, int theUpper, RDC::OCC::Bnd_Box^ theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox(theLower, theUpper, *(::Bnd_Box*)theValue->NativeInstance);
}

RDC::OCC::Bnd_HArray1OfBox::Bnd_HArray1OfBox(RDC::OCC::Bnd_Box^ theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox(*(::Bnd_Box*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

RDC::OCC::Bnd_HArray1OfBox::Bnd_HArray1OfBox(RDC::OCC::Bnd_Array1OfBox^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox(*(::Bnd_Array1OfBox*)theOther->NativeInstance);
}

RDC::OCC::Bnd_Array1OfBox^ RDC::OCC::Bnd_HArray1OfBox::Array1()
{
	::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
	*_result = (::Bnd_Array1OfBox)((::Bnd_HArray1OfBox*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfBox(_result);
}

RDC::OCC::Bnd_Array1OfBox^ RDC::OCC::Bnd_HArray1OfBox::ChangeArray1()
{
	::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
	*_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfBox(_result);
}

void RDC::OCC::Bnd_HArray1OfBox::Init(RDC::OCC::Bnd_Box^ theValue)
{
	((::Bnd_HArray1OfBox*)_NativeInstance)->Init(*(::Bnd_Box*)theValue->NativeInstance);
}

int RDC::OCC::Bnd_HArray1OfBox::Size()
{
	int _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Bnd_HArray1OfBox::Length()
{
	int _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::Bnd_HArray1OfBox::IsEmpty()
{
	bool _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::Bnd_HArray1OfBox::Lower()
{
	int _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Bnd_HArray1OfBox::Upper()
{
	int _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::Bnd_HArray1OfBox^ RDC::OCC::Bnd_HArray1OfBox::Assign(RDC::OCC::Bnd_HArray1OfBox^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Bnd_HArray1OfBox^ RDC::OCC::Bnd_HArray1OfBox::Move(RDC::OCC::Bnd_HArray1OfBox^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_HArray1OfBox::First()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = (::Bnd_Box)((::Bnd_HArray1OfBox*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_HArray1OfBox::ChangeFirst()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_HArray1OfBox::Last()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = (::Bnd_Box)((::Bnd_HArray1OfBox*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_HArray1OfBox::ChangeLast()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_HArray1OfBox::Value(int theIndex)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = (::Bnd_Box)((::Bnd_HArray1OfBox*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::Bnd_HArray1OfBox::ChangeValue(int theIndex)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

void RDC::OCC::Bnd_HArray1OfBox::SetValue(int theIndex, RDC::OCC::Bnd_Box^ theItem)
{
	((::Bnd_HArray1OfBox*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box*)theItem->NativeInstance);
}

void RDC::OCC::Bnd_HArray1OfBox::UpdateLowerBound(int theLower)
{
	((::Bnd_HArray1OfBox*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::Bnd_HArray1OfBox::UpdateUpperBound(int theUpper)
{
	((::Bnd_HArray1OfBox*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::Bnd_HArray1OfBox::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_HArray1OfBox*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::Bnd_HArray1OfBox::IsDeletable()
{
	bool _result = ((::Bnd_HArray1OfBox*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::Bnd_HArray1OfBox^ RDC::OCC::Bnd_HArray1OfBox::CreateDowncasted(::Bnd_HArray1OfBox* instance)
{
	return gcnew RDC::OCC::Bnd_HArray1OfBox(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Bnd_Box^>^ RDC::OCC::Bnd_HArray1OfBox::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Box^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Bnd_HArray1OfBox::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Box^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Bnd_BoundSortBox
//---------------------------------------------------------------------

RDC::OCC::Bnd_BoundSortBox::Bnd_BoundSortBox()
	: RDC::OCC::BaseClass<::Bnd_BoundSortBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_BoundSortBox();
}

void RDC::OCC::Bnd_BoundSortBox::Initialize(RDC::OCC::Bnd_Box^ CompleteBox, RDC::OCC::Bnd_HArray1OfBox^ SetOfBox)
{
	((::Bnd_BoundSortBox*)_NativeInstance)->Initialize(*(::Bnd_Box*)CompleteBox->NativeInstance, Handle(::Bnd_HArray1OfBox)(SetOfBox->NativeInstance));
}

void RDC::OCC::Bnd_BoundSortBox::Initialize(RDC::OCC::Bnd_HArray1OfBox^ SetOfBox)
{
	((::Bnd_BoundSortBox*)_NativeInstance)->Initialize(Handle(::Bnd_HArray1OfBox)(SetOfBox->NativeInstance));
}

void RDC::OCC::Bnd_BoundSortBox::Initialize(RDC::OCC::Bnd_Box^ CompleteBox, int nbComponents)
{
	((::Bnd_BoundSortBox*)_NativeInstance)->Initialize(*(::Bnd_Box*)CompleteBox->NativeInstance, nbComponents);
}

void RDC::OCC::Bnd_BoundSortBox::Add(RDC::OCC::Bnd_Box^ theBox, int boxIndex)
{
	((::Bnd_BoundSortBox*)_NativeInstance)->Add(*(::Bnd_Box*)theBox->NativeInstance, boxIndex);
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::Bnd_BoundSortBox::Compare(RDC::OCC::Bnd_Box^ theBox)
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result = (::TColStd_ListOfInteger)((::Bnd_BoundSortBox*)_NativeInstance)->Compare(*(::Bnd_Box*)theBox->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::Bnd_BoundSortBox::Compare(RDC::OCC::Pln P)
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	pin_ptr<RDC::OCC::Pln> pp_P = &P;
	*_result = (::TColStd_ListOfInteger)((::Bnd_BoundSortBox*)_NativeInstance)->Compare(*(gp_Pln*)pp_P);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

void RDC::OCC::Bnd_BoundSortBox::Dump()
{
	((::Bnd_BoundSortBox*)_NativeInstance)->Dump();
}

void RDC::OCC::Bnd_BoundSortBox::Destroy()
{
	((::Bnd_BoundSortBox*)_NativeInstance)->Destroy();
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox2d
//---------------------------------------------------------------------

RDC::OCC::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox2d();
}

RDC::OCC::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox2d(theLower, theUpper);
}

RDC::OCC::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(int theLower, int theUpper, RDC::OCC::Bnd_Box2d^ theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox2d(theLower, theUpper, *(::Bnd_Box2d*)theValue->NativeInstance);
}

RDC::OCC::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(RDC::OCC::Bnd_Box2d^ theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox2d(*(::Bnd_Box2d*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

RDC::OCC::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(RDC::OCC::Bnd_Array1OfBox2d^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox2d(*(::Bnd_Array1OfBox2d*)theOther->NativeInstance);
}

RDC::OCC::Bnd_Array1OfBox2d^ RDC::OCC::Bnd_HArray1OfBox2d::Array1()
{
	::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
	*_result = (::Bnd_Array1OfBox2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfBox2d(_result);
}

RDC::OCC::Bnd_Array1OfBox2d^ RDC::OCC::Bnd_HArray1OfBox2d::ChangeArray1()
{
	::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
	*_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfBox2d(_result);
}

void RDC::OCC::Bnd_HArray1OfBox2d::Init(RDC::OCC::Bnd_Box2d^ theValue)
{
	((::Bnd_HArray1OfBox2d*)_NativeInstance)->Init(*(::Bnd_Box2d*)theValue->NativeInstance);
}

int RDC::OCC::Bnd_HArray1OfBox2d::Size()
{
	int _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Bnd_HArray1OfBox2d::Length()
{
	int _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::Bnd_HArray1OfBox2d::IsEmpty()
{
	bool _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::Bnd_HArray1OfBox2d::Lower()
{
	int _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Bnd_HArray1OfBox2d::Upper()
{
	int _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::Bnd_HArray1OfBox2d^ RDC::OCC::Bnd_HArray1OfBox2d::Assign(RDC::OCC::Bnd_HArray1OfBox2d^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Bnd_HArray1OfBox2d^ RDC::OCC::Bnd_HArray1OfBox2d::Move(RDC::OCC::Bnd_HArray1OfBox2d^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_HArray1OfBox2d::First()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = (::Bnd_Box2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_HArray1OfBox2d::ChangeFirst()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_HArray1OfBox2d::Last()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = (::Bnd_Box2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_HArray1OfBox2d::ChangeLast()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_HArray1OfBox2d::Value(int theIndex)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = (::Bnd_Box2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::Bnd_HArray1OfBox2d::ChangeValue(int theIndex)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

void RDC::OCC::Bnd_HArray1OfBox2d::SetValue(int theIndex, RDC::OCC::Bnd_Box2d^ theItem)
{
	((::Bnd_HArray1OfBox2d*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box2d*)theItem->NativeInstance);
}

void RDC::OCC::Bnd_HArray1OfBox2d::UpdateLowerBound(int theLower)
{
	((::Bnd_HArray1OfBox2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::Bnd_HArray1OfBox2d::UpdateUpperBound(int theUpper)
{
	((::Bnd_HArray1OfBox2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::Bnd_HArray1OfBox2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_HArray1OfBox2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::Bnd_HArray1OfBox2d::IsDeletable()
{
	bool _result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::Bnd_HArray1OfBox2d^ RDC::OCC::Bnd_HArray1OfBox2d::CreateDowncasted(::Bnd_HArray1OfBox2d* instance)
{
	return gcnew RDC::OCC::Bnd_HArray1OfBox2d(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Bnd_Box2d^>^ RDC::OCC::Bnd_HArray1OfBox2d::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Box2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Bnd_HArray1OfBox2d::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Box2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfSphere
//---------------------------------------------------------------------

RDC::OCC::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfSphere();
}

RDC::OCC::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfSphere(theLower, theUpper);
}

RDC::OCC::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(int theLower, int theUpper, RDC::OCC::Bnd_Sphere^ theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfSphere(theLower, theUpper, *(::Bnd_Sphere*)theValue->NativeInstance);
}

RDC::OCC::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(RDC::OCC::Bnd_Sphere^ theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfSphere(*(::Bnd_Sphere*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

RDC::OCC::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(RDC::OCC::Bnd_Array1OfSphere^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfSphere(*(::Bnd_Array1OfSphere*)theOther->NativeInstance);
}

RDC::OCC::Bnd_Array1OfSphere^ RDC::OCC::Bnd_HArray1OfSphere::Array1()
{
	::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
	*_result = (::Bnd_Array1OfSphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfSphere(_result);
}

RDC::OCC::Bnd_Array1OfSphere^ RDC::OCC::Bnd_HArray1OfSphere::ChangeArray1()
{
	::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
	*_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Array1OfSphere(_result);
}

void RDC::OCC::Bnd_HArray1OfSphere::Init(RDC::OCC::Bnd_Sphere^ theValue)
{
	((::Bnd_HArray1OfSphere*)_NativeInstance)->Init(*(::Bnd_Sphere*)theValue->NativeInstance);
}

int RDC::OCC::Bnd_HArray1OfSphere::Size()
{
	int _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Bnd_HArray1OfSphere::Length()
{
	int _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::Bnd_HArray1OfSphere::IsEmpty()
{
	bool _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::Bnd_HArray1OfSphere::Lower()
{
	int _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Bnd_HArray1OfSphere::Upper()
{
	int _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::Bnd_HArray1OfSphere^ RDC::OCC::Bnd_HArray1OfSphere::Assign(RDC::OCC::Bnd_HArray1OfSphere^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Bnd_HArray1OfSphere^ RDC::OCC::Bnd_HArray1OfSphere::Move(RDC::OCC::Bnd_HArray1OfSphere^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_HArray1OfSphere::First()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = (::Bnd_Sphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_HArray1OfSphere::ChangeFirst()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_HArray1OfSphere::Last()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = (::Bnd_Sphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_HArray1OfSphere::ChangeLast()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_HArray1OfSphere::Value(int theIndex)
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = (::Bnd_Sphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

RDC::OCC::Bnd_Sphere^ RDC::OCC::Bnd_HArray1OfSphere::ChangeValue(int theIndex)
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Sphere(_result);
}

void RDC::OCC::Bnd_HArray1OfSphere::SetValue(int theIndex, RDC::OCC::Bnd_Sphere^ theItem)
{
	((::Bnd_HArray1OfSphere*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Sphere*)theItem->NativeInstance);
}

void RDC::OCC::Bnd_HArray1OfSphere::UpdateLowerBound(int theLower)
{
	((::Bnd_HArray1OfSphere*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::Bnd_HArray1OfSphere::UpdateUpperBound(int theUpper)
{
	((::Bnd_HArray1OfSphere*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::Bnd_HArray1OfSphere::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_HArray1OfSphere*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::Bnd_HArray1OfSphere::IsDeletable()
{
	bool _result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::Bnd_HArray1OfSphere^ RDC::OCC::Bnd_HArray1OfSphere::CreateDowncasted(::Bnd_HArray1OfSphere* instance)
{
	return gcnew RDC::OCC::Bnd_HArray1OfSphere(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Bnd_Sphere^>^ RDC::OCC::Bnd_HArray1OfSphere::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Sphere^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Bnd_HArray1OfSphere::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Bnd_Sphere^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfSphere::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Bnd_OBB
//---------------------------------------------------------------------

RDC::OCC::Bnd_OBB::Bnd_OBB()
	: RDC::OCC::BaseClass<::Bnd_OBB>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_OBB();
}

RDC::OCC::Bnd_OBB::Bnd_OBB(RDC::OCC::Pnt theCenter, RDC::OCC::Dir theXDirection, RDC::OCC::Dir theYDirection, RDC::OCC::Dir theZDirection, double theHXSize, double theHYSize, double theHZSize)
	: RDC::OCC::BaseClass<::Bnd_OBB>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt> pp_theCenter = &theCenter;
	pin_ptr<RDC::OCC::Dir> pp_theXDirection = &theXDirection;
	pin_ptr<RDC::OCC::Dir> pp_theYDirection = &theYDirection;
	pin_ptr<RDC::OCC::Dir> pp_theZDirection = &theZDirection;
	_NativeInstance = new ::Bnd_OBB(*(gp_Pnt*)pp_theCenter, *(gp_Dir*)pp_theXDirection, *(gp_Dir*)pp_theYDirection, *(gp_Dir*)pp_theZDirection, theHXSize, theHYSize, theHZSize);
}

RDC::OCC::Bnd_OBB::Bnd_OBB(RDC::OCC::Bnd_Box^ theBox)
	: RDC::OCC::BaseClass<::Bnd_OBB>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_OBB(*(::Bnd_Box*)theBox->NativeInstance);
}

void RDC::OCC::Bnd_OBB::ReBuild(RDC::OCC::TColgp_Array1OfPnt^ theListOfPoints, RDC::OCC::TColStd_Array1OfReal^ theListOfTolerances, bool theIsOptimal)
{
	((::Bnd_OBB*)_NativeInstance)->ReBuild(*(::TColgp_Array1OfPnt*)theListOfPoints->NativeInstance, (::TColStd_Array1OfReal*)theListOfTolerances->NativeInstance, theIsOptimal);
}

void RDC::OCC::Bnd_OBB::ReBuild(RDC::OCC::TColgp_Array1OfPnt^ theListOfPoints, RDC::OCC::TColStd_Array1OfReal^ theListOfTolerances)
{
	((::Bnd_OBB*)_NativeInstance)->ReBuild(*(::TColgp_Array1OfPnt*)theListOfPoints->NativeInstance, (::TColStd_Array1OfReal*)theListOfTolerances->NativeInstance, false);
}

void RDC::OCC::Bnd_OBB::ReBuild(RDC::OCC::TColgp_Array1OfPnt^ theListOfPoints)
{
	((::Bnd_OBB*)_NativeInstance)->ReBuild(*(::TColgp_Array1OfPnt*)theListOfPoints->NativeInstance, nullptr, false);
}

void RDC::OCC::Bnd_OBB::SetCenter(RDC::OCC::Pnt theCenter)
{
	pin_ptr<RDC::OCC::Pnt> pp_theCenter = &theCenter;
	((::Bnd_OBB*)_NativeInstance)->SetCenter(*(gp_Pnt*)pp_theCenter);
}

void RDC::OCC::Bnd_OBB::SetXComponent(RDC::OCC::Dir theXDirection, double theHXSize)
{
	pin_ptr<RDC::OCC::Dir> pp_theXDirection = &theXDirection;
	((::Bnd_OBB*)_NativeInstance)->SetXComponent(*(gp_Dir*)pp_theXDirection, theHXSize);
}

void RDC::OCC::Bnd_OBB::SetYComponent(RDC::OCC::Dir theYDirection, double theHYSize)
{
	pin_ptr<RDC::OCC::Dir> pp_theYDirection = &theYDirection;
	((::Bnd_OBB*)_NativeInstance)->SetYComponent(*(gp_Dir*)pp_theYDirection, theHYSize);
}

void RDC::OCC::Bnd_OBB::SetZComponent(RDC::OCC::Dir theZDirection, double theHZSize)
{
	pin_ptr<RDC::OCC::Dir> pp_theZDirection = &theZDirection;
	((::Bnd_OBB*)_NativeInstance)->SetZComponent(*(gp_Dir*)pp_theZDirection, theHZSize);
}

RDC::OCC::Ax3 RDC::OCC::Bnd_OBB::Position()
{
	::gp_Ax3 _nativeResult = ((::Bnd_OBB*)_NativeInstance)->Position();
	return RDC::OCC::Ax3(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::Bnd_OBB::Center()
{
	::gp_XYZ _nativeResult = ((::Bnd_OBB*)_NativeInstance)->Center();
	return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::Bnd_OBB::XDirection()
{
	::gp_XYZ _nativeResult = ((::Bnd_OBB*)_NativeInstance)->XDirection();
	return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::Bnd_OBB::YDirection()
{
	::gp_XYZ _nativeResult = ((::Bnd_OBB*)_NativeInstance)->YDirection();
	return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::Bnd_OBB::ZDirection()
{
	::gp_XYZ _nativeResult = ((::Bnd_OBB*)_NativeInstance)->ZDirection();
	return RDC::OCC::XYZ(_nativeResult);
}

double RDC::OCC::Bnd_OBB::XHSize()
{
	double _result = ((::Bnd_OBB*)_NativeInstance)->XHSize();
	return _result;
}

double RDC::OCC::Bnd_OBB::YHSize()
{
	double _result = ((::Bnd_OBB*)_NativeInstance)->YHSize();
	return _result;
}

double RDC::OCC::Bnd_OBB::ZHSize()
{
	double _result = ((::Bnd_OBB*)_NativeInstance)->ZHSize();
	return _result;
}

bool RDC::OCC::Bnd_OBB::IsVoid()
{
	bool _result = ((::Bnd_OBB*)_NativeInstance)->IsVoid();
	return _result;
}

void RDC::OCC::Bnd_OBB::SetVoid()
{
	((::Bnd_OBB*)_NativeInstance)->SetVoid();
}

void RDC::OCC::Bnd_OBB::SetAABox(bool theFlag)
{
	pin_ptr<bool> pp_theFlag = &theFlag;
	((::Bnd_OBB*)_NativeInstance)->SetAABox(*(bool*)pp_theFlag);
}

bool RDC::OCC::Bnd_OBB::IsAABox()
{
	bool _result = ((::Bnd_OBB*)_NativeInstance)->IsAABox();
	return _result;
}

void RDC::OCC::Bnd_OBB::Enlarge(double theGapAdd)
{
	((::Bnd_OBB*)_NativeInstance)->Enlarge(theGapAdd);
}

bool RDC::OCC::Bnd_OBB::GetVertex(RDC::OCC::Pnt theP)
{
	pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
	bool _result = ((::Bnd_OBB*)_NativeInstance)->GetVertex((gp_Pnt*)pp_theP);
	return _result;
}

double RDC::OCC::Bnd_OBB::SquareExtent()
{
	double _result = ((::Bnd_OBB*)_NativeInstance)->SquareExtent();
	return _result;
}

bool RDC::OCC::Bnd_OBB::IsOut(RDC::OCC::Bnd_OBB^ theOther)
{
	bool _result = ((::Bnd_OBB*)_NativeInstance)->IsOut(*(::Bnd_OBB*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Bnd_OBB::IsOut(RDC::OCC::Pnt theP)
{
	pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
	bool _result = ((::Bnd_OBB*)_NativeInstance)->IsOut(*(gp_Pnt*)pp_theP);
	return _result;
}

bool RDC::OCC::Bnd_OBB::IsCompletelyInside(RDC::OCC::Bnd_OBB^ theOther)
{
	bool _result = ((::Bnd_OBB*)_NativeInstance)->IsCompletelyInside(*(::Bnd_OBB*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::Bnd_OBB::Add(RDC::OCC::Bnd_OBB^ theOther)
{
	((::Bnd_OBB*)_NativeInstance)->Add(*(::Bnd_OBB*)theOther->NativeInstance);
}

void RDC::OCC::Bnd_OBB::Add(RDC::OCC::Pnt theP)
{
	pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
	((::Bnd_OBB*)_NativeInstance)->Add(*(gp_Pnt*)pp_theP);
}

void RDC::OCC::Bnd_OBB::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Bnd_OBB*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Bnd_OBB::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Bnd_OBB*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Bnd_Range
//---------------------------------------------------------------------

RDC::OCC::Bnd_Range::Bnd_Range()
	: RDC::OCC::BaseClass<::Bnd_Range>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Range();
}

RDC::OCC::Bnd_Range::Bnd_Range(double theMin, double theMax)
	: RDC::OCC::BaseClass<::Bnd_Range>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Range(theMin, theMax);
}

void RDC::OCC::Bnd_Range::Common(RDC::OCC::Bnd_Range^ theOther)
{
	((::Bnd_Range*)_NativeInstance)->Common(*(::Bnd_Range*)theOther->NativeInstance);
}

bool RDC::OCC::Bnd_Range::Union(RDC::OCC::Bnd_Range^ theOther)
{
	bool _result = ((::Bnd_Range*)_NativeInstance)->Union(*(::Bnd_Range*)theOther->NativeInstance);
	return _result;
}

int RDC::OCC::Bnd_Range::IsIntersected(double theVal, double thePeriod)
{
	int _result = ((::Bnd_Range*)_NativeInstance)->IsIntersected(theVal, thePeriod);
	return _result;
}

int RDC::OCC::Bnd_Range::IsIntersected(double theVal)
{
	int _result = ((::Bnd_Range*)_NativeInstance)->IsIntersected(theVal, 0.);
	return _result;
}

void RDC::OCC::Bnd_Range::Add(double theParameter)
{
	((::Bnd_Range*)_NativeInstance)->Add(theParameter);
}

void RDC::OCC::Bnd_Range::Add(RDC::OCC::Bnd_Range^ theRange)
{
	((::Bnd_Range*)_NativeInstance)->Add(*(::Bnd_Range*)theRange->NativeInstance);
}

bool RDC::OCC::Bnd_Range::GetMin(double% thePar)
{
	pin_ptr<double> pp_thePar = &thePar;
	bool _result = ((::Bnd_Range*)_NativeInstance)->GetMin(*(double*)pp_thePar);
	return _result;
}

bool RDC::OCC::Bnd_Range::GetMax(double% thePar)
{
	pin_ptr<double> pp_thePar = &thePar;
	bool _result = ((::Bnd_Range*)_NativeInstance)->GetMax(*(double*)pp_thePar);
	return _result;
}

bool RDC::OCC::Bnd_Range::GetBounds(double% theFirstPar, double% theLastPar)
{
	pin_ptr<double> pp_theFirstPar = &theFirstPar;
	pin_ptr<double> pp_theLastPar = &theLastPar;
	bool _result = ((::Bnd_Range*)_NativeInstance)->GetBounds(*(double*)pp_theFirstPar, *(double*)pp_theLastPar);
	return _result;
}

bool RDC::OCC::Bnd_Range::GetIntermediatePoint(double theLambda, double% theParameter)
{
	pin_ptr<double> pp_theParameter = &theParameter;
	bool _result = ((::Bnd_Range*)_NativeInstance)->GetIntermediatePoint(theLambda, *(double*)pp_theParameter);
	return _result;
}

double RDC::OCC::Bnd_Range::Delta()
{
	double _result = ((::Bnd_Range*)_NativeInstance)->Delta();
	return _result;
}

bool RDC::OCC::Bnd_Range::IsVoid()
{
	bool _result = ((::Bnd_Range*)_NativeInstance)->IsVoid();
	return _result;
}

void RDC::OCC::Bnd_Range::SetVoid()
{
	((::Bnd_Range*)_NativeInstance)->SetVoid();
}

void RDC::OCC::Bnd_Range::Enlarge(double theDelta)
{
	((::Bnd_Range*)_NativeInstance)->Enlarge(theDelta);
}

RDC::OCC::Bnd_Range^ RDC::OCC::Bnd_Range::Shifted(double theVal)
{
	::Bnd_Range* _result = new ::Bnd_Range();
	*_result = ((::Bnd_Range*)_NativeInstance)->Shifted(theVal);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Range(_result);
}

void RDC::OCC::Bnd_Range::Shift(double theVal)
{
	((::Bnd_Range*)_NativeInstance)->Shift(theVal);
}

void RDC::OCC::Bnd_Range::TrimFrom(double theValLower)
{
	((::Bnd_Range*)_NativeInstance)->TrimFrom(theValLower);
}

void RDC::OCC::Bnd_Range::TrimTo(double theValUpper)
{
	((::Bnd_Range*)_NativeInstance)->TrimTo(theValUpper);
}

bool RDC::OCC::Bnd_Range::IsOut(double theValue)
{
	bool _result = ((::Bnd_Range*)_NativeInstance)->IsOut(theValue);
	return _result;
}

bool RDC::OCC::Bnd_Range::IsOut(RDC::OCC::Bnd_Range^ theRange)
{
	bool _result = ((::Bnd_Range*)_NativeInstance)->IsOut(*(::Bnd_Range*)theRange->NativeInstance);
	return _result;
}

void RDC::OCC::Bnd_Range::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Bnd_Range*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Bnd_Range::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Bnd_Range*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Bnd_Tools
//---------------------------------------------------------------------

RDC::OCC::Bnd_Tools::Bnd_Tools()
	: RDC::OCC::BaseClass<::Bnd_Tools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Tools();
}


