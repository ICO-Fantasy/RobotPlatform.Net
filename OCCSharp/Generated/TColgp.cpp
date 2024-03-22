// Generated wrapper code for package TColgp

#include "OcctPCH.h"
#include "TColgp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "NCollection.h"


//---------------------------------------------------------------------
//  Class  TColgp_Array1OfCirc2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array1OfCirc2d::TColgp_Array1OfCirc2d()
    : RDC::OCC::BaseClass<::TColgp_Array1OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfCirc2d();
}

RDC::OCC::TColgp_Array1OfCirc2d::TColgp_Array1OfCirc2d(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfCirc2d(theLower, theUpper);
}

RDC::OCC::TColgp_Array1OfCirc2d::TColgp_Array1OfCirc2d(RDC::OCC::gp_Circ2d^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::TColgp_Array1OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfCirc2d(*(::gp_Circ2d*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColgp_Array1OfCirc2d::TColgp_Array1OfCirc2d(RDC::OCC::gp_Circ2d^ theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfCirc2d(*(::gp_Circ2d*)theBegin->NativeInstance, theLower, theUpper, true);
}

void RDC::OCC::TColgp_Array1OfCirc2d::Init(RDC::OCC::gp_Circ2d^ theValue)
{
    ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Init(*(::gp_Circ2d*)theValue->NativeInstance);
}

int RDC::OCC::TColgp_Array1OfCirc2d::Size()
{
    int _result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array1OfCirc2d::Length()
{
    int _result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_Array1OfCirc2d::IsEmpty()
{
    bool _result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array1OfCirc2d::Lower()
{
    int _result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array1OfCirc2d::Upper()
{
    int _result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_Array1OfCirc2d^ RDC::OCC::TColgp_Array1OfCirc2d::Assign(RDC::OCC::TColgp_Array1OfCirc2d^ theOther)
{
    ::TColgp_Array1OfCirc2d* _result = new ::TColgp_Array1OfCirc2d();
    *_result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Assign(*(::TColgp_Array1OfCirc2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfCirc2d(_result);
}

RDC::OCC::TColgp_Array1OfCirc2d^ RDC::OCC::TColgp_Array1OfCirc2d::Move(RDC::OCC::TColgp_Array1OfCirc2d^ theOther)
{
    ::TColgp_Array1OfCirc2d* _result = new ::TColgp_Array1OfCirc2d();
    *_result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Move(*(::TColgp_Array1OfCirc2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfCirc2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array1OfCirc2d::First()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_Array1OfCirc2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array1OfCirc2d::ChangeFirst()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array1OfCirc2d::Last()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_Array1OfCirc2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array1OfCirc2d::ChangeLast()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array1OfCirc2d::Value(int theIndex)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_Array1OfCirc2d*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array1OfCirc2d::ChangeValue(int theIndex)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::TColgp_Array1OfCirc2d::SetValue(int theIndex, RDC::OCC::gp_Circ2d^ theItem)
{
    ((::TColgp_Array1OfCirc2d*)_NativeInstance)->SetValue(theIndex, *(::gp_Circ2d*)theItem->NativeInstance);
}

void RDC::OCC::TColgp_Array1OfCirc2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array1OfCirc2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array1OfCirc2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array1OfCirc2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_Array1OfCirc2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_Array1OfCirc2d::IsDeletable()
{
    bool _result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::gp_Circ2d^>^ RDC::OCC::TColgp_Array1OfCirc2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::gp_Circ2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_Array1OfCirc2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::gp_Circ2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfCirc2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfDir
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array1OfDir::TColgp_Array1OfDir()
    : RDC::OCC::BaseClass<::TColgp_Array1OfDir>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfDir();
}

RDC::OCC::TColgp_Array1OfDir::TColgp_Array1OfDir(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfDir>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfDir(theLower, theUpper);
}

RDC::OCC::TColgp_Array1OfDir::TColgp_Array1OfDir(RDC::OCC::Dir theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::TColgp_Array1OfDir>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfDir(*(gp_Dir*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColgp_Array1OfDir::TColgp_Array1OfDir(RDC::OCC::Dir theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfDir>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfDir(*(gp_Dir*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColgp_Array1OfDir::Init(RDC::OCC::Dir theValue)
{
    pin_ptr<RDC::OCC::Dir> pp_theValue = &theValue;
    ((::TColgp_Array1OfDir*)_NativeInstance)->Init(*(gp_Dir*)pp_theValue);
}

int RDC::OCC::TColgp_Array1OfDir::Size()
{
    int _result = ((::TColgp_Array1OfDir*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array1OfDir::Length()
{
    int _result = ((::TColgp_Array1OfDir*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_Array1OfDir::IsEmpty()
{
    bool _result = ((::TColgp_Array1OfDir*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array1OfDir::Lower()
{
    int _result = ((::TColgp_Array1OfDir*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array1OfDir::Upper()
{
    int _result = ((::TColgp_Array1OfDir*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_Array1OfDir^ RDC::OCC::TColgp_Array1OfDir::Assign(RDC::OCC::TColgp_Array1OfDir^ theOther)
{
    ::TColgp_Array1OfDir* _result = new ::TColgp_Array1OfDir();
    *_result = ((::TColgp_Array1OfDir*)_NativeInstance)->Assign(*(::TColgp_Array1OfDir*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfDir(_result);
}

RDC::OCC::TColgp_Array1OfDir^ RDC::OCC::TColgp_Array1OfDir::Move(RDC::OCC::TColgp_Array1OfDir^ theOther)
{
    ::TColgp_Array1OfDir* _result = new ::TColgp_Array1OfDir();
    *_result = ((::TColgp_Array1OfDir*)_NativeInstance)->Move(*(::TColgp_Array1OfDir*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfDir(_result);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array1OfDir::First()
{
    ::gp_Dir _nativeResult = ((::TColgp_Array1OfDir*)_NativeInstance)->First();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array1OfDir::ChangeFirst()
{
    ::gp_Dir _nativeResult = ((::TColgp_Array1OfDir*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array1OfDir::Last()
{
    ::gp_Dir _nativeResult = ((::TColgp_Array1OfDir*)_NativeInstance)->Last();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array1OfDir::ChangeLast()
{
    ::gp_Dir _nativeResult = ((::TColgp_Array1OfDir*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array1OfDir::Value(int theIndex)
{
    ::gp_Dir _nativeResult = ((::TColgp_Array1OfDir*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array1OfDir::ChangeValue(int theIndex)
{
    ::gp_Dir _nativeResult = ((::TColgp_Array1OfDir*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::TColgp_Array1OfDir::SetValue(int theIndex, RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_Array1OfDir*)_NativeInstance)->SetValue(theIndex, *(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_Array1OfDir::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array1OfDir*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array1OfDir::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array1OfDir*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_Array1OfDir::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_Array1OfDir*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_Array1OfDir::IsDeletable()
{
    bool _result = ((::TColgp_Array1OfDir*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Dir>^ RDC::OCC::TColgp_Array1OfDir::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_Array1OfDir::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfDir::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfDir2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array1OfDir2d::TColgp_Array1OfDir2d()
    : RDC::OCC::BaseClass<::TColgp_Array1OfDir2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfDir2d();
}

RDC::OCC::TColgp_Array1OfDir2d::TColgp_Array1OfDir2d(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfDir2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfDir2d(theLower, theUpper);
}

RDC::OCC::TColgp_Array1OfDir2d::TColgp_Array1OfDir2d(RDC::OCC::Dir2d theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::TColgp_Array1OfDir2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfDir2d(*(gp_Dir2d*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColgp_Array1OfDir2d::TColgp_Array1OfDir2d(RDC::OCC::Dir2d theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfDir2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfDir2d(*(gp_Dir2d*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColgp_Array1OfDir2d::Init(RDC::OCC::Dir2d theValue)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theValue = &theValue;
    ((::TColgp_Array1OfDir2d*)_NativeInstance)->Init(*(gp_Dir2d*)pp_theValue);
}

int RDC::OCC::TColgp_Array1OfDir2d::Size()
{
    int _result = ((::TColgp_Array1OfDir2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array1OfDir2d::Length()
{
    int _result = ((::TColgp_Array1OfDir2d*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_Array1OfDir2d::IsEmpty()
{
    bool _result = ((::TColgp_Array1OfDir2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array1OfDir2d::Lower()
{
    int _result = ((::TColgp_Array1OfDir2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array1OfDir2d::Upper()
{
    int _result = ((::TColgp_Array1OfDir2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_Array1OfDir2d^ RDC::OCC::TColgp_Array1OfDir2d::Assign(RDC::OCC::TColgp_Array1OfDir2d^ theOther)
{
    ::TColgp_Array1OfDir2d* _result = new ::TColgp_Array1OfDir2d();
    *_result = ((::TColgp_Array1OfDir2d*)_NativeInstance)->Assign(*(::TColgp_Array1OfDir2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfDir2d(_result);
}

RDC::OCC::TColgp_Array1OfDir2d^ RDC::OCC::TColgp_Array1OfDir2d::Move(RDC::OCC::TColgp_Array1OfDir2d^ theOther)
{
    ::TColgp_Array1OfDir2d* _result = new ::TColgp_Array1OfDir2d();
    *_result = ((::TColgp_Array1OfDir2d*)_NativeInstance)->Move(*(::TColgp_Array1OfDir2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfDir2d(_result);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array1OfDir2d::First()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array1OfDir2d*)_NativeInstance)->First();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array1OfDir2d::ChangeFirst()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array1OfDir2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array1OfDir2d::Last()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array1OfDir2d*)_NativeInstance)->Last();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array1OfDir2d::ChangeLast()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array1OfDir2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array1OfDir2d::Value(int theIndex)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array1OfDir2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array1OfDir2d::ChangeValue(int theIndex)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array1OfDir2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Dir2d(_nativeResult);
}

void RDC::OCC::TColgp_Array1OfDir2d::SetValue(int theIndex, RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_Array1OfDir2d*)_NativeInstance)->SetValue(theIndex, *(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_Array1OfDir2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array1OfDir2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array1OfDir2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array1OfDir2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_Array1OfDir2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_Array1OfDir2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_Array1OfDir2d::IsDeletable()
{
    bool _result = ((::TColgp_Array1OfDir2d*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Dir2d>^ RDC::OCC::TColgp_Array1OfDir2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_Array1OfDir2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfDir2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfLin2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array1OfLin2d::TColgp_Array1OfLin2d()
    : RDC::OCC::BaseClass<::TColgp_Array1OfLin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfLin2d();
}

RDC::OCC::TColgp_Array1OfLin2d::TColgp_Array1OfLin2d(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfLin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfLin2d(theLower, theUpper);
}

RDC::OCC::TColgp_Array1OfLin2d::TColgp_Array1OfLin2d(RDC::OCC::gp_Lin2d^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::TColgp_Array1OfLin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfLin2d(*(::gp_Lin2d*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColgp_Array1OfLin2d::TColgp_Array1OfLin2d(RDC::OCC::gp_Lin2d^ theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfLin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfLin2d(*(::gp_Lin2d*)theBegin->NativeInstance, theLower, theUpper, true);
}

void RDC::OCC::TColgp_Array1OfLin2d::Init(RDC::OCC::gp_Lin2d^ theValue)
{
    ((::TColgp_Array1OfLin2d*)_NativeInstance)->Init(*(::gp_Lin2d*)theValue->NativeInstance);
}

int RDC::OCC::TColgp_Array1OfLin2d::Size()
{
    int _result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array1OfLin2d::Length()
{
    int _result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_Array1OfLin2d::IsEmpty()
{
    bool _result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array1OfLin2d::Lower()
{
    int _result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array1OfLin2d::Upper()
{
    int _result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_Array1OfLin2d^ RDC::OCC::TColgp_Array1OfLin2d::Assign(RDC::OCC::TColgp_Array1OfLin2d^ theOther)
{
    ::TColgp_Array1OfLin2d* _result = new ::TColgp_Array1OfLin2d();
    *_result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->Assign(*(::TColgp_Array1OfLin2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfLin2d(_result);
}

RDC::OCC::TColgp_Array1OfLin2d^ RDC::OCC::TColgp_Array1OfLin2d::Move(RDC::OCC::TColgp_Array1OfLin2d^ theOther)
{
    ::TColgp_Array1OfLin2d* _result = new ::TColgp_Array1OfLin2d();
    *_result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->Move(*(::TColgp_Array1OfLin2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfLin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array1OfLin2d::First()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_Array1OfLin2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array1OfLin2d::ChangeFirst()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array1OfLin2d::Last()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_Array1OfLin2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array1OfLin2d::ChangeLast()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array1OfLin2d::Value(int theIndex)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_Array1OfLin2d*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array1OfLin2d::ChangeValue(int theIndex)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::TColgp_Array1OfLin2d::SetValue(int theIndex, RDC::OCC::gp_Lin2d^ theItem)
{
    ((::TColgp_Array1OfLin2d*)_NativeInstance)->SetValue(theIndex, *(::gp_Lin2d*)theItem->NativeInstance);
}

void RDC::OCC::TColgp_Array1OfLin2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array1OfLin2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array1OfLin2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array1OfLin2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_Array1OfLin2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_Array1OfLin2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_Array1OfLin2d::IsDeletable()
{
    bool _result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::gp_Lin2d^>^ RDC::OCC::TColgp_Array1OfLin2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::gp_Lin2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_Array1OfLin2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::gp_Lin2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfLin2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfPnt
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array1OfPnt::TColgp_Array1OfPnt()
    : RDC::OCC::BaseClass<::TColgp_Array1OfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfPnt();
}

RDC::OCC::TColgp_Array1OfPnt::TColgp_Array1OfPnt(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfPnt(theLower, theUpper);
}

RDC::OCC::TColgp_Array1OfPnt::TColgp_Array1OfPnt(RDC::OCC::Pnt theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::TColgp_Array1OfPnt>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfPnt(*(gp_Pnt*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColgp_Array1OfPnt::TColgp_Array1OfPnt(RDC::OCC::Pnt theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfPnt>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfPnt(*(gp_Pnt*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColgp_Array1OfPnt::Init(RDC::OCC::Pnt theValue)
{
    pin_ptr<RDC::OCC::Pnt> pp_theValue = &theValue;
    ((::TColgp_Array1OfPnt*)_NativeInstance)->Init(*(gp_Pnt*)pp_theValue);
}

int RDC::OCC::TColgp_Array1OfPnt::Size()
{
    int _result = ((::TColgp_Array1OfPnt*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array1OfPnt::Length()
{
    int _result = ((::TColgp_Array1OfPnt*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_Array1OfPnt::IsEmpty()
{
    bool _result = ((::TColgp_Array1OfPnt*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array1OfPnt::Lower()
{
    int _result = ((::TColgp_Array1OfPnt*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array1OfPnt::Upper()
{
    int _result = ((::TColgp_Array1OfPnt*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_Array1OfPnt^ RDC::OCC::TColgp_Array1OfPnt::Assign(RDC::OCC::TColgp_Array1OfPnt^ theOther)
{
    ::TColgp_Array1OfPnt* _result = new ::TColgp_Array1OfPnt();
    *_result = ((::TColgp_Array1OfPnt*)_NativeInstance)->Assign(*(::TColgp_Array1OfPnt*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt(_result);
}

RDC::OCC::TColgp_Array1OfPnt^ RDC::OCC::TColgp_Array1OfPnt::Move(RDC::OCC::TColgp_Array1OfPnt^ theOther)
{
    ::TColgp_Array1OfPnt* _result = new ::TColgp_Array1OfPnt();
    *_result = ((::TColgp_Array1OfPnt*)_NativeInstance)->Move(*(::TColgp_Array1OfPnt*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt(_result);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array1OfPnt::First()
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array1OfPnt*)_NativeInstance)->First();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array1OfPnt::ChangeFirst()
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array1OfPnt*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array1OfPnt::Last()
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array1OfPnt*)_NativeInstance)->Last();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array1OfPnt::ChangeLast()
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array1OfPnt*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array1OfPnt::Value(int theIndex)
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array1OfPnt*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array1OfPnt::ChangeValue(int theIndex)
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array1OfPnt*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::TColgp_Array1OfPnt::SetValue(int theIndex, RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_Array1OfPnt*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_Array1OfPnt::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array1OfPnt*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array1OfPnt::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array1OfPnt*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_Array1OfPnt::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_Array1OfPnt*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_Array1OfPnt::IsDeletable()
{
    bool _result = ((::TColgp_Array1OfPnt*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Pnt>^ RDC::OCC::TColgp_Array1OfPnt::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_Array1OfPnt::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfPnt::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfPnt2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array1OfPnt2d::TColgp_Array1OfPnt2d()
    : RDC::OCC::BaseClass<::TColgp_Array1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfPnt2d();
}

RDC::OCC::TColgp_Array1OfPnt2d::TColgp_Array1OfPnt2d(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfPnt2d(theLower, theUpper);
}

RDC::OCC::TColgp_Array1OfPnt2d::TColgp_Array1OfPnt2d(RDC::OCC::Pnt2d theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::TColgp_Array1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfPnt2d(*(gp_Pnt2d*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColgp_Array1OfPnt2d::TColgp_Array1OfPnt2d(RDC::OCC::Pnt2d theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfPnt2d(*(gp_Pnt2d*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColgp_Array1OfPnt2d::Init(RDC::OCC::Pnt2d theValue)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theValue = &theValue;
    ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_theValue);
}

int RDC::OCC::TColgp_Array1OfPnt2d::Size()
{
    int _result = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array1OfPnt2d::Length()
{
    int _result = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_Array1OfPnt2d::IsEmpty()
{
    bool _result = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array1OfPnt2d::Lower()
{
    int _result = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array1OfPnt2d::Upper()
{
    int _result = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_Array1OfPnt2d^ RDC::OCC::TColgp_Array1OfPnt2d::Assign(RDC::OCC::TColgp_Array1OfPnt2d^ theOther)
{
    ::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
    *_result = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Assign(*(::TColgp_Array1OfPnt2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt2d(_result);
}

RDC::OCC::TColgp_Array1OfPnt2d^ RDC::OCC::TColgp_Array1OfPnt2d::Move(RDC::OCC::TColgp_Array1OfPnt2d^ theOther)
{
    ::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
    *_result = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Move(*(::TColgp_Array1OfPnt2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt2d(_result);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array1OfPnt2d::First()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->First();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array1OfPnt2d::ChangeFirst()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array1OfPnt2d::Last()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Last();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array1OfPnt2d::ChangeLast()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array1OfPnt2d::Value(int theIndex)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array1OfPnt2d::ChangeValue(int theIndex)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::TColgp_Array1OfPnt2d::SetValue(int theIndex, RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_Array1OfPnt2d*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_Array1OfPnt2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array1OfPnt2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array1OfPnt2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array1OfPnt2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_Array1OfPnt2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_Array1OfPnt2d::IsDeletable()
{
    bool _result = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Pnt2d>^ RDC::OCC::TColgp_Array1OfPnt2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_Array1OfPnt2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfPnt2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfVec
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array1OfVec::TColgp_Array1OfVec()
    : RDC::OCC::BaseClass<::TColgp_Array1OfVec>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfVec();
}

RDC::OCC::TColgp_Array1OfVec::TColgp_Array1OfVec(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfVec>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfVec(theLower, theUpper);
}

RDC::OCC::TColgp_Array1OfVec::TColgp_Array1OfVec(RDC::OCC::Vec theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::TColgp_Array1OfVec>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfVec(*(gp_Vec*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColgp_Array1OfVec::TColgp_Array1OfVec(RDC::OCC::Vec theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfVec>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfVec(*(gp_Vec*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColgp_Array1OfVec::Init(RDC::OCC::Vec theValue)
{
    pin_ptr<RDC::OCC::Vec> pp_theValue = &theValue;
    ((::TColgp_Array1OfVec*)_NativeInstance)->Init(*(gp_Vec*)pp_theValue);
}

int RDC::OCC::TColgp_Array1OfVec::Size()
{
    int _result = ((::TColgp_Array1OfVec*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array1OfVec::Length()
{
    int _result = ((::TColgp_Array1OfVec*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_Array1OfVec::IsEmpty()
{
    bool _result = ((::TColgp_Array1OfVec*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array1OfVec::Lower()
{
    int _result = ((::TColgp_Array1OfVec*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array1OfVec::Upper()
{
    int _result = ((::TColgp_Array1OfVec*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_Array1OfVec^ RDC::OCC::TColgp_Array1OfVec::Assign(RDC::OCC::TColgp_Array1OfVec^ theOther)
{
    ::TColgp_Array1OfVec* _result = new ::TColgp_Array1OfVec();
    *_result = ((::TColgp_Array1OfVec*)_NativeInstance)->Assign(*(::TColgp_Array1OfVec*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfVec(_result);
}

RDC::OCC::TColgp_Array1OfVec^ RDC::OCC::TColgp_Array1OfVec::Move(RDC::OCC::TColgp_Array1OfVec^ theOther)
{
    ::TColgp_Array1OfVec* _result = new ::TColgp_Array1OfVec();
    *_result = ((::TColgp_Array1OfVec*)_NativeInstance)->Move(*(::TColgp_Array1OfVec*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfVec(_result);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array1OfVec::First()
{
    ::gp_Vec _nativeResult = ((::TColgp_Array1OfVec*)_NativeInstance)->First();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array1OfVec::ChangeFirst()
{
    ::gp_Vec _nativeResult = ((::TColgp_Array1OfVec*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array1OfVec::Last()
{
    ::gp_Vec _nativeResult = ((::TColgp_Array1OfVec*)_NativeInstance)->Last();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array1OfVec::ChangeLast()
{
    ::gp_Vec _nativeResult = ((::TColgp_Array1OfVec*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array1OfVec::Value(int theIndex)
{
    ::gp_Vec _nativeResult = ((::TColgp_Array1OfVec*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array1OfVec::ChangeValue(int theIndex)
{
    ::gp_Vec _nativeResult = ((::TColgp_Array1OfVec*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::TColgp_Array1OfVec::SetValue(int theIndex, RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_Array1OfVec*)_NativeInstance)->SetValue(theIndex, *(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_Array1OfVec::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array1OfVec*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array1OfVec::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array1OfVec*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_Array1OfVec::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_Array1OfVec*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_Array1OfVec::IsDeletable()
{
    bool _result = ((::TColgp_Array1OfVec*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Vec>^ RDC::OCC::TColgp_Array1OfVec::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_Array1OfVec::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfVec::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfVec2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array1OfVec2d::TColgp_Array1OfVec2d()
    : RDC::OCC::BaseClass<::TColgp_Array1OfVec2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfVec2d();
}

RDC::OCC::TColgp_Array1OfVec2d::TColgp_Array1OfVec2d(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfVec2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfVec2d(theLower, theUpper);
}

RDC::OCC::TColgp_Array1OfVec2d::TColgp_Array1OfVec2d(RDC::OCC::Vec2d theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::TColgp_Array1OfVec2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfVec2d(*(gp_Vec2d*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColgp_Array1OfVec2d::TColgp_Array1OfVec2d(RDC::OCC::Vec2d theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfVec2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfVec2d(*(gp_Vec2d*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColgp_Array1OfVec2d::Init(RDC::OCC::Vec2d theValue)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theValue = &theValue;
    ((::TColgp_Array1OfVec2d*)_NativeInstance)->Init(*(gp_Vec2d*)pp_theValue);
}

int RDC::OCC::TColgp_Array1OfVec2d::Size()
{
    int _result = ((::TColgp_Array1OfVec2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array1OfVec2d::Length()
{
    int _result = ((::TColgp_Array1OfVec2d*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_Array1OfVec2d::IsEmpty()
{
    bool _result = ((::TColgp_Array1OfVec2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array1OfVec2d::Lower()
{
    int _result = ((::TColgp_Array1OfVec2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array1OfVec2d::Upper()
{
    int _result = ((::TColgp_Array1OfVec2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_Array1OfVec2d^ RDC::OCC::TColgp_Array1OfVec2d::Assign(RDC::OCC::TColgp_Array1OfVec2d^ theOther)
{
    ::TColgp_Array1OfVec2d* _result = new ::TColgp_Array1OfVec2d();
    *_result = ((::TColgp_Array1OfVec2d*)_NativeInstance)->Assign(*(::TColgp_Array1OfVec2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfVec2d(_result);
}

RDC::OCC::TColgp_Array1OfVec2d^ RDC::OCC::TColgp_Array1OfVec2d::Move(RDC::OCC::TColgp_Array1OfVec2d^ theOther)
{
    ::TColgp_Array1OfVec2d* _result = new ::TColgp_Array1OfVec2d();
    *_result = ((::TColgp_Array1OfVec2d*)_NativeInstance)->Move(*(::TColgp_Array1OfVec2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfVec2d(_result);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array1OfVec2d::First()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array1OfVec2d*)_NativeInstance)->First();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array1OfVec2d::ChangeFirst()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array1OfVec2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array1OfVec2d::Last()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array1OfVec2d*)_NativeInstance)->Last();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array1OfVec2d::ChangeLast()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array1OfVec2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array1OfVec2d::Value(int theIndex)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array1OfVec2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array1OfVec2d::ChangeValue(int theIndex)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array1OfVec2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::TColgp_Array1OfVec2d::SetValue(int theIndex, RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_Array1OfVec2d*)_NativeInstance)->SetValue(theIndex, *(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_Array1OfVec2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array1OfVec2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array1OfVec2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array1OfVec2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_Array1OfVec2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_Array1OfVec2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_Array1OfVec2d::IsDeletable()
{
    bool _result = ((::TColgp_Array1OfVec2d*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Vec2d>^ RDC::OCC::TColgp_Array1OfVec2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_Array1OfVec2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfVec2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfXY
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array1OfXY::TColgp_Array1OfXY()
    : RDC::OCC::BaseClass<::TColgp_Array1OfXY>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfXY();
}

RDC::OCC::TColgp_Array1OfXY::TColgp_Array1OfXY(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfXY>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfXY(theLower, theUpper);
}

RDC::OCC::TColgp_Array1OfXY::TColgp_Array1OfXY(RDC::OCC::XY theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::TColgp_Array1OfXY>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XY> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfXY(*(gp_XY*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColgp_Array1OfXY::TColgp_Array1OfXY(RDC::OCC::XY theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfXY>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XY> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfXY(*(gp_XY*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColgp_Array1OfXY::Init(RDC::OCC::XY theValue)
{
    pin_ptr<RDC::OCC::XY> pp_theValue = &theValue;
    ((::TColgp_Array1OfXY*)_NativeInstance)->Init(*(gp_XY*)pp_theValue);
}

int RDC::OCC::TColgp_Array1OfXY::Size()
{
    int _result = ((::TColgp_Array1OfXY*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array1OfXY::Length()
{
    int _result = ((::TColgp_Array1OfXY*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_Array1OfXY::IsEmpty()
{
    bool _result = ((::TColgp_Array1OfXY*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array1OfXY::Lower()
{
    int _result = ((::TColgp_Array1OfXY*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array1OfXY::Upper()
{
    int _result = ((::TColgp_Array1OfXY*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_Array1OfXY^ RDC::OCC::TColgp_Array1OfXY::Assign(RDC::OCC::TColgp_Array1OfXY^ theOther)
{
    ::TColgp_Array1OfXY* _result = new ::TColgp_Array1OfXY();
    *_result = ((::TColgp_Array1OfXY*)_NativeInstance)->Assign(*(::TColgp_Array1OfXY*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfXY(_result);
}

RDC::OCC::TColgp_Array1OfXY^ RDC::OCC::TColgp_Array1OfXY::Move(RDC::OCC::TColgp_Array1OfXY^ theOther)
{
    ::TColgp_Array1OfXY* _result = new ::TColgp_Array1OfXY();
    *_result = ((::TColgp_Array1OfXY*)_NativeInstance)->Move(*(::TColgp_Array1OfXY*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfXY(_result);
}

RDC::OCC::XY RDC::OCC::TColgp_Array1OfXY::First()
{
    ::gp_XY _nativeResult = ((::TColgp_Array1OfXY*)_NativeInstance)->First();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_Array1OfXY::ChangeFirst()
{
    ::gp_XY _nativeResult = ((::TColgp_Array1OfXY*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_Array1OfXY::Last()
{
    ::gp_XY _nativeResult = ((::TColgp_Array1OfXY*)_NativeInstance)->Last();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_Array1OfXY::ChangeLast()
{
    ::gp_XY _nativeResult = ((::TColgp_Array1OfXY*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_Array1OfXY::Value(int theIndex)
{
    ::gp_XY _nativeResult = ((::TColgp_Array1OfXY*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_Array1OfXY::ChangeValue(int theIndex)
{
    ::gp_XY _nativeResult = ((::TColgp_Array1OfXY*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::TColgp_Array1OfXY::SetValue(int theIndex, RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_Array1OfXY*)_NativeInstance)->SetValue(theIndex, *(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_Array1OfXY::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array1OfXY*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array1OfXY::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array1OfXY*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_Array1OfXY::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_Array1OfXY*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_Array1OfXY::IsDeletable()
{
    bool _result = ((::TColgp_Array1OfXY*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::XY>^ RDC::OCC::TColgp_Array1OfXY::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::XY>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_Array1OfXY::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::XY>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfXY::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfXYZ
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array1OfXYZ::TColgp_Array1OfXYZ()
    : RDC::OCC::BaseClass<::TColgp_Array1OfXYZ>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfXYZ();
}

RDC::OCC::TColgp_Array1OfXYZ::TColgp_Array1OfXYZ(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfXYZ>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array1OfXYZ(theLower, theUpper);
}

RDC::OCC::TColgp_Array1OfXYZ::TColgp_Array1OfXYZ(RDC::OCC::XYZ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::TColgp_Array1OfXYZ>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XYZ> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfXYZ(*(gp_XYZ*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColgp_Array1OfXYZ::TColgp_Array1OfXYZ(RDC::OCC::XYZ theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::TColgp_Array1OfXYZ>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XYZ> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array1OfXYZ(*(gp_XYZ*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColgp_Array1OfXYZ::Init(RDC::OCC::XYZ theValue)
{
    pin_ptr<RDC::OCC::XYZ> pp_theValue = &theValue;
    ((::TColgp_Array1OfXYZ*)_NativeInstance)->Init(*(gp_XYZ*)pp_theValue);
}

int RDC::OCC::TColgp_Array1OfXYZ::Size()
{
    int _result = ((::TColgp_Array1OfXYZ*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array1OfXYZ::Length()
{
    int _result = ((::TColgp_Array1OfXYZ*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_Array1OfXYZ::IsEmpty()
{
    bool _result = ((::TColgp_Array1OfXYZ*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array1OfXYZ::Lower()
{
    int _result = ((::TColgp_Array1OfXYZ*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array1OfXYZ::Upper()
{
    int _result = ((::TColgp_Array1OfXYZ*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_Array1OfXYZ^ RDC::OCC::TColgp_Array1OfXYZ::Assign(RDC::OCC::TColgp_Array1OfXYZ^ theOther)
{
    ::TColgp_Array1OfXYZ* _result = new ::TColgp_Array1OfXYZ();
    *_result = ((::TColgp_Array1OfXYZ*)_NativeInstance)->Assign(*(::TColgp_Array1OfXYZ*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfXYZ(_result);
}

RDC::OCC::TColgp_Array1OfXYZ^ RDC::OCC::TColgp_Array1OfXYZ::Move(RDC::OCC::TColgp_Array1OfXYZ^ theOther)
{
    ::TColgp_Array1OfXYZ* _result = new ::TColgp_Array1OfXYZ();
    *_result = ((::TColgp_Array1OfXYZ*)_NativeInstance)->Move(*(::TColgp_Array1OfXYZ*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfXYZ(_result);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array1OfXYZ::First()
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array1OfXYZ*)_NativeInstance)->First();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array1OfXYZ::ChangeFirst()
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array1OfXYZ*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array1OfXYZ::Last()
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array1OfXYZ*)_NativeInstance)->Last();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array1OfXYZ::ChangeLast()
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array1OfXYZ*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array1OfXYZ::Value(int theIndex)
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array1OfXYZ*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array1OfXYZ::ChangeValue(int theIndex)
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array1OfXYZ*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::XYZ(_nativeResult);
}

void RDC::OCC::TColgp_Array1OfXYZ::SetValue(int theIndex, RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_Array1OfXYZ*)_NativeInstance)->SetValue(theIndex, *(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_Array1OfXYZ::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array1OfXYZ*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array1OfXYZ::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array1OfXYZ*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_Array1OfXYZ::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_Array1OfXYZ*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_Array1OfXYZ::IsDeletable()
{
    bool _result = ((::TColgp_Array1OfXYZ*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::XYZ>^ RDC::OCC::TColgp_Array1OfXYZ::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::XYZ>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_Array1OfXYZ::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::XYZ>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_Array1OfXYZ::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfCirc2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array2OfCirc2d::TColgp_Array2OfCirc2d()
    : RDC::OCC::BaseClass<::TColgp_Array2OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfCirc2d();
}

RDC::OCC::TColgp_Array2OfCirc2d::TColgp_Array2OfCirc2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfCirc2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColgp_Array2OfCirc2d::TColgp_Array2OfCirc2d(RDC::OCC::gp_Circ2d^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfCirc2d(*(::gp_Circ2d*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColgp_Array2OfCirc2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfCirc2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfCirc2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::Size()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::Length()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::NbRows()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::NbColumns()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::RowLength()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::ColLength()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::LowerRow()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::UpperRow()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::LowerCol()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::UpperCol()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_Array2OfCirc2d^ RDC::OCC::TColgp_Array2OfCirc2d::Assign(RDC::OCC::TColgp_Array2OfCirc2d^ theOther)
{
    ::TColgp_Array2OfCirc2d* _result = new ::TColgp_Array2OfCirc2d();
    *_result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Assign(*(::TColgp_Array2OfCirc2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfCirc2d(_result);
}

RDC::OCC::TColgp_Array2OfCirc2d^ RDC::OCC::TColgp_Array2OfCirc2d::Move(RDC::OCC::TColgp_Array2OfCirc2d^ theOther)
{
    ::TColgp_Array2OfCirc2d* _result = new ::TColgp_Array2OfCirc2d();
    *_result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Move(*(::TColgp_Array2OfCirc2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfCirc2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array2OfCirc2d::Value(int theRow, int theCol)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_Array2OfCirc2d*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array2OfCirc2d::ChangeValue(int theRow, int theCol)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::TColgp_Array2OfCirc2d::SetValue(int theRow, int theCol, RDC::OCC::gp_Circ2d^ theItem)
{
    ((::TColgp_Array2OfCirc2d*)_NativeInstance)->SetValue(theRow, theCol, *(::gp_Circ2d*)theItem->NativeInstance);
}

void RDC::OCC::TColgp_Array2OfCirc2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_Array2OfCirc2d::Init(RDC::OCC::gp_Circ2d^ theValue)
{
    ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Init(*(::gp_Circ2d*)theValue->NativeInstance);
}

bool RDC::OCC::TColgp_Array2OfCirc2d::IsEmpty()
{
    bool _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::Lower()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array2OfCirc2d::Upper()
{
    int _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array2OfCirc2d::First()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_Array2OfCirc2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array2OfCirc2d::ChangeFirst()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array2OfCirc2d::Last()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_Array2OfCirc2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_Array2OfCirc2d::ChangeLast()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::TColgp_Array2OfCirc2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array2OfCirc2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array2OfCirc2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array2OfCirc2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_Array2OfCirc2d::IsDeletable()
{
    bool _result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfCirc2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfDir
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array2OfDir::TColgp_Array2OfDir()
    : RDC::OCC::BaseClass<::TColgp_Array2OfDir>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfDir();
}

RDC::OCC::TColgp_Array2OfDir::TColgp_Array2OfDir(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfDir>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfDir(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColgp_Array2OfDir::TColgp_Array2OfDir(RDC::OCC::Dir theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfDir>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array2OfDir(*(gp_Dir*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColgp_Array2OfDir::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfDir::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfDir::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::Size()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::Length()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::NbRows()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::NbColumns()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::RowLength()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::ColLength()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::LowerRow()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::UpperRow()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::LowerCol()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::UpperCol()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_Array2OfDir^ RDC::OCC::TColgp_Array2OfDir::Assign(RDC::OCC::TColgp_Array2OfDir^ theOther)
{
    ::TColgp_Array2OfDir* _result = new ::TColgp_Array2OfDir();
    *_result = ((::TColgp_Array2OfDir*)_NativeInstance)->Assign(*(::TColgp_Array2OfDir*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfDir(_result);
}

RDC::OCC::TColgp_Array2OfDir^ RDC::OCC::TColgp_Array2OfDir::Move(RDC::OCC::TColgp_Array2OfDir^ theOther)
{
    ::TColgp_Array2OfDir* _result = new ::TColgp_Array2OfDir();
    *_result = ((::TColgp_Array2OfDir*)_NativeInstance)->Move(*(::TColgp_Array2OfDir*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfDir(_result);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array2OfDir::Value(int theRow, int theCol)
{
    ::gp_Dir _nativeResult = ((::TColgp_Array2OfDir*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array2OfDir::ChangeValue(int theRow, int theCol)
{
    ::gp_Dir _nativeResult = ((::TColgp_Array2OfDir*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfDir::SetValue(int theRow, int theCol, RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_Array2OfDir*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_Array2OfDir::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_Array2OfDir*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_Array2OfDir::Init(RDC::OCC::Dir theValue)
{
    pin_ptr<RDC::OCC::Dir> pp_theValue = &theValue;
    ((::TColgp_Array2OfDir*)_NativeInstance)->Init(*(gp_Dir*)pp_theValue);
}

bool RDC::OCC::TColgp_Array2OfDir::IsEmpty()
{
    bool _result = ((::TColgp_Array2OfDir*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::Lower()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir::Upper()
{
    int _result = ((::TColgp_Array2OfDir*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Dir RDC::OCC::TColgp_Array2OfDir::First()
{
    ::gp_Dir _nativeResult = ((::TColgp_Array2OfDir*)_NativeInstance)->First();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array2OfDir::ChangeFirst()
{
    ::gp_Dir _nativeResult = ((::TColgp_Array2OfDir*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array2OfDir::Last()
{
    ::gp_Dir _nativeResult = ((::TColgp_Array2OfDir*)_NativeInstance)->Last();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_Array2OfDir::ChangeLast()
{
    ::gp_Dir _nativeResult = ((::TColgp_Array2OfDir*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfDir::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array2OfDir*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array2OfDir::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array2OfDir*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_Array2OfDir::IsDeletable()
{
    bool _result = ((::TColgp_Array2OfDir*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfDir::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfDir2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array2OfDir2d::TColgp_Array2OfDir2d()
    : RDC::OCC::BaseClass<::TColgp_Array2OfDir2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfDir2d();
}

RDC::OCC::TColgp_Array2OfDir2d::TColgp_Array2OfDir2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfDir2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfDir2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColgp_Array2OfDir2d::TColgp_Array2OfDir2d(RDC::OCC::Dir2d theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfDir2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array2OfDir2d(*(gp_Dir2d*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColgp_Array2OfDir2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfDir2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfDir2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::Size()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::Length()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::NbRows()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::NbColumns()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::RowLength()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::ColLength()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::LowerRow()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::UpperRow()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::LowerCol()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::UpperCol()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_Array2OfDir2d^ RDC::OCC::TColgp_Array2OfDir2d::Assign(RDC::OCC::TColgp_Array2OfDir2d^ theOther)
{
    ::TColgp_Array2OfDir2d* _result = new ::TColgp_Array2OfDir2d();
    *_result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->Assign(*(::TColgp_Array2OfDir2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfDir2d(_result);
}

RDC::OCC::TColgp_Array2OfDir2d^ RDC::OCC::TColgp_Array2OfDir2d::Move(RDC::OCC::TColgp_Array2OfDir2d^ theOther)
{
    ::TColgp_Array2OfDir2d* _result = new ::TColgp_Array2OfDir2d();
    *_result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->Move(*(::TColgp_Array2OfDir2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfDir2d(_result);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array2OfDir2d::Value(int theRow, int theCol)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array2OfDir2d*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array2OfDir2d::ChangeValue(int theRow, int theCol)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array2OfDir2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Dir2d(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfDir2d::SetValue(int theRow, int theCol, RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_Array2OfDir2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_Array2OfDir2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_Array2OfDir2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_Array2OfDir2d::Init(RDC::OCC::Dir2d theValue)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theValue = &theValue;
    ((::TColgp_Array2OfDir2d*)_NativeInstance)->Init(*(gp_Dir2d*)pp_theValue);
}

bool RDC::OCC::TColgp_Array2OfDir2d::IsEmpty()
{
    bool _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::Lower()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array2OfDir2d::Upper()
{
    int _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array2OfDir2d::First()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array2OfDir2d*)_NativeInstance)->First();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array2OfDir2d::ChangeFirst()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array2OfDir2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array2OfDir2d::Last()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array2OfDir2d*)_NativeInstance)->Last();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_Array2OfDir2d::ChangeLast()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_Array2OfDir2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir2d(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfDir2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array2OfDir2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array2OfDir2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array2OfDir2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_Array2OfDir2d::IsDeletable()
{
    bool _result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfDir2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfLin2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array2OfLin2d::TColgp_Array2OfLin2d()
    : RDC::OCC::BaseClass<::TColgp_Array2OfLin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfLin2d();
}

RDC::OCC::TColgp_Array2OfLin2d::TColgp_Array2OfLin2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfLin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfLin2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColgp_Array2OfLin2d::TColgp_Array2OfLin2d(RDC::OCC::gp_Lin2d^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfLin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfLin2d(*(::gp_Lin2d*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColgp_Array2OfLin2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfLin2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfLin2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::Size()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::Length()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::NbRows()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::NbColumns()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::RowLength()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::ColLength()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::LowerRow()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::UpperRow()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::LowerCol()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::UpperCol()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_Array2OfLin2d^ RDC::OCC::TColgp_Array2OfLin2d::Assign(RDC::OCC::TColgp_Array2OfLin2d^ theOther)
{
    ::TColgp_Array2OfLin2d* _result = new ::TColgp_Array2OfLin2d();
    *_result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->Assign(*(::TColgp_Array2OfLin2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfLin2d(_result);
}

RDC::OCC::TColgp_Array2OfLin2d^ RDC::OCC::TColgp_Array2OfLin2d::Move(RDC::OCC::TColgp_Array2OfLin2d^ theOther)
{
    ::TColgp_Array2OfLin2d* _result = new ::TColgp_Array2OfLin2d();
    *_result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->Move(*(::TColgp_Array2OfLin2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfLin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array2OfLin2d::Value(int theRow, int theCol)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_Array2OfLin2d*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array2OfLin2d::ChangeValue(int theRow, int theCol)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::TColgp_Array2OfLin2d::SetValue(int theRow, int theCol, RDC::OCC::gp_Lin2d^ theItem)
{
    ((::TColgp_Array2OfLin2d*)_NativeInstance)->SetValue(theRow, theCol, *(::gp_Lin2d*)theItem->NativeInstance);
}

void RDC::OCC::TColgp_Array2OfLin2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_Array2OfLin2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_Array2OfLin2d::Init(RDC::OCC::gp_Lin2d^ theValue)
{
    ((::TColgp_Array2OfLin2d*)_NativeInstance)->Init(*(::gp_Lin2d*)theValue->NativeInstance);
}

bool RDC::OCC::TColgp_Array2OfLin2d::IsEmpty()
{
    bool _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::Lower()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array2OfLin2d::Upper()
{
    int _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array2OfLin2d::First()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_Array2OfLin2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array2OfLin2d::ChangeFirst()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array2OfLin2d::Last()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_Array2OfLin2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_Array2OfLin2d::ChangeLast()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::TColgp_Array2OfLin2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array2OfLin2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array2OfLin2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array2OfLin2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_Array2OfLin2d::IsDeletable()
{
    bool _result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfLin2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfPnt
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array2OfPnt::TColgp_Array2OfPnt()
    : RDC::OCC::BaseClass<::TColgp_Array2OfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfPnt();
}

RDC::OCC::TColgp_Array2OfPnt::TColgp_Array2OfPnt(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfPnt(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColgp_Array2OfPnt::TColgp_Array2OfPnt(RDC::OCC::Pnt theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfPnt>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array2OfPnt(*(gp_Pnt*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColgp_Array2OfPnt::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfPnt::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfPnt::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::Size()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::Length()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::NbRows()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::NbColumns()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::RowLength()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::ColLength()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::LowerRow()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::UpperRow()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::LowerCol()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::UpperCol()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_Array2OfPnt^ RDC::OCC::TColgp_Array2OfPnt::Assign(RDC::OCC::TColgp_Array2OfPnt^ theOther)
{
    ::TColgp_Array2OfPnt* _result = new ::TColgp_Array2OfPnt();
    *_result = ((::TColgp_Array2OfPnt*)_NativeInstance)->Assign(*(::TColgp_Array2OfPnt*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfPnt(_result);
}

RDC::OCC::TColgp_Array2OfPnt^ RDC::OCC::TColgp_Array2OfPnt::Move(RDC::OCC::TColgp_Array2OfPnt^ theOther)
{
    ::TColgp_Array2OfPnt* _result = new ::TColgp_Array2OfPnt();
    *_result = ((::TColgp_Array2OfPnt*)_NativeInstance)->Move(*(::TColgp_Array2OfPnt*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfPnt(_result);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array2OfPnt::Value(int theRow, int theCol)
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array2OfPnt*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array2OfPnt::ChangeValue(int theRow, int theCol)
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array2OfPnt*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfPnt::SetValue(int theRow, int theCol, RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_Array2OfPnt*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_Array2OfPnt::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_Array2OfPnt*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_Array2OfPnt::Init(RDC::OCC::Pnt theValue)
{
    pin_ptr<RDC::OCC::Pnt> pp_theValue = &theValue;
    ((::TColgp_Array2OfPnt*)_NativeInstance)->Init(*(gp_Pnt*)pp_theValue);
}

bool RDC::OCC::TColgp_Array2OfPnt::IsEmpty()
{
    bool _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::Lower()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt::Upper()
{
    int _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array2OfPnt::First()
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array2OfPnt*)_NativeInstance)->First();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array2OfPnt::ChangeFirst()
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array2OfPnt*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array2OfPnt::Last()
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array2OfPnt*)_NativeInstance)->Last();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_Array2OfPnt::ChangeLast()
{
    ::gp_Pnt _nativeResult = ((::TColgp_Array2OfPnt*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfPnt::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array2OfPnt*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array2OfPnt::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array2OfPnt*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_Array2OfPnt::IsDeletable()
{
    bool _result = ((::TColgp_Array2OfPnt*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfPnt::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfPnt2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array2OfPnt2d::TColgp_Array2OfPnt2d()
    : RDC::OCC::BaseClass<::TColgp_Array2OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfPnt2d();
}

RDC::OCC::TColgp_Array2OfPnt2d::TColgp_Array2OfPnt2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfPnt2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColgp_Array2OfPnt2d::TColgp_Array2OfPnt2d(RDC::OCC::Pnt2d theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array2OfPnt2d(*(gp_Pnt2d*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColgp_Array2OfPnt2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfPnt2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfPnt2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::Size()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::Length()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::NbRows()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::NbColumns()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::RowLength()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::ColLength()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::LowerRow()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::UpperRow()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::LowerCol()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::UpperCol()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_Array2OfPnt2d^ RDC::OCC::TColgp_Array2OfPnt2d::Assign(RDC::OCC::TColgp_Array2OfPnt2d^ theOther)
{
    ::TColgp_Array2OfPnt2d* _result = new ::TColgp_Array2OfPnt2d();
    *_result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Assign(*(::TColgp_Array2OfPnt2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfPnt2d(_result);
}

RDC::OCC::TColgp_Array2OfPnt2d^ RDC::OCC::TColgp_Array2OfPnt2d::Move(RDC::OCC::TColgp_Array2OfPnt2d^ theOther)
{
    ::TColgp_Array2OfPnt2d* _result = new ::TColgp_Array2OfPnt2d();
    *_result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Move(*(::TColgp_Array2OfPnt2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfPnt2d(_result);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array2OfPnt2d::Value(int theRow, int theCol)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array2OfPnt2d::ChangeValue(int theRow, int theCol)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfPnt2d::SetValue(int theRow, int theCol, RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_Array2OfPnt2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_Array2OfPnt2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_Array2OfPnt2d::Init(RDC::OCC::Pnt2d theValue)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theValue = &theValue;
    ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_theValue);
}

bool RDC::OCC::TColgp_Array2OfPnt2d::IsEmpty()
{
    bool _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::Lower()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array2OfPnt2d::Upper()
{
    int _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array2OfPnt2d::First()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->First();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array2OfPnt2d::ChangeFirst()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array2OfPnt2d::Last()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Last();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_Array2OfPnt2d::ChangeLast()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfPnt2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array2OfPnt2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array2OfPnt2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array2OfPnt2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_Array2OfPnt2d::IsDeletable()
{
    bool _result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfPnt2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfVec
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array2OfVec::TColgp_Array2OfVec()
    : RDC::OCC::BaseClass<::TColgp_Array2OfVec>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfVec();
}

RDC::OCC::TColgp_Array2OfVec::TColgp_Array2OfVec(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfVec>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfVec(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColgp_Array2OfVec::TColgp_Array2OfVec(RDC::OCC::Vec theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfVec>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array2OfVec(*(gp_Vec*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColgp_Array2OfVec::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfVec::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfVec::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::Size()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::Length()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::NbRows()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::NbColumns()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::RowLength()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::ColLength()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::LowerRow()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::UpperRow()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::LowerCol()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::UpperCol()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_Array2OfVec^ RDC::OCC::TColgp_Array2OfVec::Assign(RDC::OCC::TColgp_Array2OfVec^ theOther)
{
    ::TColgp_Array2OfVec* _result = new ::TColgp_Array2OfVec();
    *_result = ((::TColgp_Array2OfVec*)_NativeInstance)->Assign(*(::TColgp_Array2OfVec*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfVec(_result);
}

RDC::OCC::TColgp_Array2OfVec^ RDC::OCC::TColgp_Array2OfVec::Move(RDC::OCC::TColgp_Array2OfVec^ theOther)
{
    ::TColgp_Array2OfVec* _result = new ::TColgp_Array2OfVec();
    *_result = ((::TColgp_Array2OfVec*)_NativeInstance)->Move(*(::TColgp_Array2OfVec*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfVec(_result);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array2OfVec::Value(int theRow, int theCol)
{
    ::gp_Vec _nativeResult = ((::TColgp_Array2OfVec*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array2OfVec::ChangeValue(int theRow, int theCol)
{
    ::gp_Vec _nativeResult = ((::TColgp_Array2OfVec*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfVec::SetValue(int theRow, int theCol, RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_Array2OfVec*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_Array2OfVec::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_Array2OfVec*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_Array2OfVec::Init(RDC::OCC::Vec theValue)
{
    pin_ptr<RDC::OCC::Vec> pp_theValue = &theValue;
    ((::TColgp_Array2OfVec*)_NativeInstance)->Init(*(gp_Vec*)pp_theValue);
}

bool RDC::OCC::TColgp_Array2OfVec::IsEmpty()
{
    bool _result = ((::TColgp_Array2OfVec*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::Lower()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec::Upper()
{
    int _result = ((::TColgp_Array2OfVec*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Vec RDC::OCC::TColgp_Array2OfVec::First()
{
    ::gp_Vec _nativeResult = ((::TColgp_Array2OfVec*)_NativeInstance)->First();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array2OfVec::ChangeFirst()
{
    ::gp_Vec _nativeResult = ((::TColgp_Array2OfVec*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array2OfVec::Last()
{
    ::gp_Vec _nativeResult = ((::TColgp_Array2OfVec*)_NativeInstance)->Last();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_Array2OfVec::ChangeLast()
{
    ::gp_Vec _nativeResult = ((::TColgp_Array2OfVec*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfVec::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array2OfVec*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array2OfVec::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array2OfVec*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_Array2OfVec::IsDeletable()
{
    bool _result = ((::TColgp_Array2OfVec*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfVec::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfVec2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array2OfVec2d::TColgp_Array2OfVec2d()
    : RDC::OCC::BaseClass<::TColgp_Array2OfVec2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfVec2d();
}

RDC::OCC::TColgp_Array2OfVec2d::TColgp_Array2OfVec2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfVec2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfVec2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColgp_Array2OfVec2d::TColgp_Array2OfVec2d(RDC::OCC::Vec2d theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfVec2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array2OfVec2d(*(gp_Vec2d*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColgp_Array2OfVec2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfVec2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfVec2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::Size()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::Length()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::NbRows()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::NbColumns()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::RowLength()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::ColLength()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::LowerRow()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::UpperRow()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::LowerCol()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::UpperCol()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_Array2OfVec2d^ RDC::OCC::TColgp_Array2OfVec2d::Assign(RDC::OCC::TColgp_Array2OfVec2d^ theOther)
{
    ::TColgp_Array2OfVec2d* _result = new ::TColgp_Array2OfVec2d();
    *_result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->Assign(*(::TColgp_Array2OfVec2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfVec2d(_result);
}

RDC::OCC::TColgp_Array2OfVec2d^ RDC::OCC::TColgp_Array2OfVec2d::Move(RDC::OCC::TColgp_Array2OfVec2d^ theOther)
{
    ::TColgp_Array2OfVec2d* _result = new ::TColgp_Array2OfVec2d();
    *_result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->Move(*(::TColgp_Array2OfVec2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfVec2d(_result);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array2OfVec2d::Value(int theRow, int theCol)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array2OfVec2d*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array2OfVec2d::ChangeValue(int theRow, int theCol)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array2OfVec2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfVec2d::SetValue(int theRow, int theCol, RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_Array2OfVec2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_Array2OfVec2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_Array2OfVec2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_Array2OfVec2d::Init(RDC::OCC::Vec2d theValue)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theValue = &theValue;
    ((::TColgp_Array2OfVec2d*)_NativeInstance)->Init(*(gp_Vec2d*)pp_theValue);
}

bool RDC::OCC::TColgp_Array2OfVec2d::IsEmpty()
{
    bool _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::Lower()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array2OfVec2d::Upper()
{
    int _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array2OfVec2d::First()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array2OfVec2d*)_NativeInstance)->First();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array2OfVec2d::ChangeFirst()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array2OfVec2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array2OfVec2d::Last()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array2OfVec2d*)_NativeInstance)->Last();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_Array2OfVec2d::ChangeLast()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_Array2OfVec2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfVec2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array2OfVec2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array2OfVec2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array2OfVec2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_Array2OfVec2d::IsDeletable()
{
    bool _result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfVec2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfXY
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array2OfXY::TColgp_Array2OfXY()
    : RDC::OCC::BaseClass<::TColgp_Array2OfXY>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfXY();
}

RDC::OCC::TColgp_Array2OfXY::TColgp_Array2OfXY(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfXY>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfXY(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColgp_Array2OfXY::TColgp_Array2OfXY(RDC::OCC::XY theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfXY>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XY> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array2OfXY(*(gp_XY*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColgp_Array2OfXY::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfXY::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfXY::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::Size()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::Length()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::NbRows()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::NbColumns()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::RowLength()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::ColLength()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::LowerRow()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::UpperRow()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::LowerCol()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::UpperCol()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_Array2OfXY^ RDC::OCC::TColgp_Array2OfXY::Assign(RDC::OCC::TColgp_Array2OfXY^ theOther)
{
    ::TColgp_Array2OfXY* _result = new ::TColgp_Array2OfXY();
    *_result = ((::TColgp_Array2OfXY*)_NativeInstance)->Assign(*(::TColgp_Array2OfXY*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfXY(_result);
}

RDC::OCC::TColgp_Array2OfXY^ RDC::OCC::TColgp_Array2OfXY::Move(RDC::OCC::TColgp_Array2OfXY^ theOther)
{
    ::TColgp_Array2OfXY* _result = new ::TColgp_Array2OfXY();
    *_result = ((::TColgp_Array2OfXY*)_NativeInstance)->Move(*(::TColgp_Array2OfXY*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfXY(_result);
}

RDC::OCC::XY RDC::OCC::TColgp_Array2OfXY::Value(int theRow, int theCol)
{
    ::gp_XY _nativeResult = ((::TColgp_Array2OfXY*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_Array2OfXY::ChangeValue(int theRow, int theCol)
{
    ::gp_XY _nativeResult = ((::TColgp_Array2OfXY*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfXY::SetValue(int theRow, int theCol, RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_Array2OfXY*)_NativeInstance)->SetValue(theRow, theCol, *(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_Array2OfXY::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_Array2OfXY*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_Array2OfXY::Init(RDC::OCC::XY theValue)
{
    pin_ptr<RDC::OCC::XY> pp_theValue = &theValue;
    ((::TColgp_Array2OfXY*)_NativeInstance)->Init(*(gp_XY*)pp_theValue);
}

bool RDC::OCC::TColgp_Array2OfXY::IsEmpty()
{
    bool _result = ((::TColgp_Array2OfXY*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::Lower()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXY::Upper()
{
    int _result = ((::TColgp_Array2OfXY*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::XY RDC::OCC::TColgp_Array2OfXY::First()
{
    ::gp_XY _nativeResult = ((::TColgp_Array2OfXY*)_NativeInstance)->First();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_Array2OfXY::ChangeFirst()
{
    ::gp_XY _nativeResult = ((::TColgp_Array2OfXY*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_Array2OfXY::Last()
{
    ::gp_XY _nativeResult = ((::TColgp_Array2OfXY*)_NativeInstance)->Last();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_Array2OfXY::ChangeLast()
{
    ::gp_XY _nativeResult = ((::TColgp_Array2OfXY*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfXY::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array2OfXY*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array2OfXY::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array2OfXY*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_Array2OfXY::IsDeletable()
{
    bool _result = ((::TColgp_Array2OfXY*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfXY::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfXYZ
//---------------------------------------------------------------------

RDC::OCC::TColgp_Array2OfXYZ::TColgp_Array2OfXYZ()
    : RDC::OCC::BaseClass<::TColgp_Array2OfXYZ>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfXYZ();
}

RDC::OCC::TColgp_Array2OfXYZ::TColgp_Array2OfXYZ(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfXYZ>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_Array2OfXYZ(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColgp_Array2OfXYZ::TColgp_Array2OfXYZ(RDC::OCC::XYZ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : RDC::OCC::BaseClass<::TColgp_Array2OfXYZ>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XYZ> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColgp_Array2OfXYZ(*(gp_XYZ*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColgp_Array2OfXYZ::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfXYZ::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_Array2OfXYZ::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::Size()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::Length()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::NbRows()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::NbColumns()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::RowLength()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::ColLength()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::LowerRow()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::UpperRow()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::LowerCol()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::UpperCol()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_Array2OfXYZ^ RDC::OCC::TColgp_Array2OfXYZ::Assign(RDC::OCC::TColgp_Array2OfXYZ^ theOther)
{
    ::TColgp_Array2OfXYZ* _result = new ::TColgp_Array2OfXYZ();
    *_result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->Assign(*(::TColgp_Array2OfXYZ*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfXYZ(_result);
}

RDC::OCC::TColgp_Array2OfXYZ^ RDC::OCC::TColgp_Array2OfXYZ::Move(RDC::OCC::TColgp_Array2OfXYZ^ theOther)
{
    ::TColgp_Array2OfXYZ* _result = new ::TColgp_Array2OfXYZ();
    *_result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->Move(*(::TColgp_Array2OfXYZ*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfXYZ(_result);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array2OfXYZ::Value(int theRow, int theCol)
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array2OfXYZ*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array2OfXYZ::ChangeValue(int theRow, int theCol)
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array2OfXYZ*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::XYZ(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfXYZ::SetValue(int theRow, int theCol, RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_Array2OfXYZ*)_NativeInstance)->SetValue(theRow, theCol, *(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_Array2OfXYZ::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_Array2OfXYZ*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_Array2OfXYZ::Init(RDC::OCC::XYZ theValue)
{
    pin_ptr<RDC::OCC::XYZ> pp_theValue = &theValue;
    ((::TColgp_Array2OfXYZ*)_NativeInstance)->Init(*(gp_XYZ*)pp_theValue);
}

bool RDC::OCC::TColgp_Array2OfXYZ::IsEmpty()
{
    bool _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::Lower()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_Array2OfXYZ::Upper()
{
    int _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array2OfXYZ::First()
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array2OfXYZ*)_NativeInstance)->First();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array2OfXYZ::ChangeFirst()
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array2OfXYZ*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array2OfXYZ::Last()
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array2OfXYZ*)_NativeInstance)->Last();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_Array2OfXYZ::ChangeLast()
{
    ::gp_XYZ _nativeResult = ((::TColgp_Array2OfXYZ*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XYZ(_nativeResult);
}

void RDC::OCC::TColgp_Array2OfXYZ::UpdateLowerBound(int theLower)
{
    ((::TColgp_Array2OfXYZ*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_Array2OfXYZ::UpdateUpperBound(int theUpper)
{
    ((::TColgp_Array2OfXYZ*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_Array2OfXYZ::IsDeletable()
{
    bool _result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColgp_Array2OfXYZ::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfDir
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfDir::TColgp_SequenceOfDir()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfDir>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfDir();
}

RDC::OCC::TColgp_SequenceOfDir::TColgp_SequenceOfDir(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TColgp_SequenceOfDir>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfDir(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColgp_SequenceOfDir::Size()
{
    int _result = ((::TColgp_SequenceOfDir*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfDir::Length()
{
    int _result = ((::TColgp_SequenceOfDir*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfDir::Lower()
{
    int _result = ((::TColgp_SequenceOfDir*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfDir::Upper()
{
    int _result = ((::TColgp_SequenceOfDir*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfDir::IsEmpty()
{
    bool _result = ((::TColgp_SequenceOfDir*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfDir::Reverse()
{
    ((::TColgp_SequenceOfDir*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_SequenceOfDir::Exchange(int I, int J)
{
    ((::TColgp_SequenceOfDir*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_SequenceOfDir::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_SequenceOfDir*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfDir::Clear()
{
    ((::TColgp_SequenceOfDir*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_SequenceOfDir^ RDC::OCC::TColgp_SequenceOfDir::Assign(RDC::OCC::TColgp_SequenceOfDir^ theOther)
{
    ::TColgp_SequenceOfDir* _result = new ::TColgp_SequenceOfDir();
    *_result = ((::TColgp_SequenceOfDir*)_NativeInstance)->Assign(*(::TColgp_SequenceOfDir*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfDir(_result);
}

void RDC::OCC::TColgp_SequenceOfDir::Remove(RDC::OCC::TColgp_SequenceOfDir::Iterator^ thePosition)
{
    ((::TColgp_SequenceOfDir*)_NativeInstance)->Remove(*(::TColgp_SequenceOfDir::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_SequenceOfDir::Append(RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_SequenceOfDir*)_NativeInstance)->Append(*(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfDir::Prepend(RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_SequenceOfDir*)_NativeInstance)->Prepend(*(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfDir::InsertBefore(int theIndex, RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_SequenceOfDir*)_NativeInstance)->InsertBefore(theIndex, *(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfDir::InsertAfter(RDC::OCC::TColgp_SequenceOfDir::Iterator^ thePosition, RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_SequenceOfDir*)_NativeInstance)->InsertAfter(*(::TColgp_SequenceOfDir::Iterator*)thePosition->NativeInstance, *(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfDir::Split(int theIndex, RDC::OCC::TColgp_SequenceOfDir^ theSeq)
{
    ((::TColgp_SequenceOfDir*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfDir*)theSeq->NativeInstance);
}

RDC::OCC::Dir RDC::OCC::TColgp_SequenceOfDir::First()
{
    ::gp_Dir _nativeResult = ((::TColgp_SequenceOfDir*)_NativeInstance)->First();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_SequenceOfDir::ChangeFirst()
{
    ::gp_Dir _nativeResult = ((::TColgp_SequenceOfDir*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_SequenceOfDir::Last()
{
    ::gp_Dir _nativeResult = ((::TColgp_SequenceOfDir*)_NativeInstance)->Last();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_SequenceOfDir::ChangeLast()
{
    ::gp_Dir _nativeResult = ((::TColgp_SequenceOfDir*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_SequenceOfDir::Value(int theIndex)
{
    ::gp_Dir _nativeResult = ((::TColgp_SequenceOfDir*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_SequenceOfDir::ChangeValue(int theIndex)
{
    ::gp_Dir _nativeResult = ((::TColgp_SequenceOfDir*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::TColgp_SequenceOfDir::SetValue(int theIndex, RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_SequenceOfDir*)_NativeInstance)->SetValue(theIndex, *(gp_Dir*)pp_theItem);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Dir>^ RDC::OCC::TColgp_SequenceOfDir::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_SequenceOfDir::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfDir::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfDir::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfDir::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfDir::Iterator();
}

bool RDC::OCC::TColgp_SequenceOfDir::Iterator::More()
{
    bool _result = ((::TColgp_SequenceOfDir::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfDir::Iterator::Next()
{
    ((::TColgp_SequenceOfDir::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Dir RDC::OCC::TColgp_SequenceOfDir::Iterator::Value()
{
    ::gp_Dir _nativeResult = ((::TColgp_SequenceOfDir::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_SequenceOfDir::Iterator::ChangeValue()
{
    ::gp_Dir _nativeResult = ((::TColgp_SequenceOfDir::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Dir(_nativeResult);
}

bool RDC::OCC::TColgp_SequenceOfDir::Iterator::IsEqual(RDC::OCC::TColgp_SequenceOfDir::Iterator^ theOther)
{
    bool _result = ((::TColgp_SequenceOfDir::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_SequenceOfDir::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfDir::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_SequenceOfDir::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfDir2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfDir2d::TColgp_SequenceOfDir2d()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfDir2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfDir2d();
}

RDC::OCC::TColgp_SequenceOfDir2d::TColgp_SequenceOfDir2d(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TColgp_SequenceOfDir2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfDir2d(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColgp_SequenceOfDir2d::Size()
{
    int _result = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfDir2d::Length()
{
    int _result = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfDir2d::Lower()
{
    int _result = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfDir2d::Upper()
{
    int _result = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfDir2d::IsEmpty()
{
    bool _result = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfDir2d::Reverse()
{
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_SequenceOfDir2d::Exchange(int I, int J)
{
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_SequenceOfDir2d::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfDir2d::Clear()
{
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_SequenceOfDir2d^ RDC::OCC::TColgp_SequenceOfDir2d::Assign(RDC::OCC::TColgp_SequenceOfDir2d^ theOther)
{
    ::TColgp_SequenceOfDir2d* _result = new ::TColgp_SequenceOfDir2d();
    *_result = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Assign(*(::TColgp_SequenceOfDir2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfDir2d(_result);
}

void RDC::OCC::TColgp_SequenceOfDir2d::Remove(RDC::OCC::TColgp_SequenceOfDir2d::Iterator^ thePosition)
{
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Remove(*(::TColgp_SequenceOfDir2d::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_SequenceOfDir2d::Append(RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Append(*(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfDir2d::Prepend(RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Prepend(*(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfDir2d::InsertBefore(int theIndex, RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfDir2d::InsertAfter(RDC::OCC::TColgp_SequenceOfDir2d::Iterator^ thePosition, RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->InsertAfter(*(::TColgp_SequenceOfDir2d::Iterator*)thePosition->NativeInstance, *(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfDir2d::Split(int theIndex, RDC::OCC::TColgp_SequenceOfDir2d^ theSeq)
{
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfDir2d*)theSeq->NativeInstance);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_SequenceOfDir2d::First()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->First();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_SequenceOfDir2d::ChangeFirst()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_SequenceOfDir2d::Last()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Last();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_SequenceOfDir2d::ChangeLast()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_SequenceOfDir2d::Value(int theIndex)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_SequenceOfDir2d::ChangeValue(int theIndex)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Dir2d(_nativeResult);
}

void RDC::OCC::TColgp_SequenceOfDir2d::SetValue(int theIndex, RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfDir2d*)_NativeInstance)->SetValue(theIndex, *(gp_Dir2d*)pp_theItem);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Dir2d>^ RDC::OCC::TColgp_SequenceOfDir2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_SequenceOfDir2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfDir2d::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfDir2d::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfDir2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfDir2d::Iterator();
}

bool RDC::OCC::TColgp_SequenceOfDir2d::Iterator::More()
{
    bool _result = ((::TColgp_SequenceOfDir2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfDir2d::Iterator::Next()
{
    ((::TColgp_SequenceOfDir2d::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Dir2d RDC::OCC::TColgp_SequenceOfDir2d::Iterator::Value()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_SequenceOfDir2d::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_SequenceOfDir2d::Iterator::ChangeValue()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_SequenceOfDir2d::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Dir2d(_nativeResult);
}

bool RDC::OCC::TColgp_SequenceOfDir2d::Iterator::IsEqual(RDC::OCC::TColgp_SequenceOfDir2d::Iterator^ theOther)
{
    bool _result = ((::TColgp_SequenceOfDir2d::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_SequenceOfDir2d::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfDir2d::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_SequenceOfDir2d::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfPnt
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfPnt::TColgp_SequenceOfPnt()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfPnt();
}

RDC::OCC::TColgp_SequenceOfPnt::TColgp_SequenceOfPnt(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TColgp_SequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfPnt(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColgp_SequenceOfPnt::Size()
{
    int _result = ((::TColgp_SequenceOfPnt*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfPnt::Length()
{
    int _result = ((::TColgp_SequenceOfPnt*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfPnt::Lower()
{
    int _result = ((::TColgp_SequenceOfPnt*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfPnt::Upper()
{
    int _result = ((::TColgp_SequenceOfPnt*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfPnt::IsEmpty()
{
    bool _result = ((::TColgp_SequenceOfPnt*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfPnt::Reverse()
{
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_SequenceOfPnt::Exchange(int I, int J)
{
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_SequenceOfPnt::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfPnt::Clear()
{
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_SequenceOfPnt^ RDC::OCC::TColgp_SequenceOfPnt::Assign(RDC::OCC::TColgp_SequenceOfPnt^ theOther)
{
    ::TColgp_SequenceOfPnt* _result = new ::TColgp_SequenceOfPnt();
    *_result = ((::TColgp_SequenceOfPnt*)_NativeInstance)->Assign(*(::TColgp_SequenceOfPnt*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt(_result);
}

void RDC::OCC::TColgp_SequenceOfPnt::Remove(RDC::OCC::TColgp_SequenceOfPnt::Iterator^ thePosition)
{
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->Remove(*(::TColgp_SequenceOfPnt::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_SequenceOfPnt::Append(RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->Append(*(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfPnt::Prepend(RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->Prepend(*(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfPnt::InsertBefore(int theIndex, RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->InsertBefore(theIndex, *(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfPnt::InsertAfter(RDC::OCC::TColgp_SequenceOfPnt::Iterator^ thePosition, RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->InsertAfter(*(::TColgp_SequenceOfPnt::Iterator*)thePosition->NativeInstance, *(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfPnt::Split(int theIndex, RDC::OCC::TColgp_SequenceOfPnt^ theSeq)
{
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfPnt*)theSeq->NativeInstance);
}

RDC::OCC::Pnt RDC::OCC::TColgp_SequenceOfPnt::First()
{
    ::gp_Pnt _nativeResult = ((::TColgp_SequenceOfPnt*)_NativeInstance)->First();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_SequenceOfPnt::ChangeFirst()
{
    ::gp_Pnt _nativeResult = ((::TColgp_SequenceOfPnt*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_SequenceOfPnt::Last()
{
    ::gp_Pnt _nativeResult = ((::TColgp_SequenceOfPnt*)_NativeInstance)->Last();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_SequenceOfPnt::ChangeLast()
{
    ::gp_Pnt _nativeResult = ((::TColgp_SequenceOfPnt*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_SequenceOfPnt::Value(int theIndex)
{
    ::gp_Pnt _nativeResult = ((::TColgp_SequenceOfPnt*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_SequenceOfPnt::ChangeValue(int theIndex)
{
    ::gp_Pnt _nativeResult = ((::TColgp_SequenceOfPnt*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::TColgp_SequenceOfPnt::SetValue(int theIndex, RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_SequenceOfPnt*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt*)pp_theItem);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Pnt>^ RDC::OCC::TColgp_SequenceOfPnt::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_SequenceOfPnt::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfPnt::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfPnt::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfPnt::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfPnt::Iterator();
}

bool RDC::OCC::TColgp_SequenceOfPnt::Iterator::More()
{
    bool _result = ((::TColgp_SequenceOfPnt::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfPnt::Iterator::Next()
{
    ((::TColgp_SequenceOfPnt::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Pnt RDC::OCC::TColgp_SequenceOfPnt::Iterator::Value()
{
    ::gp_Pnt _nativeResult = ((::TColgp_SequenceOfPnt::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_SequenceOfPnt::Iterator::ChangeValue()
{
    ::gp_Pnt _nativeResult = ((::TColgp_SequenceOfPnt::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Pnt(_nativeResult);
}

bool RDC::OCC::TColgp_SequenceOfPnt::Iterator::IsEqual(RDC::OCC::TColgp_SequenceOfPnt::Iterator^ theOther)
{
    bool _result = ((::TColgp_SequenceOfPnt::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_SequenceOfPnt::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfPnt::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_SequenceOfPnt::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfPnt2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfPnt2d::TColgp_SequenceOfPnt2d()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfPnt2d();
}

RDC::OCC::TColgp_SequenceOfPnt2d::TColgp_SequenceOfPnt2d(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TColgp_SequenceOfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfPnt2d(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColgp_SequenceOfPnt2d::Size()
{
    int _result = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfPnt2d::Length()
{
    int _result = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfPnt2d::Lower()
{
    int _result = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfPnt2d::Upper()
{
    int _result = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfPnt2d::IsEmpty()
{
    bool _result = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfPnt2d::Reverse()
{
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_SequenceOfPnt2d::Exchange(int I, int J)
{
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_SequenceOfPnt2d::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfPnt2d::Clear()
{
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_SequenceOfPnt2d^ RDC::OCC::TColgp_SequenceOfPnt2d::Assign(RDC::OCC::TColgp_SequenceOfPnt2d^ theOther)
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Assign(*(::TColgp_SequenceOfPnt2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt2d(_result);
}

void RDC::OCC::TColgp_SequenceOfPnt2d::Remove(RDC::OCC::TColgp_SequenceOfPnt2d::Iterator^ thePosition)
{
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Remove(*(::TColgp_SequenceOfPnt2d::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_SequenceOfPnt2d::Append(RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Append(*(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfPnt2d::Prepend(RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Prepend(*(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfPnt2d::InsertBefore(int theIndex, RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfPnt2d::InsertAfter(RDC::OCC::TColgp_SequenceOfPnt2d::Iterator^ thePosition, RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->InsertAfter(*(::TColgp_SequenceOfPnt2d::Iterator*)thePosition->NativeInstance, *(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfPnt2d::Split(int theIndex, RDC::OCC::TColgp_SequenceOfPnt2d^ theSeq)
{
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfPnt2d*)theSeq->NativeInstance);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_SequenceOfPnt2d::First()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->First();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_SequenceOfPnt2d::ChangeFirst()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_SequenceOfPnt2d::Last()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Last();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_SequenceOfPnt2d::ChangeLast()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_SequenceOfPnt2d::Value(int theIndex)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_SequenceOfPnt2d::ChangeValue(int theIndex)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::TColgp_SequenceOfPnt2d::SetValue(int theIndex, RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt2d*)pp_theItem);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Pnt2d>^ RDC::OCC::TColgp_SequenceOfPnt2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_SequenceOfPnt2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfPnt2d::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfPnt2d::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfPnt2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfPnt2d::Iterator();
}

bool RDC::OCC::TColgp_SequenceOfPnt2d::Iterator::More()
{
    bool _result = ((::TColgp_SequenceOfPnt2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfPnt2d::Iterator::Next()
{
    ((::TColgp_SequenceOfPnt2d::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_SequenceOfPnt2d::Iterator::Value()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_SequenceOfPnt2d::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_SequenceOfPnt2d::Iterator::ChangeValue()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_SequenceOfPnt2d::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Pnt2d(_nativeResult);
}

bool RDC::OCC::TColgp_SequenceOfPnt2d::Iterator::IsEqual(RDC::OCC::TColgp_SequenceOfPnt2d::Iterator^ theOther)
{
    bool _result = ((::TColgp_SequenceOfPnt2d::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_SequenceOfPnt2d::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfPnt2d::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_SequenceOfPnt2d::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfVec
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfVec::TColgp_SequenceOfVec()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfVec>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfVec();
}

RDC::OCC::TColgp_SequenceOfVec::TColgp_SequenceOfVec(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TColgp_SequenceOfVec>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfVec(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColgp_SequenceOfVec::Size()
{
    int _result = ((::TColgp_SequenceOfVec*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfVec::Length()
{
    int _result = ((::TColgp_SequenceOfVec*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfVec::Lower()
{
    int _result = ((::TColgp_SequenceOfVec*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfVec::Upper()
{
    int _result = ((::TColgp_SequenceOfVec*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfVec::IsEmpty()
{
    bool _result = ((::TColgp_SequenceOfVec*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfVec::Reverse()
{
    ((::TColgp_SequenceOfVec*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_SequenceOfVec::Exchange(int I, int J)
{
    ((::TColgp_SequenceOfVec*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_SequenceOfVec::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_SequenceOfVec*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfVec::Clear()
{
    ((::TColgp_SequenceOfVec*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_SequenceOfVec^ RDC::OCC::TColgp_SequenceOfVec::Assign(RDC::OCC::TColgp_SequenceOfVec^ theOther)
{
    ::TColgp_SequenceOfVec* _result = new ::TColgp_SequenceOfVec();
    *_result = ((::TColgp_SequenceOfVec*)_NativeInstance)->Assign(*(::TColgp_SequenceOfVec*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfVec(_result);
}

void RDC::OCC::TColgp_SequenceOfVec::Remove(RDC::OCC::TColgp_SequenceOfVec::Iterator^ thePosition)
{
    ((::TColgp_SequenceOfVec*)_NativeInstance)->Remove(*(::TColgp_SequenceOfVec::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_SequenceOfVec::Append(RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_SequenceOfVec*)_NativeInstance)->Append(*(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfVec::Prepend(RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_SequenceOfVec*)_NativeInstance)->Prepend(*(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfVec::InsertBefore(int theIndex, RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_SequenceOfVec*)_NativeInstance)->InsertBefore(theIndex, *(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfVec::InsertAfter(RDC::OCC::TColgp_SequenceOfVec::Iterator^ thePosition, RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_SequenceOfVec*)_NativeInstance)->InsertAfter(*(::TColgp_SequenceOfVec::Iterator*)thePosition->NativeInstance, *(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfVec::Split(int theIndex, RDC::OCC::TColgp_SequenceOfVec^ theSeq)
{
    ((::TColgp_SequenceOfVec*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfVec*)theSeq->NativeInstance);
}

RDC::OCC::Vec RDC::OCC::TColgp_SequenceOfVec::First()
{
    ::gp_Vec _nativeResult = ((::TColgp_SequenceOfVec*)_NativeInstance)->First();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_SequenceOfVec::ChangeFirst()
{
    ::gp_Vec _nativeResult = ((::TColgp_SequenceOfVec*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_SequenceOfVec::Last()
{
    ::gp_Vec _nativeResult = ((::TColgp_SequenceOfVec*)_NativeInstance)->Last();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_SequenceOfVec::ChangeLast()
{
    ::gp_Vec _nativeResult = ((::TColgp_SequenceOfVec*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_SequenceOfVec::Value(int theIndex)
{
    ::gp_Vec _nativeResult = ((::TColgp_SequenceOfVec*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_SequenceOfVec::ChangeValue(int theIndex)
{
    ::gp_Vec _nativeResult = ((::TColgp_SequenceOfVec*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::TColgp_SequenceOfVec::SetValue(int theIndex, RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_SequenceOfVec*)_NativeInstance)->SetValue(theIndex, *(gp_Vec*)pp_theItem);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Vec>^ RDC::OCC::TColgp_SequenceOfVec::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_SequenceOfVec::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfVec::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfVec::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfVec::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfVec::Iterator();
}

bool RDC::OCC::TColgp_SequenceOfVec::Iterator::More()
{
    bool _result = ((::TColgp_SequenceOfVec::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfVec::Iterator::Next()
{
    ((::TColgp_SequenceOfVec::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Vec RDC::OCC::TColgp_SequenceOfVec::Iterator::Value()
{
    ::gp_Vec _nativeResult = ((::TColgp_SequenceOfVec::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_SequenceOfVec::Iterator::ChangeValue()
{
    ::gp_Vec _nativeResult = ((::TColgp_SequenceOfVec::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Vec(_nativeResult);
}

bool RDC::OCC::TColgp_SequenceOfVec::Iterator::IsEqual(RDC::OCC::TColgp_SequenceOfVec::Iterator^ theOther)
{
    bool _result = ((::TColgp_SequenceOfVec::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_SequenceOfVec::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfVec::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_SequenceOfVec::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfVec2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfVec2d::TColgp_SequenceOfVec2d()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfVec2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfVec2d();
}

RDC::OCC::TColgp_SequenceOfVec2d::TColgp_SequenceOfVec2d(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TColgp_SequenceOfVec2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfVec2d(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColgp_SequenceOfVec2d::Size()
{
    int _result = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfVec2d::Length()
{
    int _result = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfVec2d::Lower()
{
    int _result = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfVec2d::Upper()
{
    int _result = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfVec2d::IsEmpty()
{
    bool _result = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfVec2d::Reverse()
{
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_SequenceOfVec2d::Exchange(int I, int J)
{
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_SequenceOfVec2d::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfVec2d::Clear()
{
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_SequenceOfVec2d^ RDC::OCC::TColgp_SequenceOfVec2d::Assign(RDC::OCC::TColgp_SequenceOfVec2d^ theOther)
{
    ::TColgp_SequenceOfVec2d* _result = new ::TColgp_SequenceOfVec2d();
    *_result = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Assign(*(::TColgp_SequenceOfVec2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfVec2d(_result);
}

void RDC::OCC::TColgp_SequenceOfVec2d::Remove(RDC::OCC::TColgp_SequenceOfVec2d::Iterator^ thePosition)
{
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Remove(*(::TColgp_SequenceOfVec2d::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_SequenceOfVec2d::Append(RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Append(*(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfVec2d::Prepend(RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Prepend(*(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfVec2d::InsertBefore(int theIndex, RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfVec2d::InsertAfter(RDC::OCC::TColgp_SequenceOfVec2d::Iterator^ thePosition, RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->InsertAfter(*(::TColgp_SequenceOfVec2d::Iterator*)thePosition->NativeInstance, *(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfVec2d::Split(int theIndex, RDC::OCC::TColgp_SequenceOfVec2d^ theSeq)
{
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfVec2d*)theSeq->NativeInstance);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_SequenceOfVec2d::First()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->First();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_SequenceOfVec2d::ChangeFirst()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_SequenceOfVec2d::Last()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Last();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_SequenceOfVec2d::ChangeLast()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_SequenceOfVec2d::Value(int theIndex)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_SequenceOfVec2d::ChangeValue(int theIndex)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::TColgp_SequenceOfVec2d::SetValue(int theIndex, RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_SequenceOfVec2d*)_NativeInstance)->SetValue(theIndex, *(gp_Vec2d*)pp_theItem);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Vec2d>^ RDC::OCC::TColgp_SequenceOfVec2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_SequenceOfVec2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfVec2d::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfVec2d::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfVec2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfVec2d::Iterator();
}

bool RDC::OCC::TColgp_SequenceOfVec2d::Iterator::More()
{
    bool _result = ((::TColgp_SequenceOfVec2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfVec2d::Iterator::Next()
{
    ((::TColgp_SequenceOfVec2d::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Vec2d RDC::OCC::TColgp_SequenceOfVec2d::Iterator::Value()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_SequenceOfVec2d::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_SequenceOfVec2d::Iterator::ChangeValue()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_SequenceOfVec2d::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Vec2d(_nativeResult);
}

bool RDC::OCC::TColgp_SequenceOfVec2d::Iterator::IsEqual(RDC::OCC::TColgp_SequenceOfVec2d::Iterator^ theOther)
{
    bool _result = ((::TColgp_SequenceOfVec2d::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_SequenceOfVec2d::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfVec2d::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_SequenceOfVec2d::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfXY
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfXY::TColgp_SequenceOfXY()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfXY>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfXY();
}

RDC::OCC::TColgp_SequenceOfXY::TColgp_SequenceOfXY(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TColgp_SequenceOfXY>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfXY(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColgp_SequenceOfXY::Size()
{
    int _result = ((::TColgp_SequenceOfXY*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfXY::Length()
{
    int _result = ((::TColgp_SequenceOfXY*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfXY::Lower()
{
    int _result = ((::TColgp_SequenceOfXY*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfXY::Upper()
{
    int _result = ((::TColgp_SequenceOfXY*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfXY::IsEmpty()
{
    bool _result = ((::TColgp_SequenceOfXY*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfXY::Reverse()
{
    ((::TColgp_SequenceOfXY*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_SequenceOfXY::Exchange(int I, int J)
{
    ((::TColgp_SequenceOfXY*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_SequenceOfXY::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_SequenceOfXY*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfXY::Clear()
{
    ((::TColgp_SequenceOfXY*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_SequenceOfXY^ RDC::OCC::TColgp_SequenceOfXY::Assign(RDC::OCC::TColgp_SequenceOfXY^ theOther)
{
    ::TColgp_SequenceOfXY* _result = new ::TColgp_SequenceOfXY();
    *_result = ((::TColgp_SequenceOfXY*)_NativeInstance)->Assign(*(::TColgp_SequenceOfXY*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfXY(_result);
}

void RDC::OCC::TColgp_SequenceOfXY::Remove(RDC::OCC::TColgp_SequenceOfXY::Iterator^ thePosition)
{
    ((::TColgp_SequenceOfXY*)_NativeInstance)->Remove(*(::TColgp_SequenceOfXY::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_SequenceOfXY::Append(RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_SequenceOfXY*)_NativeInstance)->Append(*(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfXY::Prepend(RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_SequenceOfXY*)_NativeInstance)->Prepend(*(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfXY::InsertBefore(int theIndex, RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_SequenceOfXY*)_NativeInstance)->InsertBefore(theIndex, *(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfXY::InsertAfter(RDC::OCC::TColgp_SequenceOfXY::Iterator^ thePosition, RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_SequenceOfXY*)_NativeInstance)->InsertAfter(*(::TColgp_SequenceOfXY::Iterator*)thePosition->NativeInstance, *(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfXY::Split(int theIndex, RDC::OCC::TColgp_SequenceOfXY^ theSeq)
{
    ((::TColgp_SequenceOfXY*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfXY*)theSeq->NativeInstance);
}

RDC::OCC::XY RDC::OCC::TColgp_SequenceOfXY::First()
{
    ::gp_XY _nativeResult = ((::TColgp_SequenceOfXY*)_NativeInstance)->First();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_SequenceOfXY::ChangeFirst()
{
    ::gp_XY _nativeResult = ((::TColgp_SequenceOfXY*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_SequenceOfXY::Last()
{
    ::gp_XY _nativeResult = ((::TColgp_SequenceOfXY*)_NativeInstance)->Last();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_SequenceOfXY::ChangeLast()
{
    ::gp_XY _nativeResult = ((::TColgp_SequenceOfXY*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_SequenceOfXY::Value(int theIndex)
{
    ::gp_XY _nativeResult = ((::TColgp_SequenceOfXY*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_SequenceOfXY::ChangeValue(int theIndex)
{
    ::gp_XY _nativeResult = ((::TColgp_SequenceOfXY*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::TColgp_SequenceOfXY::SetValue(int theIndex, RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_SequenceOfXY*)_NativeInstance)->SetValue(theIndex, *(gp_XY*)pp_theItem);
}

System::Collections::Generic::IEnumerator<RDC::OCC::XY>^ RDC::OCC::TColgp_SequenceOfXY::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::XY>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_SequenceOfXY::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::XY>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfXY::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfXY::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfXY::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfXY::Iterator();
}

bool RDC::OCC::TColgp_SequenceOfXY::Iterator::More()
{
    bool _result = ((::TColgp_SequenceOfXY::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfXY::Iterator::Next()
{
    ((::TColgp_SequenceOfXY::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::XY RDC::OCC::TColgp_SequenceOfXY::Iterator::Value()
{
    ::gp_XY _nativeResult = ((::TColgp_SequenceOfXY::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_SequenceOfXY::Iterator::ChangeValue()
{
    ::gp_XY _nativeResult = ((::TColgp_SequenceOfXY::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::XY(_nativeResult);
}

bool RDC::OCC::TColgp_SequenceOfXY::Iterator::IsEqual(RDC::OCC::TColgp_SequenceOfXY::Iterator^ theOther)
{
    bool _result = ((::TColgp_SequenceOfXY::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_SequenceOfXY::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfXY::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_SequenceOfXY::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfXYZ
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfXYZ::TColgp_SequenceOfXYZ()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfXYZ>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfXYZ();
}

RDC::OCC::TColgp_SequenceOfXYZ::TColgp_SequenceOfXYZ(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TColgp_SequenceOfXYZ>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfXYZ(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColgp_SequenceOfXYZ::Size()
{
    int _result = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfXYZ::Length()
{
    int _result = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfXYZ::Lower()
{
    int _result = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfXYZ::Upper()
{
    int _result = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfXYZ::IsEmpty()
{
    bool _result = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfXYZ::Reverse()
{
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_SequenceOfXYZ::Exchange(int I, int J)
{
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_SequenceOfXYZ::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfXYZ::Clear()
{
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_SequenceOfXYZ^ RDC::OCC::TColgp_SequenceOfXYZ::Assign(RDC::OCC::TColgp_SequenceOfXYZ^ theOther)
{
    ::TColgp_SequenceOfXYZ* _result = new ::TColgp_SequenceOfXYZ();
    *_result = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Assign(*(::TColgp_SequenceOfXYZ*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfXYZ(_result);
}

void RDC::OCC::TColgp_SequenceOfXYZ::Remove(RDC::OCC::TColgp_SequenceOfXYZ::Iterator^ thePosition)
{
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Remove(*(::TColgp_SequenceOfXYZ::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_SequenceOfXYZ::Append(RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Append(*(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfXYZ::Prepend(RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Prepend(*(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfXYZ::InsertBefore(int theIndex, RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->InsertBefore(theIndex, *(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfXYZ::InsertAfter(RDC::OCC::TColgp_SequenceOfXYZ::Iterator^ thePosition, RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->InsertAfter(*(::TColgp_SequenceOfXYZ::Iterator*)thePosition->NativeInstance, *(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfXYZ::Split(int theIndex, RDC::OCC::TColgp_SequenceOfXYZ^ theSeq)
{
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfXYZ*)theSeq->NativeInstance);
}

RDC::OCC::XYZ RDC::OCC::TColgp_SequenceOfXYZ::First()
{
    ::gp_XYZ _nativeResult = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->First();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_SequenceOfXYZ::ChangeFirst()
{
    ::gp_XYZ _nativeResult = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_SequenceOfXYZ::Last()
{
    ::gp_XYZ _nativeResult = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Last();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_SequenceOfXYZ::ChangeLast()
{
    ::gp_XYZ _nativeResult = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_SequenceOfXYZ::Value(int theIndex)
{
    ::gp_XYZ _nativeResult = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_SequenceOfXYZ::ChangeValue(int theIndex)
{
    ::gp_XYZ _nativeResult = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::XYZ(_nativeResult);
}

void RDC::OCC::TColgp_SequenceOfXYZ::SetValue(int theIndex, RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_SequenceOfXYZ*)_NativeInstance)->SetValue(theIndex, *(gp_XYZ*)pp_theItem);
}

System::Collections::Generic::IEnumerator<RDC::OCC::XYZ>^ RDC::OCC::TColgp_SequenceOfXYZ::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::XYZ>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_SequenceOfXYZ::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::XYZ>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfXYZ::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfXYZ::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfXYZ::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfXYZ::Iterator();
}

bool RDC::OCC::TColgp_SequenceOfXYZ::Iterator::More()
{
    bool _result = ((::TColgp_SequenceOfXYZ::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfXYZ::Iterator::Next()
{
    ((::TColgp_SequenceOfXYZ::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::XYZ RDC::OCC::TColgp_SequenceOfXYZ::Iterator::Value()
{
    ::gp_XYZ _nativeResult = ((::TColgp_SequenceOfXYZ::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_SequenceOfXYZ::Iterator::ChangeValue()
{
    ::gp_XYZ _nativeResult = ((::TColgp_SequenceOfXYZ::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::XYZ(_nativeResult);
}

bool RDC::OCC::TColgp_SequenceOfXYZ::Iterator::IsEqual(RDC::OCC::TColgp_SequenceOfXYZ::Iterator^ theOther)
{
    bool _result = ((::TColgp_SequenceOfXYZ::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_SequenceOfXYZ::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfXYZ::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_SequenceOfXYZ::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfArray1OfPnt2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::TColgp_SequenceOfArray1OfPnt2d()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfArray1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfArray1OfPnt2d();
}

RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::TColgp_SequenceOfArray1OfPnt2d(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TColgp_SequenceOfArray1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfArray1OfPnt2d(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Size()
{
    int _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Length()
{
    int _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Lower()
{
    int _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Upper()
{
    int _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::IsEmpty()
{
    bool _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Reverse()
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Exchange(int I, int J)
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Clear()
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_SequenceOfArray1OfPnt2d^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Assign(RDC::OCC::TColgp_SequenceOfArray1OfPnt2d^ theOther)
{
    ::TColgp_SequenceOfArray1OfPnt2d* _result = new ::TColgp_SequenceOfArray1OfPnt2d();
    *_result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Assign(*(::TColgp_SequenceOfArray1OfPnt2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfArray1OfPnt2d(_result);
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Remove(RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator^ thePosition)
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Remove(*(::TColgp_SequenceOfArray1OfPnt2d::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Append(RDC::OCC::TColgp_HArray1OfPnt2d^ theItem)
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Append(Handle(::TColgp_HArray1OfPnt2d)(theItem->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Prepend(RDC::OCC::TColgp_HArray1OfPnt2d^ theItem)
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Prepend(Handle(::TColgp_HArray1OfPnt2d)(theItem->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::InsertBefore(int theIndex, RDC::OCC::TColgp_HArray1OfPnt2d^ theItem)
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->InsertBefore(theIndex, Handle(::TColgp_HArray1OfPnt2d)(theItem->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::InsertAfter(RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator^ thePosition, RDC::OCC::TColgp_HArray1OfPnt2d^ theItem)
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->InsertAfter(*(::TColgp_SequenceOfArray1OfPnt2d::Iterator*)thePosition->NativeInstance, Handle(::TColgp_HArray1OfPnt2d)(theItem->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Split(int theIndex, RDC::OCC::TColgp_SequenceOfArray1OfPnt2d^ theSeq)
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfArray1OfPnt2d*)theSeq->NativeInstance);
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::First()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::ChangeFirst()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Last()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::ChangeLast()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Value(int theIndex)
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::ChangeValue(int theIndex)
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::SetValue(int theIndex, RDC::OCC::TColgp_HArray1OfPnt2d^ theItem)
{
    ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->SetValue(theIndex, Handle(::TColgp_HArray1OfPnt2d)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<RDC::OCC::TColgp_HArray1OfPnt2d^>^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::TColgp_HArray1OfPnt2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::TColgp_HArray1OfPnt2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfArray1OfPnt2d::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfArray1OfPnt2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfArray1OfPnt2d::Iterator();
}

bool RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator::More()
{
    bool _result = ((::TColgp_SequenceOfArray1OfPnt2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator::Next()
{
    ((::TColgp_SequenceOfArray1OfPnt2d::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator::Value()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::TColgp_SequenceOfArray1OfPnt2d::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator::ChangeValue()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::TColgp_SequenceOfArray1OfPnt2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

bool RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator::IsEqual(RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator^ theOther)
{
    bool _result = ((::TColgp_SequenceOfArray1OfPnt2d::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_SequenceOfArray1OfPnt2d::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_SequenceOfArray1OfPnt2d::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfAx1
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfAx1::TColgp_SequenceOfAx1()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfAx1>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfAx1();
}

RDC::OCC::TColgp_SequenceOfAx1::TColgp_SequenceOfAx1(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TColgp_SequenceOfAx1>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfAx1(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColgp_SequenceOfAx1::Size()
{
    int _result = ((::TColgp_SequenceOfAx1*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfAx1::Length()
{
    int _result = ((::TColgp_SequenceOfAx1*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfAx1::Lower()
{
    int _result = ((::TColgp_SequenceOfAx1*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_SequenceOfAx1::Upper()
{
    int _result = ((::TColgp_SequenceOfAx1*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfAx1::IsEmpty()
{
    bool _result = ((::TColgp_SequenceOfAx1*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfAx1::Reverse()
{
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_SequenceOfAx1::Exchange(int I, int J)
{
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_SequenceOfAx1::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_SequenceOfAx1::Clear()
{
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_SequenceOfAx1^ RDC::OCC::TColgp_SequenceOfAx1::Assign(RDC::OCC::TColgp_SequenceOfAx1^ theOther)
{
    ::TColgp_SequenceOfAx1* _result = new ::TColgp_SequenceOfAx1();
    *_result = ((::TColgp_SequenceOfAx1*)_NativeInstance)->Assign(*(::TColgp_SequenceOfAx1*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfAx1(_result);
}

void RDC::OCC::TColgp_SequenceOfAx1::Remove(RDC::OCC::TColgp_SequenceOfAx1::Iterator^ thePosition)
{
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->Remove(*(::TColgp_SequenceOfAx1::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_SequenceOfAx1::Append(RDC::OCC::Ax1 theItem)
{
    pin_ptr<RDC::OCC::Ax1> pp_theItem = &theItem;
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->Append(*(gp_Ax1*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfAx1::Prepend(RDC::OCC::Ax1 theItem)
{
    pin_ptr<RDC::OCC::Ax1> pp_theItem = &theItem;
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->Prepend(*(gp_Ax1*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfAx1::InsertBefore(int theIndex, RDC::OCC::Ax1 theItem)
{
    pin_ptr<RDC::OCC::Ax1> pp_theItem = &theItem;
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->InsertBefore(theIndex, *(gp_Ax1*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfAx1::InsertAfter(RDC::OCC::TColgp_SequenceOfAx1::Iterator^ thePosition, RDC::OCC::Ax1 theItem)
{
    pin_ptr<RDC::OCC::Ax1> pp_theItem = &theItem;
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->InsertAfter(*(::TColgp_SequenceOfAx1::Iterator*)thePosition->NativeInstance, *(gp_Ax1*)pp_theItem);
}

void RDC::OCC::TColgp_SequenceOfAx1::Split(int theIndex, RDC::OCC::TColgp_SequenceOfAx1^ theSeq)
{
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfAx1*)theSeq->NativeInstance);
}

RDC::OCC::Ax1 RDC::OCC::TColgp_SequenceOfAx1::First()
{
    ::gp_Ax1 _nativeResult = ((::TColgp_SequenceOfAx1*)_NativeInstance)->First();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::TColgp_SequenceOfAx1::ChangeFirst()
{
    ::gp_Ax1 _nativeResult = ((::TColgp_SequenceOfAx1*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::TColgp_SequenceOfAx1::Last()
{
    ::gp_Ax1 _nativeResult = ((::TColgp_SequenceOfAx1*)_NativeInstance)->Last();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::TColgp_SequenceOfAx1::ChangeLast()
{
    ::gp_Ax1 _nativeResult = ((::TColgp_SequenceOfAx1*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::TColgp_SequenceOfAx1::Value(int theIndex)
{
    ::gp_Ax1 _nativeResult = ((::TColgp_SequenceOfAx1*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::TColgp_SequenceOfAx1::ChangeValue(int theIndex)
{
    ::gp_Ax1 _nativeResult = ((::TColgp_SequenceOfAx1*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::TColgp_SequenceOfAx1::SetValue(int theIndex, RDC::OCC::Ax1 theItem)
{
    pin_ptr<RDC::OCC::Ax1> pp_theItem = &theItem;
    ((::TColgp_SequenceOfAx1*)_NativeInstance)->SetValue(theIndex, *(gp_Ax1*)pp_theItem);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Ax1>^ RDC::OCC::TColgp_SequenceOfAx1::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Ax1>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_SequenceOfAx1::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Ax1>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfAx1::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_SequenceOfAx1::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_SequenceOfAx1::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_SequenceOfAx1::Iterator();
}

bool RDC::OCC::TColgp_SequenceOfAx1::Iterator::More()
{
    bool _result = ((::TColgp_SequenceOfAx1::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_SequenceOfAx1::Iterator::Next()
{
    ((::TColgp_SequenceOfAx1::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Ax1 RDC::OCC::TColgp_SequenceOfAx1::Iterator::Value()
{
    ::gp_Ax1 _nativeResult = ((::TColgp_SequenceOfAx1::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::TColgp_SequenceOfAx1::Iterator::ChangeValue()
{
    ::gp_Ax1 _nativeResult = ((::TColgp_SequenceOfAx1::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Ax1(_nativeResult);
}

bool RDC::OCC::TColgp_SequenceOfAx1::Iterator::IsEqual(RDC::OCC::TColgp_SequenceOfAx1::Iterator^ theOther)
{
    bool _result = ((::TColgp_SequenceOfAx1::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_SequenceOfAx1::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_SequenceOfAx1::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_SequenceOfAx1::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfCirc2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray1OfCirc2d::TColgp_HArray1OfCirc2d()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfCirc2d();
}

RDC::OCC::TColgp_HArray1OfCirc2d::TColgp_HArray1OfCirc2d(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfCirc2d(theLower, theUpper);
}

RDC::OCC::TColgp_HArray1OfCirc2d::TColgp_HArray1OfCirc2d(int theLower, int theUpper, RDC::OCC::gp_Circ2d^ theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfCirc2d(theLower, theUpper, *(::gp_Circ2d*)theValue->NativeInstance);
}

RDC::OCC::TColgp_HArray1OfCirc2d::TColgp_HArray1OfCirc2d(RDC::OCC::gp_Circ2d^ theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfCirc2d(*(::gp_Circ2d*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

RDC::OCC::TColgp_HArray1OfCirc2d::TColgp_HArray1OfCirc2d(RDC::OCC::TColgp_Array1OfCirc2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfCirc2d(*(::TColgp_Array1OfCirc2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array1OfCirc2d^ RDC::OCC::TColgp_HArray1OfCirc2d::Array1()
{
    ::TColgp_Array1OfCirc2d* _result = new ::TColgp_Array1OfCirc2d();
    *_result = (::TColgp_Array1OfCirc2d)((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfCirc2d(_result);
}

RDC::OCC::TColgp_Array1OfCirc2d^ RDC::OCC::TColgp_HArray1OfCirc2d::ChangeArray1()
{
    ::TColgp_Array1OfCirc2d* _result = new ::TColgp_Array1OfCirc2d();
    *_result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfCirc2d(_result);
}

void RDC::OCC::TColgp_HArray1OfCirc2d::Init(RDC::OCC::gp_Circ2d^ theValue)
{
    ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Init(*(::gp_Circ2d*)theValue->NativeInstance);
}

int RDC::OCC::TColgp_HArray1OfCirc2d::Size()
{
    int _result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfCirc2d::Length()
{
    int _result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_HArray1OfCirc2d::IsEmpty()
{
    bool _result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfCirc2d::Lower()
{
    int _result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfCirc2d::Upper()
{
    int _result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_HArray1OfCirc2d^ RDC::OCC::TColgp_HArray1OfCirc2d::Assign(RDC::OCC::TColgp_HArray1OfCirc2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray1OfCirc2d^ RDC::OCC::TColgp_HArray1OfCirc2d::Move(RDC::OCC::TColgp_HArray1OfCirc2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray1OfCirc2d::First()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_HArray1OfCirc2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray1OfCirc2d::ChangeFirst()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray1OfCirc2d::Last()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray1OfCirc2d::ChangeLast()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray1OfCirc2d::Value(int theIndex)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray1OfCirc2d::ChangeValue(int theIndex)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::TColgp_HArray1OfCirc2d::SetValue(int theIndex, RDC::OCC::gp_Circ2d^ theItem)
{
    ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->SetValue(theIndex, *(::gp_Circ2d*)theItem->NativeInstance);
}

void RDC::OCC::TColgp_HArray1OfCirc2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray1OfCirc2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_HArray1OfCirc2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_HArray1OfCirc2d::IsDeletable()
{
    bool _result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray1OfCirc2d^ RDC::OCC::TColgp_HArray1OfCirc2d::CreateDowncasted(::TColgp_HArray1OfCirc2d* instance)
{
    return gcnew RDC::OCC::TColgp_HArray1OfCirc2d( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::gp_Circ2d^>^ RDC::OCC::TColgp_HArray1OfCirc2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::gp_Circ2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HArray1OfCirc2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::gp_Circ2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfCirc2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfDir
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray1OfDir::TColgp_HArray1OfDir()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfDir();
}

RDC::OCC::TColgp_HArray1OfDir::TColgp_HArray1OfDir(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfDir(theLower, theUpper);
}

RDC::OCC::TColgp_HArray1OfDir::TColgp_HArray1OfDir(int theLower, int theUpper, RDC::OCC::Dir theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray1OfDir(theLower, theUpper, *(gp_Dir*)pp_theValue);
}

RDC::OCC::TColgp_HArray1OfDir::TColgp_HArray1OfDir(RDC::OCC::Dir theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_theBegin = &theBegin;
    NativeInstance = new ::TColgp_HArray1OfDir(*(gp_Dir*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColgp_HArray1OfDir::TColgp_HArray1OfDir(RDC::OCC::TColgp_Array1OfDir^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfDir(*(::TColgp_Array1OfDir*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array1OfDir^ RDC::OCC::TColgp_HArray1OfDir::Array1()
{
    ::TColgp_Array1OfDir* _result = new ::TColgp_Array1OfDir();
    *_result = (::TColgp_Array1OfDir)((::TColgp_HArray1OfDir*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfDir(_result);
}

RDC::OCC::TColgp_Array1OfDir^ RDC::OCC::TColgp_HArray1OfDir::ChangeArray1()
{
    ::TColgp_Array1OfDir* _result = new ::TColgp_Array1OfDir();
    *_result = ((::TColgp_HArray1OfDir*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfDir(_result);
}

void RDC::OCC::TColgp_HArray1OfDir::Init(RDC::OCC::Dir theValue)
{
    pin_ptr<RDC::OCC::Dir> pp_theValue = &theValue;
    ((::TColgp_HArray1OfDir*)_NativeInstance)->Init(*(gp_Dir*)pp_theValue);
}

int RDC::OCC::TColgp_HArray1OfDir::Size()
{
    int _result = ((::TColgp_HArray1OfDir*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfDir::Length()
{
    int _result = ((::TColgp_HArray1OfDir*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_HArray1OfDir::IsEmpty()
{
    bool _result = ((::TColgp_HArray1OfDir*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfDir::Lower()
{
    int _result = ((::TColgp_HArray1OfDir*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfDir::Upper()
{
    int _result = ((::TColgp_HArray1OfDir*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_HArray1OfDir^ RDC::OCC::TColgp_HArray1OfDir::Assign(RDC::OCC::TColgp_HArray1OfDir^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray1OfDir^ RDC::OCC::TColgp_HArray1OfDir::Move(RDC::OCC::TColgp_HArray1OfDir^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray1OfDir::First()
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray1OfDir*)_NativeInstance)->First();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray1OfDir::ChangeFirst()
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray1OfDir*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray1OfDir::Last()
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray1OfDir*)_NativeInstance)->Last();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray1OfDir::ChangeLast()
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray1OfDir*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray1OfDir::Value(int theIndex)
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray1OfDir*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray1OfDir::ChangeValue(int theIndex)
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray1OfDir*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::TColgp_HArray1OfDir::SetValue(int theIndex, RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_HArray1OfDir*)_NativeInstance)->SetValue(theIndex, *(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_HArray1OfDir::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray1OfDir*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray1OfDir::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray1OfDir*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_HArray1OfDir::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_HArray1OfDir*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_HArray1OfDir::IsDeletable()
{
    bool _result = ((::TColgp_HArray1OfDir*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray1OfDir^ RDC::OCC::TColgp_HArray1OfDir::CreateDowncasted(::TColgp_HArray1OfDir* instance)
{
    return gcnew RDC::OCC::TColgp_HArray1OfDir( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Dir>^ RDC::OCC::TColgp_HArray1OfDir::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HArray1OfDir::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfDir::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfDir2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray1OfDir2d::TColgp_HArray1OfDir2d()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfDir2d();
}

RDC::OCC::TColgp_HArray1OfDir2d::TColgp_HArray1OfDir2d(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfDir2d(theLower, theUpper);
}

RDC::OCC::TColgp_HArray1OfDir2d::TColgp_HArray1OfDir2d(int theLower, int theUpper, RDC::OCC::Dir2d theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray1OfDir2d(theLower, theUpper, *(gp_Dir2d*)pp_theValue);
}

RDC::OCC::TColgp_HArray1OfDir2d::TColgp_HArray1OfDir2d(RDC::OCC::Dir2d theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theBegin = &theBegin;
    NativeInstance = new ::TColgp_HArray1OfDir2d(*(gp_Dir2d*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColgp_HArray1OfDir2d::TColgp_HArray1OfDir2d(RDC::OCC::TColgp_Array1OfDir2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfDir2d(*(::TColgp_Array1OfDir2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array1OfDir2d^ RDC::OCC::TColgp_HArray1OfDir2d::Array1()
{
    ::TColgp_Array1OfDir2d* _result = new ::TColgp_Array1OfDir2d();
    *_result = (::TColgp_Array1OfDir2d)((::TColgp_HArray1OfDir2d*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfDir2d(_result);
}

RDC::OCC::TColgp_Array1OfDir2d^ RDC::OCC::TColgp_HArray1OfDir2d::ChangeArray1()
{
    ::TColgp_Array1OfDir2d* _result = new ::TColgp_Array1OfDir2d();
    *_result = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfDir2d(_result);
}

void RDC::OCC::TColgp_HArray1OfDir2d::Init(RDC::OCC::Dir2d theValue)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theValue = &theValue;
    ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Init(*(gp_Dir2d*)pp_theValue);
}

int RDC::OCC::TColgp_HArray1OfDir2d::Size()
{
    int _result = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfDir2d::Length()
{
    int _result = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_HArray1OfDir2d::IsEmpty()
{
    bool _result = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfDir2d::Lower()
{
    int _result = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfDir2d::Upper()
{
    int _result = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_HArray1OfDir2d^ RDC::OCC::TColgp_HArray1OfDir2d::Assign(RDC::OCC::TColgp_HArray1OfDir2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray1OfDir2d^ RDC::OCC::TColgp_HArray1OfDir2d::Move(RDC::OCC::TColgp_HArray1OfDir2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray1OfDir2d::First()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->First();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray1OfDir2d::ChangeFirst()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray1OfDir2d::Last()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Last();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray1OfDir2d::ChangeLast()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray1OfDir2d::Value(int theIndex)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray1OfDir2d::ChangeValue(int theIndex)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Dir2d(_nativeResult);
}

void RDC::OCC::TColgp_HArray1OfDir2d::SetValue(int theIndex, RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_HArray1OfDir2d*)_NativeInstance)->SetValue(theIndex, *(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_HArray1OfDir2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray1OfDir2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray1OfDir2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray1OfDir2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_HArray1OfDir2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_HArray1OfDir2d::IsDeletable()
{
    bool _result = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray1OfDir2d^ RDC::OCC::TColgp_HArray1OfDir2d::CreateDowncasted(::TColgp_HArray1OfDir2d* instance)
{
    return gcnew RDC::OCC::TColgp_HArray1OfDir2d( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Dir2d>^ RDC::OCC::TColgp_HArray1OfDir2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HArray1OfDir2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfDir2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfLin2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray1OfLin2d::TColgp_HArray1OfLin2d()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfLin2d();
}

RDC::OCC::TColgp_HArray1OfLin2d::TColgp_HArray1OfLin2d(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfLin2d(theLower, theUpper);
}

RDC::OCC::TColgp_HArray1OfLin2d::TColgp_HArray1OfLin2d(int theLower, int theUpper, RDC::OCC::gp_Lin2d^ theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfLin2d(theLower, theUpper, *(::gp_Lin2d*)theValue->NativeInstance);
}

RDC::OCC::TColgp_HArray1OfLin2d::TColgp_HArray1OfLin2d(RDC::OCC::gp_Lin2d^ theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfLin2d(*(::gp_Lin2d*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

RDC::OCC::TColgp_HArray1OfLin2d::TColgp_HArray1OfLin2d(RDC::OCC::TColgp_Array1OfLin2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfLin2d(*(::TColgp_Array1OfLin2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array1OfLin2d^ RDC::OCC::TColgp_HArray1OfLin2d::Array1()
{
    ::TColgp_Array1OfLin2d* _result = new ::TColgp_Array1OfLin2d();
    *_result = (::TColgp_Array1OfLin2d)((::TColgp_HArray1OfLin2d*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfLin2d(_result);
}

RDC::OCC::TColgp_Array1OfLin2d^ RDC::OCC::TColgp_HArray1OfLin2d::ChangeArray1()
{
    ::TColgp_Array1OfLin2d* _result = new ::TColgp_Array1OfLin2d();
    *_result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfLin2d(_result);
}

void RDC::OCC::TColgp_HArray1OfLin2d::Init(RDC::OCC::gp_Lin2d^ theValue)
{
    ((::TColgp_HArray1OfLin2d*)_NativeInstance)->Init(*(::gp_Lin2d*)theValue->NativeInstance);
}

int RDC::OCC::TColgp_HArray1OfLin2d::Size()
{
    int _result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfLin2d::Length()
{
    int _result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_HArray1OfLin2d::IsEmpty()
{
    bool _result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfLin2d::Lower()
{
    int _result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfLin2d::Upper()
{
    int _result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_HArray1OfLin2d^ RDC::OCC::TColgp_HArray1OfLin2d::Assign(RDC::OCC::TColgp_HArray1OfLin2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray1OfLin2d^ RDC::OCC::TColgp_HArray1OfLin2d::Move(RDC::OCC::TColgp_HArray1OfLin2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray1OfLin2d::First()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_HArray1OfLin2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray1OfLin2d::ChangeFirst()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray1OfLin2d::Last()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_HArray1OfLin2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray1OfLin2d::ChangeLast()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray1OfLin2d::Value(int theIndex)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_HArray1OfLin2d*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray1OfLin2d::ChangeValue(int theIndex)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::TColgp_HArray1OfLin2d::SetValue(int theIndex, RDC::OCC::gp_Lin2d^ theItem)
{
    ((::TColgp_HArray1OfLin2d*)_NativeInstance)->SetValue(theIndex, *(::gp_Lin2d*)theItem->NativeInstance);
}

void RDC::OCC::TColgp_HArray1OfLin2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray1OfLin2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray1OfLin2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray1OfLin2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_HArray1OfLin2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_HArray1OfLin2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_HArray1OfLin2d::IsDeletable()
{
    bool _result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray1OfLin2d^ RDC::OCC::TColgp_HArray1OfLin2d::CreateDowncasted(::TColgp_HArray1OfLin2d* instance)
{
    return gcnew RDC::OCC::TColgp_HArray1OfLin2d( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::gp_Lin2d^>^ RDC::OCC::TColgp_HArray1OfLin2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::gp_Lin2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HArray1OfLin2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::gp_Lin2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfLin2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfPnt
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray1OfPnt::TColgp_HArray1OfPnt()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfPnt();
}

RDC::OCC::TColgp_HArray1OfPnt::TColgp_HArray1OfPnt(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfPnt(theLower, theUpper);
}

RDC::OCC::TColgp_HArray1OfPnt::TColgp_HArray1OfPnt(int theLower, int theUpper, RDC::OCC::Pnt theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray1OfPnt(theLower, theUpper, *(gp_Pnt*)pp_theValue);
}

RDC::OCC::TColgp_HArray1OfPnt::TColgp_HArray1OfPnt(RDC::OCC::Pnt theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theBegin = &theBegin;
    NativeInstance = new ::TColgp_HArray1OfPnt(*(gp_Pnt*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColgp_HArray1OfPnt::TColgp_HArray1OfPnt(RDC::OCC::TColgp_Array1OfPnt^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfPnt(*(::TColgp_Array1OfPnt*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array1OfPnt^ RDC::OCC::TColgp_HArray1OfPnt::Array1()
{
    ::TColgp_Array1OfPnt* _result = new ::TColgp_Array1OfPnt();
    *_result = (::TColgp_Array1OfPnt)((::TColgp_HArray1OfPnt*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt(_result);
}

RDC::OCC::TColgp_Array1OfPnt^ RDC::OCC::TColgp_HArray1OfPnt::ChangeArray1()
{
    ::TColgp_Array1OfPnt* _result = new ::TColgp_Array1OfPnt();
    *_result = ((::TColgp_HArray1OfPnt*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt(_result);
}

void RDC::OCC::TColgp_HArray1OfPnt::Init(RDC::OCC::Pnt theValue)
{
    pin_ptr<RDC::OCC::Pnt> pp_theValue = &theValue;
    ((::TColgp_HArray1OfPnt*)_NativeInstance)->Init(*(gp_Pnt*)pp_theValue);
}

int RDC::OCC::TColgp_HArray1OfPnt::Size()
{
    int _result = ((::TColgp_HArray1OfPnt*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfPnt::Length()
{
    int _result = ((::TColgp_HArray1OfPnt*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_HArray1OfPnt::IsEmpty()
{
    bool _result = ((::TColgp_HArray1OfPnt*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfPnt::Lower()
{
    int _result = ((::TColgp_HArray1OfPnt*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfPnt::Upper()
{
    int _result = ((::TColgp_HArray1OfPnt*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_HArray1OfPnt^ RDC::OCC::TColgp_HArray1OfPnt::Assign(RDC::OCC::TColgp_HArray1OfPnt^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray1OfPnt^ RDC::OCC::TColgp_HArray1OfPnt::Move(RDC::OCC::TColgp_HArray1OfPnt^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray1OfPnt::First()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray1OfPnt*)_NativeInstance)->First();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray1OfPnt::ChangeFirst()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray1OfPnt*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray1OfPnt::Last()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray1OfPnt*)_NativeInstance)->Last();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray1OfPnt::ChangeLast()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray1OfPnt*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray1OfPnt::Value(int theIndex)
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray1OfPnt*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray1OfPnt::ChangeValue(int theIndex)
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray1OfPnt*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::TColgp_HArray1OfPnt::SetValue(int theIndex, RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_HArray1OfPnt*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_HArray1OfPnt::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray1OfPnt*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray1OfPnt::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray1OfPnt*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_HArray1OfPnt::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_HArray1OfPnt*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_HArray1OfPnt::IsDeletable()
{
    bool _result = ((::TColgp_HArray1OfPnt*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray1OfPnt^ RDC::OCC::TColgp_HArray1OfPnt::CreateDowncasted(::TColgp_HArray1OfPnt* instance)
{
    return gcnew RDC::OCC::TColgp_HArray1OfPnt( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Pnt>^ RDC::OCC::TColgp_HArray1OfPnt::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HArray1OfPnt::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfPnt::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfPnt2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray1OfPnt2d::TColgp_HArray1OfPnt2d()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfPnt2d();
}

RDC::OCC::TColgp_HArray1OfPnt2d::TColgp_HArray1OfPnt2d(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfPnt2d(theLower, theUpper);
}

RDC::OCC::TColgp_HArray1OfPnt2d::TColgp_HArray1OfPnt2d(int theLower, int theUpper, RDC::OCC::Pnt2d theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray1OfPnt2d(theLower, theUpper, *(gp_Pnt2d*)pp_theValue);
}

RDC::OCC::TColgp_HArray1OfPnt2d::TColgp_HArray1OfPnt2d(RDC::OCC::Pnt2d theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theBegin = &theBegin;
    NativeInstance = new ::TColgp_HArray1OfPnt2d(*(gp_Pnt2d*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColgp_HArray1OfPnt2d::TColgp_HArray1OfPnt2d(RDC::OCC::TColgp_Array1OfPnt2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfPnt2d(*(::TColgp_Array1OfPnt2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array1OfPnt2d^ RDC::OCC::TColgp_HArray1OfPnt2d::Array1()
{
    ::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
    *_result = (::TColgp_Array1OfPnt2d)((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt2d(_result);
}

RDC::OCC::TColgp_Array1OfPnt2d^ RDC::OCC::TColgp_HArray1OfPnt2d::ChangeArray1()
{
    ::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
    *_result = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt2d(_result);
}

void RDC::OCC::TColgp_HArray1OfPnt2d::Init(RDC::OCC::Pnt2d theValue)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theValue = &theValue;
    ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_theValue);
}

int RDC::OCC::TColgp_HArray1OfPnt2d::Size()
{
    int _result = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfPnt2d::Length()
{
    int _result = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_HArray1OfPnt2d::IsEmpty()
{
    bool _result = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfPnt2d::Lower()
{
    int _result = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfPnt2d::Upper()
{
    int _result = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_HArray1OfPnt2d::Assign(RDC::OCC::TColgp_HArray1OfPnt2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_HArray1OfPnt2d::Move(RDC::OCC::TColgp_HArray1OfPnt2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray1OfPnt2d::First()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->First();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray1OfPnt2d::ChangeFirst()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray1OfPnt2d::Last()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Last();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray1OfPnt2d::ChangeLast()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray1OfPnt2d::Value(int theIndex)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray1OfPnt2d::ChangeValue(int theIndex)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::TColgp_HArray1OfPnt2d::SetValue(int theIndex, RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_HArray1OfPnt2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray1OfPnt2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_HArray1OfPnt2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_HArray1OfPnt2d::IsDeletable()
{
    bool _result = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray1OfPnt2d^ RDC::OCC::TColgp_HArray1OfPnt2d::CreateDowncasted(::TColgp_HArray1OfPnt2d* instance)
{
    return gcnew RDC::OCC::TColgp_HArray1OfPnt2d( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Pnt2d>^ RDC::OCC::TColgp_HArray1OfPnt2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HArray1OfPnt2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfPnt2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfVec
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray1OfVec::TColgp_HArray1OfVec()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfVec();
}

RDC::OCC::TColgp_HArray1OfVec::TColgp_HArray1OfVec(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfVec(theLower, theUpper);
}

RDC::OCC::TColgp_HArray1OfVec::TColgp_HArray1OfVec(int theLower, int theUpper, RDC::OCC::Vec theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray1OfVec(theLower, theUpper, *(gp_Vec*)pp_theValue);
}

RDC::OCC::TColgp_HArray1OfVec::TColgp_HArray1OfVec(RDC::OCC::Vec theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_theBegin = &theBegin;
    NativeInstance = new ::TColgp_HArray1OfVec(*(gp_Vec*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColgp_HArray1OfVec::TColgp_HArray1OfVec(RDC::OCC::TColgp_Array1OfVec^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfVec(*(::TColgp_Array1OfVec*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array1OfVec^ RDC::OCC::TColgp_HArray1OfVec::Array1()
{
    ::TColgp_Array1OfVec* _result = new ::TColgp_Array1OfVec();
    *_result = (::TColgp_Array1OfVec)((::TColgp_HArray1OfVec*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfVec(_result);
}

RDC::OCC::TColgp_Array1OfVec^ RDC::OCC::TColgp_HArray1OfVec::ChangeArray1()
{
    ::TColgp_Array1OfVec* _result = new ::TColgp_Array1OfVec();
    *_result = ((::TColgp_HArray1OfVec*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfVec(_result);
}

void RDC::OCC::TColgp_HArray1OfVec::Init(RDC::OCC::Vec theValue)
{
    pin_ptr<RDC::OCC::Vec> pp_theValue = &theValue;
    ((::TColgp_HArray1OfVec*)_NativeInstance)->Init(*(gp_Vec*)pp_theValue);
}

int RDC::OCC::TColgp_HArray1OfVec::Size()
{
    int _result = ((::TColgp_HArray1OfVec*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfVec::Length()
{
    int _result = ((::TColgp_HArray1OfVec*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_HArray1OfVec::IsEmpty()
{
    bool _result = ((::TColgp_HArray1OfVec*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfVec::Lower()
{
    int _result = ((::TColgp_HArray1OfVec*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfVec::Upper()
{
    int _result = ((::TColgp_HArray1OfVec*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_HArray1OfVec^ RDC::OCC::TColgp_HArray1OfVec::Assign(RDC::OCC::TColgp_HArray1OfVec^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray1OfVec^ RDC::OCC::TColgp_HArray1OfVec::Move(RDC::OCC::TColgp_HArray1OfVec^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray1OfVec::First()
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray1OfVec*)_NativeInstance)->First();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray1OfVec::ChangeFirst()
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray1OfVec*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray1OfVec::Last()
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray1OfVec*)_NativeInstance)->Last();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray1OfVec::ChangeLast()
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray1OfVec*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray1OfVec::Value(int theIndex)
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray1OfVec*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray1OfVec::ChangeValue(int theIndex)
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray1OfVec*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::TColgp_HArray1OfVec::SetValue(int theIndex, RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_HArray1OfVec*)_NativeInstance)->SetValue(theIndex, *(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_HArray1OfVec::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray1OfVec*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray1OfVec::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray1OfVec*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_HArray1OfVec::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_HArray1OfVec*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_HArray1OfVec::IsDeletable()
{
    bool _result = ((::TColgp_HArray1OfVec*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray1OfVec^ RDC::OCC::TColgp_HArray1OfVec::CreateDowncasted(::TColgp_HArray1OfVec* instance)
{
    return gcnew RDC::OCC::TColgp_HArray1OfVec( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Vec>^ RDC::OCC::TColgp_HArray1OfVec::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HArray1OfVec::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfVec::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfVec2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray1OfVec2d::TColgp_HArray1OfVec2d()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfVec2d();
}

RDC::OCC::TColgp_HArray1OfVec2d::TColgp_HArray1OfVec2d(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfVec2d(theLower, theUpper);
}

RDC::OCC::TColgp_HArray1OfVec2d::TColgp_HArray1OfVec2d(int theLower, int theUpper, RDC::OCC::Vec2d theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray1OfVec2d(theLower, theUpper, *(gp_Vec2d*)pp_theValue);
}

RDC::OCC::TColgp_HArray1OfVec2d::TColgp_HArray1OfVec2d(RDC::OCC::Vec2d theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theBegin = &theBegin;
    NativeInstance = new ::TColgp_HArray1OfVec2d(*(gp_Vec2d*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColgp_HArray1OfVec2d::TColgp_HArray1OfVec2d(RDC::OCC::TColgp_Array1OfVec2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfVec2d(*(::TColgp_Array1OfVec2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array1OfVec2d^ RDC::OCC::TColgp_HArray1OfVec2d::Array1()
{
    ::TColgp_Array1OfVec2d* _result = new ::TColgp_Array1OfVec2d();
    *_result = (::TColgp_Array1OfVec2d)((::TColgp_HArray1OfVec2d*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfVec2d(_result);
}

RDC::OCC::TColgp_Array1OfVec2d^ RDC::OCC::TColgp_HArray1OfVec2d::ChangeArray1()
{
    ::TColgp_Array1OfVec2d* _result = new ::TColgp_Array1OfVec2d();
    *_result = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfVec2d(_result);
}

void RDC::OCC::TColgp_HArray1OfVec2d::Init(RDC::OCC::Vec2d theValue)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theValue = &theValue;
    ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Init(*(gp_Vec2d*)pp_theValue);
}

int RDC::OCC::TColgp_HArray1OfVec2d::Size()
{
    int _result = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfVec2d::Length()
{
    int _result = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_HArray1OfVec2d::IsEmpty()
{
    bool _result = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfVec2d::Lower()
{
    int _result = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfVec2d::Upper()
{
    int _result = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_HArray1OfVec2d^ RDC::OCC::TColgp_HArray1OfVec2d::Assign(RDC::OCC::TColgp_HArray1OfVec2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray1OfVec2d^ RDC::OCC::TColgp_HArray1OfVec2d::Move(RDC::OCC::TColgp_HArray1OfVec2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray1OfVec2d::First()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->First();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray1OfVec2d::ChangeFirst()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray1OfVec2d::Last()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Last();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray1OfVec2d::ChangeLast()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray1OfVec2d::Value(int theIndex)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray1OfVec2d::ChangeValue(int theIndex)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::TColgp_HArray1OfVec2d::SetValue(int theIndex, RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_HArray1OfVec2d*)_NativeInstance)->SetValue(theIndex, *(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_HArray1OfVec2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray1OfVec2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray1OfVec2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray1OfVec2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_HArray1OfVec2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_HArray1OfVec2d::IsDeletable()
{
    bool _result = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray1OfVec2d^ RDC::OCC::TColgp_HArray1OfVec2d::CreateDowncasted(::TColgp_HArray1OfVec2d* instance)
{
    return gcnew RDC::OCC::TColgp_HArray1OfVec2d( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Vec2d>^ RDC::OCC::TColgp_HArray1OfVec2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HArray1OfVec2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfVec2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfXY
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray1OfXY::TColgp_HArray1OfXY()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfXY();
}

RDC::OCC::TColgp_HArray1OfXY::TColgp_HArray1OfXY(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfXY(theLower, theUpper);
}

RDC::OCC::TColgp_HArray1OfXY::TColgp_HArray1OfXY(int theLower, int theUpper, RDC::OCC::XY theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XY> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray1OfXY(theLower, theUpper, *(gp_XY*)pp_theValue);
}

RDC::OCC::TColgp_HArray1OfXY::TColgp_HArray1OfXY(RDC::OCC::XY theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XY> pp_theBegin = &theBegin;
    NativeInstance = new ::TColgp_HArray1OfXY(*(gp_XY*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColgp_HArray1OfXY::TColgp_HArray1OfXY(RDC::OCC::TColgp_Array1OfXY^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfXY(*(::TColgp_Array1OfXY*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array1OfXY^ RDC::OCC::TColgp_HArray1OfXY::Array1()
{
    ::TColgp_Array1OfXY* _result = new ::TColgp_Array1OfXY();
    *_result = (::TColgp_Array1OfXY)((::TColgp_HArray1OfXY*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfXY(_result);
}

RDC::OCC::TColgp_Array1OfXY^ RDC::OCC::TColgp_HArray1OfXY::ChangeArray1()
{
    ::TColgp_Array1OfXY* _result = new ::TColgp_Array1OfXY();
    *_result = ((::TColgp_HArray1OfXY*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfXY(_result);
}

void RDC::OCC::TColgp_HArray1OfXY::Init(RDC::OCC::XY theValue)
{
    pin_ptr<RDC::OCC::XY> pp_theValue = &theValue;
    ((::TColgp_HArray1OfXY*)_NativeInstance)->Init(*(gp_XY*)pp_theValue);
}

int RDC::OCC::TColgp_HArray1OfXY::Size()
{
    int _result = ((::TColgp_HArray1OfXY*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfXY::Length()
{
    int _result = ((::TColgp_HArray1OfXY*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_HArray1OfXY::IsEmpty()
{
    bool _result = ((::TColgp_HArray1OfXY*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfXY::Lower()
{
    int _result = ((::TColgp_HArray1OfXY*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfXY::Upper()
{
    int _result = ((::TColgp_HArray1OfXY*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_HArray1OfXY^ RDC::OCC::TColgp_HArray1OfXY::Assign(RDC::OCC::TColgp_HArray1OfXY^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray1OfXY^ RDC::OCC::TColgp_HArray1OfXY::Move(RDC::OCC::TColgp_HArray1OfXY^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::XY RDC::OCC::TColgp_HArray1OfXY::First()
{
    ::gp_XY _nativeResult = ((::TColgp_HArray1OfXY*)_NativeInstance)->First();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HArray1OfXY::ChangeFirst()
{
    ::gp_XY _nativeResult = ((::TColgp_HArray1OfXY*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HArray1OfXY::Last()
{
    ::gp_XY _nativeResult = ((::TColgp_HArray1OfXY*)_NativeInstance)->Last();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HArray1OfXY::ChangeLast()
{
    ::gp_XY _nativeResult = ((::TColgp_HArray1OfXY*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HArray1OfXY::Value(int theIndex)
{
    ::gp_XY _nativeResult = ((::TColgp_HArray1OfXY*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HArray1OfXY::ChangeValue(int theIndex)
{
    ::gp_XY _nativeResult = ((::TColgp_HArray1OfXY*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::TColgp_HArray1OfXY::SetValue(int theIndex, RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_HArray1OfXY*)_NativeInstance)->SetValue(theIndex, *(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_HArray1OfXY::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray1OfXY*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray1OfXY::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray1OfXY*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_HArray1OfXY::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_HArray1OfXY*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_HArray1OfXY::IsDeletable()
{
    bool _result = ((::TColgp_HArray1OfXY*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray1OfXY^ RDC::OCC::TColgp_HArray1OfXY::CreateDowncasted(::TColgp_HArray1OfXY* instance)
{
    return gcnew RDC::OCC::TColgp_HArray1OfXY( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::XY>^ RDC::OCC::TColgp_HArray1OfXY::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::XY>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HArray1OfXY::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::XY>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfXY::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfXYZ
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray1OfXYZ::TColgp_HArray1OfXYZ()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfXYZ();
}

RDC::OCC::TColgp_HArray1OfXYZ::TColgp_HArray1OfXYZ(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfXYZ(theLower, theUpper);
}

RDC::OCC::TColgp_HArray1OfXYZ::TColgp_HArray1OfXYZ(int theLower, int theUpper, RDC::OCC::XYZ theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XYZ> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray1OfXYZ(theLower, theUpper, *(gp_XYZ*)pp_theValue);
}

RDC::OCC::TColgp_HArray1OfXYZ::TColgp_HArray1OfXYZ(RDC::OCC::XYZ theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XYZ> pp_theBegin = &theBegin;
    NativeInstance = new ::TColgp_HArray1OfXYZ(*(gp_XYZ*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColgp_HArray1OfXYZ::TColgp_HArray1OfXYZ(RDC::OCC::TColgp_Array1OfXYZ^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray1OfXYZ(*(::TColgp_Array1OfXYZ*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array1OfXYZ^ RDC::OCC::TColgp_HArray1OfXYZ::Array1()
{
    ::TColgp_Array1OfXYZ* _result = new ::TColgp_Array1OfXYZ();
    *_result = (::TColgp_Array1OfXYZ)((::TColgp_HArray1OfXYZ*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfXYZ(_result);
}

RDC::OCC::TColgp_Array1OfXYZ^ RDC::OCC::TColgp_HArray1OfXYZ::ChangeArray1()
{
    ::TColgp_Array1OfXYZ* _result = new ::TColgp_Array1OfXYZ();
    *_result = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfXYZ(_result);
}

void RDC::OCC::TColgp_HArray1OfXYZ::Init(RDC::OCC::XYZ theValue)
{
    pin_ptr<RDC::OCC::XYZ> pp_theValue = &theValue;
    ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Init(*(gp_XYZ*)pp_theValue);
}

int RDC::OCC::TColgp_HArray1OfXYZ::Size()
{
    int _result = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfXYZ::Length()
{
    int _result = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::TColgp_HArray1OfXYZ::IsEmpty()
{
    bool _result = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfXYZ::Lower()
{
    int _result = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray1OfXYZ::Upper()
{
    int _result = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::TColgp_HArray1OfXYZ^ RDC::OCC::TColgp_HArray1OfXYZ::Assign(RDC::OCC::TColgp_HArray1OfXYZ^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray1OfXYZ^ RDC::OCC::TColgp_HArray1OfXYZ::Move(RDC::OCC::TColgp_HArray1OfXYZ^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray1OfXYZ::First()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->First();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray1OfXYZ::ChangeFirst()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray1OfXYZ::Last()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Last();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray1OfXYZ::ChangeLast()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray1OfXYZ::Value(int theIndex)
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray1OfXYZ::ChangeValue(int theIndex)
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::XYZ(_nativeResult);
}

void RDC::OCC::TColgp_HArray1OfXYZ::SetValue(int theIndex, RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_HArray1OfXYZ*)_NativeInstance)->SetValue(theIndex, *(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_HArray1OfXYZ::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray1OfXYZ*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray1OfXYZ::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray1OfXYZ*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColgp_HArray1OfXYZ::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColgp_HArray1OfXYZ::IsDeletable()
{
    bool _result = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray1OfXYZ^ RDC::OCC::TColgp_HArray1OfXYZ::CreateDowncasted(::TColgp_HArray1OfXYZ* instance)
{
    return gcnew RDC::OCC::TColgp_HArray1OfXYZ( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::XYZ>^ RDC::OCC::TColgp_HArray1OfXYZ::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::XYZ>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HArray1OfXYZ::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::XYZ>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfXYZ::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfCirc2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray2OfCirc2d::TColgp_HArray2OfCirc2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfCirc2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColgp_HArray2OfCirc2d::TColgp_HArray2OfCirc2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::gp_Circ2d^ theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfCirc2d(theRowLow, theRowUpp, theColLow, theColUpp, *(::gp_Circ2d*)theValue->NativeInstance);
}

RDC::OCC::TColgp_HArray2OfCirc2d::TColgp_HArray2OfCirc2d(RDC::OCC::TColgp_Array2OfCirc2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfCirc2d(*(::TColgp_Array2OfCirc2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array2OfCirc2d^ RDC::OCC::TColgp_HArray2OfCirc2d::Array2()
{
    ::TColgp_Array2OfCirc2d* _result = new ::TColgp_Array2OfCirc2d();
    *_result = (::TColgp_Array2OfCirc2d)((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfCirc2d(_result);
}

RDC::OCC::TColgp_Array2OfCirc2d^ RDC::OCC::TColgp_HArray2OfCirc2d::ChangeArray2()
{
    ::TColgp_Array2OfCirc2d* _result = new ::TColgp_Array2OfCirc2d();
    *_result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfCirc2d(_result);
}

int RDC::OCC::TColgp_HArray2OfCirc2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfCirc2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfCirc2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::Size()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::Length()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::NbRows()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::NbColumns()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::RowLength()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::ColLength()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::LowerRow()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::UpperRow()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::LowerCol()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::UpperCol()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_HArray2OfCirc2d^ RDC::OCC::TColgp_HArray2OfCirc2d::Assign(RDC::OCC::TColgp_HArray2OfCirc2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray2OfCirc2d^ RDC::OCC::TColgp_HArray2OfCirc2d::Move(RDC::OCC::TColgp_HArray2OfCirc2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray2OfCirc2d::Value(int theRow, int theCol)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray2OfCirc2d::ChangeValue(int theRow, int theCol)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::TColgp_HArray2OfCirc2d::SetValue(int theRow, int theCol, RDC::OCC::gp_Circ2d^ theItem)
{
    ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->SetValue(theRow, theCol, *(::gp_Circ2d*)theItem->NativeInstance);
}

void RDC::OCC::TColgp_HArray2OfCirc2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_HArray2OfCirc2d::Init(RDC::OCC::gp_Circ2d^ theValue)
{
    ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Init(*(::gp_Circ2d*)theValue->NativeInstance);
}

bool RDC::OCC::TColgp_HArray2OfCirc2d::IsEmpty()
{
    bool _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::Lower()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfCirc2d::Upper()
{
    int _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray2OfCirc2d::First()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_HArray2OfCirc2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray2OfCirc2d::ChangeFirst()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray2OfCirc2d::Last()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::TColgp_HArray2OfCirc2d::ChangeLast()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

void RDC::OCC::TColgp_HArray2OfCirc2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray2OfCirc2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_HArray2OfCirc2d::IsDeletable()
{
    bool _result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray2OfCirc2d^ RDC::OCC::TColgp_HArray2OfCirc2d::CreateDowncasted(::TColgp_HArray2OfCirc2d* instance)
{
    return gcnew RDC::OCC::TColgp_HArray2OfCirc2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfCirc2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfDir
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray2OfDir::TColgp_HArray2OfDir(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfDir(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColgp_HArray2OfDir::TColgp_HArray2OfDir(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::Dir theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray2OfDir(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Dir*)pp_theValue);
}

RDC::OCC::TColgp_HArray2OfDir::TColgp_HArray2OfDir(RDC::OCC::TColgp_Array2OfDir^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfDir(*(::TColgp_Array2OfDir*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array2OfDir^ RDC::OCC::TColgp_HArray2OfDir::Array2()
{
    ::TColgp_Array2OfDir* _result = new ::TColgp_Array2OfDir();
    *_result = (::TColgp_Array2OfDir)((::TColgp_HArray2OfDir*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfDir(_result);
}

RDC::OCC::TColgp_Array2OfDir^ RDC::OCC::TColgp_HArray2OfDir::ChangeArray2()
{
    ::TColgp_Array2OfDir* _result = new ::TColgp_Array2OfDir();
    *_result = ((::TColgp_HArray2OfDir*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfDir(_result);
}

int RDC::OCC::TColgp_HArray2OfDir::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfDir::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfDir::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::Size()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::Length()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::NbRows()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::NbColumns()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::RowLength()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::ColLength()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::LowerRow()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::UpperRow()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::LowerCol()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::UpperCol()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_HArray2OfDir^ RDC::OCC::TColgp_HArray2OfDir::Assign(RDC::OCC::TColgp_HArray2OfDir^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray2OfDir^ RDC::OCC::TColgp_HArray2OfDir::Move(RDC::OCC::TColgp_HArray2OfDir^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray2OfDir::Value(int theRow, int theCol)
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray2OfDir*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray2OfDir::ChangeValue(int theRow, int theCol)
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray2OfDir*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfDir::SetValue(int theRow, int theCol, RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_HArray2OfDir*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_HArray2OfDir::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_HArray2OfDir*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_HArray2OfDir::Init(RDC::OCC::Dir theValue)
{
    pin_ptr<RDC::OCC::Dir> pp_theValue = &theValue;
    ((::TColgp_HArray2OfDir*)_NativeInstance)->Init(*(gp_Dir*)pp_theValue);
}

bool RDC::OCC::TColgp_HArray2OfDir::IsEmpty()
{
    bool _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::Lower()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir::Upper()
{
    int _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray2OfDir::First()
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray2OfDir*)_NativeInstance)->First();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray2OfDir::ChangeFirst()
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray2OfDir*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray2OfDir::Last()
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray2OfDir*)_NativeInstance)->Last();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HArray2OfDir::ChangeLast()
{
    ::gp_Dir _nativeResult = ((::TColgp_HArray2OfDir*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfDir::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray2OfDir*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray2OfDir::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray2OfDir*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_HArray2OfDir::IsDeletable()
{
    bool _result = ((::TColgp_HArray2OfDir*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray2OfDir^ RDC::OCC::TColgp_HArray2OfDir::CreateDowncasted(::TColgp_HArray2OfDir* instance)
{
    return gcnew RDC::OCC::TColgp_HArray2OfDir( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfDir::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfDir2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray2OfDir2d::TColgp_HArray2OfDir2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfDir2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColgp_HArray2OfDir2d::TColgp_HArray2OfDir2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::Dir2d theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray2OfDir2d(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Dir2d*)pp_theValue);
}

RDC::OCC::TColgp_HArray2OfDir2d::TColgp_HArray2OfDir2d(RDC::OCC::TColgp_Array2OfDir2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfDir2d(*(::TColgp_Array2OfDir2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array2OfDir2d^ RDC::OCC::TColgp_HArray2OfDir2d::Array2()
{
    ::TColgp_Array2OfDir2d* _result = new ::TColgp_Array2OfDir2d();
    *_result = (::TColgp_Array2OfDir2d)((::TColgp_HArray2OfDir2d*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfDir2d(_result);
}

RDC::OCC::TColgp_Array2OfDir2d^ RDC::OCC::TColgp_HArray2OfDir2d::ChangeArray2()
{
    ::TColgp_Array2OfDir2d* _result = new ::TColgp_Array2OfDir2d();
    *_result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfDir2d(_result);
}

int RDC::OCC::TColgp_HArray2OfDir2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfDir2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfDir2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::Size()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::Length()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::NbRows()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::NbColumns()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::RowLength()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::ColLength()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::LowerRow()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::UpperRow()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::LowerCol()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::UpperCol()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_HArray2OfDir2d^ RDC::OCC::TColgp_HArray2OfDir2d::Assign(RDC::OCC::TColgp_HArray2OfDir2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray2OfDir2d^ RDC::OCC::TColgp_HArray2OfDir2d::Move(RDC::OCC::TColgp_HArray2OfDir2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray2OfDir2d::Value(int theRow, int theCol)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray2OfDir2d::ChangeValue(int theRow, int theCol)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Dir2d(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfDir2d::SetValue(int theRow, int theCol, RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_HArray2OfDir2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_HArray2OfDir2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_HArray2OfDir2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_HArray2OfDir2d::Init(RDC::OCC::Dir2d theValue)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theValue = &theValue;
    ((::TColgp_HArray2OfDir2d*)_NativeInstance)->Init(*(gp_Dir2d*)pp_theValue);
}

bool RDC::OCC::TColgp_HArray2OfDir2d::IsEmpty()
{
    bool _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::Lower()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfDir2d::Upper()
{
    int _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray2OfDir2d::First()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->First();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray2OfDir2d::ChangeFirst()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray2OfDir2d::Last()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->Last();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HArray2OfDir2d::ChangeLast()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir2d(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfDir2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray2OfDir2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray2OfDir2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray2OfDir2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_HArray2OfDir2d::IsDeletable()
{
    bool _result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray2OfDir2d^ RDC::OCC::TColgp_HArray2OfDir2d::CreateDowncasted(::TColgp_HArray2OfDir2d* instance)
{
    return gcnew RDC::OCC::TColgp_HArray2OfDir2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfDir2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfLin2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray2OfLin2d::TColgp_HArray2OfLin2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfLin2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColgp_HArray2OfLin2d::TColgp_HArray2OfLin2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::gp_Lin2d^ theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfLin2d(theRowLow, theRowUpp, theColLow, theColUpp, *(::gp_Lin2d*)theValue->NativeInstance);
}

RDC::OCC::TColgp_HArray2OfLin2d::TColgp_HArray2OfLin2d(RDC::OCC::TColgp_Array2OfLin2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfLin2d(*(::TColgp_Array2OfLin2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array2OfLin2d^ RDC::OCC::TColgp_HArray2OfLin2d::Array2()
{
    ::TColgp_Array2OfLin2d* _result = new ::TColgp_Array2OfLin2d();
    *_result = (::TColgp_Array2OfLin2d)((::TColgp_HArray2OfLin2d*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfLin2d(_result);
}

RDC::OCC::TColgp_Array2OfLin2d^ RDC::OCC::TColgp_HArray2OfLin2d::ChangeArray2()
{
    ::TColgp_Array2OfLin2d* _result = new ::TColgp_Array2OfLin2d();
    *_result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfLin2d(_result);
}

int RDC::OCC::TColgp_HArray2OfLin2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfLin2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfLin2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::Size()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::Length()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::NbRows()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::NbColumns()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::RowLength()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::ColLength()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::LowerRow()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::UpperRow()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::LowerCol()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::UpperCol()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_HArray2OfLin2d^ RDC::OCC::TColgp_HArray2OfLin2d::Assign(RDC::OCC::TColgp_HArray2OfLin2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray2OfLin2d^ RDC::OCC::TColgp_HArray2OfLin2d::Move(RDC::OCC::TColgp_HArray2OfLin2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray2OfLin2d::Value(int theRow, int theCol)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_HArray2OfLin2d*)_NativeInstance)->Value(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray2OfLin2d::ChangeValue(int theRow, int theCol)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::TColgp_HArray2OfLin2d::SetValue(int theRow, int theCol, RDC::OCC::gp_Lin2d^ theItem)
{
    ((::TColgp_HArray2OfLin2d*)_NativeInstance)->SetValue(theRow, theCol, *(::gp_Lin2d*)theItem->NativeInstance);
}

void RDC::OCC::TColgp_HArray2OfLin2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_HArray2OfLin2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_HArray2OfLin2d::Init(RDC::OCC::gp_Lin2d^ theValue)
{
    ((::TColgp_HArray2OfLin2d*)_NativeInstance)->Init(*(::gp_Lin2d*)theValue->NativeInstance);
}

bool RDC::OCC::TColgp_HArray2OfLin2d::IsEmpty()
{
    bool _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::Lower()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfLin2d::Upper()
{
    int _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray2OfLin2d::First()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_HArray2OfLin2d*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray2OfLin2d::ChangeFirst()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray2OfLin2d::Last()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::TColgp_HArray2OfLin2d*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::TColgp_HArray2OfLin2d::ChangeLast()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::TColgp_HArray2OfLin2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray2OfLin2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray2OfLin2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray2OfLin2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_HArray2OfLin2d::IsDeletable()
{
    bool _result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray2OfLin2d^ RDC::OCC::TColgp_HArray2OfLin2d::CreateDowncasted(::TColgp_HArray2OfLin2d* instance)
{
    return gcnew RDC::OCC::TColgp_HArray2OfLin2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfLin2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfPnt
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray2OfPnt::TColgp_HArray2OfPnt(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfPnt(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColgp_HArray2OfPnt::TColgp_HArray2OfPnt(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::Pnt theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray2OfPnt(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Pnt*)pp_theValue);
}

RDC::OCC::TColgp_HArray2OfPnt::TColgp_HArray2OfPnt(RDC::OCC::TColgp_Array2OfPnt^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfPnt(*(::TColgp_Array2OfPnt*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array2OfPnt^ RDC::OCC::TColgp_HArray2OfPnt::Array2()
{
    ::TColgp_Array2OfPnt* _result = new ::TColgp_Array2OfPnt();
    *_result = (::TColgp_Array2OfPnt)((::TColgp_HArray2OfPnt*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfPnt(_result);
}

RDC::OCC::TColgp_Array2OfPnt^ RDC::OCC::TColgp_HArray2OfPnt::ChangeArray2()
{
    ::TColgp_Array2OfPnt* _result = new ::TColgp_Array2OfPnt();
    *_result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfPnt(_result);
}

int RDC::OCC::TColgp_HArray2OfPnt::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfPnt::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfPnt::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::Size()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::Length()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::NbRows()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::NbColumns()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::RowLength()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::ColLength()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::LowerRow()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::UpperRow()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::LowerCol()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::UpperCol()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_HArray2OfPnt^ RDC::OCC::TColgp_HArray2OfPnt::Assign(RDC::OCC::TColgp_HArray2OfPnt^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray2OfPnt^ RDC::OCC::TColgp_HArray2OfPnt::Move(RDC::OCC::TColgp_HArray2OfPnt^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray2OfPnt::Value(int theRow, int theCol)
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray2OfPnt*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray2OfPnt::ChangeValue(int theRow, int theCol)
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray2OfPnt*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfPnt::SetValue(int theRow, int theCol, RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_HArray2OfPnt*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_HArray2OfPnt::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_HArray2OfPnt*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_HArray2OfPnt::Init(RDC::OCC::Pnt theValue)
{
    pin_ptr<RDC::OCC::Pnt> pp_theValue = &theValue;
    ((::TColgp_HArray2OfPnt*)_NativeInstance)->Init(*(gp_Pnt*)pp_theValue);
}

bool RDC::OCC::TColgp_HArray2OfPnt::IsEmpty()
{
    bool _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::Lower()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt::Upper()
{
    int _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray2OfPnt::First()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray2OfPnt*)_NativeInstance)->First();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray2OfPnt::ChangeFirst()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray2OfPnt*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray2OfPnt::Last()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray2OfPnt*)_NativeInstance)->Last();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HArray2OfPnt::ChangeLast()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HArray2OfPnt*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfPnt::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray2OfPnt*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray2OfPnt::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray2OfPnt*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_HArray2OfPnt::IsDeletable()
{
    bool _result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray2OfPnt^ RDC::OCC::TColgp_HArray2OfPnt::CreateDowncasted(::TColgp_HArray2OfPnt* instance)
{
    return gcnew RDC::OCC::TColgp_HArray2OfPnt( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfPnt::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfPnt2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray2OfPnt2d::TColgp_HArray2OfPnt2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfPnt2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColgp_HArray2OfPnt2d::TColgp_HArray2OfPnt2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::Pnt2d theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray2OfPnt2d(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Pnt2d*)pp_theValue);
}

RDC::OCC::TColgp_HArray2OfPnt2d::TColgp_HArray2OfPnt2d(RDC::OCC::TColgp_Array2OfPnt2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfPnt2d(*(::TColgp_Array2OfPnt2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array2OfPnt2d^ RDC::OCC::TColgp_HArray2OfPnt2d::Array2()
{
    ::TColgp_Array2OfPnt2d* _result = new ::TColgp_Array2OfPnt2d();
    *_result = (::TColgp_Array2OfPnt2d)((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfPnt2d(_result);
}

RDC::OCC::TColgp_Array2OfPnt2d^ RDC::OCC::TColgp_HArray2OfPnt2d::ChangeArray2()
{
    ::TColgp_Array2OfPnt2d* _result = new ::TColgp_Array2OfPnt2d();
    *_result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfPnt2d(_result);
}

int RDC::OCC::TColgp_HArray2OfPnt2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfPnt2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfPnt2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::Size()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::Length()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::NbRows()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::NbColumns()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::RowLength()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::ColLength()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::LowerRow()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::UpperRow()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::LowerCol()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::UpperCol()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_HArray2OfPnt2d^ RDC::OCC::TColgp_HArray2OfPnt2d::Assign(RDC::OCC::TColgp_HArray2OfPnt2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray2OfPnt2d^ RDC::OCC::TColgp_HArray2OfPnt2d::Move(RDC::OCC::TColgp_HArray2OfPnt2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray2OfPnt2d::Value(int theRow, int theCol)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray2OfPnt2d::ChangeValue(int theRow, int theCol)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfPnt2d::SetValue(int theRow, int theCol, RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_HArray2OfPnt2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_HArray2OfPnt2d::Init(RDC::OCC::Pnt2d theValue)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theValue = &theValue;
    ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_theValue);
}

bool RDC::OCC::TColgp_HArray2OfPnt2d::IsEmpty()
{
    bool _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::Lower()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfPnt2d::Upper()
{
    int _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray2OfPnt2d::First()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->First();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray2OfPnt2d::ChangeFirst()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray2OfPnt2d::Last()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Last();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HArray2OfPnt2d::ChangeLast()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfPnt2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray2OfPnt2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_HArray2OfPnt2d::IsDeletable()
{
    bool _result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray2OfPnt2d^ RDC::OCC::TColgp_HArray2OfPnt2d::CreateDowncasted(::TColgp_HArray2OfPnt2d* instance)
{
    return gcnew RDC::OCC::TColgp_HArray2OfPnt2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfPnt2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfVec
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray2OfVec::TColgp_HArray2OfVec(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfVec(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColgp_HArray2OfVec::TColgp_HArray2OfVec(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::Vec theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray2OfVec(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Vec*)pp_theValue);
}

RDC::OCC::TColgp_HArray2OfVec::TColgp_HArray2OfVec(RDC::OCC::TColgp_Array2OfVec^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfVec(*(::TColgp_Array2OfVec*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array2OfVec^ RDC::OCC::TColgp_HArray2OfVec::Array2()
{
    ::TColgp_Array2OfVec* _result = new ::TColgp_Array2OfVec();
    *_result = (::TColgp_Array2OfVec)((::TColgp_HArray2OfVec*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfVec(_result);
}

RDC::OCC::TColgp_Array2OfVec^ RDC::OCC::TColgp_HArray2OfVec::ChangeArray2()
{
    ::TColgp_Array2OfVec* _result = new ::TColgp_Array2OfVec();
    *_result = ((::TColgp_HArray2OfVec*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfVec(_result);
}

int RDC::OCC::TColgp_HArray2OfVec::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfVec::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfVec::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::Size()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::Length()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::NbRows()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::NbColumns()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::RowLength()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::ColLength()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::LowerRow()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::UpperRow()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::LowerCol()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::UpperCol()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_HArray2OfVec^ RDC::OCC::TColgp_HArray2OfVec::Assign(RDC::OCC::TColgp_HArray2OfVec^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray2OfVec^ RDC::OCC::TColgp_HArray2OfVec::Move(RDC::OCC::TColgp_HArray2OfVec^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray2OfVec::Value(int theRow, int theCol)
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray2OfVec*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray2OfVec::ChangeValue(int theRow, int theCol)
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray2OfVec*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfVec::SetValue(int theRow, int theCol, RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_HArray2OfVec*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_HArray2OfVec::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_HArray2OfVec*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_HArray2OfVec::Init(RDC::OCC::Vec theValue)
{
    pin_ptr<RDC::OCC::Vec> pp_theValue = &theValue;
    ((::TColgp_HArray2OfVec*)_NativeInstance)->Init(*(gp_Vec*)pp_theValue);
}

bool RDC::OCC::TColgp_HArray2OfVec::IsEmpty()
{
    bool _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::Lower()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec::Upper()
{
    int _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray2OfVec::First()
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray2OfVec*)_NativeInstance)->First();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray2OfVec::ChangeFirst()
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray2OfVec*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray2OfVec::Last()
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray2OfVec*)_NativeInstance)->Last();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HArray2OfVec::ChangeLast()
{
    ::gp_Vec _nativeResult = ((::TColgp_HArray2OfVec*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfVec::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray2OfVec*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray2OfVec::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray2OfVec*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_HArray2OfVec::IsDeletable()
{
    bool _result = ((::TColgp_HArray2OfVec*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray2OfVec^ RDC::OCC::TColgp_HArray2OfVec::CreateDowncasted(::TColgp_HArray2OfVec* instance)
{
    return gcnew RDC::OCC::TColgp_HArray2OfVec( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfVec::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfVec2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray2OfVec2d::TColgp_HArray2OfVec2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfVec2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColgp_HArray2OfVec2d::TColgp_HArray2OfVec2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::Vec2d theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray2OfVec2d(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Vec2d*)pp_theValue);
}

RDC::OCC::TColgp_HArray2OfVec2d::TColgp_HArray2OfVec2d(RDC::OCC::TColgp_Array2OfVec2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfVec2d(*(::TColgp_Array2OfVec2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array2OfVec2d^ RDC::OCC::TColgp_HArray2OfVec2d::Array2()
{
    ::TColgp_Array2OfVec2d* _result = new ::TColgp_Array2OfVec2d();
    *_result = (::TColgp_Array2OfVec2d)((::TColgp_HArray2OfVec2d*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfVec2d(_result);
}

RDC::OCC::TColgp_Array2OfVec2d^ RDC::OCC::TColgp_HArray2OfVec2d::ChangeArray2()
{
    ::TColgp_Array2OfVec2d* _result = new ::TColgp_Array2OfVec2d();
    *_result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfVec2d(_result);
}

int RDC::OCC::TColgp_HArray2OfVec2d::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfVec2d::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfVec2d::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::Size()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::Length()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::NbRows()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::NbColumns()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::RowLength()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::ColLength()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::LowerRow()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::UpperRow()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::LowerCol()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::UpperCol()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_HArray2OfVec2d^ RDC::OCC::TColgp_HArray2OfVec2d::Assign(RDC::OCC::TColgp_HArray2OfVec2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray2OfVec2d^ RDC::OCC::TColgp_HArray2OfVec2d::Move(RDC::OCC::TColgp_HArray2OfVec2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray2OfVec2d::Value(int theRow, int theCol)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray2OfVec2d::ChangeValue(int theRow, int theCol)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfVec2d::SetValue(int theRow, int theCol, RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_HArray2OfVec2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_HArray2OfVec2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_HArray2OfVec2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_HArray2OfVec2d::Init(RDC::OCC::Vec2d theValue)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theValue = &theValue;
    ((::TColgp_HArray2OfVec2d*)_NativeInstance)->Init(*(gp_Vec2d*)pp_theValue);
}

bool RDC::OCC::TColgp_HArray2OfVec2d::IsEmpty()
{
    bool _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::Lower()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfVec2d::Upper()
{
    int _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray2OfVec2d::First()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->First();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray2OfVec2d::ChangeFirst()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray2OfVec2d::Last()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->Last();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HArray2OfVec2d::ChangeLast()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfVec2d::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray2OfVec2d*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray2OfVec2d::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray2OfVec2d*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_HArray2OfVec2d::IsDeletable()
{
    bool _result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray2OfVec2d^ RDC::OCC::TColgp_HArray2OfVec2d::CreateDowncasted(::TColgp_HArray2OfVec2d* instance)
{
    return gcnew RDC::OCC::TColgp_HArray2OfVec2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfVec2d::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfXY
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray2OfXY::TColgp_HArray2OfXY(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfXY(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColgp_HArray2OfXY::TColgp_HArray2OfXY(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::XY theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XY> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray2OfXY(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_XY*)pp_theValue);
}

RDC::OCC::TColgp_HArray2OfXY::TColgp_HArray2OfXY(RDC::OCC::TColgp_Array2OfXY^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfXY(*(::TColgp_Array2OfXY*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array2OfXY^ RDC::OCC::TColgp_HArray2OfXY::Array2()
{
    ::TColgp_Array2OfXY* _result = new ::TColgp_Array2OfXY();
    *_result = (::TColgp_Array2OfXY)((::TColgp_HArray2OfXY*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfXY(_result);
}

RDC::OCC::TColgp_Array2OfXY^ RDC::OCC::TColgp_HArray2OfXY::ChangeArray2()
{
    ::TColgp_Array2OfXY* _result = new ::TColgp_Array2OfXY();
    *_result = ((::TColgp_HArray2OfXY*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfXY(_result);
}

int RDC::OCC::TColgp_HArray2OfXY::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfXY::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfXY::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::Size()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::Length()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::NbRows()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::NbColumns()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::RowLength()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::ColLength()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::LowerRow()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::UpperRow()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::LowerCol()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::UpperCol()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_HArray2OfXY^ RDC::OCC::TColgp_HArray2OfXY::Assign(RDC::OCC::TColgp_HArray2OfXY^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray2OfXY^ RDC::OCC::TColgp_HArray2OfXY::Move(RDC::OCC::TColgp_HArray2OfXY^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::XY RDC::OCC::TColgp_HArray2OfXY::Value(int theRow, int theCol)
{
    ::gp_XY _nativeResult = ((::TColgp_HArray2OfXY*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HArray2OfXY::ChangeValue(int theRow, int theCol)
{
    ::gp_XY _nativeResult = ((::TColgp_HArray2OfXY*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfXY::SetValue(int theRow, int theCol, RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_HArray2OfXY*)_NativeInstance)->SetValue(theRow, theCol, *(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_HArray2OfXY::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_HArray2OfXY*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_HArray2OfXY::Init(RDC::OCC::XY theValue)
{
    pin_ptr<RDC::OCC::XY> pp_theValue = &theValue;
    ((::TColgp_HArray2OfXY*)_NativeInstance)->Init(*(gp_XY*)pp_theValue);
}

bool RDC::OCC::TColgp_HArray2OfXY::IsEmpty()
{
    bool _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::Lower()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXY::Upper()
{
    int _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::XY RDC::OCC::TColgp_HArray2OfXY::First()
{
    ::gp_XY _nativeResult = ((::TColgp_HArray2OfXY*)_NativeInstance)->First();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HArray2OfXY::ChangeFirst()
{
    ::gp_XY _nativeResult = ((::TColgp_HArray2OfXY*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HArray2OfXY::Last()
{
    ::gp_XY _nativeResult = ((::TColgp_HArray2OfXY*)_NativeInstance)->Last();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HArray2OfXY::ChangeLast()
{
    ::gp_XY _nativeResult = ((::TColgp_HArray2OfXY*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfXY::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray2OfXY*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray2OfXY::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray2OfXY*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_HArray2OfXY::IsDeletable()
{
    bool _result = ((::TColgp_HArray2OfXY*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray2OfXY^ RDC::OCC::TColgp_HArray2OfXY::CreateDowncasted(::TColgp_HArray2OfXY* instance)
{
    return gcnew RDC::OCC::TColgp_HArray2OfXY( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfXY::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfXYZ
//---------------------------------------------------------------------

RDC::OCC::TColgp_HArray2OfXYZ::TColgp_HArray2OfXYZ(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfXYZ(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColgp_HArray2OfXYZ::TColgp_HArray2OfXYZ(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::XYZ theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XYZ> pp_theValue = &theValue;
    NativeInstance = new ::TColgp_HArray2OfXYZ(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_XYZ*)pp_theValue);
}

RDC::OCC::TColgp_HArray2OfXYZ::TColgp_HArray2OfXYZ(RDC::OCC::TColgp_Array2OfXYZ^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HArray2OfXYZ(*(::TColgp_Array2OfXYZ*)theOther->NativeInstance);
}

RDC::OCC::TColgp_Array2OfXYZ^ RDC::OCC::TColgp_HArray2OfXYZ::Array2()
{
    ::TColgp_Array2OfXYZ* _result = new ::TColgp_Array2OfXYZ();
    *_result = (::TColgp_Array2OfXYZ)((::TColgp_HArray2OfXYZ*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfXYZ(_result);
}

RDC::OCC::TColgp_Array2OfXYZ^ RDC::OCC::TColgp_HArray2OfXYZ::ChangeArray2()
{
    ::TColgp_Array2OfXYZ* _result = new ::TColgp_Array2OfXYZ();
    *_result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfXYZ(_result);
}

int RDC::OCC::TColgp_HArray2OfXYZ::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfXYZ::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColgp_HArray2OfXYZ::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::Size()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::Length()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::NbRows()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->NbRows();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::NbColumns()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->NbColumns();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::RowLength()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->RowLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::ColLength()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->ColLength();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::LowerRow()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->LowerRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::UpperRow()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->UpperRow();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::LowerCol()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->LowerCol();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::UpperCol()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->UpperCol();
    return _result;
}

RDC::OCC::TColgp_HArray2OfXYZ^ RDC::OCC::TColgp_HArray2OfXYZ::Assign(RDC::OCC::TColgp_HArray2OfXYZ^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TColgp_HArray2OfXYZ^ RDC::OCC::TColgp_HArray2OfXYZ::Move(RDC::OCC::TColgp_HArray2OfXYZ^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray2OfXYZ::Value(int theRow, int theCol)
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->Value(theRow, theCol);
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray2OfXYZ::ChangeValue(int theRow, int theCol)
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->ChangeValue(theRow, theCol);
    return RDC::OCC::XYZ(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfXYZ::SetValue(int theRow, int theCol, RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_HArray2OfXYZ*)_NativeInstance)->SetValue(theRow, theCol, *(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_HArray2OfXYZ::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColgp_HArray2OfXYZ*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColgp_HArray2OfXYZ::Init(RDC::OCC::XYZ theValue)
{
    pin_ptr<RDC::OCC::XYZ> pp_theValue = &theValue;
    ((::TColgp_HArray2OfXYZ*)_NativeInstance)->Init(*(gp_XYZ*)pp_theValue);
}

bool RDC::OCC::TColgp_HArray2OfXYZ::IsEmpty()
{
    bool _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::Lower()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HArray2OfXYZ::Upper()
{
    int _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray2OfXYZ::First()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->First();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray2OfXYZ::ChangeFirst()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray2OfXYZ::Last()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->Last();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HArray2OfXYZ::ChangeLast()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XYZ(_nativeResult);
}

void RDC::OCC::TColgp_HArray2OfXYZ::UpdateLowerBound(int theLower)
{
    ((::TColgp_HArray2OfXYZ*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColgp_HArray2OfXYZ::UpdateUpperBound(int theUpper)
{
    ((::TColgp_HArray2OfXYZ*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColgp_HArray2OfXYZ::IsDeletable()
{
    bool _result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::TColgp_HArray2OfXYZ^ RDC::OCC::TColgp_HArray2OfXYZ::CreateDowncasted(::TColgp_HArray2OfXYZ* instance)
{
    return gcnew RDC::OCC::TColgp_HArray2OfXYZ( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfXYZ::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfDir
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfDir::TColgp_HSequenceOfDir()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfDir();
}

RDC::OCC::TColgp_HSequenceOfDir::TColgp_HSequenceOfDir(RDC::OCC::TColgp_SequenceOfDir^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfDir(*(::TColgp_SequenceOfDir*)theOther->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfDir^ RDC::OCC::TColgp_HSequenceOfDir::Sequence()
{
    ::TColgp_SequenceOfDir* _result = new ::TColgp_SequenceOfDir();
    *_result = (::TColgp_SequenceOfDir)((::TColgp_HSequenceOfDir*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfDir(_result);
}

void RDC::OCC::TColgp_HSequenceOfDir::Append(RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->Append(*(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfDir::Append(RDC::OCC::TColgp_SequenceOfDir^ theSequence)
{
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->Append(*(::TColgp_SequenceOfDir*)theSequence->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfDir^ RDC::OCC::TColgp_HSequenceOfDir::ChangeSequence()
{
    ::TColgp_SequenceOfDir* _result = new ::TColgp_SequenceOfDir();
    *_result = ((::TColgp_HSequenceOfDir*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfDir(_result);
}

int RDC::OCC::TColgp_HSequenceOfDir::Size()
{
    int _result = ((::TColgp_HSequenceOfDir*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfDir::Length()
{
    int _result = ((::TColgp_HSequenceOfDir*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfDir::Lower()
{
    int _result = ((::TColgp_HSequenceOfDir*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfDir::Upper()
{
    int _result = ((::TColgp_HSequenceOfDir*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfDir::IsEmpty()
{
    bool _result = ((::TColgp_HSequenceOfDir*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfDir::Reverse()
{
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_HSequenceOfDir::Exchange(int I, int J)
{
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_HSequenceOfDir::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_HSequenceOfDir::Clear()
{
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_HSequenceOfDir^ RDC::OCC::TColgp_HSequenceOfDir::Assign(RDC::OCC::TColgp_HSequenceOfDir^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColgp_HSequenceOfDir::Remove(RDC::OCC::TColgp_HSequenceOfDir::Iterator^ thePosition)
{
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->Remove(*(::TColgp_HSequenceOfDir::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_HSequenceOfDir::Prepend(RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->Prepend(*(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfDir::InsertBefore(int theIndex, RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->InsertBefore(theIndex, *(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfDir::InsertAfter(RDC::OCC::TColgp_HSequenceOfDir::Iterator^ thePosition, RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->InsertAfter(*(::TColgp_HSequenceOfDir::Iterator*)thePosition->NativeInstance, *(gp_Dir*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfDir::Split(int theIndex, RDC::OCC::TColgp_HSequenceOfDir^ theSeq)
{
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->Split(theIndex, *(::TColgp_HSequenceOfDir*)theSeq->NativeInstance);
}

RDC::OCC::Dir RDC::OCC::TColgp_HSequenceOfDir::First()
{
    ::gp_Dir _nativeResult = ((::TColgp_HSequenceOfDir*)_NativeInstance)->First();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HSequenceOfDir::ChangeFirst()
{
    ::gp_Dir _nativeResult = ((::TColgp_HSequenceOfDir*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HSequenceOfDir::Last()
{
    ::gp_Dir _nativeResult = ((::TColgp_HSequenceOfDir*)_NativeInstance)->Last();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HSequenceOfDir::ChangeLast()
{
    ::gp_Dir _nativeResult = ((::TColgp_HSequenceOfDir*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HSequenceOfDir::Value(int theIndex)
{
    ::gp_Dir _nativeResult = ((::TColgp_HSequenceOfDir*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HSequenceOfDir::ChangeValue(int theIndex)
{
    ::gp_Dir _nativeResult = ((::TColgp_HSequenceOfDir*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::TColgp_HSequenceOfDir::SetValue(int theIndex, RDC::OCC::Dir theItem)
{
    pin_ptr<RDC::OCC::Dir> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfDir*)_NativeInstance)->SetValue(theIndex, *(gp_Dir*)pp_theItem);
}

RDC::OCC::TColgp_HSequenceOfDir^ RDC::OCC::TColgp_HSequenceOfDir::CreateDowncasted(::TColgp_HSequenceOfDir* instance)
{
    return gcnew RDC::OCC::TColgp_HSequenceOfDir( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Dir>^ RDC::OCC::TColgp_HSequenceOfDir::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HSequenceOfDir::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfDir::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfDir::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_HSequenceOfDir::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_HSequenceOfDir::Iterator();
}

bool RDC::OCC::TColgp_HSequenceOfDir::Iterator::More()
{
    bool _result = ((::TColgp_HSequenceOfDir::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfDir::Iterator::Next()
{
    ((::TColgp_HSequenceOfDir::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Dir RDC::OCC::TColgp_HSequenceOfDir::Iterator::Value()
{
    ::gp_Dir _nativeResult = ((::TColgp_HSequenceOfDir::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::TColgp_HSequenceOfDir::Iterator::ChangeValue()
{
    ::gp_Dir _nativeResult = ((::TColgp_HSequenceOfDir::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Dir(_nativeResult);
}

bool RDC::OCC::TColgp_HSequenceOfDir::Iterator::IsEqual(RDC::OCC::TColgp_HSequenceOfDir::Iterator^ theOther)
{
    bool _result = ((::TColgp_HSequenceOfDir::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_HSequenceOfDir::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfDir::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_HSequenceOfDir::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfDir2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfDir2d::TColgp_HSequenceOfDir2d()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfDir2d();
}

RDC::OCC::TColgp_HSequenceOfDir2d::TColgp_HSequenceOfDir2d(RDC::OCC::TColgp_SequenceOfDir2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfDir2d(*(::TColgp_SequenceOfDir2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfDir2d^ RDC::OCC::TColgp_HSequenceOfDir2d::Sequence()
{
    ::TColgp_SequenceOfDir2d* _result = new ::TColgp_SequenceOfDir2d();
    *_result = (::TColgp_SequenceOfDir2d)((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfDir2d(_result);
}

void RDC::OCC::TColgp_HSequenceOfDir2d::Append(RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Append(*(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfDir2d::Append(RDC::OCC::TColgp_SequenceOfDir2d^ theSequence)
{
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Append(*(::TColgp_SequenceOfDir2d*)theSequence->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfDir2d^ RDC::OCC::TColgp_HSequenceOfDir2d::ChangeSequence()
{
    ::TColgp_SequenceOfDir2d* _result = new ::TColgp_SequenceOfDir2d();
    *_result = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfDir2d(_result);
}

int RDC::OCC::TColgp_HSequenceOfDir2d::Size()
{
    int _result = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfDir2d::Length()
{
    int _result = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfDir2d::Lower()
{
    int _result = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfDir2d::Upper()
{
    int _result = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfDir2d::IsEmpty()
{
    bool _result = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfDir2d::Reverse()
{
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_HSequenceOfDir2d::Exchange(int I, int J)
{
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_HSequenceOfDir2d::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_HSequenceOfDir2d::Clear()
{
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_HSequenceOfDir2d^ RDC::OCC::TColgp_HSequenceOfDir2d::Assign(RDC::OCC::TColgp_HSequenceOfDir2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColgp_HSequenceOfDir2d::Remove(RDC::OCC::TColgp_HSequenceOfDir2d::Iterator^ thePosition)
{
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Remove(*(::TColgp_HSequenceOfDir2d::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_HSequenceOfDir2d::Prepend(RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Prepend(*(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfDir2d::InsertBefore(int theIndex, RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfDir2d::InsertAfter(RDC::OCC::TColgp_HSequenceOfDir2d::Iterator^ thePosition, RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->InsertAfter(*(::TColgp_HSequenceOfDir2d::Iterator*)thePosition->NativeInstance, *(gp_Dir2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfDir2d::Split(int theIndex, RDC::OCC::TColgp_HSequenceOfDir2d^ theSeq)
{
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Split(theIndex, *(::TColgp_HSequenceOfDir2d*)theSeq->NativeInstance);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HSequenceOfDir2d::First()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->First();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HSequenceOfDir2d::ChangeFirst()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HSequenceOfDir2d::Last()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Last();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HSequenceOfDir2d::ChangeLast()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HSequenceOfDir2d::Value(int theIndex)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HSequenceOfDir2d::ChangeValue(int theIndex)
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Dir2d(_nativeResult);
}

void RDC::OCC::TColgp_HSequenceOfDir2d::SetValue(int theIndex, RDC::OCC::Dir2d theItem)
{
    pin_ptr<RDC::OCC::Dir2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->SetValue(theIndex, *(gp_Dir2d*)pp_theItem);
}

RDC::OCC::TColgp_HSequenceOfDir2d^ RDC::OCC::TColgp_HSequenceOfDir2d::CreateDowncasted(::TColgp_HSequenceOfDir2d* instance)
{
    return gcnew RDC::OCC::TColgp_HSequenceOfDir2d( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Dir2d>^ RDC::OCC::TColgp_HSequenceOfDir2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HSequenceOfDir2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Dir2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfDir2d::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfDir2d::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_HSequenceOfDir2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_HSequenceOfDir2d::Iterator();
}

bool RDC::OCC::TColgp_HSequenceOfDir2d::Iterator::More()
{
    bool _result = ((::TColgp_HSequenceOfDir2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfDir2d::Iterator::Next()
{
    ((::TColgp_HSequenceOfDir2d::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HSequenceOfDir2d::Iterator::Value()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HSequenceOfDir2d::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::TColgp_HSequenceOfDir2d::Iterator::ChangeValue()
{
    ::gp_Dir2d _nativeResult = ((::TColgp_HSequenceOfDir2d::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Dir2d(_nativeResult);
}

bool RDC::OCC::TColgp_HSequenceOfDir2d::Iterator::IsEqual(RDC::OCC::TColgp_HSequenceOfDir2d::Iterator^ theOther)
{
    bool _result = ((::TColgp_HSequenceOfDir2d::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_HSequenceOfDir2d::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfDir2d::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_HSequenceOfDir2d::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfPnt
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfPnt::TColgp_HSequenceOfPnt()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfPnt();
}

RDC::OCC::TColgp_HSequenceOfPnt::TColgp_HSequenceOfPnt(RDC::OCC::TColgp_SequenceOfPnt^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfPnt(*(::TColgp_SequenceOfPnt*)theOther->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfPnt^ RDC::OCC::TColgp_HSequenceOfPnt::Sequence()
{
    ::TColgp_SequenceOfPnt* _result = new ::TColgp_SequenceOfPnt();
    *_result = (::TColgp_SequenceOfPnt)((::TColgp_HSequenceOfPnt*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt(_result);
}

void RDC::OCC::TColgp_HSequenceOfPnt::Append(RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Append(*(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfPnt::Append(RDC::OCC::TColgp_SequenceOfPnt^ theSequence)
{
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Append(*(::TColgp_SequenceOfPnt*)theSequence->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfPnt^ RDC::OCC::TColgp_HSequenceOfPnt::ChangeSequence()
{
    ::TColgp_SequenceOfPnt* _result = new ::TColgp_SequenceOfPnt();
    *_result = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt(_result);
}

int RDC::OCC::TColgp_HSequenceOfPnt::Size()
{
    int _result = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfPnt::Length()
{
    int _result = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfPnt::Lower()
{
    int _result = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfPnt::Upper()
{
    int _result = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfPnt::IsEmpty()
{
    bool _result = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfPnt::Reverse()
{
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_HSequenceOfPnt::Exchange(int I, int J)
{
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_HSequenceOfPnt::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_HSequenceOfPnt::Clear()
{
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::TColgp_HSequenceOfPnt::Assign(RDC::OCC::TColgp_HSequenceOfPnt^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColgp_HSequenceOfPnt::Remove(RDC::OCC::TColgp_HSequenceOfPnt::Iterator^ thePosition)
{
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Remove(*(::TColgp_HSequenceOfPnt::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_HSequenceOfPnt::Prepend(RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Prepend(*(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfPnt::InsertBefore(int theIndex, RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->InsertBefore(theIndex, *(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfPnt::InsertAfter(RDC::OCC::TColgp_HSequenceOfPnt::Iterator^ thePosition, RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->InsertAfter(*(::TColgp_HSequenceOfPnt::Iterator*)thePosition->NativeInstance, *(gp_Pnt*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfPnt::Split(int theIndex, RDC::OCC::TColgp_HSequenceOfPnt^ theSeq)
{
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Split(theIndex, *(::TColgp_HSequenceOfPnt*)theSeq->NativeInstance);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HSequenceOfPnt::First()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->First();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HSequenceOfPnt::ChangeFirst()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HSequenceOfPnt::Last()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Last();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HSequenceOfPnt::ChangeLast()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HSequenceOfPnt::Value(int theIndex)
{
    ::gp_Pnt _nativeResult = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HSequenceOfPnt::ChangeValue(int theIndex)
{
    ::gp_Pnt _nativeResult = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::TColgp_HSequenceOfPnt::SetValue(int theIndex, RDC::OCC::Pnt theItem)
{
    pin_ptr<RDC::OCC::Pnt> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfPnt*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt*)pp_theItem);
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(::TColgp_HSequenceOfPnt* instance)
{
    return gcnew RDC::OCC::TColgp_HSequenceOfPnt( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Pnt>^ RDC::OCC::TColgp_HSequenceOfPnt::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HSequenceOfPnt::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfPnt::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfPnt::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_HSequenceOfPnt::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_HSequenceOfPnt::Iterator();
}

bool RDC::OCC::TColgp_HSequenceOfPnt::Iterator::More()
{
    bool _result = ((::TColgp_HSequenceOfPnt::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfPnt::Iterator::Next()
{
    ((::TColgp_HSequenceOfPnt::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Pnt RDC::OCC::TColgp_HSequenceOfPnt::Iterator::Value()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HSequenceOfPnt::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::TColgp_HSequenceOfPnt::Iterator::ChangeValue()
{
    ::gp_Pnt _nativeResult = ((::TColgp_HSequenceOfPnt::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Pnt(_nativeResult);
}

bool RDC::OCC::TColgp_HSequenceOfPnt::Iterator::IsEqual(RDC::OCC::TColgp_HSequenceOfPnt::Iterator^ theOther)
{
    bool _result = ((::TColgp_HSequenceOfPnt::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_HSequenceOfPnt::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfPnt::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_HSequenceOfPnt::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfPnt2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfPnt2d::TColgp_HSequenceOfPnt2d()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfPnt2d();
}

RDC::OCC::TColgp_HSequenceOfPnt2d::TColgp_HSequenceOfPnt2d(RDC::OCC::TColgp_SequenceOfPnt2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfPnt2d(*(::TColgp_SequenceOfPnt2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfPnt2d^ RDC::OCC::TColgp_HSequenceOfPnt2d::Sequence()
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = (::TColgp_SequenceOfPnt2d)((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt2d(_result);
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::Append(RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Append(*(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::Append(RDC::OCC::TColgp_SequenceOfPnt2d^ theSequence)
{
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Append(*(::TColgp_SequenceOfPnt2d*)theSequence->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfPnt2d^ RDC::OCC::TColgp_HSequenceOfPnt2d::ChangeSequence()
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt2d(_result);
}

int RDC::OCC::TColgp_HSequenceOfPnt2d::Size()
{
    int _result = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfPnt2d::Length()
{
    int _result = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfPnt2d::Lower()
{
    int _result = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfPnt2d::Upper()
{
    int _result = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfPnt2d::IsEmpty()
{
    bool _result = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::Reverse()
{
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::Exchange(int I, int J)
{
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::Clear()
{
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_HSequenceOfPnt2d^ RDC::OCC::TColgp_HSequenceOfPnt2d::Assign(RDC::OCC::TColgp_HSequenceOfPnt2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::Remove(RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator^ thePosition)
{
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Remove(*(::TColgp_HSequenceOfPnt2d::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::Prepend(RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Prepend(*(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::InsertBefore(int theIndex, RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::InsertAfter(RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator^ thePosition, RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->InsertAfter(*(::TColgp_HSequenceOfPnt2d::Iterator*)thePosition->NativeInstance, *(gp_Pnt2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::Split(int theIndex, RDC::OCC::TColgp_HSequenceOfPnt2d^ theSeq)
{
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Split(theIndex, *(::TColgp_HSequenceOfPnt2d*)theSeq->NativeInstance);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HSequenceOfPnt2d::First()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->First();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HSequenceOfPnt2d::ChangeFirst()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HSequenceOfPnt2d::Last()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Last();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HSequenceOfPnt2d::ChangeLast()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HSequenceOfPnt2d::Value(int theIndex)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HSequenceOfPnt2d::ChangeValue(int theIndex)
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::SetValue(int theIndex, RDC::OCC::Pnt2d theItem)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt2d*)pp_theItem);
}

RDC::OCC::TColgp_HSequenceOfPnt2d^ RDC::OCC::TColgp_HSequenceOfPnt2d::CreateDowncasted(::TColgp_HSequenceOfPnt2d* instance)
{
    return gcnew RDC::OCC::TColgp_HSequenceOfPnt2d( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Pnt2d>^ RDC::OCC::TColgp_HSequenceOfPnt2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HSequenceOfPnt2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Pnt2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfPnt2d::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_HSequenceOfPnt2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_HSequenceOfPnt2d::Iterator();
}

bool RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator::More()
{
    bool _result = ((::TColgp_HSequenceOfPnt2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator::Next()
{
    ((::TColgp_HSequenceOfPnt2d::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator::Value()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HSequenceOfPnt2d::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator::ChangeValue()
{
    ::gp_Pnt2d _nativeResult = ((::TColgp_HSequenceOfPnt2d::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Pnt2d(_nativeResult);
}

bool RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator::IsEqual(RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator^ theOther)
{
    bool _result = ((::TColgp_HSequenceOfPnt2d::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_HSequenceOfPnt2d::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_HSequenceOfPnt2d::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfVec
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfVec::TColgp_HSequenceOfVec()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfVec();
}

RDC::OCC::TColgp_HSequenceOfVec::TColgp_HSequenceOfVec(RDC::OCC::TColgp_SequenceOfVec^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfVec(*(::TColgp_SequenceOfVec*)theOther->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfVec^ RDC::OCC::TColgp_HSequenceOfVec::Sequence()
{
    ::TColgp_SequenceOfVec* _result = new ::TColgp_SequenceOfVec();
    *_result = (::TColgp_SequenceOfVec)((::TColgp_HSequenceOfVec*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfVec(_result);
}

void RDC::OCC::TColgp_HSequenceOfVec::Append(RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->Append(*(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfVec::Append(RDC::OCC::TColgp_SequenceOfVec^ theSequence)
{
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->Append(*(::TColgp_SequenceOfVec*)theSequence->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfVec^ RDC::OCC::TColgp_HSequenceOfVec::ChangeSequence()
{
    ::TColgp_SequenceOfVec* _result = new ::TColgp_SequenceOfVec();
    *_result = ((::TColgp_HSequenceOfVec*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfVec(_result);
}

int RDC::OCC::TColgp_HSequenceOfVec::Size()
{
    int _result = ((::TColgp_HSequenceOfVec*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfVec::Length()
{
    int _result = ((::TColgp_HSequenceOfVec*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfVec::Lower()
{
    int _result = ((::TColgp_HSequenceOfVec*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfVec::Upper()
{
    int _result = ((::TColgp_HSequenceOfVec*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfVec::IsEmpty()
{
    bool _result = ((::TColgp_HSequenceOfVec*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfVec::Reverse()
{
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_HSequenceOfVec::Exchange(int I, int J)
{
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_HSequenceOfVec::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_HSequenceOfVec::Clear()
{
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_HSequenceOfVec^ RDC::OCC::TColgp_HSequenceOfVec::Assign(RDC::OCC::TColgp_HSequenceOfVec^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColgp_HSequenceOfVec::Remove(RDC::OCC::TColgp_HSequenceOfVec::Iterator^ thePosition)
{
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->Remove(*(::TColgp_HSequenceOfVec::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_HSequenceOfVec::Prepend(RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->Prepend(*(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfVec::InsertBefore(int theIndex, RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->InsertBefore(theIndex, *(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfVec::InsertAfter(RDC::OCC::TColgp_HSequenceOfVec::Iterator^ thePosition, RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->InsertAfter(*(::TColgp_HSequenceOfVec::Iterator*)thePosition->NativeInstance, *(gp_Vec*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfVec::Split(int theIndex, RDC::OCC::TColgp_HSequenceOfVec^ theSeq)
{
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->Split(theIndex, *(::TColgp_HSequenceOfVec*)theSeq->NativeInstance);
}

RDC::OCC::Vec RDC::OCC::TColgp_HSequenceOfVec::First()
{
    ::gp_Vec _nativeResult = ((::TColgp_HSequenceOfVec*)_NativeInstance)->First();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HSequenceOfVec::ChangeFirst()
{
    ::gp_Vec _nativeResult = ((::TColgp_HSequenceOfVec*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HSequenceOfVec::Last()
{
    ::gp_Vec _nativeResult = ((::TColgp_HSequenceOfVec*)_NativeInstance)->Last();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HSequenceOfVec::ChangeLast()
{
    ::gp_Vec _nativeResult = ((::TColgp_HSequenceOfVec*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HSequenceOfVec::Value(int theIndex)
{
    ::gp_Vec _nativeResult = ((::TColgp_HSequenceOfVec*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HSequenceOfVec::ChangeValue(int theIndex)
{
    ::gp_Vec _nativeResult = ((::TColgp_HSequenceOfVec*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::TColgp_HSequenceOfVec::SetValue(int theIndex, RDC::OCC::Vec theItem)
{
    pin_ptr<RDC::OCC::Vec> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfVec*)_NativeInstance)->SetValue(theIndex, *(gp_Vec*)pp_theItem);
}

RDC::OCC::TColgp_HSequenceOfVec^ RDC::OCC::TColgp_HSequenceOfVec::CreateDowncasted(::TColgp_HSequenceOfVec* instance)
{
    return gcnew RDC::OCC::TColgp_HSequenceOfVec( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Vec>^ RDC::OCC::TColgp_HSequenceOfVec::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HSequenceOfVec::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfVec::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfVec::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_HSequenceOfVec::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_HSequenceOfVec::Iterator();
}

bool RDC::OCC::TColgp_HSequenceOfVec::Iterator::More()
{
    bool _result = ((::TColgp_HSequenceOfVec::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfVec::Iterator::Next()
{
    ((::TColgp_HSequenceOfVec::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Vec RDC::OCC::TColgp_HSequenceOfVec::Iterator::Value()
{
    ::gp_Vec _nativeResult = ((::TColgp_HSequenceOfVec::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Vec RDC::OCC::TColgp_HSequenceOfVec::Iterator::ChangeValue()
{
    ::gp_Vec _nativeResult = ((::TColgp_HSequenceOfVec::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Vec(_nativeResult);
}

bool RDC::OCC::TColgp_HSequenceOfVec::Iterator::IsEqual(RDC::OCC::TColgp_HSequenceOfVec::Iterator^ theOther)
{
    bool _result = ((::TColgp_HSequenceOfVec::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_HSequenceOfVec::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfVec::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_HSequenceOfVec::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfVec2d
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfVec2d::TColgp_HSequenceOfVec2d()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfVec2d();
}

RDC::OCC::TColgp_HSequenceOfVec2d::TColgp_HSequenceOfVec2d(RDC::OCC::TColgp_SequenceOfVec2d^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfVec2d(*(::TColgp_SequenceOfVec2d*)theOther->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfVec2d^ RDC::OCC::TColgp_HSequenceOfVec2d::Sequence()
{
    ::TColgp_SequenceOfVec2d* _result = new ::TColgp_SequenceOfVec2d();
    *_result = (::TColgp_SequenceOfVec2d)((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfVec2d(_result);
}

void RDC::OCC::TColgp_HSequenceOfVec2d::Append(RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Append(*(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfVec2d::Append(RDC::OCC::TColgp_SequenceOfVec2d^ theSequence)
{
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Append(*(::TColgp_SequenceOfVec2d*)theSequence->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfVec2d^ RDC::OCC::TColgp_HSequenceOfVec2d::ChangeSequence()
{
    ::TColgp_SequenceOfVec2d* _result = new ::TColgp_SequenceOfVec2d();
    *_result = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfVec2d(_result);
}

int RDC::OCC::TColgp_HSequenceOfVec2d::Size()
{
    int _result = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfVec2d::Length()
{
    int _result = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfVec2d::Lower()
{
    int _result = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfVec2d::Upper()
{
    int _result = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfVec2d::IsEmpty()
{
    bool _result = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfVec2d::Reverse()
{
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_HSequenceOfVec2d::Exchange(int I, int J)
{
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_HSequenceOfVec2d::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_HSequenceOfVec2d::Clear()
{
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_HSequenceOfVec2d^ RDC::OCC::TColgp_HSequenceOfVec2d::Assign(RDC::OCC::TColgp_HSequenceOfVec2d^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColgp_HSequenceOfVec2d::Remove(RDC::OCC::TColgp_HSequenceOfVec2d::Iterator^ thePosition)
{
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Remove(*(::TColgp_HSequenceOfVec2d::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_HSequenceOfVec2d::Prepend(RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Prepend(*(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfVec2d::InsertBefore(int theIndex, RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfVec2d::InsertAfter(RDC::OCC::TColgp_HSequenceOfVec2d::Iterator^ thePosition, RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->InsertAfter(*(::TColgp_HSequenceOfVec2d::Iterator*)thePosition->NativeInstance, *(gp_Vec2d*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfVec2d::Split(int theIndex, RDC::OCC::TColgp_HSequenceOfVec2d^ theSeq)
{
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Split(theIndex, *(::TColgp_HSequenceOfVec2d*)theSeq->NativeInstance);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HSequenceOfVec2d::First()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->First();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HSequenceOfVec2d::ChangeFirst()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HSequenceOfVec2d::Last()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Last();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HSequenceOfVec2d::ChangeLast()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->ChangeLast();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HSequenceOfVec2d::Value(int theIndex)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HSequenceOfVec2d::ChangeValue(int theIndex)
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::TColgp_HSequenceOfVec2d::SetValue(int theIndex, RDC::OCC::Vec2d theItem)
{
    pin_ptr<RDC::OCC::Vec2d> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->SetValue(theIndex, *(gp_Vec2d*)pp_theItem);
}

RDC::OCC::TColgp_HSequenceOfVec2d^ RDC::OCC::TColgp_HSequenceOfVec2d::CreateDowncasted(::TColgp_HSequenceOfVec2d* instance)
{
    return gcnew RDC::OCC::TColgp_HSequenceOfVec2d( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::Vec2d>^ RDC::OCC::TColgp_HSequenceOfVec2d::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec2d>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HSequenceOfVec2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Vec2d>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfVec2d::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfVec2d::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_HSequenceOfVec2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_HSequenceOfVec2d::Iterator();
}

bool RDC::OCC::TColgp_HSequenceOfVec2d::Iterator::More()
{
    bool _result = ((::TColgp_HSequenceOfVec2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfVec2d::Iterator::Next()
{
    ((::TColgp_HSequenceOfVec2d::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HSequenceOfVec2d::Iterator::Value()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HSequenceOfVec2d::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Vec2d RDC::OCC::TColgp_HSequenceOfVec2d::Iterator::ChangeValue()
{
    ::gp_Vec2d _nativeResult = ((::TColgp_HSequenceOfVec2d::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::Vec2d(_nativeResult);
}

bool RDC::OCC::TColgp_HSequenceOfVec2d::Iterator::IsEqual(RDC::OCC::TColgp_HSequenceOfVec2d::Iterator^ theOther)
{
    bool _result = ((::TColgp_HSequenceOfVec2d::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_HSequenceOfVec2d::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfVec2d::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_HSequenceOfVec2d::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfXY
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfXY::TColgp_HSequenceOfXY()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfXY();
}

RDC::OCC::TColgp_HSequenceOfXY::TColgp_HSequenceOfXY(RDC::OCC::TColgp_SequenceOfXY^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfXY(*(::TColgp_SequenceOfXY*)theOther->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfXY^ RDC::OCC::TColgp_HSequenceOfXY::Sequence()
{
    ::TColgp_SequenceOfXY* _result = new ::TColgp_SequenceOfXY();
    *_result = (::TColgp_SequenceOfXY)((::TColgp_HSequenceOfXY*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfXY(_result);
}

void RDC::OCC::TColgp_HSequenceOfXY::Append(RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->Append(*(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfXY::Append(RDC::OCC::TColgp_SequenceOfXY^ theSequence)
{
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->Append(*(::TColgp_SequenceOfXY*)theSequence->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfXY^ RDC::OCC::TColgp_HSequenceOfXY::ChangeSequence()
{
    ::TColgp_SequenceOfXY* _result = new ::TColgp_SequenceOfXY();
    *_result = ((::TColgp_HSequenceOfXY*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfXY(_result);
}

int RDC::OCC::TColgp_HSequenceOfXY::Size()
{
    int _result = ((::TColgp_HSequenceOfXY*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfXY::Length()
{
    int _result = ((::TColgp_HSequenceOfXY*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfXY::Lower()
{
    int _result = ((::TColgp_HSequenceOfXY*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfXY::Upper()
{
    int _result = ((::TColgp_HSequenceOfXY*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfXY::IsEmpty()
{
    bool _result = ((::TColgp_HSequenceOfXY*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfXY::Reverse()
{
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_HSequenceOfXY::Exchange(int I, int J)
{
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_HSequenceOfXY::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_HSequenceOfXY::Clear()
{
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_HSequenceOfXY^ RDC::OCC::TColgp_HSequenceOfXY::Assign(RDC::OCC::TColgp_HSequenceOfXY^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColgp_HSequenceOfXY::Remove(RDC::OCC::TColgp_HSequenceOfXY::Iterator^ thePosition)
{
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->Remove(*(::TColgp_HSequenceOfXY::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_HSequenceOfXY::Prepend(RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->Prepend(*(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfXY::InsertBefore(int theIndex, RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->InsertBefore(theIndex, *(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfXY::InsertAfter(RDC::OCC::TColgp_HSequenceOfXY::Iterator^ thePosition, RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->InsertAfter(*(::TColgp_HSequenceOfXY::Iterator*)thePosition->NativeInstance, *(gp_XY*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfXY::Split(int theIndex, RDC::OCC::TColgp_HSequenceOfXY^ theSeq)
{
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->Split(theIndex, *(::TColgp_HSequenceOfXY*)theSeq->NativeInstance);
}

RDC::OCC::XY RDC::OCC::TColgp_HSequenceOfXY::First()
{
    ::gp_XY _nativeResult = ((::TColgp_HSequenceOfXY*)_NativeInstance)->First();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HSequenceOfXY::ChangeFirst()
{
    ::gp_XY _nativeResult = ((::TColgp_HSequenceOfXY*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HSequenceOfXY::Last()
{
    ::gp_XY _nativeResult = ((::TColgp_HSequenceOfXY*)_NativeInstance)->Last();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HSequenceOfXY::ChangeLast()
{
    ::gp_XY _nativeResult = ((::TColgp_HSequenceOfXY*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HSequenceOfXY::Value(int theIndex)
{
    ::gp_XY _nativeResult = ((::TColgp_HSequenceOfXY*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HSequenceOfXY::ChangeValue(int theIndex)
{
    ::gp_XY _nativeResult = ((::TColgp_HSequenceOfXY*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::TColgp_HSequenceOfXY::SetValue(int theIndex, RDC::OCC::XY theItem)
{
    pin_ptr<RDC::OCC::XY> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfXY*)_NativeInstance)->SetValue(theIndex, *(gp_XY*)pp_theItem);
}

RDC::OCC::TColgp_HSequenceOfXY^ RDC::OCC::TColgp_HSequenceOfXY::CreateDowncasted(::TColgp_HSequenceOfXY* instance)
{
    return gcnew RDC::OCC::TColgp_HSequenceOfXY( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::XY>^ RDC::OCC::TColgp_HSequenceOfXY::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::XY>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HSequenceOfXY::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::XY>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfXY::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfXY::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_HSequenceOfXY::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_HSequenceOfXY::Iterator();
}

bool RDC::OCC::TColgp_HSequenceOfXY::Iterator::More()
{
    bool _result = ((::TColgp_HSequenceOfXY::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfXY::Iterator::Next()
{
    ((::TColgp_HSequenceOfXY::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::XY RDC::OCC::TColgp_HSequenceOfXY::Iterator::Value()
{
    ::gp_XY _nativeResult = ((::TColgp_HSequenceOfXY::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::XY(_nativeResult);
}

RDC::OCC::XY RDC::OCC::TColgp_HSequenceOfXY::Iterator::ChangeValue()
{
    ::gp_XY _nativeResult = ((::TColgp_HSequenceOfXY::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::XY(_nativeResult);
}

bool RDC::OCC::TColgp_HSequenceOfXY::Iterator::IsEqual(RDC::OCC::TColgp_HSequenceOfXY::Iterator^ theOther)
{
    bool _result = ((::TColgp_HSequenceOfXY::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_HSequenceOfXY::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfXY::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_HSequenceOfXY::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfXYZ
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfXYZ::TColgp_HSequenceOfXYZ()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfXYZ();
}

RDC::OCC::TColgp_HSequenceOfXYZ::TColgp_HSequenceOfXYZ(RDC::OCC::TColgp_SequenceOfXYZ^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColgp_HSequenceOfXYZ(*(::TColgp_SequenceOfXYZ*)theOther->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfXYZ^ RDC::OCC::TColgp_HSequenceOfXYZ::Sequence()
{
    ::TColgp_SequenceOfXYZ* _result = new ::TColgp_SequenceOfXYZ();
    *_result = (::TColgp_SequenceOfXYZ)((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfXYZ(_result);
}

void RDC::OCC::TColgp_HSequenceOfXYZ::Append(RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Append(*(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfXYZ::Append(RDC::OCC::TColgp_SequenceOfXYZ^ theSequence)
{
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Append(*(::TColgp_SequenceOfXYZ*)theSequence->NativeInstance);
}

RDC::OCC::TColgp_SequenceOfXYZ^ RDC::OCC::TColgp_HSequenceOfXYZ::ChangeSequence()
{
    ::TColgp_SequenceOfXYZ* _result = new ::TColgp_SequenceOfXYZ();
    *_result = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfXYZ(_result);
}

int RDC::OCC::TColgp_HSequenceOfXYZ::Size()
{
    int _result = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfXYZ::Length()
{
    int _result = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfXYZ::Lower()
{
    int _result = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::TColgp_HSequenceOfXYZ::Upper()
{
    int _result = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfXYZ::IsEmpty()
{
    bool _result = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfXYZ::Reverse()
{
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColgp_HSequenceOfXYZ::Exchange(int I, int J)
{
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColgp_HSequenceOfXYZ::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColgp_HSequenceOfXYZ::Clear()
{
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColgp_HSequenceOfXYZ^ RDC::OCC::TColgp_HSequenceOfXYZ::Assign(RDC::OCC::TColgp_HSequenceOfXYZ^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColgp_HSequenceOfXYZ::Remove(RDC::OCC::TColgp_HSequenceOfXYZ::Iterator^ thePosition)
{
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Remove(*(::TColgp_HSequenceOfXYZ::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColgp_HSequenceOfXYZ::Prepend(RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Prepend(*(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfXYZ::InsertBefore(int theIndex, RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->InsertBefore(theIndex, *(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfXYZ::InsertAfter(RDC::OCC::TColgp_HSequenceOfXYZ::Iterator^ thePosition, RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->InsertAfter(*(::TColgp_HSequenceOfXYZ::Iterator*)thePosition->NativeInstance, *(gp_XYZ*)pp_theItem);
}

void RDC::OCC::TColgp_HSequenceOfXYZ::Split(int theIndex, RDC::OCC::TColgp_HSequenceOfXYZ^ theSeq)
{
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Split(theIndex, *(::TColgp_HSequenceOfXYZ*)theSeq->NativeInstance);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HSequenceOfXYZ::First()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->First();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HSequenceOfXYZ::ChangeFirst()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->ChangeFirst();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HSequenceOfXYZ::Last()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Last();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HSequenceOfXYZ::ChangeLast()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->ChangeLast();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HSequenceOfXYZ::Value(int theIndex)
{
    ::gp_XYZ _nativeResult = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Value(theIndex);
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HSequenceOfXYZ::ChangeValue(int theIndex)
{
    ::gp_XYZ _nativeResult = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->ChangeValue(theIndex);
    return RDC::OCC::XYZ(_nativeResult);
}

void RDC::OCC::TColgp_HSequenceOfXYZ::SetValue(int theIndex, RDC::OCC::XYZ theItem)
{
    pin_ptr<RDC::OCC::XYZ> pp_theItem = &theItem;
    ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->SetValue(theIndex, *(gp_XYZ*)pp_theItem);
}

RDC::OCC::TColgp_HSequenceOfXYZ^ RDC::OCC::TColgp_HSequenceOfXYZ::CreateDowncasted(::TColgp_HSequenceOfXYZ* instance)
{
    return gcnew RDC::OCC::TColgp_HSequenceOfXYZ( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::XYZ>^ RDC::OCC::TColgp_HSequenceOfXYZ::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::XYZ>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColgp_HSequenceOfXYZ::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::XYZ>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfXYZ::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColgp_HSequenceOfXYZ::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TColgp_HSequenceOfXYZ::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColgp_HSequenceOfXYZ::Iterator();
}

bool RDC::OCC::TColgp_HSequenceOfXYZ::Iterator::More()
{
    bool _result = ((::TColgp_HSequenceOfXYZ::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TColgp_HSequenceOfXYZ::Iterator::Next()
{
    ((::TColgp_HSequenceOfXYZ::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::XYZ RDC::OCC::TColgp_HSequenceOfXYZ::Iterator::Value()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HSequenceOfXYZ::Iterator*)_NativeInstance)->Value();
    return RDC::OCC::XYZ(_nativeResult);
}

RDC::OCC::XYZ RDC::OCC::TColgp_HSequenceOfXYZ::Iterator::ChangeValue()
{
    ::gp_XYZ _nativeResult = ((::TColgp_HSequenceOfXYZ::Iterator*)_NativeInstance)->ChangeValue();
    return RDC::OCC::XYZ(_nativeResult);
}

bool RDC::OCC::TColgp_HSequenceOfXYZ::Iterator::IsEqual(RDC::OCC::TColgp_HSequenceOfXYZ::Iterator^ theOther)
{
    bool _result = ((::TColgp_HSequenceOfXYZ::Iterator*)_NativeInstance)->IsEqual(*(::TColgp_HSequenceOfXYZ::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TColgp_HSequenceOfXYZ::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TColgp_HSequenceOfXYZ::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}


