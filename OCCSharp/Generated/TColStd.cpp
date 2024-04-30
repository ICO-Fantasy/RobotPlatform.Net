// Generated wrapper code for package TColStd

#include "OcctPCH.h"
#include "TColStd.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TCollection.h"
#include "NCollection.h"
#include "Standard.h"


//---------------------------------------------------------------------
//  Class  TColStd_Array1OfAsciiString
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString()
	: RDC::OCC::BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfAsciiString();
}

RDC::OCC::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfAsciiString(theLower, theUpper);
}

RDC::OCC::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString(RDC::OCC::TCollection_AsciiString^ theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfAsciiString(*(::TCollection_AsciiString*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString(RDC::OCC::TCollection_AsciiString^ theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfAsciiString(*(::TCollection_AsciiString*)theBegin->NativeInstance, theLower, theUpper, true);
}

void RDC::OCC::TColStd_Array1OfAsciiString::Init(RDC::OCC::TCollection_AsciiString^ theValue)
{
	((::TColStd_Array1OfAsciiString*)_NativeInstance)->Init(*(::TCollection_AsciiString*)theValue->NativeInstance);
}

int RDC::OCC::TColStd_Array1OfAsciiString::Size()
{
	int _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array1OfAsciiString::Length()
{
	int _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfAsciiString::IsEmpty()
{
	bool _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array1OfAsciiString::Lower()
{
	int _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array1OfAsciiString::Upper()
{
	int _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_Array1OfAsciiString^ RDC::OCC::TColStd_Array1OfAsciiString::Assign(RDC::OCC::TColStd_Array1OfAsciiString^ theOther)
{
	::TColStd_Array1OfAsciiString* _result = new ::TColStd_Array1OfAsciiString();
	*_result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Assign(*(::TColStd_Array1OfAsciiString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfAsciiString(_result);
}

RDC::OCC::TColStd_Array1OfAsciiString^ RDC::OCC::TColStd_Array1OfAsciiString::Move(RDC::OCC::TColStd_Array1OfAsciiString^ theOther)
{
	::TColStd_Array1OfAsciiString* _result = new ::TColStd_Array1OfAsciiString();
	*_result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Move(*(::TColStd_Array1OfAsciiString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfAsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_Array1OfAsciiString::First()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_Array1OfAsciiString*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_Array1OfAsciiString::ChangeFirst()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_Array1OfAsciiString::Last()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_Array1OfAsciiString*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_Array1OfAsciiString::ChangeLast()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_Array1OfAsciiString::Value(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_Array1OfAsciiString*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_Array1OfAsciiString::ChangeValue(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::TColStd_Array1OfAsciiString::SetValue(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_Array1OfAsciiString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_Array1OfAsciiString::UpdateLowerBound(int theLower)
{
	((::TColStd_Array1OfAsciiString*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array1OfAsciiString::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array1OfAsciiString*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_Array1OfAsciiString::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfAsciiString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_Array1OfAsciiString::IsDeletable()
{
	bool _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_AsciiString^>^ RDC::OCC::TColStd_Array1OfAsciiString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_AsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_Array1OfAsciiString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_AsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfAsciiString::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfBoolean
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean()
	: RDC::OCC::BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfBoolean();
}

RDC::OCC::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfBoolean(theLower, theUpper);
}

RDC::OCC::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean(bool theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<bool> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfBoolean(*(bool*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean(bool theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<bool> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfBoolean(*(bool*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColStd_Array1OfBoolean::Init(bool theValue)
{
	pin_ptr<bool> pp_theValue = &theValue;
	((::TColStd_Array1OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

int RDC::OCC::TColStd_Array1OfBoolean::Size()
{
	int _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array1OfBoolean::Length()
{
	int _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfBoolean::IsEmpty()
{
	bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array1OfBoolean::Lower()
{
	int _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array1OfBoolean::Upper()
{
	int _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_Array1OfBoolean^ RDC::OCC::TColStd_Array1OfBoolean::Assign(RDC::OCC::TColStd_Array1OfBoolean^ theOther)
{
	::TColStd_Array1OfBoolean* _result = new ::TColStd_Array1OfBoolean();
	*_result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Assign(*(::TColStd_Array1OfBoolean*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfBoolean(_result);
}

RDC::OCC::TColStd_Array1OfBoolean^ RDC::OCC::TColStd_Array1OfBoolean::Move(RDC::OCC::TColStd_Array1OfBoolean^ theOther)
{
	::TColStd_Array1OfBoolean* _result = new ::TColStd_Array1OfBoolean();
	*_result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Move(*(::TColStd_Array1OfBoolean*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfBoolean(_result);
}

bool RDC::OCC::TColStd_Array1OfBoolean::First()
{
	bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->First();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfBoolean::Last()
{
	bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Last();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfBoolean::Value(int theIndex)
{
	bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Value(theIndex);
	return _result;
}

bool RDC::OCC::TColStd_Array1OfBoolean::ChangeValue(int theIndex)
{
	bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_Array1OfBoolean::SetValue(int theIndex, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_Array1OfBoolean*)_NativeInstance)->SetValue(theIndex, *(bool*)pp_theItem);
}

void RDC::OCC::TColStd_Array1OfBoolean::UpdateLowerBound(int theLower)
{
	((::TColStd_Array1OfBoolean*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array1OfBoolean::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array1OfBoolean*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_Array1OfBoolean::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfBoolean*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_Array1OfBoolean::IsDeletable()
{
	bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<bool>^ RDC::OCC::TColStd_Array1OfBoolean::GetEnumerator()
{
	return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_Array1OfBoolean::GetEnumerator2()
{
	return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfBoolean::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfByte
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array1OfByte::TColStd_Array1OfByte()
	: RDC::OCC::BaseClass<::TColStd_Array1OfByte>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfByte();
}

RDC::OCC::TColStd_Array1OfByte::TColStd_Array1OfByte(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfByte>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfByte(theLower, theUpper);
}

RDC::OCC::TColStd_Array1OfByte::TColStd_Array1OfByte(unsigned char theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::TColStd_Array1OfByte>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<unsigned char> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfByte(*(unsigned char*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColStd_Array1OfByte::TColStd_Array1OfByte(unsigned char theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfByte>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<unsigned char> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfByte(*(unsigned char*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColStd_Array1OfByte::Init(unsigned char theValue)
{
	pin_ptr<unsigned char> pp_theValue = &theValue;
	((::TColStd_Array1OfByte*)_NativeInstance)->Init(*(unsigned char*)pp_theValue);
}

int RDC::OCC::TColStd_Array1OfByte::Size()
{
	int _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array1OfByte::Length()
{
	int _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfByte::IsEmpty()
{
	bool _result = ((::TColStd_Array1OfByte*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array1OfByte::Lower()
{
	int _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array1OfByte::Upper()
{
	int _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_Array1OfByte^ RDC::OCC::TColStd_Array1OfByte::Assign(RDC::OCC::TColStd_Array1OfByte^ theOther)
{
	::TColStd_Array1OfByte* _result = new ::TColStd_Array1OfByte();
	*_result = ((::TColStd_Array1OfByte*)_NativeInstance)->Assign(*(::TColStd_Array1OfByte*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfByte(_result);
}

RDC::OCC::TColStd_Array1OfByte^ RDC::OCC::TColStd_Array1OfByte::Move(RDC::OCC::TColStd_Array1OfByte^ theOther)
{
	::TColStd_Array1OfByte* _result = new ::TColStd_Array1OfByte();
	*_result = ((::TColStd_Array1OfByte*)_NativeInstance)->Move(*(::TColStd_Array1OfByte*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfByte(_result);
}

unsigned char RDC::OCC::TColStd_Array1OfByte::First()
{
	unsigned char _result = ((::TColStd_Array1OfByte*)_NativeInstance)->First();
	return _result;
}

unsigned char RDC::OCC::TColStd_Array1OfByte::Last()
{
	unsigned char _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Last();
	return _result;
}

unsigned char RDC::OCC::TColStd_Array1OfByte::Value(int theIndex)
{
	unsigned char _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Value(theIndex);
	return _result;
}

unsigned char RDC::OCC::TColStd_Array1OfByte::ChangeValue(int theIndex)
{
	unsigned char _result = ((::TColStd_Array1OfByte*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_Array1OfByte::SetValue(int theIndex, unsigned char theItem)
{
	pin_ptr<unsigned char> pp_theItem = &theItem;
	((::TColStd_Array1OfByte*)_NativeInstance)->SetValue(theIndex, *(unsigned char*)pp_theItem);
}

void RDC::OCC::TColStd_Array1OfByte::UpdateLowerBound(int theLower)
{
	((::TColStd_Array1OfByte*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array1OfByte::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array1OfByte*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_Array1OfByte::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfByte*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_Array1OfByte::IsDeletable()
{
	bool _result = ((::TColStd_Array1OfByte*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<unsigned char>^ RDC::OCC::TColStd_Array1OfByte::GetEnumerator()
{
	return gcnew IndexEnumerator<unsigned char>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_Array1OfByte::GetEnumerator2()
{
	return gcnew IndexEnumerator<unsigned char>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfByte::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfCharacter
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter()
	: RDC::OCC::BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfCharacter();
}

RDC::OCC::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfCharacter(theLower, theUpper);
}

RDC::OCC::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter(char theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfCharacter(*(char*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter(char theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfCharacter(*(char*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColStd_Array1OfCharacter::Init(char theValue)
{
	pin_ptr<char> pp_theValue = &theValue;
	((::TColStd_Array1OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

int RDC::OCC::TColStd_Array1OfCharacter::Size()
{
	int _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array1OfCharacter::Length()
{
	int _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfCharacter::IsEmpty()
{
	bool _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array1OfCharacter::Lower()
{
	int _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array1OfCharacter::Upper()
{
	int _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_Array1OfCharacter^ RDC::OCC::TColStd_Array1OfCharacter::Assign(RDC::OCC::TColStd_Array1OfCharacter^ theOther)
{
	::TColStd_Array1OfCharacter* _result = new ::TColStd_Array1OfCharacter();
	*_result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Assign(*(::TColStd_Array1OfCharacter*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfCharacter(_result);
}

RDC::OCC::TColStd_Array1OfCharacter^ RDC::OCC::TColStd_Array1OfCharacter::Move(RDC::OCC::TColStd_Array1OfCharacter^ theOther)
{
	::TColStd_Array1OfCharacter* _result = new ::TColStd_Array1OfCharacter();
	*_result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Move(*(::TColStd_Array1OfCharacter*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfCharacter(_result);
}

char RDC::OCC::TColStd_Array1OfCharacter::First()
{
	char _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->First();
	return _result;
}

char RDC::OCC::TColStd_Array1OfCharacter::Last()
{
	char _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Last();
	return _result;
}

char RDC::OCC::TColStd_Array1OfCharacter::Value(int theIndex)
{
	char _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Value(theIndex);
	return _result;
}

char RDC::OCC::TColStd_Array1OfCharacter::ChangeValue(int theIndex)
{
	char _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_Array1OfCharacter::SetValue(int theIndex, char theItem)
{
	pin_ptr<char> pp_theItem = &theItem;
	((::TColStd_Array1OfCharacter*)_NativeInstance)->SetValue(theIndex, *(char*)pp_theItem);
}

void RDC::OCC::TColStd_Array1OfCharacter::UpdateLowerBound(int theLower)
{
	((::TColStd_Array1OfCharacter*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array1OfCharacter::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array1OfCharacter*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_Array1OfCharacter::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfCharacter*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_Array1OfCharacter::IsDeletable()
{
	bool _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<char>^ RDC::OCC::TColStd_Array1OfCharacter::GetEnumerator()
{
	return gcnew IndexEnumerator<char>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_Array1OfCharacter::GetEnumerator2()
{
	return gcnew IndexEnumerator<char>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfCharacter::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfExtendedString
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString()
	: RDC::OCC::BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfExtendedString();
}

RDC::OCC::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfExtendedString(theLower, theUpper);
}

RDC::OCC::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString(RDC::OCC::TCollection_ExtendedString^ theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfExtendedString(*(::TCollection_ExtendedString*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString(RDC::OCC::TCollection_ExtendedString^ theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfExtendedString(*(::TCollection_ExtendedString*)theBegin->NativeInstance, theLower, theUpper, true);
}

void RDC::OCC::TColStd_Array1OfExtendedString::Init(RDC::OCC::TCollection_ExtendedString^ theValue)
{
	((::TColStd_Array1OfExtendedString*)_NativeInstance)->Init(*(::TCollection_ExtendedString*)theValue->NativeInstance);
}

int RDC::OCC::TColStd_Array1OfExtendedString::Size()
{
	int _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array1OfExtendedString::Length()
{
	int _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfExtendedString::IsEmpty()
{
	bool _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array1OfExtendedString::Lower()
{
	int _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array1OfExtendedString::Upper()
{
	int _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_Array1OfExtendedString^ RDC::OCC::TColStd_Array1OfExtendedString::Assign(RDC::OCC::TColStd_Array1OfExtendedString^ theOther)
{
	::TColStd_Array1OfExtendedString* _result = new ::TColStd_Array1OfExtendedString();
	*_result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Assign(*(::TColStd_Array1OfExtendedString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfExtendedString(_result);
}

RDC::OCC::TColStd_Array1OfExtendedString^ RDC::OCC::TColStd_Array1OfExtendedString::Move(RDC::OCC::TColStd_Array1OfExtendedString^ theOther)
{
	::TColStd_Array1OfExtendedString* _result = new ::TColStd_Array1OfExtendedString();
	*_result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Move(*(::TColStd_Array1OfExtendedString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_Array1OfExtendedString::First()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_Array1OfExtendedString*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_Array1OfExtendedString::ChangeFirst()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_Array1OfExtendedString::Last()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_Array1OfExtendedString*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_Array1OfExtendedString::ChangeLast()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_Array1OfExtendedString::Value(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_Array1OfExtendedString*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_Array1OfExtendedString::ChangeValue(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

void RDC::OCC::TColStd_Array1OfExtendedString::SetValue(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_Array1OfExtendedString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_Array1OfExtendedString::UpdateLowerBound(int theLower)
{
	((::TColStd_Array1OfExtendedString*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array1OfExtendedString::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array1OfExtendedString*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_Array1OfExtendedString::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfExtendedString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_Array1OfExtendedString::IsDeletable()
{
	bool _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_ExtendedString^>^ RDC::OCC::TColStd_Array1OfExtendedString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_ExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_Array1OfExtendedString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_ExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfExtendedString::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array1OfInteger::TColStd_Array1OfInteger()
	: RDC::OCC::BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfInteger();
}

RDC::OCC::TColStd_Array1OfInteger::TColStd_Array1OfInteger(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfInteger(theLower, theUpper);
}

RDC::OCC::TColStd_Array1OfInteger::TColStd_Array1OfInteger(int theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<int> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfInteger(*(int*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColStd_Array1OfInteger::TColStd_Array1OfInteger(int theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<int> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfInteger(*(int*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColStd_Array1OfInteger::Init(int theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	((::TColStd_Array1OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

int RDC::OCC::TColStd_Array1OfInteger::Size()
{
	int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array1OfInteger::Length()
{
	int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfInteger::IsEmpty()
{
	bool _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array1OfInteger::Lower()
{
	int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array1OfInteger::Upper()
{
	int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_Array1OfInteger^ RDC::OCC::TColStd_Array1OfInteger::Assign(RDC::OCC::TColStd_Array1OfInteger^ theOther)
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Assign(*(::TColStd_Array1OfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfInteger(_result);
}

RDC::OCC::TColStd_Array1OfInteger^ RDC::OCC::TColStd_Array1OfInteger::Move(RDC::OCC::TColStd_Array1OfInteger^ theOther)
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Move(*(::TColStd_Array1OfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfInteger(_result);
}

int RDC::OCC::TColStd_Array1OfInteger::First()
{
	int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->First();
	return _result;
}

int RDC::OCC::TColStd_Array1OfInteger::Last()
{
	int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Last();
	return _result;
}

int RDC::OCC::TColStd_Array1OfInteger::Value(int theIndex)
{
	int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Value(theIndex);
	return _result;
}

int RDC::OCC::TColStd_Array1OfInteger::ChangeValue(int theIndex)
{
	int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_Array1OfInteger::SetValue(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_Array1OfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}

void RDC::OCC::TColStd_Array1OfInteger::UpdateLowerBound(int theLower)
{
	((::TColStd_Array1OfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array1OfInteger::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array1OfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_Array1OfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_Array1OfInteger::IsDeletable()
{
	bool _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<int>^ RDC::OCC::TColStd_Array1OfInteger::GetEnumerator()
{
	return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_Array1OfInteger::GetEnumerator2()
{
	return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfInteger::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_ListOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListOfInteger::TColStd_ListOfInteger()
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfInteger();
}

RDC::OCC::TColStd_ListOfInteger::TColStd_ListOfInteger(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfInteger(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_ListOfInteger::Size()
{
	int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->Size();
	return _result;
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::TColStd_ListOfInteger::Assign(RDC::OCC::TColStd_ListOfInteger^ theOther)
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result = ((::TColStd_ListOfInteger*)_NativeInstance)->Assign(*(::TColStd_ListOfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

void RDC::OCC::TColStd_ListOfInteger::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_ListOfInteger*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_ListOfInteger::Clear()
{
	((::TColStd_ListOfInteger*)_NativeInstance)->Clear(0L);
}

int RDC::OCC::TColStd_ListOfInteger::First()
{
	int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->First();
	return _result;
}

int RDC::OCC::TColStd_ListOfInteger::Last()
{
	int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->Last();
	return _result;
}

int RDC::OCC::TColStd_ListOfInteger::Append(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->Append(*(int*)pp_theItem);
	return _result;
}

int RDC::OCC::TColStd_ListOfInteger::Prepend(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->Prepend(*(int*)pp_theItem);
	return _result;
}

void RDC::OCC::TColStd_ListOfInteger::RemoveFirst()
{
	((::TColStd_ListOfInteger*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::TColStd_ListOfInteger::Remove(RDC::OCC::TColStd_ListOfInteger::Iterator^ theIter)
{
	((::TColStd_ListOfInteger*)_NativeInstance)->Remove(*(::TColStd_ListOfInteger::Iterator*)theIter->NativeInstance);
}

int RDC::OCC::TColStd_ListOfInteger::InsertBefore(int theItem, RDC::OCC::TColStd_ListOfInteger::Iterator^ theIter)
{
	pin_ptr<int> pp_theItem = &theItem;
	int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->InsertBefore(*(int*)pp_theItem, *(::TColStd_ListOfInteger::Iterator*)theIter->NativeInstance);
	return _result;
}

int RDC::OCC::TColStd_ListOfInteger::InsertAfter(int theItem, RDC::OCC::TColStd_ListOfInteger::Iterator^ theIter)
{
	pin_ptr<int> pp_theItem = &theItem;
	int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->InsertAfter(*(int*)pp_theItem, *(::TColStd_ListOfInteger::Iterator*)theIter->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_ListOfInteger::Reverse()
{
	((::TColStd_ListOfInteger*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<int>^ RDC::OCC::TColStd_ListOfInteger::GetEnumerator()
{
	return gcnew RDC::OCC::TColStd_ListOfInteger::Iterator(new ::TColStd_ListOfInteger::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_ListOfInteger::GetEnumerator2()
{
	return gcnew RDC::OCC::TColStd_ListOfInteger::Iterator(new ::TColStd_ListOfInteger::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListOfInteger::Iterator::Iterator()
	: RDC::OCC::IteratorEnumerator<int, ::TColStd_ListOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfInteger::Iterator();
}

bool RDC::OCC::TColStd_ListOfInteger::Iterator::More()
{
	bool _result = ((::TColStd_ListOfInteger::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_ListOfInteger::Iterator::Next()
{
	((::TColStd_ListOfInteger::Iterator*)_NativeInstance)->Next();
}

int RDC::OCC::TColStd_ListOfInteger::Iterator::Value()
{
	int _result = ((::TColStd_ListOfInteger::Iterator*)_NativeInstance)->Value();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_ListIteratorOfListOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListIteratorOfListOfInteger::TColStd_ListIteratorOfListOfInteger()
	: RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListIteratorOfListOfInteger();
}

RDC::OCC::TColStd_ListIteratorOfListOfInteger::TColStd_ListIteratorOfListOfInteger(RDC::OCC::NCollection_BaseList^ theList)
	: RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListIteratorOfListOfInteger(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::TColStd_ListIteratorOfListOfInteger::More()
{
	bool _result = ((::TColStd_ListIteratorOfListOfInteger*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_ListIteratorOfListOfInteger::Next()
{
	((::TColStd_ListIteratorOfListOfInteger*)_NativeInstance)->Next();
}

int RDC::OCC::TColStd_ListIteratorOfListOfInteger::Value()
{
	int _result = ((::TColStd_ListIteratorOfListOfInteger*)_NativeInstance)->Value();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfListOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array1OfListOfInteger::TColStd_Array1OfListOfInteger()
	: RDC::OCC::BaseClass<::TColStd_Array1OfListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfListOfInteger();
}

RDC::OCC::TColStd_Array1OfListOfInteger::TColStd_Array1OfListOfInteger(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfListOfInteger(theLower, theUpper);
}

int RDC::OCC::TColStd_Array1OfListOfInteger::Size()
{
	int _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array1OfListOfInteger::Length()
{
	int _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfListOfInteger::IsEmpty()
{
	bool _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array1OfListOfInteger::Lower()
{
	int _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array1OfListOfInteger::Upper()
{
	int _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_Array1OfListOfInteger^ RDC::OCC::TColStd_Array1OfListOfInteger::Assign(RDC::OCC::TColStd_Array1OfListOfInteger^ theOther)
{
	::TColStd_Array1OfListOfInteger* _result = new ::TColStd_Array1OfListOfInteger();
	*_result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Assign(*(::TColStd_Array1OfListOfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfListOfInteger(_result);
}

RDC::OCC::TColStd_Array1OfListOfInteger^ RDC::OCC::TColStd_Array1OfListOfInteger::Move(RDC::OCC::TColStd_Array1OfListOfInteger^ theOther)
{
	::TColStd_Array1OfListOfInteger* _result = new ::TColStd_Array1OfListOfInteger();
	*_result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Move(*(::TColStd_Array1OfListOfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfListOfInteger(_result);
}

void RDC::OCC::TColStd_Array1OfListOfInteger::UpdateLowerBound(int theLower)
{
	((::TColStd_Array1OfListOfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array1OfListOfInteger::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array1OfListOfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_Array1OfListOfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_Array1OfListOfInteger::IsDeletable()
{
	bool _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->IsDeletable();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfListOfInteger::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array1OfReal::TColStd_Array1OfReal()
	: RDC::OCC::BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfReal();
}

RDC::OCC::TColStd_Array1OfReal::TColStd_Array1OfReal(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfReal(theLower, theUpper);
}

RDC::OCC::TColStd_Array1OfReal::TColStd_Array1OfReal(double theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfReal(*(double*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColStd_Array1OfReal::TColStd_Array1OfReal(double theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfReal(*(double*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TColStd_Array1OfReal::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColStd_Array1OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int RDC::OCC::TColStd_Array1OfReal::Size()
{
	int _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array1OfReal::Length()
{
	int _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfReal::IsEmpty()
{
	bool _result = ((::TColStd_Array1OfReal*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array1OfReal::Lower()
{
	int _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array1OfReal::Upper()
{
	int _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::TColStd_Array1OfReal::Assign(RDC::OCC::TColStd_Array1OfReal^ theOther)
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = ((::TColStd_Array1OfReal*)_NativeInstance)->Assign(*(::TColStd_Array1OfReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::TColStd_Array1OfReal::Move(RDC::OCC::TColStd_Array1OfReal^ theOther)
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = ((::TColStd_Array1OfReal*)_NativeInstance)->Move(*(::TColStd_Array1OfReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

double RDC::OCC::TColStd_Array1OfReal::First()
{
	double _result = ((::TColStd_Array1OfReal*)_NativeInstance)->First();
	return _result;
}

double RDC::OCC::TColStd_Array1OfReal::Last()
{
	double _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Last();
	return _result;
}

double RDC::OCC::TColStd_Array1OfReal::Value(int theIndex)
{
	double _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Value(theIndex);
	return _result;
}

double RDC::OCC::TColStd_Array1OfReal::ChangeValue(int theIndex)
{
	double _result = ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_Array1OfReal::SetValue(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_Array1OfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

void RDC::OCC::TColStd_Array1OfReal::UpdateLowerBound(int theLower)
{
	((::TColStd_Array1OfReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array1OfReal::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array1OfReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_Array1OfReal::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfReal*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_Array1OfReal::IsDeletable()
{
	bool _result = ((::TColStd_Array1OfReal*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<double>^ RDC::OCC::TColStd_Array1OfReal::GetEnumerator()
{
	return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_Array1OfReal::GetEnumerator2()
{
	return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfReal::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array1OfTransient::TColStd_Array1OfTransient()
	: RDC::OCC::BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfTransient();
}

RDC::OCC::TColStd_Array1OfTransient::TColStd_Array1OfTransient(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfTransient(theLower, theUpper);
}

RDC::OCC::TColStd_Array1OfTransient::TColStd_Array1OfTransient(RDC::OCC::Standard_Transient^ theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfTransient(Handle(::Standard_Transient)(theBegin->NativeInstance), theLower, theUpper, theUseBuffer);
}

RDC::OCC::TColStd_Array1OfTransient::TColStd_Array1OfTransient(RDC::OCC::Standard_Transient^ theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfTransient(Handle(::Standard_Transient)(theBegin->NativeInstance), theLower, theUpper, true);
}

void RDC::OCC::TColStd_Array1OfTransient::Init(RDC::OCC::Standard_Transient^ theValue)
{
	((::TColStd_Array1OfTransient*)_NativeInstance)->Init(Handle(::Standard_Transient)(theValue->NativeInstance));
}

int RDC::OCC::TColStd_Array1OfTransient::Size()
{
	int _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array1OfTransient::Length()
{
	int _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_Array1OfTransient::IsEmpty()
{
	bool _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array1OfTransient::Lower()
{
	int _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array1OfTransient::Upper()
{
	int _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_Array1OfTransient^ RDC::OCC::TColStd_Array1OfTransient::Assign(RDC::OCC::TColStd_Array1OfTransient^ theOther)
{
	::TColStd_Array1OfTransient* _result = new ::TColStd_Array1OfTransient();
	*_result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Assign(*(::TColStd_Array1OfTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfTransient(_result);
}

RDC::OCC::TColStd_Array1OfTransient^ RDC::OCC::TColStd_Array1OfTransient::Move(RDC::OCC::TColStd_Array1OfTransient^ theOther)
{
	::TColStd_Array1OfTransient* _result = new ::TColStd_Array1OfTransient();
	*_result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Move(*(::TColStd_Array1OfTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfTransient(_result);
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array1OfTransient::First()
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array1OfTransient::ChangeFirst()
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array1OfTransient::Last()
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array1OfTransient::ChangeLast()
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array1OfTransient::Value(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Value(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array1OfTransient::ChangeValue(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->ChangeValue(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_Array1OfTransient::SetValue(int theIndex, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_Array1OfTransient*)_NativeInstance)->SetValue(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_Array1OfTransient::UpdateLowerBound(int theLower)
{
	((::TColStd_Array1OfTransient*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array1OfTransient::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array1OfTransient*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_Array1OfTransient::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfTransient*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_Array1OfTransient::IsDeletable()
{
	bool _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Standard_Transient^>^ RDC::OCC::TColStd_Array1OfTransient::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Standard_Transient^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_Array1OfTransient::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Standard_Transient^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfTransient::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfBoolean
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array2OfBoolean::TColStd_Array2OfBoolean()
	: RDC::OCC::BaseClass<::TColStd_Array2OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfBoolean();
}

RDC::OCC::TColStd_Array2OfBoolean::TColStd_Array2OfBoolean(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TColStd_Array2OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfBoolean(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColStd_Array2OfBoolean::TColStd_Array2OfBoolean(bool theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TColStd_Array2OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<bool> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array2OfBoolean(*(bool*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColStd_Array2OfBoolean::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TColStd_Array2OfBoolean::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TColStd_Array2OfBoolean::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::Size()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::Length()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::NbRows()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::NbColumns()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::RowLength()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::ColLength()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::LowerRow()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::UpperRow()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::LowerCol()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::UpperCol()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TColStd_Array2OfBoolean^ RDC::OCC::TColStd_Array2OfBoolean::Assign(RDC::OCC::TColStd_Array2OfBoolean^ theOther)
{
	::TColStd_Array2OfBoolean* _result = new ::TColStd_Array2OfBoolean();
	*_result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Assign(*(::TColStd_Array2OfBoolean*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfBoolean(_result);
}

RDC::OCC::TColStd_Array2OfBoolean^ RDC::OCC::TColStd_Array2OfBoolean::Move(RDC::OCC::TColStd_Array2OfBoolean^ theOther)
{
	::TColStd_Array2OfBoolean* _result = new ::TColStd_Array2OfBoolean();
	*_result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Move(*(::TColStd_Array2OfBoolean*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfBoolean(_result);
}

bool RDC::OCC::TColStd_Array2OfBoolean::Value(int theRow, int theCol)
{
	bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

bool RDC::OCC::TColStd_Array2OfBoolean::ChangeValue(int theRow, int theCol)
{
	bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result;
}

void RDC::OCC::TColStd_Array2OfBoolean::SetValue(int theRow, int theCol, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_Array2OfBoolean*)_NativeInstance)->SetValue(theRow, theCol, *(bool*)pp_theItem);
}

void RDC::OCC::TColStd_Array2OfBoolean::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_Array2OfBoolean*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColStd_Array2OfBoolean::Init(bool theValue)
{
	pin_ptr<bool> pp_theValue = &theValue;
	((::TColStd_Array2OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

bool RDC::OCC::TColStd_Array2OfBoolean::IsEmpty()
{
	bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::Lower()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array2OfBoolean::Upper()
{
	int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_Array2OfBoolean::First()
{
	bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->First();
	return _result;
}

bool RDC::OCC::TColStd_Array2OfBoolean::Last()
{
	bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Last();
	return _result;
}

void RDC::OCC::TColStd_Array2OfBoolean::UpdateLowerBound(int theLower)
{
	((::TColStd_Array2OfBoolean*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array2OfBoolean::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array2OfBoolean*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColStd_Array2OfBoolean::IsDeletable()
{
	bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->IsDeletable();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfBoolean::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfCharacter
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array2OfCharacter::TColStd_Array2OfCharacter()
	: RDC::OCC::BaseClass<::TColStd_Array2OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfCharacter();
}

RDC::OCC::TColStd_Array2OfCharacter::TColStd_Array2OfCharacter(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TColStd_Array2OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfCharacter(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColStd_Array2OfCharacter::TColStd_Array2OfCharacter(char theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TColStd_Array2OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array2OfCharacter(*(char*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColStd_Array2OfCharacter::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TColStd_Array2OfCharacter::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TColStd_Array2OfCharacter::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::Size()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::Length()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::NbRows()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::NbColumns()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::RowLength()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::ColLength()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::LowerRow()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::UpperRow()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::LowerCol()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::UpperCol()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TColStd_Array2OfCharacter^ RDC::OCC::TColStd_Array2OfCharacter::Assign(RDC::OCC::TColStd_Array2OfCharacter^ theOther)
{
	::TColStd_Array2OfCharacter* _result = new ::TColStd_Array2OfCharacter();
	*_result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Assign(*(::TColStd_Array2OfCharacter*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfCharacter(_result);
}

RDC::OCC::TColStd_Array2OfCharacter^ RDC::OCC::TColStd_Array2OfCharacter::Move(RDC::OCC::TColStd_Array2OfCharacter^ theOther)
{
	::TColStd_Array2OfCharacter* _result = new ::TColStd_Array2OfCharacter();
	*_result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Move(*(::TColStd_Array2OfCharacter*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfCharacter(_result);
}

char RDC::OCC::TColStd_Array2OfCharacter::Value(int theRow, int theCol)
{
	char _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

char RDC::OCC::TColStd_Array2OfCharacter::ChangeValue(int theRow, int theCol)
{
	char _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result;
}

void RDC::OCC::TColStd_Array2OfCharacter::SetValue(int theRow, int theCol, char theItem)
{
	pin_ptr<char> pp_theItem = &theItem;
	((::TColStd_Array2OfCharacter*)_NativeInstance)->SetValue(theRow, theCol, *(char*)pp_theItem);
}

void RDC::OCC::TColStd_Array2OfCharacter::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_Array2OfCharacter*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColStd_Array2OfCharacter::Init(char theValue)
{
	pin_ptr<char> pp_theValue = &theValue;
	((::TColStd_Array2OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

bool RDC::OCC::TColStd_Array2OfCharacter::IsEmpty()
{
	bool _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::Lower()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array2OfCharacter::Upper()
{
	int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Upper();
	return _result;
}

char RDC::OCC::TColStd_Array2OfCharacter::First()
{
	char _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->First();
	return _result;
}

char RDC::OCC::TColStd_Array2OfCharacter::Last()
{
	char _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Last();
	return _result;
}

void RDC::OCC::TColStd_Array2OfCharacter::UpdateLowerBound(int theLower)
{
	((::TColStd_Array2OfCharacter*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array2OfCharacter::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array2OfCharacter*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColStd_Array2OfCharacter::IsDeletable()
{
	bool _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->IsDeletable();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfCharacter::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array2OfInteger::TColStd_Array2OfInteger()
	: RDC::OCC::BaseClass<::TColStd_Array2OfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfInteger();
}

RDC::OCC::TColStd_Array2OfInteger::TColStd_Array2OfInteger(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TColStd_Array2OfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfInteger(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColStd_Array2OfInteger::TColStd_Array2OfInteger(int theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TColStd_Array2OfInteger>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<int> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array2OfInteger(*(int*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColStd_Array2OfInteger::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TColStd_Array2OfInteger::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TColStd_Array2OfInteger::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::Size()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::Length()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::NbRows()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::NbColumns()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::RowLength()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::ColLength()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::LowerRow()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::UpperRow()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::LowerCol()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::UpperCol()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TColStd_Array2OfInteger^ RDC::OCC::TColStd_Array2OfInteger::Assign(RDC::OCC::TColStd_Array2OfInteger^ theOther)
{
	::TColStd_Array2OfInteger* _result = new ::TColStd_Array2OfInteger();
	*_result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Assign(*(::TColStd_Array2OfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfInteger(_result);
}

RDC::OCC::TColStd_Array2OfInteger^ RDC::OCC::TColStd_Array2OfInteger::Move(RDC::OCC::TColStd_Array2OfInteger^ theOther)
{
	::TColStd_Array2OfInteger* _result = new ::TColStd_Array2OfInteger();
	*_result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Move(*(::TColStd_Array2OfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfInteger(_result);
}

int RDC::OCC::TColStd_Array2OfInteger::Value(int theRow, int theCol)
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::ChangeValue(int theRow, int theCol)
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result;
}

void RDC::OCC::TColStd_Array2OfInteger::SetValue(int theRow, int theCol, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_Array2OfInteger*)_NativeInstance)->SetValue(theRow, theCol, *(int*)pp_theItem);
}

void RDC::OCC::TColStd_Array2OfInteger::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_Array2OfInteger*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColStd_Array2OfInteger::Init(int theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	((::TColStd_Array2OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

bool RDC::OCC::TColStd_Array2OfInteger::IsEmpty()
{
	bool _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::Lower()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::Upper()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Upper();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::First()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->First();
	return _result;
}

int RDC::OCC::TColStd_Array2OfInteger::Last()
{
	int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Last();
	return _result;
}

void RDC::OCC::TColStd_Array2OfInteger::UpdateLowerBound(int theLower)
{
	((::TColStd_Array2OfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array2OfInteger::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array2OfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColStd_Array2OfInteger::IsDeletable()
{
	bool _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->IsDeletable();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfInteger::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array2OfReal::TColStd_Array2OfReal()
	: RDC::OCC::BaseClass<::TColStd_Array2OfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfReal();
}

RDC::OCC::TColStd_Array2OfReal::TColStd_Array2OfReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TColStd_Array2OfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfReal(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColStd_Array2OfReal::TColStd_Array2OfReal(double theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TColStd_Array2OfReal>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array2OfReal(*(double*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColStd_Array2OfReal::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TColStd_Array2OfReal::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TColStd_Array2OfReal::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::Size()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::Length()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::NbRows()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::NbColumns()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::RowLength()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::ColLength()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::LowerRow()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::UpperRow()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::LowerCol()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::UpperCol()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TColStd_Array2OfReal^ RDC::OCC::TColStd_Array2OfReal::Assign(RDC::OCC::TColStd_Array2OfReal^ theOther)
{
	::TColStd_Array2OfReal* _result = new ::TColStd_Array2OfReal();
	*_result = ((::TColStd_Array2OfReal*)_NativeInstance)->Assign(*(::TColStd_Array2OfReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfReal(_result);
}

RDC::OCC::TColStd_Array2OfReal^ RDC::OCC::TColStd_Array2OfReal::Move(RDC::OCC::TColStd_Array2OfReal^ theOther)
{
	::TColStd_Array2OfReal* _result = new ::TColStd_Array2OfReal();
	*_result = ((::TColStd_Array2OfReal*)_NativeInstance)->Move(*(::TColStd_Array2OfReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfReal(_result);
}

double RDC::OCC::TColStd_Array2OfReal::Value(int theRow, int theCol)
{
	double _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

double RDC::OCC::TColStd_Array2OfReal::ChangeValue(int theRow, int theCol)
{
	double _result = ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result;
}

void RDC::OCC::TColStd_Array2OfReal::SetValue(int theRow, int theCol, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_Array2OfReal*)_NativeInstance)->SetValue(theRow, theCol, *(double*)pp_theItem);
}

void RDC::OCC::TColStd_Array2OfReal::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_Array2OfReal*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColStd_Array2OfReal::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColStd_Array2OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

bool RDC::OCC::TColStd_Array2OfReal::IsEmpty()
{
	bool _result = ((::TColStd_Array2OfReal*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::Lower()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array2OfReal::Upper()
{
	int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Upper();
	return _result;
}

double RDC::OCC::TColStd_Array2OfReal::First()
{
	double _result = ((::TColStd_Array2OfReal*)_NativeInstance)->First();
	return _result;
}

double RDC::OCC::TColStd_Array2OfReal::Last()
{
	double _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Last();
	return _result;
}

void RDC::OCC::TColStd_Array2OfReal::UpdateLowerBound(int theLower)
{
	((::TColStd_Array2OfReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array2OfReal::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array2OfReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColStd_Array2OfReal::IsDeletable()
{
	bool _result = ((::TColStd_Array2OfReal*)_NativeInstance)->IsDeletable();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfReal::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_Array2OfTransient::TColStd_Array2OfTransient()
	: RDC::OCC::BaseClass<::TColStd_Array2OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfTransient();
}

RDC::OCC::TColStd_Array2OfTransient::TColStd_Array2OfTransient(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TColStd_Array2OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfTransient(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TColStd_Array2OfTransient::TColStd_Array2OfTransient(RDC::OCC::Standard_Transient^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TColStd_Array2OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfTransient(Handle(::Standard_Transient)(theBegin->NativeInstance), theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TColStd_Array2OfTransient::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TColStd_Array2OfTransient::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TColStd_Array2OfTransient::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::Size()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::Length()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::NbRows()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::NbColumns()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::RowLength()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::ColLength()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::LowerRow()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::UpperRow()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::LowerCol()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::UpperCol()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TColStd_Array2OfTransient^ RDC::OCC::TColStd_Array2OfTransient::Assign(RDC::OCC::TColStd_Array2OfTransient^ theOther)
{
	::TColStd_Array2OfTransient* _result = new ::TColStd_Array2OfTransient();
	*_result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Assign(*(::TColStd_Array2OfTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfTransient(_result);
}

RDC::OCC::TColStd_Array2OfTransient^ RDC::OCC::TColStd_Array2OfTransient::Move(RDC::OCC::TColStd_Array2OfTransient^ theOther)
{
	::TColStd_Array2OfTransient* _result = new ::TColStd_Array2OfTransient();
	*_result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Move(*(::TColStd_Array2OfTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfTransient(_result);
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array2OfTransient::Value(int theRow, int theCol)
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Value(theRow, theCol);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array2OfTransient::ChangeValue(int theRow, int theCol)
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_Array2OfTransient::SetValue(int theRow, int theCol, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_Array2OfTransient*)_NativeInstance)->SetValue(theRow, theCol, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_Array2OfTransient::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_Array2OfTransient*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColStd_Array2OfTransient::Init(RDC::OCC::Standard_Transient^ theValue)
{
	((::TColStd_Array2OfTransient*)_NativeInstance)->Init(Handle(::Standard_Transient)(theValue->NativeInstance));
}

bool RDC::OCC::TColStd_Array2OfTransient::IsEmpty()
{
	bool _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::Lower()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_Array2OfTransient::Upper()
{
	int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array2OfTransient::First()
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array2OfTransient::ChangeFirst()
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array2OfTransient::Last()
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_Array2OfTransient::ChangeLast()
{
	Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_Array2OfTransient::UpdateLowerBound(int theLower)
{
	((::TColStd_Array2OfTransient*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_Array2OfTransient::UpdateUpperBound(int theUpper)
{
	((::TColStd_Array2OfTransient*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColStd_Array2OfTransient::IsDeletable()
{
	bool _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->IsDeletable();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfTransient::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfAsciiStringInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfAsciiStringInteger::TColStd_DataMapOfAsciiStringInteger()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfAsciiStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger();
}

RDC::OCC::TColStd_DataMapOfAsciiStringInteger::TColStd_DataMapOfAsciiStringInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfAsciiStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_DataMapOfAsciiStringInteger::TColStd_DataMapOfAsciiStringInteger(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfAsciiStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Exchange(RDC::OCC::TColStd_DataMapOfAsciiStringInteger^ theOther)
{
	((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfAsciiStringInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_DataMapOfAsciiStringInteger^ RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Assign(RDC::OCC::TColStd_DataMapOfAsciiStringInteger^ theOther)
{
	::TColStd_DataMapOfAsciiStringInteger* _result = new ::TColStd_DataMapOfAsciiStringInteger();
	*_result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Assign(*(::TColStd_DataMapOfAsciiStringInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_DataMapOfAsciiStringInteger(_result);
}

void RDC::OCC::TColStd_DataMapOfAsciiStringInteger::ReSize(int N)
{
	((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Bind(RDC::OCC::TCollection_AsciiString^ theKey, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	bool _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Bind(*(::TCollection_AsciiString*)theKey->NativeInstance, *(int*)pp_theItem);
	return _result;
}

int RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Bound(RDC::OCC::TCollection_AsciiString^ theKey, int theItem)
{
	throw gcnew System::NotImplementedException();
}

bool RDC::OCC::TColStd_DataMapOfAsciiStringInteger::IsBound(RDC::OCC::TCollection_AsciiString^ theKey)
{
	bool _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->IsBound(*(::TCollection_AsciiString*)theKey->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_DataMapOfAsciiStringInteger::UnBind(RDC::OCC::TCollection_AsciiString^ theKey)
{
	bool _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->UnBind(*(::TCollection_AsciiString*)theKey->NativeInstance);
	return _result;
}

int RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Seek(RDC::OCC::TCollection_AsciiString^ theKey)
{
	throw gcnew System::NotImplementedException();
}

int RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Find(RDC::OCC::TCollection_AsciiString^ theKey)
{
	int _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Find(*(::TCollection_AsciiString*)theKey->NativeInstance);
	return _result;
}

int RDC::OCC::TColStd_DataMapOfAsciiStringInteger::ChangeSeek(RDC::OCC::TCollection_AsciiString^ theKey)
{
	throw gcnew System::NotImplementedException();
}

int RDC::OCC::TColStd_DataMapOfAsciiStringInteger::ChangeFind(RDC::OCC::TCollection_AsciiString^ theKey)
{
	int _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->ChangeFind(*(::TCollection_AsciiString*)theKey->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Clear()
{
	((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Size()
{
	int _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfAsciiStringInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfAsciiStringInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger::Iterator();
}

bool RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Iterator::More()
{
	bool _result = ((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Iterator::Next()
{
	((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->Next();
}

int RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Iterator::Value()
{
	int _result = ((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->Value();
	return _result;
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_DataMapOfAsciiStringInteger::Iterator::Key()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->Key();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfIntegerInteger::TColStd_DataMapOfIntegerInteger()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerInteger();
}

RDC::OCC::TColStd_DataMapOfIntegerInteger::TColStd_DataMapOfIntegerInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_DataMapOfIntegerInteger::TColStd_DataMapOfIntegerInteger(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerInteger(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_DataMapOfIntegerInteger::Exchange(RDC::OCC::TColStd_DataMapOfIntegerInteger^ theOther)
{
	((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfIntegerInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_DataMapOfIntegerInteger^ RDC::OCC::TColStd_DataMapOfIntegerInteger::Assign(RDC::OCC::TColStd_DataMapOfIntegerInteger^ theOther)
{
	::TColStd_DataMapOfIntegerInteger* _result = new ::TColStd_DataMapOfIntegerInteger();
	*_result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Assign(*(::TColStd_DataMapOfIntegerInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_DataMapOfIntegerInteger(_result);
}

void RDC::OCC::TColStd_DataMapOfIntegerInteger::ReSize(int N)
{
	((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_DataMapOfIntegerInteger::Bind(int theKey, int theItem)
{
	pin_ptr<int> pp_theKey = &theKey;
	pin_ptr<int> pp_theItem = &theItem;
	bool _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Bind(*(int*)pp_theKey, *(int*)pp_theItem);
	return _result;
}

int RDC::OCC::TColStd_DataMapOfIntegerInteger::Bound(int theKey, int theItem)
{
	throw gcnew System::NotImplementedException();
}

bool RDC::OCC::TColStd_DataMapOfIntegerInteger::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->IsBound(*(int*)pp_theKey);
	return _result;
}

bool RDC::OCC::TColStd_DataMapOfIntegerInteger::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->UnBind(*(int*)pp_theKey);
	return _result;
}

int RDC::OCC::TColStd_DataMapOfIntegerInteger::Seek(int theKey)
{
	throw gcnew System::NotImplementedException();
}

int RDC::OCC::TColStd_DataMapOfIntegerInteger::Find(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	int _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Find(*(int*)pp_theKey);
	return _result;
}

int RDC::OCC::TColStd_DataMapOfIntegerInteger::ChangeSeek(int theKey)
{
	throw gcnew System::NotImplementedException();
}

int RDC::OCC::TColStd_DataMapOfIntegerInteger::ChangeFind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	int _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
	return _result;
}

void RDC::OCC::TColStd_DataMapOfIntegerInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_DataMapOfIntegerInteger::Clear()
{
	((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_DataMapOfIntegerInteger::Size()
{
	int _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfIntegerInteger::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerInteger::Iterator();
}

bool RDC::OCC::TColStd_DataMapOfIntegerInteger::Iterator::More()
{
	bool _result = ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_DataMapOfIntegerInteger::Iterator::Next()
{
	((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->Next();
}

int RDC::OCC::TColStd_DataMapOfIntegerInteger::Iterator::Value()
{
	int _result = ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->Value();
	return _result;
}

int RDC::OCC::TColStd_DataMapOfIntegerInteger::Iterator::Key()
{
	int _result = ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->Key();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerListOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::TColStd_DataMapOfIntegerListOfInteger()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger();
}

RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Exchange(RDC::OCC::TColStd_DataMapOfIntegerListOfInteger^ theOther)
{
	((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfIntegerListOfInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_DataMapOfIntegerListOfInteger^ RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Assign(RDC::OCC::TColStd_DataMapOfIntegerListOfInteger^ theOther)
{
	::TColStd_DataMapOfIntegerListOfInteger* _result = new ::TColStd_DataMapOfIntegerListOfInteger();
	*_result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Assign(*(::TColStd_DataMapOfIntegerListOfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_DataMapOfIntegerListOfInteger(_result);
}

void RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::ReSize(int N)
{
	((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Bind(int theKey, RDC::OCC::TColStd_ListOfInteger^ theItem)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Bind(*(int*)pp_theKey, *(::TColStd_ListOfInteger*)theItem->NativeInstance);
	return _result;
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Bound(int theKey, RDC::OCC::TColStd_ListOfInteger^ theItem)
{
	pin_ptr<int> pp_theKey = &theKey;
	::TColStd_ListOfInteger* _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Bound(*(int*)pp_theKey, *(::TColStd_ListOfInteger*)theItem->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

bool RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->IsBound(*(int*)pp_theKey);
	return _result;
}

bool RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->UnBind(*(int*)pp_theKey);
	return _result;
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Seek(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	const ::TColStd_ListOfInteger* _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Seek(*(int*)pp_theKey);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger((::TColStd_ListOfInteger*)_result);
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Find(int theKey)
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	pin_ptr<int> pp_theKey = &theKey;
	*_result = (::TColStd_ListOfInteger)((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Find(*(int*)pp_theKey);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::ChangeSeek(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	::TColStd_ListOfInteger* _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->ChangeSeek(*(int*)pp_theKey);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::ChangeFind(int theKey)
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	pin_ptr<int> pp_theKey = &theKey;
	*_result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

void RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Clear()
{
	((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Size()
{
	int _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerListOfInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerListOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger::Iterator();
}

bool RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Iterator::More()
{
	bool _result = ((::TColStd_DataMapOfIntegerListOfInteger::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Iterator::Next()
{
	((::TColStd_DataMapOfIntegerListOfInteger::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Iterator::Value()
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result = (::TColStd_ListOfInteger)((::TColStd_DataMapOfIntegerListOfInteger::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Iterator::ChangeValue()
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result = ((::TColStd_DataMapOfIntegerListOfInteger::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

int RDC::OCC::TColStd_DataMapOfIntegerListOfInteger::Iterator::Key()
{
	int _result = ((::TColStd_DataMapOfIntegerListOfInteger::Iterator*)_NativeInstance)->Key();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfIntegerReal::TColStd_DataMapOfIntegerReal()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerReal();
}

RDC::OCC::TColStd_DataMapOfIntegerReal::TColStd_DataMapOfIntegerReal(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerReal(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_DataMapOfIntegerReal::TColStd_DataMapOfIntegerReal(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerReal(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_DataMapOfIntegerReal::Exchange(RDC::OCC::TColStd_DataMapOfIntegerReal^ theOther)
{
	((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfIntegerReal*)theOther->NativeInstance);
}

RDC::OCC::TColStd_DataMapOfIntegerReal^ RDC::OCC::TColStd_DataMapOfIntegerReal::Assign(RDC::OCC::TColStd_DataMapOfIntegerReal^ theOther)
{
	::TColStd_DataMapOfIntegerReal* _result = new ::TColStd_DataMapOfIntegerReal();
	*_result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Assign(*(::TColStd_DataMapOfIntegerReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_DataMapOfIntegerReal(_result);
}

void RDC::OCC::TColStd_DataMapOfIntegerReal::ReSize(int N)
{
	((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_DataMapOfIntegerReal::Bind(int theKey, double theItem)
{
	pin_ptr<int> pp_theKey = &theKey;
	pin_ptr<double> pp_theItem = &theItem;
	bool _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Bind(*(int*)pp_theKey, *(double*)pp_theItem);
	return _result;
}

double RDC::OCC::TColStd_DataMapOfIntegerReal::Bound(int theKey, double theItem)
{
	throw gcnew System::NotImplementedException();
}

bool RDC::OCC::TColStd_DataMapOfIntegerReal::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->IsBound(*(int*)pp_theKey);
	return _result;
}

bool RDC::OCC::TColStd_DataMapOfIntegerReal::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->UnBind(*(int*)pp_theKey);
	return _result;
}

double RDC::OCC::TColStd_DataMapOfIntegerReal::Seek(int theKey)
{
	throw gcnew System::NotImplementedException();
}

double RDC::OCC::TColStd_DataMapOfIntegerReal::Find(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	double _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Find(*(int*)pp_theKey);
	return _result;
}

double RDC::OCC::TColStd_DataMapOfIntegerReal::ChangeSeek(int theKey)
{
	throw gcnew System::NotImplementedException();
}

double RDC::OCC::TColStd_DataMapOfIntegerReal::ChangeFind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	double _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
	return _result;
}

void RDC::OCC::TColStd_DataMapOfIntegerReal::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_DataMapOfIntegerReal::Clear()
{
	((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_DataMapOfIntegerReal::Size()
{
	int _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerReal::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfIntegerReal::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerReal::Iterator();
}

bool RDC::OCC::TColStd_DataMapOfIntegerReal::Iterator::More()
{
	bool _result = ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_DataMapOfIntegerReal::Iterator::Next()
{
	((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->Next();
}

double RDC::OCC::TColStd_DataMapOfIntegerReal::Iterator::Value()
{
	double _result = ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->Value();
	return _result;
}

int RDC::OCC::TColStd_DataMapOfIntegerReal::Iterator::Key()
{
	int _result = ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->Key();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfIntegerTransient::TColStd_DataMapOfIntegerTransient()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerTransient();
}

RDC::OCC::TColStd_DataMapOfIntegerTransient::TColStd_DataMapOfIntegerTransient(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerTransient(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_DataMapOfIntegerTransient::TColStd_DataMapOfIntegerTransient(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerTransient(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_DataMapOfIntegerTransient::Exchange(RDC::OCC::TColStd_DataMapOfIntegerTransient^ theOther)
{
	((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfIntegerTransient*)theOther->NativeInstance);
}

RDC::OCC::TColStd_DataMapOfIntegerTransient^ RDC::OCC::TColStd_DataMapOfIntegerTransient::Assign(RDC::OCC::TColStd_DataMapOfIntegerTransient^ theOther)
{
	::TColStd_DataMapOfIntegerTransient* _result = new ::TColStd_DataMapOfIntegerTransient();
	*_result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Assign(*(::TColStd_DataMapOfIntegerTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_DataMapOfIntegerTransient(_result);
}

void RDC::OCC::TColStd_DataMapOfIntegerTransient::ReSize(int N)
{
	((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_DataMapOfIntegerTransient::Bind(int theKey, RDC::OCC::Standard_Transient^ theItem)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Bind(*(int*)pp_theKey, Handle(::Standard_Transient)(theItem->NativeInstance));
	return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfIntegerTransient::Bound(int theKey, RDC::OCC::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

bool RDC::OCC::TColStd_DataMapOfIntegerTransient::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->IsBound(*(int*)pp_theKey);
	return _result;
}

bool RDC::OCC::TColStd_DataMapOfIntegerTransient::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->UnBind(*(int*)pp_theKey);
	return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfIntegerTransient::Seek(int theKey)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfIntegerTransient::Find(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Find(*(int*)pp_theKey);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfIntegerTransient::ChangeSeek(int theKey)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfIntegerTransient::ChangeFind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_DataMapOfIntegerTransient::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_DataMapOfIntegerTransient::Clear()
{
	((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_DataMapOfIntegerTransient::Size()
{
	int _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerTransient::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfIntegerTransient::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerTransient::Iterator();
}

bool RDC::OCC::TColStd_DataMapOfIntegerTransient::Iterator::More()
{
	bool _result = ((::TColStd_DataMapOfIntegerTransient::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_DataMapOfIntegerTransient::Iterator::Next()
{
	((::TColStd_DataMapOfIntegerTransient::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfIntegerTransient::Iterator::Value()
{
	Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfIntegerTransient::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfIntegerTransient::Iterator::ChangeValue()
{
	Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfIntegerTransient::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

int RDC::OCC::TColStd_DataMapOfIntegerTransient::Iterator::Key()
{
	int _result = ((::TColStd_DataMapOfIntegerTransient::Iterator*)_NativeInstance)->Key();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfStringInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfStringInteger::TColStd_DataMapOfStringInteger()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfStringInteger();
}

RDC::OCC::TColStd_DataMapOfStringInteger::TColStd_DataMapOfStringInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfStringInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_DataMapOfStringInteger::TColStd_DataMapOfStringInteger(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfStringInteger(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_DataMapOfStringInteger::Exchange(RDC::OCC::TColStd_DataMapOfStringInteger^ theOther)
{
	((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfStringInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_DataMapOfStringInteger^ RDC::OCC::TColStd_DataMapOfStringInteger::Assign(RDC::OCC::TColStd_DataMapOfStringInteger^ theOther)
{
	::TColStd_DataMapOfStringInteger* _result = new ::TColStd_DataMapOfStringInteger();
	*_result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Assign(*(::TColStd_DataMapOfStringInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_DataMapOfStringInteger(_result);
}

void RDC::OCC::TColStd_DataMapOfStringInteger::ReSize(int N)
{
	((::TColStd_DataMapOfStringInteger*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_DataMapOfStringInteger::Bind(RDC::OCC::TCollection_ExtendedString^ theKey, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	bool _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Bind(*(::TCollection_ExtendedString*)theKey->NativeInstance, *(int*)pp_theItem);
	return _result;
}

int RDC::OCC::TColStd_DataMapOfStringInteger::Bound(RDC::OCC::TCollection_ExtendedString^ theKey, int theItem)
{
	throw gcnew System::NotImplementedException();
}

bool RDC::OCC::TColStd_DataMapOfStringInteger::IsBound(RDC::OCC::TCollection_ExtendedString^ theKey)
{
	bool _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->IsBound(*(::TCollection_ExtendedString*)theKey->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_DataMapOfStringInteger::UnBind(RDC::OCC::TCollection_ExtendedString^ theKey)
{
	bool _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->UnBind(*(::TCollection_ExtendedString*)theKey->NativeInstance);
	return _result;
}

int RDC::OCC::TColStd_DataMapOfStringInteger::Seek(RDC::OCC::TCollection_ExtendedString^ theKey)
{
	throw gcnew System::NotImplementedException();
}

int RDC::OCC::TColStd_DataMapOfStringInteger::Find(RDC::OCC::TCollection_ExtendedString^ theKey)
{
	int _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Find(*(::TCollection_ExtendedString*)theKey->NativeInstance);
	return _result;
}

int RDC::OCC::TColStd_DataMapOfStringInteger::ChangeSeek(RDC::OCC::TCollection_ExtendedString^ theKey)
{
	throw gcnew System::NotImplementedException();
}

int RDC::OCC::TColStd_DataMapOfStringInteger::ChangeFind(RDC::OCC::TCollection_ExtendedString^ theKey)
{
	int _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->ChangeFind(*(::TCollection_ExtendedString*)theKey->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_DataMapOfStringInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_DataMapOfStringInteger::Clear()
{
	((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_DataMapOfStringInteger::Size()
{
	int _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfStringInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfStringInteger::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfStringInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfStringInteger::Iterator();
}

bool RDC::OCC::TColStd_DataMapOfStringInteger::Iterator::More()
{
	bool _result = ((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_DataMapOfStringInteger::Iterator::Next()
{
	((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->Next();
}

int RDC::OCC::TColStd_DataMapOfStringInteger::Iterator::Value()
{
	int _result = ((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->Value();
	return _result;
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_DataMapOfStringInteger::Iterator::Key()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->Key();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfTransientTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfTransientTransient::TColStd_DataMapOfTransientTransient()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfTransientTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfTransientTransient();
}

RDC::OCC::TColStd_DataMapOfTransientTransient::TColStd_DataMapOfTransientTransient(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfTransientTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfTransientTransient(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_DataMapOfTransientTransient::TColStd_DataMapOfTransientTransient(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_DataMapOfTransientTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfTransientTransient(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_DataMapOfTransientTransient::Exchange(RDC::OCC::TColStd_DataMapOfTransientTransient^ theOther)
{
	((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfTransientTransient*)theOther->NativeInstance);
}

RDC::OCC::TColStd_DataMapOfTransientTransient^ RDC::OCC::TColStd_DataMapOfTransientTransient::Assign(RDC::OCC::TColStd_DataMapOfTransientTransient^ theOther)
{
	::TColStd_DataMapOfTransientTransient* _result = new ::TColStd_DataMapOfTransientTransient();
	*_result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Assign(*(::TColStd_DataMapOfTransientTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_DataMapOfTransientTransient(_result);
}

void RDC::OCC::TColStd_DataMapOfTransientTransient::ReSize(int N)
{
	((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_DataMapOfTransientTransient::Bind(RDC::OCC::Standard_Transient^ theKey, RDC::OCC::Standard_Transient^ theItem)
{
	bool _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Bind(Handle(::Standard_Transient)(theKey->NativeInstance), Handle(::Standard_Transient)(theItem->NativeInstance));
	return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfTransientTransient::Bound(RDC::OCC::Standard_Transient^ theKey, RDC::OCC::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

bool RDC::OCC::TColStd_DataMapOfTransientTransient::IsBound(RDC::OCC::Standard_Transient^ theKey)
{
	bool _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->IsBound(Handle(::Standard_Transient)(theKey->NativeInstance));
	return _result;
}

bool RDC::OCC::TColStd_DataMapOfTransientTransient::UnBind(RDC::OCC::Standard_Transient^ theKey)
{
	bool _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->UnBind(Handle(::Standard_Transient)(theKey->NativeInstance));
	return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfTransientTransient::Seek(RDC::OCC::Standard_Transient^ theKey)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfTransientTransient::Find(RDC::OCC::Standard_Transient^ theKey)
{
	Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Find(Handle(::Standard_Transient)(theKey->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfTransientTransient::ChangeSeek(RDC::OCC::Standard_Transient^ theKey)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfTransientTransient::ChangeFind(RDC::OCC::Standard_Transient^ theKey)
{
	Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->ChangeFind(Handle(::Standard_Transient)(theKey->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_DataMapOfTransientTransient::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_DataMapOfTransientTransient::Clear()
{
	((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_DataMapOfTransientTransient::Size()
{
	int _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfTransientTransient::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_DataMapOfTransientTransient::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_DataMapOfTransientTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfTransientTransient::Iterator();
}

bool RDC::OCC::TColStd_DataMapOfTransientTransient::Iterator::More()
{
	bool _result = ((::TColStd_DataMapOfTransientTransient::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_DataMapOfTransientTransient::Iterator::Next()
{
	((::TColStd_DataMapOfTransientTransient::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfTransientTransient::Iterator::Value()
{
	Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfTransientTransient::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfTransientTransient::Iterator::ChangeValue()
{
	Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfTransientTransient::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_DataMapOfTransientTransient::Iterator::Key()
{
	Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfTransientTransient::Iterator*)_NativeInstance)->Key();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAsciiString
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfAsciiString::TColStd_SequenceOfAsciiString()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfAsciiString();
}

RDC::OCC::TColStd_SequenceOfAsciiString::TColStd_SequenceOfAsciiString(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_SequenceOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfAsciiString(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_SequenceOfAsciiString::Size()
{
	int _result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfAsciiString::Length()
{
	int _result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfAsciiString::Lower()
{
	int _result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfAsciiString::Upper()
{
	int _result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfAsciiString::IsEmpty()
{
	bool _result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfAsciiString::Reverse()
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_SequenceOfAsciiString::Exchange(int I, int J)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_SequenceOfAsciiString::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfAsciiString::Clear()
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_SequenceOfAsciiString^ RDC::OCC::TColStd_SequenceOfAsciiString::Assign(RDC::OCC::TColStd_SequenceOfAsciiString^ theOther)
{
	::TColStd_SequenceOfAsciiString* _result = new ::TColStd_SequenceOfAsciiString();
	*_result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Assign(*(::TColStd_SequenceOfAsciiString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfAsciiString(_result);
}

void RDC::OCC::TColStd_SequenceOfAsciiString::Remove(RDC::OCC::TColStd_SequenceOfAsciiString::Iterator^ thePosition)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Remove(*(::TColStd_SequenceOfAsciiString::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfAsciiString::Append(RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Append(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfAsciiString::Prepend(RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfAsciiString::InsertBefore(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfAsciiString::InsertAfter(RDC::OCC::TColStd_SequenceOfAsciiString::Iterator^ thePosition, RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfAsciiString::Iterator*)thePosition->NativeInstance, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfAsciiString::Split(int theIndex, RDC::OCC::TColStd_SequenceOfAsciiString^ theSeq)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfAsciiString*)theSeq->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_SequenceOfAsciiString::First()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_SequenceOfAsciiString::ChangeFirst()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_SequenceOfAsciiString::Last()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_SequenceOfAsciiString::ChangeLast()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_SequenceOfAsciiString::Value(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_SequenceOfAsciiString::ChangeValue(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::TColStd_SequenceOfAsciiString::SetValue(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_AsciiString^>^ RDC::OCC::TColStd_SequenceOfAsciiString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_AsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_SequenceOfAsciiString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_AsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAsciiString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfAsciiString::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfAsciiString::Iterator();
}

bool RDC::OCC::TColStd_SequenceOfAsciiString::Iterator::More()
{
	bool _result = ((::TColStd_SequenceOfAsciiString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfAsciiString::Iterator::Next()
{
	((::TColStd_SequenceOfAsciiString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_SequenceOfAsciiString::Iterator::Value()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_SequenceOfAsciiString::Iterator::ChangeValue()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_SequenceOfAsciiString::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

bool RDC::OCC::TColStd_SequenceOfAsciiString::Iterator::IsEqual(RDC::OCC::TColStd_SequenceOfAsciiString::Iterator^ theOther)
{
	bool _result = ((::TColStd_SequenceOfAsciiString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfAsciiString::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfAsciiString::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_SequenceOfAsciiString::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfExtendedString
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfExtendedString::TColStd_SequenceOfExtendedString()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfExtendedString();
}

RDC::OCC::TColStd_SequenceOfExtendedString::TColStd_SequenceOfExtendedString(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_SequenceOfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfExtendedString(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_SequenceOfExtendedString::Size()
{
	int _result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfExtendedString::Length()
{
	int _result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfExtendedString::Lower()
{
	int _result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfExtendedString::Upper()
{
	int _result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfExtendedString::IsEmpty()
{
	bool _result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfExtendedString::Reverse()
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_SequenceOfExtendedString::Exchange(int I, int J)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_SequenceOfExtendedString::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfExtendedString::Clear()
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_SequenceOfExtendedString^ RDC::OCC::TColStd_SequenceOfExtendedString::Assign(RDC::OCC::TColStd_SequenceOfExtendedString^ theOther)
{
	::TColStd_SequenceOfExtendedString* _result = new ::TColStd_SequenceOfExtendedString();
	*_result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Assign(*(::TColStd_SequenceOfExtendedString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfExtendedString(_result);
}

void RDC::OCC::TColStd_SequenceOfExtendedString::Remove(RDC::OCC::TColStd_SequenceOfExtendedString::Iterator^ thePosition)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Remove(*(::TColStd_SequenceOfExtendedString::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfExtendedString::Append(RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Append(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfExtendedString::Prepend(RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Prepend(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfExtendedString::InsertBefore(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfExtendedString::InsertAfter(RDC::OCC::TColStd_SequenceOfExtendedString::Iterator^ thePosition, RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfExtendedString::Iterator*)thePosition->NativeInstance, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfExtendedString::Split(int theIndex, RDC::OCC::TColStd_SequenceOfExtendedString^ theSeq)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfExtendedString*)theSeq->NativeInstance);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_SequenceOfExtendedString::First()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_SequenceOfExtendedString::ChangeFirst()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_SequenceOfExtendedString::Last()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_SequenceOfExtendedString::ChangeLast()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_SequenceOfExtendedString::Value(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_SequenceOfExtendedString::ChangeValue(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

void RDC::OCC::TColStd_SequenceOfExtendedString::SetValue(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_ExtendedString^>^ RDC::OCC::TColStd_SequenceOfExtendedString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_ExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_SequenceOfExtendedString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_ExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfExtendedString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfExtendedString::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfExtendedString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfExtendedString::Iterator();
}

bool RDC::OCC::TColStd_SequenceOfExtendedString::Iterator::More()
{
	bool _result = ((::TColStd_SequenceOfExtendedString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfExtendedString::Iterator::Next()
{
	((::TColStd_SequenceOfExtendedString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_SequenceOfExtendedString::Iterator::Value()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_SequenceOfExtendedString::Iterator::ChangeValue()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_SequenceOfExtendedString::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

bool RDC::OCC::TColStd_SequenceOfExtendedString::Iterator::IsEqual(RDC::OCC::TColStd_SequenceOfExtendedString::Iterator^ theOther)
{
	bool _result = ((::TColStd_SequenceOfExtendedString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfExtendedString::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfExtendedString::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_SequenceOfExtendedString::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHAsciiString
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfHAsciiString::TColStd_SequenceOfHAsciiString()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfHAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfHAsciiString();
}

RDC::OCC::TColStd_SequenceOfHAsciiString::TColStd_SequenceOfHAsciiString(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_SequenceOfHAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfHAsciiString(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_SequenceOfHAsciiString::Size()
{
	int _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfHAsciiString::Length()
{
	int _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfHAsciiString::Lower()
{
	int _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfHAsciiString::Upper()
{
	int _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfHAsciiString::IsEmpty()
{
	bool _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::Reverse()
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::Exchange(int I, int J)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::Clear()
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_SequenceOfHAsciiString^ RDC::OCC::TColStd_SequenceOfHAsciiString::Assign(RDC::OCC::TColStd_SequenceOfHAsciiString^ theOther)
{
	::TColStd_SequenceOfHAsciiString* _result = new ::TColStd_SequenceOfHAsciiString();
	*_result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Assign(*(::TColStd_SequenceOfHAsciiString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfHAsciiString(_result);
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::Remove(RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator^ thePosition)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Remove(*(::TColStd_SequenceOfHAsciiString::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::Append(RDC::OCC::TCollection_HAsciiString^ theItem)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Append(Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::Prepend(RDC::OCC::TCollection_HAsciiString^ theItem)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Prepend(Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::InsertBefore(int theIndex, RDC::OCC::TCollection_HAsciiString^ theItem)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->InsertBefore(theIndex, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::InsertAfter(RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator^ thePosition, RDC::OCC::TCollection_HAsciiString^ theItem)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfHAsciiString::Iterator*)thePosition->NativeInstance, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::Split(int theIndex, RDC::OCC::TColStd_SequenceOfHAsciiString^ theSeq)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfHAsciiString*)theSeq->NativeInstance);
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_SequenceOfHAsciiString::First()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_SequenceOfHAsciiString::ChangeFirst()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_SequenceOfHAsciiString::Last()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_SequenceOfHAsciiString::ChangeLast()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_SequenceOfHAsciiString::Value(int theIndex)
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Value(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_SequenceOfHAsciiString::ChangeValue(int theIndex)
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::SetValue(int theIndex, RDC::OCC::TCollection_HAsciiString^ theItem)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->SetValue(theIndex, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_HAsciiString^>^ RDC::OCC::TColStd_SequenceOfHAsciiString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_HAsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_SequenceOfHAsciiString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_HAsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHAsciiString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfHAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfHAsciiString::Iterator();
}

bool RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator::More()
{
	bool _result = ((::TColStd_SequenceOfHAsciiString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator::Next()
{
	((::TColStd_SequenceOfHAsciiString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator::Value()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator::ChangeValue()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

bool RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator::IsEqual(RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator^ theOther)
{
	bool _result = ((::TColStd_SequenceOfHAsciiString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfHAsciiString::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHExtendedString
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfHExtendedString::TColStd_SequenceOfHExtendedString()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfHExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfHExtendedString();
}

RDC::OCC::TColStd_SequenceOfHExtendedString::TColStd_SequenceOfHExtendedString(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_SequenceOfHExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfHExtendedString(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_SequenceOfHExtendedString::Size()
{
	int _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfHExtendedString::Length()
{
	int _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfHExtendedString::Lower()
{
	int _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfHExtendedString::Upper()
{
	int _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfHExtendedString::IsEmpty()
{
	bool _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::Reverse()
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::Exchange(int I, int J)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::Clear()
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_SequenceOfHExtendedString^ RDC::OCC::TColStd_SequenceOfHExtendedString::Assign(RDC::OCC::TColStd_SequenceOfHExtendedString^ theOther)
{
	::TColStd_SequenceOfHExtendedString* _result = new ::TColStd_SequenceOfHExtendedString();
	*_result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Assign(*(::TColStd_SequenceOfHExtendedString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfHExtendedString(_result);
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::Remove(RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator^ thePosition)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Remove(*(::TColStd_SequenceOfHExtendedString::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::Append(RDC::OCC::TCollection_HExtendedString^ theItem)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Append(Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::Prepend(RDC::OCC::TCollection_HExtendedString^ theItem)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Prepend(Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::InsertBefore(int theIndex, RDC::OCC::TCollection_HExtendedString^ theItem)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->InsertBefore(theIndex, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::InsertAfter(RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator^ thePosition, RDC::OCC::TCollection_HExtendedString^ theItem)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfHExtendedString::Iterator*)thePosition->NativeInstance, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::Split(int theIndex, RDC::OCC::TColStd_SequenceOfHExtendedString^ theSeq)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfHExtendedString*)theSeq->NativeInstance);
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_SequenceOfHExtendedString::First()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_SequenceOfHExtendedString::ChangeFirst()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_SequenceOfHExtendedString::Last()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_SequenceOfHExtendedString::ChangeLast()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_SequenceOfHExtendedString::Value(int theIndex)
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Value(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_SequenceOfHExtendedString::ChangeValue(int theIndex)
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::SetValue(int theIndex, RDC::OCC::TCollection_HExtendedString^ theItem)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->SetValue(theIndex, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_HExtendedString^>^ RDC::OCC::TColStd_SequenceOfHExtendedString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_HExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_SequenceOfHExtendedString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_HExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHExtendedString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfHExtendedString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfHExtendedString::Iterator();
}

bool RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator::More()
{
	bool _result = ((::TColStd_SequenceOfHExtendedString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator::Next()
{
	((::TColStd_SequenceOfHExtendedString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator::Value()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator::ChangeValue()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

bool RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator::IsEqual(RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator^ theOther)
{
	bool _result = ((::TColStd_SequenceOfHExtendedString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfHExtendedString::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfInteger::TColStd_SequenceOfInteger()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfInteger();
}

RDC::OCC::TColStd_SequenceOfInteger::TColStd_SequenceOfInteger(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_SequenceOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfInteger(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_SequenceOfInteger::Size()
{
	int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfInteger::Length()
{
	int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfInteger::Lower()
{
	int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfInteger::Upper()
{
	int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfInteger::IsEmpty()
{
	bool _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfInteger::Reverse()
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_SequenceOfInteger::Exchange(int I, int J)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_SequenceOfInteger::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfInteger::Clear()
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_SequenceOfInteger^ RDC::OCC::TColStd_SequenceOfInteger::Assign(RDC::OCC::TColStd_SequenceOfInteger^ theOther)
{
	::TColStd_SequenceOfInteger* _result = new ::TColStd_SequenceOfInteger();
	*_result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Assign(*(::TColStd_SequenceOfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfInteger(_result);
}

void RDC::OCC::TColStd_SequenceOfInteger::Remove(RDC::OCC::TColStd_SequenceOfInteger::Iterator^ thePosition)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Remove(*(::TColStd_SequenceOfInteger::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfInteger::Append(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Append(*(int*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfInteger::Prepend(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Prepend(*(int*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfInteger::InsertBefore(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->InsertBefore(theIndex, *(int*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfInteger::InsertAfter(RDC::OCC::TColStd_SequenceOfInteger::Iterator^ thePosition, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfInteger::Iterator*)thePosition->NativeInstance, *(int*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfInteger::Split(int theIndex, RDC::OCC::TColStd_SequenceOfInteger^ theSeq)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfInteger*)theSeq->NativeInstance);
}

int RDC::OCC::TColStd_SequenceOfInteger::First()
{
	int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->First();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfInteger::Last()
{
	int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Last();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfInteger::Value(int theIndex)
{
	int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Value(theIndex);
	return _result;
}

int RDC::OCC::TColStd_SequenceOfInteger::ChangeValue(int theIndex)
{
	int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_SequenceOfInteger::SetValue(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}

System::Collections::Generic::IEnumerator<int>^ RDC::OCC::TColStd_SequenceOfInteger::GetEnumerator()
{
	return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_SequenceOfInteger::GetEnumerator2()
{
	return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfInteger::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfInteger::Iterator();
}

bool RDC::OCC::TColStd_SequenceOfInteger::Iterator::More()
{
	bool _result = ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfInteger::Iterator::Next()
{
	((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->Next();
}

int RDC::OCC::TColStd_SequenceOfInteger::Iterator::Value()
{
	int _result = ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->Value();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfInteger::Iterator::IsEqual(RDC::OCC::TColStd_SequenceOfInteger::Iterator^ theOther)
{
	bool _result = ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfInteger::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfInteger::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_SequenceOfInteger::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfReal::TColStd_SequenceOfReal()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfReal();
}

RDC::OCC::TColStd_SequenceOfReal::TColStd_SequenceOfReal(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_SequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfReal(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_SequenceOfReal::Size()
{
	int _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfReal::Length()
{
	int _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfReal::Lower()
{
	int _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfReal::Upper()
{
	int _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfReal::IsEmpty()
{
	bool _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfReal::Reverse()
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_SequenceOfReal::Exchange(int I, int J)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_SequenceOfReal::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfReal::Clear()
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::TColStd_SequenceOfReal::Assign(RDC::OCC::TColStd_SequenceOfReal^ theOther)
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Assign(*(::TColStd_SequenceOfReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

void RDC::OCC::TColStd_SequenceOfReal::Remove(RDC::OCC::TColStd_SequenceOfReal::Iterator^ thePosition)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Remove(*(::TColStd_SequenceOfReal::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfReal::Append(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_SequenceOfReal*)_NativeInstance)->Append(*(double*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfReal::Prepend(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_SequenceOfReal*)_NativeInstance)->Prepend(*(double*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfReal::InsertBefore(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_SequenceOfReal*)_NativeInstance)->InsertBefore(theIndex, *(double*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfReal::InsertAfter(RDC::OCC::TColStd_SequenceOfReal::Iterator^ thePosition, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_SequenceOfReal*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfReal::Iterator*)thePosition->NativeInstance, *(double*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfReal::Split(int theIndex, RDC::OCC::TColStd_SequenceOfReal^ theSeq)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfReal*)theSeq->NativeInstance);
}

double RDC::OCC::TColStd_SequenceOfReal::First()
{
	double _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->First();
	return _result;
}

double RDC::OCC::TColStd_SequenceOfReal::Last()
{
	double _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Last();
	return _result;
}

double RDC::OCC::TColStd_SequenceOfReal::Value(int theIndex)
{
	double _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Value(theIndex);
	return _result;
}

double RDC::OCC::TColStd_SequenceOfReal::ChangeValue(int theIndex)
{
	double _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_SequenceOfReal::SetValue(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_SequenceOfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

System::Collections::Generic::IEnumerator<double>^ RDC::OCC::TColStd_SequenceOfReal::GetEnumerator()
{
	return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_SequenceOfReal::GetEnumerator2()
{
	return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfReal::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfReal::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfReal::Iterator();
}

bool RDC::OCC::TColStd_SequenceOfReal::Iterator::More()
{
	bool _result = ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfReal::Iterator::Next()
{
	((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->Next();
}

double RDC::OCC::TColStd_SequenceOfReal::Iterator::Value()
{
	double _result = ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->Value();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfReal::Iterator::IsEqual(RDC::OCC::TColStd_SequenceOfReal::Iterator^ theOther)
{
	bool _result = ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfReal::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfReal::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_SequenceOfReal::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfTransient::TColStd_SequenceOfTransient()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfTransient();
}

RDC::OCC::TColStd_SequenceOfTransient::TColStd_SequenceOfTransient(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_SequenceOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfTransient(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_SequenceOfTransient::Size()
{
	int _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfTransient::Length()
{
	int _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfTransient::Lower()
{
	int _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfTransient::Upper()
{
	int _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfTransient::IsEmpty()
{
	bool _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfTransient::Reverse()
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_SequenceOfTransient::Exchange(int I, int J)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_SequenceOfTransient::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfTransient::Clear()
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_SequenceOfTransient^ RDC::OCC::TColStd_SequenceOfTransient::Assign(RDC::OCC::TColStd_SequenceOfTransient^ theOther)
{
	::TColStd_SequenceOfTransient* _result = new ::TColStd_SequenceOfTransient();
	*_result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Assign(*(::TColStd_SequenceOfTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfTransient(_result);
}

void RDC::OCC::TColStd_SequenceOfTransient::Remove(RDC::OCC::TColStd_SequenceOfTransient::Iterator^ thePosition)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Remove(*(::TColStd_SequenceOfTransient::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfTransient::Append(RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Append(Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfTransient::Prepend(RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Prepend(Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfTransient::InsertBefore(int theIndex, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->InsertBefore(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfTransient::InsertAfter(RDC::OCC::TColStd_SequenceOfTransient::Iterator^ thePosition, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfTransient::Iterator*)thePosition->NativeInstance, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfTransient::Split(int theIndex, RDC::OCC::TColStd_SequenceOfTransient^ theSeq)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfTransient*)theSeq->NativeInstance);
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_SequenceOfTransient::First()
{
	Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_SequenceOfTransient::ChangeFirst()
{
	Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_SequenceOfTransient::Last()
{
	Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_SequenceOfTransient::ChangeLast()
{
	Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_SequenceOfTransient::Value(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Value(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_SequenceOfTransient::ChangeValue(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->ChangeValue(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_SequenceOfTransient::SetValue(int theIndex, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->SetValue(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<RDC::OCC::Standard_Transient^>^ RDC::OCC::TColStd_SequenceOfTransient::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Standard_Transient^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_SequenceOfTransient::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Standard_Transient^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfTransient::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfTransient::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfTransient::Iterator();
}

bool RDC::OCC::TColStd_SequenceOfTransient::Iterator::More()
{
	bool _result = ((::TColStd_SequenceOfTransient::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfTransient::Iterator::Next()
{
	((::TColStd_SequenceOfTransient::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_SequenceOfTransient::Iterator::Value()
{
	Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_SequenceOfTransient::Iterator::ChangeValue()
{
	Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

bool RDC::OCC::TColStd_SequenceOfTransient::Iterator::IsEqual(RDC::OCC::TColStd_SequenceOfTransient::Iterator^ theOther)
{
	bool _result = ((::TColStd_SequenceOfTransient::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfTransient::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfTransient::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_SequenceOfTransient::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_IndexedDataMapOfStringString
//---------------------------------------------------------------------

RDC::OCC::TColStd_IndexedDataMapOfStringString::TColStd_IndexedDataMapOfStringString()
	: RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfStringString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfStringString();
}

RDC::OCC::TColStd_IndexedDataMapOfStringString::TColStd_IndexedDataMapOfStringString(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfStringString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfStringString(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_IndexedDataMapOfStringString::TColStd_IndexedDataMapOfStringString(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfStringString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfStringString(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_IndexedDataMapOfStringString::Exchange(RDC::OCC::TColStd_IndexedDataMapOfStringString^ theOther)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Exchange(*(::TColStd_IndexedDataMapOfStringString*)theOther->NativeInstance);
}

RDC::OCC::TColStd_IndexedDataMapOfStringString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::Assign(RDC::OCC::TColStd_IndexedDataMapOfStringString^ theOther)
{
	::TColStd_IndexedDataMapOfStringString* _result = new ::TColStd_IndexedDataMapOfStringString();
	*_result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Assign(*(::TColStd_IndexedDataMapOfStringString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_IndexedDataMapOfStringString(_result);
}

void RDC::OCC::TColStd_IndexedDataMapOfStringString::ReSize(int N)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->ReSize(N);
}

int RDC::OCC::TColStd_IndexedDataMapOfStringString::Add(RDC::OCC::TCollection_AsciiString^ theKey1, RDC::OCC::TCollection_AsciiString^ theItem)
{
	int _result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Add(*(::TCollection_AsciiString*)theKey1->NativeInstance, *(::TCollection_AsciiString*)theItem->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_IndexedDataMapOfStringString::Contains(RDC::OCC::TCollection_AsciiString^ theKey1)
{
	bool _result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Contains(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_IndexedDataMapOfStringString::Substitute(int theIndex, RDC::OCC::TCollection_AsciiString^ theKey1, RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Substitute(theIndex, *(::TCollection_AsciiString*)theKey1->NativeInstance, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_IndexedDataMapOfStringString::Swap(int theIndex1, int theIndex2)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void RDC::OCC::TColStd_IndexedDataMapOfStringString::RemoveLast()
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::TColStd_IndexedDataMapOfStringString::RemoveFromIndex(int theIndex)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void RDC::OCC::TColStd_IndexedDataMapOfStringString::RemoveKey(RDC::OCC::TCollection_AsciiString^ theKey1)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->RemoveKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::FindKey(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->FindKey(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::FindFromIndex(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->FindFromIndex(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::ChangeFromIndex(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->ChangeFromIndex(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

int RDC::OCC::TColStd_IndexedDataMapOfStringString::FindIndex(RDC::OCC::TCollection_AsciiString^ theKey1)
{
	int _result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->FindIndex(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	return _result;
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::FindFromKey(RDC::OCC::TCollection_AsciiString^ theKey1)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->FindFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::ChangeFromKey(RDC::OCC::TCollection_AsciiString^ theKey1)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->ChangeFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::Seek(RDC::OCC::TCollection_AsciiString^ theKey1)
{
	const ::TCollection_AsciiString* _result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Seek(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString((::TCollection_AsciiString*)_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::ChangeSeek(RDC::OCC::TCollection_AsciiString^ theKey1)
{
	::TCollection_AsciiString* _result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->ChangeSeek(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::TColStd_IndexedDataMapOfStringString::Clear(bool doReleaseMemory)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_IndexedDataMapOfStringString::Clear()
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_IndexedDataMapOfStringString::Size()
{
	int _result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_IndexedDataMapOfStringString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfStringString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfStringString::Iterator();
}

bool RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator::More()
{
	bool _result = ((::TColStd_IndexedDataMapOfStringString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator::Next()
{
	((::TColStd_IndexedDataMapOfStringString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator::Value()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_IndexedDataMapOfStringString::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator::ChangeValue()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_IndexedDataMapOfStringString::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator::Key()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_IndexedDataMapOfStringString::Iterator*)_NativeInstance)->Key();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

bool RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator::IsEqual(RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator^ theOther)
{
	bool _result = ((::TColStd_IndexedDataMapOfStringString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_IndexedDataMapOfStringString::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_IndexedDataMapOfTransientTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::TColStd_IndexedDataMapOfTransientTransient()
	: RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfTransientTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfTransientTransient();
}

RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::TColStd_IndexedDataMapOfTransientTransient(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfTransientTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfTransientTransient(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::TColStd_IndexedDataMapOfTransientTransient(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfTransientTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfTransientTransient(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Exchange(RDC::OCC::TColStd_IndexedDataMapOfTransientTransient^ theOther)
{
	((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->Exchange(*(::TColStd_IndexedDataMapOfTransientTransient*)theOther->NativeInstance);
}

RDC::OCC::TColStd_IndexedDataMapOfTransientTransient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Assign(RDC::OCC::TColStd_IndexedDataMapOfTransientTransient^ theOther)
{
	::TColStd_IndexedDataMapOfTransientTransient* _result = new ::TColStd_IndexedDataMapOfTransientTransient();
	*_result = ((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->Assign(*(::TColStd_IndexedDataMapOfTransientTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_IndexedDataMapOfTransientTransient(_result);
}

void RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::ReSize(int N)
{
	((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->ReSize(N);
}

int RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Add(RDC::OCC::Standard_Transient^ theKey1, RDC::OCC::Standard_Transient^ theItem)
{
	int _result = ((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->Add(Handle(::Standard_Transient)(theKey1->NativeInstance), Handle(::Standard_Transient)(theItem->NativeInstance));
	return _result;
}

bool RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Contains(RDC::OCC::Standard_Transient^ theKey1)
{
	bool _result = ((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->Contains(Handle(::Standard_Transient)(theKey1->NativeInstance));
	return _result;
}

void RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Substitute(int theIndex, RDC::OCC::Standard_Transient^ theKey1, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->Substitute(theIndex, Handle(::Standard_Transient)(theKey1->NativeInstance), Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Swap(int theIndex1, int theIndex2)
{
	((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::RemoveLast()
{
	((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::RemoveFromIndex(int theIndex)
{
	((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::RemoveKey(RDC::OCC::Standard_Transient^ theKey1)
{
	((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->RemoveKey(Handle(::Standard_Transient)(theKey1->NativeInstance));
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::FindKey(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->FindKey(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::FindFromIndex(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->FindFromIndex(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::ChangeFromIndex(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->ChangeFromIndex(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

int RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::FindIndex(RDC::OCC::Standard_Transient^ theKey1)
{
	int _result = ((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->FindIndex(Handle(::Standard_Transient)(theKey1->NativeInstance));
	return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::FindFromKey(RDC::OCC::Standard_Transient^ theKey1)
{
	Handle(::Standard_Transient) _result = ((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->FindFromKey(Handle(::Standard_Transient)(theKey1->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::ChangeFromKey(RDC::OCC::Standard_Transient^ theKey1)
{
	Handle(::Standard_Transient) _result = ((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->ChangeFromKey(Handle(::Standard_Transient)(theKey1->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Seek(RDC::OCC::Standard_Transient^ theKey1)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::ChangeSeek(RDC::OCC::Standard_Transient^ theKey1)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Clear(bool doReleaseMemory)
{
	((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Clear()
{
	((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Size()
{
	int _result = ((::TColStd_IndexedDataMapOfTransientTransient*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_IndexedDataMapOfTransientTransient::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfTransientTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfTransientTransient::Iterator();
}

bool RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator::More()
{
	bool _result = ((::TColStd_IndexedDataMapOfTransientTransient::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator::Next()
{
	((::TColStd_IndexedDataMapOfTransientTransient::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator::Value()
{
	Handle(::Standard_Transient) _result = ((::TColStd_IndexedDataMapOfTransientTransient::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator::ChangeValue()
{
	Handle(::Standard_Transient) _result = ((::TColStd_IndexedDataMapOfTransientTransient::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator::Key()
{
	Handle(::Standard_Transient) _result = ((::TColStd_IndexedDataMapOfTransientTransient::Iterator*)_NativeInstance)->Key();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

bool RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator::IsEqual(RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator^ theOther)
{
	bool _result = ((::TColStd_IndexedDataMapOfTransientTransient::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_IndexedDataMapOfTransientTransient::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_IndexedMapOfInteger::TColStd_IndexedMapOfInteger()
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfInteger();
}

RDC::OCC::TColStd_IndexedMapOfInteger::TColStd_IndexedMapOfInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_IndexedMapOfInteger::TColStd_IndexedMapOfInteger(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfInteger(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_IndexedMapOfInteger::Exchange(RDC::OCC::TColStd_IndexedMapOfInteger^ theOther)
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Exchange(*(::TColStd_IndexedMapOfInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_IndexedMapOfInteger^ RDC::OCC::TColStd_IndexedMapOfInteger::Assign(RDC::OCC::TColStd_IndexedMapOfInteger^ theOther)
{
	::TColStd_IndexedMapOfInteger* _result = new ::TColStd_IndexedMapOfInteger();
	*_result = ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Assign(*(::TColStd_IndexedMapOfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_IndexedMapOfInteger(_result);
}

void RDC::OCC::TColStd_IndexedMapOfInteger::ReSize(int theExtent)
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->ReSize(theExtent);
}

int RDC::OCC::TColStd_IndexedMapOfInteger::Add(int theKey1)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	int _result = ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Add(*(int*)pp_theKey1);
	return _result;
}

bool RDC::OCC::TColStd_IndexedMapOfInteger::Contains(int theKey1)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	bool _result = ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Contains(*(int*)pp_theKey1);
	return _result;
}

void RDC::OCC::TColStd_IndexedMapOfInteger::Substitute(int theIndex, int theKey1)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Substitute(theIndex, *(int*)pp_theKey1);
}

void RDC::OCC::TColStd_IndexedMapOfInteger::Swap(int theIndex1, int theIndex2)
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void RDC::OCC::TColStd_IndexedMapOfInteger::RemoveLast()
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::TColStd_IndexedMapOfInteger::RemoveFromIndex(int theIndex)
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool RDC::OCC::TColStd_IndexedMapOfInteger::RemoveKey(int theKey1)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	bool _result = ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->RemoveKey(*(int*)pp_theKey1);
	return _result;
}

int RDC::OCC::TColStd_IndexedMapOfInteger::FindKey(int theIndex)
{
	int _result = ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->FindKey(theIndex);
	return _result;
}

int RDC::OCC::TColStd_IndexedMapOfInteger::FindIndex(int theKey1)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	int _result = ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->FindIndex(*(int*)pp_theKey1);
	return _result;
}

void RDC::OCC::TColStd_IndexedMapOfInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_IndexedMapOfInteger::Clear()
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_IndexedMapOfInteger::Size()
{
	int _result = ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_IndexedMapOfInteger::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfInteger::Iterator();
}

bool RDC::OCC::TColStd_IndexedMapOfInteger::Iterator::More()
{
	bool _result = ((::TColStd_IndexedMapOfInteger::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_IndexedMapOfInteger::Iterator::Next()
{
	((::TColStd_IndexedMapOfInteger::Iterator*)_NativeInstance)->Next();
}

int RDC::OCC::TColStd_IndexedMapOfInteger::Iterator::Value()
{
	int _result = ((::TColStd_IndexedMapOfInteger::Iterator*)_NativeInstance)->Value();
	return _result;
}

bool RDC::OCC::TColStd_IndexedMapOfInteger::Iterator::IsEqual(RDC::OCC::TColStd_IndexedMapOfInteger::Iterator^ theOther)
{
	bool _result = ((::TColStd_IndexedMapOfInteger::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_IndexedMapOfInteger::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_IndexedMapOfInteger::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_IndexedMapOfInteger::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_IndexedMapOfReal::TColStd_IndexedMapOfReal()
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfReal();
}

RDC::OCC::TColStd_IndexedMapOfReal::TColStd_IndexedMapOfReal(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfReal(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_IndexedMapOfReal::TColStd_IndexedMapOfReal(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfReal(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_IndexedMapOfReal::Exchange(RDC::OCC::TColStd_IndexedMapOfReal^ theOther)
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Exchange(*(::TColStd_IndexedMapOfReal*)theOther->NativeInstance);
}

RDC::OCC::TColStd_IndexedMapOfReal^ RDC::OCC::TColStd_IndexedMapOfReal::Assign(RDC::OCC::TColStd_IndexedMapOfReal^ theOther)
{
	::TColStd_IndexedMapOfReal* _result = new ::TColStd_IndexedMapOfReal();
	*_result = ((::TColStd_IndexedMapOfReal*)_NativeInstance)->Assign(*(::TColStd_IndexedMapOfReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_IndexedMapOfReal(_result);
}

void RDC::OCC::TColStd_IndexedMapOfReal::ReSize(int theExtent)
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->ReSize(theExtent);
}

int RDC::OCC::TColStd_IndexedMapOfReal::Add(double theKey1)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	int _result = ((::TColStd_IndexedMapOfReal*)_NativeInstance)->Add(*(double*)pp_theKey1);
	return _result;
}

bool RDC::OCC::TColStd_IndexedMapOfReal::Contains(double theKey1)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	bool _result = ((::TColStd_IndexedMapOfReal*)_NativeInstance)->Contains(*(double*)pp_theKey1);
	return _result;
}

void RDC::OCC::TColStd_IndexedMapOfReal::Substitute(int theIndex, double theKey1)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Substitute(theIndex, *(double*)pp_theKey1);
}

void RDC::OCC::TColStd_IndexedMapOfReal::Swap(int theIndex1, int theIndex2)
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void RDC::OCC::TColStd_IndexedMapOfReal::RemoveLast()
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::TColStd_IndexedMapOfReal::RemoveFromIndex(int theIndex)
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool RDC::OCC::TColStd_IndexedMapOfReal::RemoveKey(double theKey1)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	bool _result = ((::TColStd_IndexedMapOfReal*)_NativeInstance)->RemoveKey(*(double*)pp_theKey1);
	return _result;
}

double RDC::OCC::TColStd_IndexedMapOfReal::FindKey(int theIndex)
{
	double _result = ((::TColStd_IndexedMapOfReal*)_NativeInstance)->FindKey(theIndex);
	return _result;
}

int RDC::OCC::TColStd_IndexedMapOfReal::FindIndex(double theKey1)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	int _result = ((::TColStd_IndexedMapOfReal*)_NativeInstance)->FindIndex(*(double*)pp_theKey1);
	return _result;
}

void RDC::OCC::TColStd_IndexedMapOfReal::Clear(bool doReleaseMemory)
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_IndexedMapOfReal::Clear()
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_IndexedMapOfReal::Size()
{
	int _result = ((::TColStd_IndexedMapOfReal*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfReal::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_IndexedMapOfReal::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfReal::Iterator();
}

bool RDC::OCC::TColStd_IndexedMapOfReal::Iterator::More()
{
	bool _result = ((::TColStd_IndexedMapOfReal::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_IndexedMapOfReal::Iterator::Next()
{
	((::TColStd_IndexedMapOfReal::Iterator*)_NativeInstance)->Next();
}

double RDC::OCC::TColStd_IndexedMapOfReal::Iterator::Value()
{
	double _result = ((::TColStd_IndexedMapOfReal::Iterator*)_NativeInstance)->Value();
	return _result;
}

bool RDC::OCC::TColStd_IndexedMapOfReal::Iterator::IsEqual(RDC::OCC::TColStd_IndexedMapOfReal::Iterator^ theOther)
{
	bool _result = ((::TColStd_IndexedMapOfReal::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_IndexedMapOfReal::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_IndexedMapOfReal::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_IndexedMapOfReal::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_IndexedMapOfTransient::TColStd_IndexedMapOfTransient()
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfTransient();
}

RDC::OCC::TColStd_IndexedMapOfTransient::TColStd_IndexedMapOfTransient(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfTransient(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_IndexedMapOfTransient::TColStd_IndexedMapOfTransient(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfTransient(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_IndexedMapOfTransient::Exchange(RDC::OCC::TColStd_IndexedMapOfTransient^ theOther)
{
	((::TColStd_IndexedMapOfTransient*)_NativeInstance)->Exchange(*(::TColStd_IndexedMapOfTransient*)theOther->NativeInstance);
}

RDC::OCC::TColStd_IndexedMapOfTransient^ RDC::OCC::TColStd_IndexedMapOfTransient::Assign(RDC::OCC::TColStd_IndexedMapOfTransient^ theOther)
{
	::TColStd_IndexedMapOfTransient* _result = new ::TColStd_IndexedMapOfTransient();
	*_result = ((::TColStd_IndexedMapOfTransient*)_NativeInstance)->Assign(*(::TColStd_IndexedMapOfTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_IndexedMapOfTransient(_result);
}

void RDC::OCC::TColStd_IndexedMapOfTransient::ReSize(int theExtent)
{
	((::TColStd_IndexedMapOfTransient*)_NativeInstance)->ReSize(theExtent);
}

int RDC::OCC::TColStd_IndexedMapOfTransient::Add(RDC::OCC::Standard_Transient^ theKey1)
{
	int _result = ((::TColStd_IndexedMapOfTransient*)_NativeInstance)->Add(Handle(::Standard_Transient)(theKey1->NativeInstance));
	return _result;
}

bool RDC::OCC::TColStd_IndexedMapOfTransient::Contains(RDC::OCC::Standard_Transient^ theKey1)
{
	bool _result = ((::TColStd_IndexedMapOfTransient*)_NativeInstance)->Contains(Handle(::Standard_Transient)(theKey1->NativeInstance));
	return _result;
}

void RDC::OCC::TColStd_IndexedMapOfTransient::Substitute(int theIndex, RDC::OCC::Standard_Transient^ theKey1)
{
	((::TColStd_IndexedMapOfTransient*)_NativeInstance)->Substitute(theIndex, Handle(::Standard_Transient)(theKey1->NativeInstance));
}

void RDC::OCC::TColStd_IndexedMapOfTransient::Swap(int theIndex1, int theIndex2)
{
	((::TColStd_IndexedMapOfTransient*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void RDC::OCC::TColStd_IndexedMapOfTransient::RemoveLast()
{
	((::TColStd_IndexedMapOfTransient*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::TColStd_IndexedMapOfTransient::RemoveFromIndex(int theIndex)
{
	((::TColStd_IndexedMapOfTransient*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool RDC::OCC::TColStd_IndexedMapOfTransient::RemoveKey(RDC::OCC::Standard_Transient^ theKey1)
{
	bool _result = ((::TColStd_IndexedMapOfTransient*)_NativeInstance)->RemoveKey(Handle(::Standard_Transient)(theKey1->NativeInstance));
	return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedMapOfTransient::FindKey(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_IndexedMapOfTransient*)_NativeInstance)->FindKey(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

int RDC::OCC::TColStd_IndexedMapOfTransient::FindIndex(RDC::OCC::Standard_Transient^ theKey1)
{
	int _result = ((::TColStd_IndexedMapOfTransient*)_NativeInstance)->FindIndex(Handle(::Standard_Transient)(theKey1->NativeInstance));
	return _result;
}

void RDC::OCC::TColStd_IndexedMapOfTransient::Clear(bool doReleaseMemory)
{
	((::TColStd_IndexedMapOfTransient*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_IndexedMapOfTransient::Clear()
{
	((::TColStd_IndexedMapOfTransient*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_IndexedMapOfTransient::Size()
{
	int _result = ((::TColStd_IndexedMapOfTransient*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfTransient::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_IndexedMapOfTransient::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_IndexedMapOfTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfTransient::Iterator();
}

bool RDC::OCC::TColStd_IndexedMapOfTransient::Iterator::More()
{
	bool _result = ((::TColStd_IndexedMapOfTransient::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_IndexedMapOfTransient::Iterator::Next()
{
	((::TColStd_IndexedMapOfTransient::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_IndexedMapOfTransient::Iterator::Value()
{
	Handle(::Standard_Transient) _result = ((::TColStd_IndexedMapOfTransient::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

bool RDC::OCC::TColStd_IndexedMapOfTransient::Iterator::IsEqual(RDC::OCC::TColStd_IndexedMapOfTransient::Iterator^ theOther)
{
	bool _result = ((::TColStd_IndexedMapOfTransient::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_IndexedMapOfTransient::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_IndexedMapOfTransient::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_IndexedMapOfTransient::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfAsciiString
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListOfAsciiString::TColStd_ListOfAsciiString()
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfAsciiString();
}

RDC::OCC::TColStd_ListOfAsciiString::TColStd_ListOfAsciiString(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfAsciiString(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_ListOfAsciiString::Size()
{
	int _result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Size();
	return _result;
}

RDC::OCC::TColStd_ListOfAsciiString^ RDC::OCC::TColStd_ListOfAsciiString::Assign(RDC::OCC::TColStd_ListOfAsciiString^ theOther)
{
	::TColStd_ListOfAsciiString* _result = new ::TColStd_ListOfAsciiString();
	*_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Assign(*(::TColStd_ListOfAsciiString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfAsciiString(_result);
}

void RDC::OCC::TColStd_ListOfAsciiString::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_ListOfAsciiString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_ListOfAsciiString::Clear()
{
	((::TColStd_ListOfAsciiString*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_ListOfAsciiString::First()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_ListOfAsciiString*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_ListOfAsciiString::Last()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_ListOfAsciiString*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_ListOfAsciiString::Append(RDC::OCC::TCollection_AsciiString^ theItem)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Append(*(::TCollection_AsciiString*)theItem->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_ListOfAsciiString::Prepend(RDC::OCC::TCollection_AsciiString^ theItem)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)theItem->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::TColStd_ListOfAsciiString::RemoveFirst()
{
	((::TColStd_ListOfAsciiString*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::TColStd_ListOfAsciiString::Remove(RDC::OCC::TColStd_ListOfAsciiString::Iterator^ theIter)
{
	((::TColStd_ListOfAsciiString*)_NativeInstance)->Remove(*(::TColStd_ListOfAsciiString::Iterator*)theIter->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_ListOfAsciiString::InsertBefore(RDC::OCC::TCollection_AsciiString^ theItem, RDC::OCC::TColStd_ListOfAsciiString::Iterator^ theIter)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->InsertBefore(*(::TCollection_AsciiString*)theItem->NativeInstance, *(::TColStd_ListOfAsciiString::Iterator*)theIter->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_ListOfAsciiString::InsertAfter(RDC::OCC::TCollection_AsciiString^ theItem, RDC::OCC::TColStd_ListOfAsciiString::Iterator^ theIter)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->InsertAfter(*(::TCollection_AsciiString*)theItem->NativeInstance, *(::TColStd_ListOfAsciiString::Iterator*)theIter->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::TColStd_ListOfAsciiString::Reverse()
{
	((::TColStd_ListOfAsciiString*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_AsciiString^>^ RDC::OCC::TColStd_ListOfAsciiString::GetEnumerator()
{
	return gcnew RDC::OCC::TColStd_ListOfAsciiString::Iterator(new ::TColStd_ListOfAsciiString::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_ListOfAsciiString::GetEnumerator2()
{
	return gcnew RDC::OCC::TColStd_ListOfAsciiString::Iterator(new ::TColStd_ListOfAsciiString::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfAsciiString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListOfAsciiString::Iterator::Iterator()
	: RDC::OCC::IteratorEnumerator<RDC::OCC::TCollection_AsciiString^, ::TColStd_ListOfAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfAsciiString::Iterator();
}

bool RDC::OCC::TColStd_ListOfAsciiString::Iterator::More()
{
	bool _result = ((::TColStd_ListOfAsciiString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_ListOfAsciiString::Iterator::Next()
{
	((::TColStd_ListOfAsciiString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_ListOfAsciiString::Iterator::Value()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_ListOfAsciiString::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_ListOfAsciiString::Iterator::ChangeValue()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_ListOfAsciiString::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  TColStd_ListIteratorOfListOfAsciiString
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListIteratorOfListOfAsciiString::TColStd_ListIteratorOfListOfAsciiString()
	: RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListIteratorOfListOfAsciiString();
}

RDC::OCC::TColStd_ListIteratorOfListOfAsciiString::TColStd_ListIteratorOfListOfAsciiString(RDC::OCC::NCollection_BaseList^ theList)
	: RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListIteratorOfListOfAsciiString(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::TColStd_ListIteratorOfListOfAsciiString::More()
{
	bool _result = ((::TColStd_ListIteratorOfListOfAsciiString*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_ListIteratorOfListOfAsciiString::Next()
{
	((::TColStd_ListIteratorOfListOfAsciiString*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_ListIteratorOfListOfAsciiString::Value()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_ListIteratorOfListOfAsciiString*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_ListIteratorOfListOfAsciiString::ChangeValue()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_ListIteratorOfListOfAsciiString*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListOfReal::TColStd_ListOfReal()
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfReal();
}

RDC::OCC::TColStd_ListOfReal::TColStd_ListOfReal(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfReal(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_ListOfReal::Size()
{
	int _result = ((::TColStd_ListOfReal*)_NativeInstance)->Size();
	return _result;
}

RDC::OCC::TColStd_ListOfReal^ RDC::OCC::TColStd_ListOfReal::Assign(RDC::OCC::TColStd_ListOfReal^ theOther)
{
	::TColStd_ListOfReal* _result = new ::TColStd_ListOfReal();
	*_result = ((::TColStd_ListOfReal*)_NativeInstance)->Assign(*(::TColStd_ListOfReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfReal(_result);
}

void RDC::OCC::TColStd_ListOfReal::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_ListOfReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_ListOfReal::Clear()
{
	((::TColStd_ListOfReal*)_NativeInstance)->Clear(0L);
}

double RDC::OCC::TColStd_ListOfReal::First()
{
	double _result = ((::TColStd_ListOfReal*)_NativeInstance)->First();
	return _result;
}

double RDC::OCC::TColStd_ListOfReal::Last()
{
	double _result = ((::TColStd_ListOfReal*)_NativeInstance)->Last();
	return _result;
}

double RDC::OCC::TColStd_ListOfReal::Append(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	double _result = ((::TColStd_ListOfReal*)_NativeInstance)->Append(*(double*)pp_theItem);
	return _result;
}

double RDC::OCC::TColStd_ListOfReal::Prepend(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	double _result = ((::TColStd_ListOfReal*)_NativeInstance)->Prepend(*(double*)pp_theItem);
	return _result;
}

void RDC::OCC::TColStd_ListOfReal::RemoveFirst()
{
	((::TColStd_ListOfReal*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::TColStd_ListOfReal::Remove(RDC::OCC::TColStd_ListOfReal::Iterator^ theIter)
{
	((::TColStd_ListOfReal*)_NativeInstance)->Remove(*(::TColStd_ListOfReal::Iterator*)theIter->NativeInstance);
}

double RDC::OCC::TColStd_ListOfReal::InsertBefore(double theItem, RDC::OCC::TColStd_ListOfReal::Iterator^ theIter)
{
	pin_ptr<double> pp_theItem = &theItem;
	double _result = ((::TColStd_ListOfReal*)_NativeInstance)->InsertBefore(*(double*)pp_theItem, *(::TColStd_ListOfReal::Iterator*)theIter->NativeInstance);
	return _result;
}

double RDC::OCC::TColStd_ListOfReal::InsertAfter(double theItem, RDC::OCC::TColStd_ListOfReal::Iterator^ theIter)
{
	pin_ptr<double> pp_theItem = &theItem;
	double _result = ((::TColStd_ListOfReal*)_NativeInstance)->InsertAfter(*(double*)pp_theItem, *(::TColStd_ListOfReal::Iterator*)theIter->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_ListOfReal::Reverse()
{
	((::TColStd_ListOfReal*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<double>^ RDC::OCC::TColStd_ListOfReal::GetEnumerator()
{
	return gcnew RDC::OCC::TColStd_ListOfReal::Iterator(new ::TColStd_ListOfReal::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_ListOfReal::GetEnumerator2()
{
	return gcnew RDC::OCC::TColStd_ListOfReal::Iterator(new ::TColStd_ListOfReal::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfReal::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListOfReal::Iterator::Iterator()
	: RDC::OCC::IteratorEnumerator<double, ::TColStd_ListOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfReal::Iterator();
}

bool RDC::OCC::TColStd_ListOfReal::Iterator::More()
{
	bool _result = ((::TColStd_ListOfReal::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_ListOfReal::Iterator::Next()
{
	((::TColStd_ListOfReal::Iterator*)_NativeInstance)->Next();
}

double RDC::OCC::TColStd_ListOfReal::Iterator::Value()
{
	double _result = ((::TColStd_ListOfReal::Iterator*)_NativeInstance)->Value();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_ListIteratorOfListOfReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListIteratorOfListOfReal::TColStd_ListIteratorOfListOfReal()
	: RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListIteratorOfListOfReal();
}

RDC::OCC::TColStd_ListIteratorOfListOfReal::TColStd_ListIteratorOfListOfReal(RDC::OCC::NCollection_BaseList^ theList)
	: RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListIteratorOfListOfReal(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::TColStd_ListIteratorOfListOfReal::More()
{
	bool _result = ((::TColStd_ListIteratorOfListOfReal*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_ListIteratorOfListOfReal::Next()
{
	((::TColStd_ListIteratorOfListOfReal*)_NativeInstance)->Next();
}

double RDC::OCC::TColStd_ListIteratorOfListOfReal::Value()
{
	double _result = ((::TColStd_ListIteratorOfListOfReal*)_NativeInstance)->Value();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListOfTransient::TColStd_ListOfTransient()
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfTransient();
}

RDC::OCC::TColStd_ListOfTransient::TColStd_ListOfTransient(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfTransient(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_ListOfTransient::Size()
{
	int _result = ((::TColStd_ListOfTransient*)_NativeInstance)->Size();
	return _result;
}

RDC::OCC::TColStd_ListOfTransient^ RDC::OCC::TColStd_ListOfTransient::Assign(RDC::OCC::TColStd_ListOfTransient^ theOther)
{
	::TColStd_ListOfTransient* _result = new ::TColStd_ListOfTransient();
	*_result = ((::TColStd_ListOfTransient*)_NativeInstance)->Assign(*(::TColStd_ListOfTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfTransient(_result);
}

void RDC::OCC::TColStd_ListOfTransient::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_ListOfTransient*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_ListOfTransient::Clear()
{
	((::TColStd_ListOfTransient*)_NativeInstance)->Clear(0L);
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_ListOfTransient::First()
{
	Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_ListOfTransient::Last()
{
	Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_ListOfTransient::Append(RDC::OCC::Standard_Transient^ theItem)
{
	Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->Append(Handle(::Standard_Transient)(theItem->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_ListOfTransient::Prepend(RDC::OCC::Standard_Transient^ theItem)
{
	Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->Prepend(Handle(::Standard_Transient)(theItem->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_ListOfTransient::RemoveFirst()
{
	((::TColStd_ListOfTransient*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::TColStd_ListOfTransient::Remove(RDC::OCC::TColStd_ListOfTransient::Iterator^ theIter)
{
	((::TColStd_ListOfTransient*)_NativeInstance)->Remove(*(::TColStd_ListOfTransient::Iterator*)theIter->NativeInstance);
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_ListOfTransient::InsertBefore(RDC::OCC::Standard_Transient^ theItem, RDC::OCC::TColStd_ListOfTransient::Iterator^ theIter)
{
	Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->InsertBefore(Handle(::Standard_Transient)(theItem->NativeInstance), *(::TColStd_ListOfTransient::Iterator*)theIter->NativeInstance);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_ListOfTransient::InsertAfter(RDC::OCC::Standard_Transient^ theItem, RDC::OCC::TColStd_ListOfTransient::Iterator^ theIter)
{
	Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->InsertAfter(Handle(::Standard_Transient)(theItem->NativeInstance), *(::TColStd_ListOfTransient::Iterator*)theIter->NativeInstance);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_ListOfTransient::Reverse()
{
	((::TColStd_ListOfTransient*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfTransient::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListOfTransient::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_ListOfTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfTransient::Iterator();
}

bool RDC::OCC::TColStd_ListOfTransient::Iterator::More()
{
	bool _result = ((::TColStd_ListOfTransient::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_ListOfTransient::Iterator::Next()
{
	((::TColStd_ListOfTransient::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_ListOfTransient::Iterator::Value()
{
	Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_ListOfTransient::Iterator::ChangeValue()
{
	Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  TColStd_ListIteratorOfListOfTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_ListIteratorOfListOfTransient::TColStd_ListIteratorOfListOfTransient()
	: RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListIteratorOfListOfTransient();
}

RDC::OCC::TColStd_ListIteratorOfListOfTransient::TColStd_ListIteratorOfListOfTransient(RDC::OCC::NCollection_BaseList^ theList)
	: RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListIteratorOfListOfTransient(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::TColStd_ListIteratorOfListOfTransient::More()
{
	bool _result = ((::TColStd_ListIteratorOfListOfTransient*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_ListIteratorOfListOfTransient::Next()
{
	((::TColStd_ListIteratorOfListOfTransient*)_NativeInstance)->Next();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_ListIteratorOfListOfTransient::Value()
{
	Handle(::Standard_Transient) _result = ((::TColStd_ListIteratorOfListOfTransient*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_ListIteratorOfListOfTransient::ChangeValue()
{
	Handle(::Standard_Transient) _result = ((::TColStd_ListIteratorOfListOfTransient*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfAsciiString
//---------------------------------------------------------------------

RDC::OCC::TColStd_MapOfAsciiString::TColStd_MapOfAsciiString()
	: RDC::OCC::BaseClass<::TColStd_MapOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfAsciiString();
}

RDC::OCC::TColStd_MapOfAsciiString::TColStd_MapOfAsciiString(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_MapOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfAsciiString(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_MapOfAsciiString::TColStd_MapOfAsciiString(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_MapOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfAsciiString(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_MapOfAsciiString::Exchange(RDC::OCC::TColStd_MapOfAsciiString^ theOther)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Exchange(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
}

RDC::OCC::TColStd_MapOfAsciiString^ RDC::OCC::TColStd_MapOfAsciiString::Assign(RDC::OCC::TColStd_MapOfAsciiString^ theOther)
{
	::TColStd_MapOfAsciiString* _result = new ::TColStd_MapOfAsciiString();
	*_result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Assign(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_MapOfAsciiString(_result);
}

void RDC::OCC::TColStd_MapOfAsciiString::ReSize(int N)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_MapOfAsciiString::Add(RDC::OCC::TCollection_AsciiString^ theKey)
{
	bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Add(*(::TCollection_AsciiString*)theKey->NativeInstance);
	return _result;
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_MapOfAsciiString::Added(RDC::OCC::TCollection_AsciiString^ theKey)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_MapOfAsciiString*)_NativeInstance)->Added(*(::TCollection_AsciiString*)theKey->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

bool RDC::OCC::TColStd_MapOfAsciiString::Contains(RDC::OCC::TCollection_AsciiString^ theKey)
{
	bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Contains(*(::TCollection_AsciiString*)theKey->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_MapOfAsciiString::Remove(RDC::OCC::TCollection_AsciiString^ K)
{
	bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Remove(*(::TCollection_AsciiString*)K->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfAsciiString::Clear(bool doReleaseMemory)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_MapOfAsciiString::Clear()
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_MapOfAsciiString::Size()
{
	int _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Size();
	return _result;
}

bool RDC::OCC::TColStd_MapOfAsciiString::IsEqual(RDC::OCC::TColStd_MapOfAsciiString^ theOther)
{
	bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->IsEqual(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfAsciiString::Union(RDC::OCC::TColStd_MapOfAsciiString^ theLeft, RDC::OCC::TColStd_MapOfAsciiString^ theRight)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Union(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfAsciiString::Unite(RDC::OCC::TColStd_MapOfAsciiString^ theOther)
{
	bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Unite(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_MapOfAsciiString::HasIntersection(RDC::OCC::TColStd_MapOfAsciiString^ theMap)
{
	bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfAsciiString*)theMap->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfAsciiString::Intersection(RDC::OCC::TColStd_MapOfAsciiString^ theLeft, RDC::OCC::TColStd_MapOfAsciiString^ theRight)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Intersection(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfAsciiString::Intersect(RDC::OCC::TColStd_MapOfAsciiString^ theOther)
{
	bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Intersect(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfAsciiString::Subtraction(RDC::OCC::TColStd_MapOfAsciiString^ theLeft, RDC::OCC::TColStd_MapOfAsciiString^ theRight)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Subtraction(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfAsciiString::Subtract(RDC::OCC::TColStd_MapOfAsciiString^ theOther)
{
	bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Subtract(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfAsciiString::Difference(RDC::OCC::TColStd_MapOfAsciiString^ theLeft, RDC::OCC::TColStd_MapOfAsciiString^ theRight)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Difference(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfAsciiString::Differ(RDC::OCC::TColStd_MapOfAsciiString^ theOther)
{
	bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Differ(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_MapOfAsciiString::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_MapOfAsciiString::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((TColStd_MapOfAsciiString^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfAsciiString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_MapOfAsciiString::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_MapOfAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfAsciiString::Iterator();
}

bool RDC::OCC::TColStd_MapOfAsciiString::Iterator::More()
{
	bool _result = ((::TColStd_MapOfAsciiString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_MapOfAsciiString::Iterator::Next()
{
	((::TColStd_MapOfAsciiString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_MapOfAsciiString::Iterator::Value()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_MapOfAsciiString::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_MapOfAsciiString::Iterator::Key()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_MapOfAsciiString::Iterator*)_NativeInstance)->Key();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_MapOfInteger::TColStd_MapOfInteger()
	: RDC::OCC::BaseClass<::TColStd_MapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfInteger();
}

RDC::OCC::TColStd_MapOfInteger::TColStd_MapOfInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_MapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_MapOfInteger::TColStd_MapOfInteger(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_MapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfInteger(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_MapOfInteger::Exchange(RDC::OCC::TColStd_MapOfInteger^ theOther)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Exchange(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_MapOfInteger^ RDC::OCC::TColStd_MapOfInteger::Assign(RDC::OCC::TColStd_MapOfInteger^ theOther)
{
	::TColStd_MapOfInteger* _result = new ::TColStd_MapOfInteger();
	*_result = ((::TColStd_MapOfInteger*)_NativeInstance)->Assign(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_MapOfInteger(_result);
}

void RDC::OCC::TColStd_MapOfInteger::ReSize(int N)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_MapOfInteger::Add(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Add(*(int*)pp_theKey);
	return _result;
}

int RDC::OCC::TColStd_MapOfInteger::Added(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	int _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Added(*(int*)pp_theKey);
	return _result;
}

bool RDC::OCC::TColStd_MapOfInteger::Contains(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Contains(*(int*)pp_theKey);
	return _result;
}

bool RDC::OCC::TColStd_MapOfInteger::Remove(int K)
{
	pin_ptr<int> pp_K = &K;
	bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Remove(*(int*)pp_K);
	return _result;
}

void RDC::OCC::TColStd_MapOfInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_MapOfInteger::Clear()
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_MapOfInteger::Size()
{
	int _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Size();
	return _result;
}

bool RDC::OCC::TColStd_MapOfInteger::IsEqual(RDC::OCC::TColStd_MapOfInteger^ theOther)
{
	bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->IsEqual(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfInteger::Union(RDC::OCC::TColStd_MapOfInteger^ theLeft, RDC::OCC::TColStd_MapOfInteger^ theRight)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Union(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfInteger::Unite(RDC::OCC::TColStd_MapOfInteger^ theOther)
{
	bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Unite(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_MapOfInteger::HasIntersection(RDC::OCC::TColStd_MapOfInteger^ theMap)
{
	bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfInteger*)theMap->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfInteger::Intersection(RDC::OCC::TColStd_MapOfInteger^ theLeft, RDC::OCC::TColStd_MapOfInteger^ theRight)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Intersection(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfInteger::Intersect(RDC::OCC::TColStd_MapOfInteger^ theOther)
{
	bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Intersect(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfInteger::Subtraction(RDC::OCC::TColStd_MapOfInteger^ theLeft, RDC::OCC::TColStd_MapOfInteger^ theRight)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Subtraction(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfInteger::Subtract(RDC::OCC::TColStd_MapOfInteger^ theOther)
{
	bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Subtract(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfInteger::Difference(RDC::OCC::TColStd_MapOfInteger^ theLeft, RDC::OCC::TColStd_MapOfInteger^ theRight)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Difference(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfInteger::Differ(RDC::OCC::TColStd_MapOfInteger^ theOther)
{
	bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Differ(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_MapOfInteger::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_MapOfInteger::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((TColStd_MapOfInteger^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_MapOfInteger::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_MapOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfInteger::Iterator();
}

bool RDC::OCC::TColStd_MapOfInteger::Iterator::More()
{
	bool _result = ((::TColStd_MapOfInteger::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_MapOfInteger::Iterator::Next()
{
	((::TColStd_MapOfInteger::Iterator*)_NativeInstance)->Next();
}

int RDC::OCC::TColStd_MapOfInteger::Iterator::Value()
{
	int _result = ((::TColStd_MapOfInteger::Iterator*)_NativeInstance)->Value();
	return _result;
}

int RDC::OCC::TColStd_MapOfInteger::Iterator::Key()
{
	int _result = ((::TColStd_MapOfInteger::Iterator*)_NativeInstance)->Key();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_MapOfReal::TColStd_MapOfReal()
	: RDC::OCC::BaseClass<::TColStd_MapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfReal();
}

RDC::OCC::TColStd_MapOfReal::TColStd_MapOfReal(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_MapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfReal(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_MapOfReal::TColStd_MapOfReal(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_MapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfReal(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_MapOfReal::Exchange(RDC::OCC::TColStd_MapOfReal^ theOther)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Exchange(*(::TColStd_MapOfReal*)theOther->NativeInstance);
}

RDC::OCC::TColStd_MapOfReal^ RDC::OCC::TColStd_MapOfReal::Assign(RDC::OCC::TColStd_MapOfReal^ theOther)
{
	::TColStd_MapOfReal* _result = new ::TColStd_MapOfReal();
	*_result = ((::TColStd_MapOfReal*)_NativeInstance)->Assign(*(::TColStd_MapOfReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_MapOfReal(_result);
}

void RDC::OCC::TColStd_MapOfReal::ReSize(int N)
{
	((::TColStd_MapOfReal*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_MapOfReal::Add(double theKey)
{
	pin_ptr<double> pp_theKey = &theKey;
	bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Add(*(double*)pp_theKey);
	return _result;
}

double RDC::OCC::TColStd_MapOfReal::Added(double theKey)
{
	pin_ptr<double> pp_theKey = &theKey;
	double _result = ((::TColStd_MapOfReal*)_NativeInstance)->Added(*(double*)pp_theKey);
	return _result;
}

bool RDC::OCC::TColStd_MapOfReal::Contains(double theKey)
{
	pin_ptr<double> pp_theKey = &theKey;
	bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Contains(*(double*)pp_theKey);
	return _result;
}

bool RDC::OCC::TColStd_MapOfReal::Remove(double K)
{
	pin_ptr<double> pp_K = &K;
	bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Remove(*(double*)pp_K);
	return _result;
}

void RDC::OCC::TColStd_MapOfReal::Clear(bool doReleaseMemory)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_MapOfReal::Clear()
{
	((::TColStd_MapOfReal*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_MapOfReal::Size()
{
	int _result = ((::TColStd_MapOfReal*)_NativeInstance)->Size();
	return _result;
}

bool RDC::OCC::TColStd_MapOfReal::IsEqual(RDC::OCC::TColStd_MapOfReal^ theOther)
{
	bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->IsEqual(*(::TColStd_MapOfReal*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfReal::Union(RDC::OCC::TColStd_MapOfReal^ theLeft, RDC::OCC::TColStd_MapOfReal^ theRight)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Union(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfReal::Unite(RDC::OCC::TColStd_MapOfReal^ theOther)
{
	bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Unite(*(::TColStd_MapOfReal*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_MapOfReal::HasIntersection(RDC::OCC::TColStd_MapOfReal^ theMap)
{
	bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfReal*)theMap->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfReal::Intersection(RDC::OCC::TColStd_MapOfReal^ theLeft, RDC::OCC::TColStd_MapOfReal^ theRight)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Intersection(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfReal::Intersect(RDC::OCC::TColStd_MapOfReal^ theOther)
{
	bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Intersect(*(::TColStd_MapOfReal*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfReal::Subtraction(RDC::OCC::TColStd_MapOfReal^ theLeft, RDC::OCC::TColStd_MapOfReal^ theRight)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Subtraction(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfReal::Subtract(RDC::OCC::TColStd_MapOfReal^ theOther)
{
	bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Subtract(*(::TColStd_MapOfReal*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfReal::Difference(RDC::OCC::TColStd_MapOfReal^ theLeft, RDC::OCC::TColStd_MapOfReal^ theRight)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Difference(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfReal::Differ(RDC::OCC::TColStd_MapOfReal^ theOther)
{
	bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Differ(*(::TColStd_MapOfReal*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_MapOfReal::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_MapOfReal::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((TColStd_MapOfReal^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfReal::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_MapOfReal::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_MapOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfReal::Iterator();
}

bool RDC::OCC::TColStd_MapOfReal::Iterator::More()
{
	bool _result = ((::TColStd_MapOfReal::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_MapOfReal::Iterator::Next()
{
	((::TColStd_MapOfReal::Iterator*)_NativeInstance)->Next();
}

double RDC::OCC::TColStd_MapOfReal::Iterator::Value()
{
	double _result = ((::TColStd_MapOfReal::Iterator*)_NativeInstance)->Value();
	return _result;
}

double RDC::OCC::TColStd_MapOfReal::Iterator::Key()
{
	double _result = ((::TColStd_MapOfReal::Iterator*)_NativeInstance)->Key();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_MapOfTransient::TColStd_MapOfTransient()
	: RDC::OCC::BaseClass<::TColStd_MapOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfTransient();
}

RDC::OCC::TColStd_MapOfTransient::TColStd_MapOfTransient(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_MapOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfTransient(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TColStd_MapOfTransient::TColStd_MapOfTransient(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_MapOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfTransient(theNbBuckets, 0L);
}

void RDC::OCC::TColStd_MapOfTransient::Exchange(RDC::OCC::TColStd_MapOfTransient^ theOther)
{
	((::TColStd_MapOfTransient*)_NativeInstance)->Exchange(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
}

RDC::OCC::TColStd_MapOfTransient^ RDC::OCC::TColStd_MapOfTransient::Assign(RDC::OCC::TColStd_MapOfTransient^ theOther)
{
	::TColStd_MapOfTransient* _result = new ::TColStd_MapOfTransient();
	*_result = ((::TColStd_MapOfTransient*)_NativeInstance)->Assign(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_MapOfTransient(_result);
}

void RDC::OCC::TColStd_MapOfTransient::ReSize(int N)
{
	((::TColStd_MapOfTransient*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TColStd_MapOfTransient::Add(RDC::OCC::Standard_Transient^ theKey)
{
	bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Add(Handle(::Standard_Transient)(theKey->NativeInstance));
	return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_MapOfTransient::Added(RDC::OCC::Standard_Transient^ theKey)
{
	Handle(::Standard_Transient) _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Added(Handle(::Standard_Transient)(theKey->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

bool RDC::OCC::TColStd_MapOfTransient::Contains(RDC::OCC::Standard_Transient^ theKey)
{
	bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Contains(Handle(::Standard_Transient)(theKey->NativeInstance));
	return _result;
}

bool RDC::OCC::TColStd_MapOfTransient::Remove(RDC::OCC::Standard_Transient^ K)
{
	bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Remove(Handle(::Standard_Transient)(K->NativeInstance));
	return _result;
}

void RDC::OCC::TColStd_MapOfTransient::Clear(bool doReleaseMemory)
{
	((::TColStd_MapOfTransient*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TColStd_MapOfTransient::Clear()
{
	((::TColStd_MapOfTransient*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TColStd_MapOfTransient::Size()
{
	int _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Size();
	return _result;
}

bool RDC::OCC::TColStd_MapOfTransient::IsEqual(RDC::OCC::TColStd_MapOfTransient^ theOther)
{
	bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->IsEqual(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfTransient::Union(RDC::OCC::TColStd_MapOfTransient^ theLeft, RDC::OCC::TColStd_MapOfTransient^ theRight)
{
	((::TColStd_MapOfTransient*)_NativeInstance)->Union(*(::TColStd_MapOfTransient*)theLeft->NativeInstance, *(::TColStd_MapOfTransient*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfTransient::Unite(RDC::OCC::TColStd_MapOfTransient^ theOther)
{
	bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Unite(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_MapOfTransient::HasIntersection(RDC::OCC::TColStd_MapOfTransient^ theMap)
{
	bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfTransient*)theMap->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfTransient::Intersection(RDC::OCC::TColStd_MapOfTransient^ theLeft, RDC::OCC::TColStd_MapOfTransient^ theRight)
{
	((::TColStd_MapOfTransient*)_NativeInstance)->Intersection(*(::TColStd_MapOfTransient*)theLeft->NativeInstance, *(::TColStd_MapOfTransient*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfTransient::Intersect(RDC::OCC::TColStd_MapOfTransient^ theOther)
{
	bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Intersect(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfTransient::Subtraction(RDC::OCC::TColStd_MapOfTransient^ theLeft, RDC::OCC::TColStd_MapOfTransient^ theRight)
{
	((::TColStd_MapOfTransient*)_NativeInstance)->Subtraction(*(::TColStd_MapOfTransient*)theLeft->NativeInstance, *(::TColStd_MapOfTransient*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfTransient::Subtract(RDC::OCC::TColStd_MapOfTransient^ theOther)
{
	bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Subtract(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_MapOfTransient::Difference(RDC::OCC::TColStd_MapOfTransient^ theLeft, RDC::OCC::TColStd_MapOfTransient^ theRight)
{
	((::TColStd_MapOfTransient*)_NativeInstance)->Difference(*(::TColStd_MapOfTransient*)theLeft->NativeInstance, *(::TColStd_MapOfTransient*)theRight->NativeInstance);
}

bool RDC::OCC::TColStd_MapOfTransient::Differ(RDC::OCC::TColStd_MapOfTransient^ theOther)
{
	bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Differ(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_MapOfTransient::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_MapOfTransient::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((TColStd_MapOfTransient^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfTransient::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_MapOfTransient::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_MapOfTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfTransient::Iterator();
}

bool RDC::OCC::TColStd_MapOfTransient::Iterator::More()
{
	bool _result = ((::TColStd_MapOfTransient::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_MapOfTransient::Iterator::Next()
{
	((::TColStd_MapOfTransient::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_MapOfTransient::Iterator::Value()
{
	Handle(::Standard_Transient) _result = ((::TColStd_MapOfTransient::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_MapOfTransient::Iterator::Key()
{
	Handle(::Standard_Transient) _result = ((::TColStd_MapOfTransient::Iterator*)_NativeInstance)->Key();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAddress
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfAddress::TColStd_SequenceOfAddress()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfAddress>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfAddress();
}

RDC::OCC::TColStd_SequenceOfAddress::TColStd_SequenceOfAddress(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_SequenceOfAddress>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfAddress(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_SequenceOfAddress::Size()
{
	int _result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfAddress::Length()
{
	int _result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfAddress::Lower()
{
	int _result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfAddress::Upper()
{
	int _result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfAddress::IsEmpty()
{
	bool _result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfAddress::Reverse()
{
	((::TColStd_SequenceOfAddress*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_SequenceOfAddress::Exchange(int I, int J)
{
	((::TColStd_SequenceOfAddress*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_SequenceOfAddress::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_SequenceOfAddress*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfAddress::Clear()
{
	((::TColStd_SequenceOfAddress*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_SequenceOfAddress^ RDC::OCC::TColStd_SequenceOfAddress::Assign(RDC::OCC::TColStd_SequenceOfAddress^ theOther)
{
	::TColStd_SequenceOfAddress* _result = new ::TColStd_SequenceOfAddress();
	*_result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->Assign(*(::TColStd_SequenceOfAddress*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfAddress(_result);
}

void RDC::OCC::TColStd_SequenceOfAddress::Remove(RDC::OCC::TColStd_SequenceOfAddress::Iterator^ thePosition)
{
	((::TColStd_SequenceOfAddress*)_NativeInstance)->Remove(*(::TColStd_SequenceOfAddress::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfAddress::Split(int theIndex, RDC::OCC::TColStd_SequenceOfAddress^ theSeq)
{
	((::TColStd_SequenceOfAddress*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfAddress*)theSeq->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAddress::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfAddress::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfAddress::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfAddress::Iterator();
}

bool RDC::OCC::TColStd_SequenceOfAddress::Iterator::More()
{
	bool _result = ((::TColStd_SequenceOfAddress::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfAddress::Iterator::Next()
{
	((::TColStd_SequenceOfAddress::Iterator*)_NativeInstance)->Next();
}

bool RDC::OCC::TColStd_SequenceOfAddress::Iterator::IsEqual(RDC::OCC::TColStd_SequenceOfAddress::Iterator^ theOther)
{
	bool _result = ((::TColStd_SequenceOfAddress::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfAddress::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfAddress::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_SequenceOfAddress::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfBoolean
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfBoolean::TColStd_SequenceOfBoolean()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfBoolean();
}

RDC::OCC::TColStd_SequenceOfBoolean::TColStd_SequenceOfBoolean(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TColStd_SequenceOfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfBoolean(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TColStd_SequenceOfBoolean::Size()
{
	int _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfBoolean::Length()
{
	int _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfBoolean::Lower()
{
	int _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_SequenceOfBoolean::Upper()
{
	int _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfBoolean::IsEmpty()
{
	bool _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfBoolean::Reverse()
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_SequenceOfBoolean::Exchange(int I, int J)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_SequenceOfBoolean::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_SequenceOfBoolean::Clear()
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_SequenceOfBoolean^ RDC::OCC::TColStd_SequenceOfBoolean::Assign(RDC::OCC::TColStd_SequenceOfBoolean^ theOther)
{
	::TColStd_SequenceOfBoolean* _result = new ::TColStd_SequenceOfBoolean();
	*_result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Assign(*(::TColStd_SequenceOfBoolean*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfBoolean(_result);
}

void RDC::OCC::TColStd_SequenceOfBoolean::Remove(RDC::OCC::TColStd_SequenceOfBoolean::Iterator^ thePosition)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Remove(*(::TColStd_SequenceOfBoolean::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_SequenceOfBoolean::Append(bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Append(*(bool*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfBoolean::Prepend(bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Prepend(*(bool*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfBoolean::InsertBefore(int theIndex, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->InsertBefore(theIndex, *(bool*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfBoolean::InsertAfter(RDC::OCC::TColStd_SequenceOfBoolean::Iterator^ thePosition, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfBoolean::Iterator*)thePosition->NativeInstance, *(bool*)pp_theItem);
}

void RDC::OCC::TColStd_SequenceOfBoolean::Split(int theIndex, RDC::OCC::TColStd_SequenceOfBoolean^ theSeq)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfBoolean*)theSeq->NativeInstance);
}

bool RDC::OCC::TColStd_SequenceOfBoolean::First()
{
	bool _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->First();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfBoolean::Last()
{
	bool _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Last();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfBoolean::Value(int theIndex)
{
	bool _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Value(theIndex);
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfBoolean::ChangeValue(int theIndex)
{
	bool _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_SequenceOfBoolean::SetValue(int theIndex, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->SetValue(theIndex, *(bool*)pp_theItem);
}

System::Collections::Generic::IEnumerator<bool>^ RDC::OCC::TColStd_SequenceOfBoolean::GetEnumerator()
{
	return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_SequenceOfBoolean::GetEnumerator2()
{
	return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfBoolean::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_SequenceOfBoolean::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_SequenceOfBoolean::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfBoolean::Iterator();
}

bool RDC::OCC::TColStd_SequenceOfBoolean::Iterator::More()
{
	bool _result = ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_SequenceOfBoolean::Iterator::Next()
{
	((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->Next();
}

bool RDC::OCC::TColStd_SequenceOfBoolean::Iterator::Value()
{
	bool _result = ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->Value();
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfBoolean::Iterator::IsEqual(RDC::OCC::TColStd_SequenceOfBoolean::Iterator^ theOther)
{
	bool _result = ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfBoolean::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_SequenceOfBoolean::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_SequenceOfBoolean::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfAsciiString
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfAsciiString();
}

RDC::OCC::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfAsciiString(theLower, theUpper);
}

RDC::OCC::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString(int theLower, int theUpper, RDC::OCC::TCollection_AsciiString^ theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfAsciiString(theLower, theUpper, *(::TCollection_AsciiString*)theValue->NativeInstance);
}

RDC::OCC::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString(RDC::OCC::TCollection_AsciiString^ theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfAsciiString(*(::TCollection_AsciiString*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

RDC::OCC::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString(RDC::OCC::TColStd_Array1OfAsciiString^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfAsciiString(*(::TColStd_Array1OfAsciiString*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array1OfAsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::Array1()
{
	::TColStd_Array1OfAsciiString* _result = new ::TColStd_Array1OfAsciiString();
	*_result = (::TColStd_Array1OfAsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfAsciiString(_result);
}

RDC::OCC::TColStd_Array1OfAsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::ChangeArray1()
{
	::TColStd_Array1OfAsciiString* _result = new ::TColStd_Array1OfAsciiString();
	*_result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfAsciiString(_result);
}

void RDC::OCC::TColStd_HArray1OfAsciiString::Init(RDC::OCC::TCollection_AsciiString^ theValue)
{
	((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Init(*(::TCollection_AsciiString*)theValue->NativeInstance);
}

int RDC::OCC::TColStd_HArray1OfAsciiString::Size()
{
	int _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfAsciiString::Length()
{
	int _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfAsciiString::IsEmpty()
{
	bool _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfAsciiString::Lower()
{
	int _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfAsciiString::Upper()
{
	int _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_HArray1OfAsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::Assign(RDC::OCC::TColStd_HArray1OfAsciiString^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray1OfAsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::Move(RDC::OCC::TColStd_HArray1OfAsciiString^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::First()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::ChangeFirst()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::Last()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::ChangeLast()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::Value(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::ChangeValue(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::TColStd_HArray1OfAsciiString::SetValue(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_HArray1OfAsciiString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_HArray1OfAsciiString::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray1OfAsciiString*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray1OfAsciiString::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray1OfAsciiString*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_HArray1OfAsciiString::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_HArray1OfAsciiString::IsDeletable()
{
	bool _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray1OfAsciiString^ RDC::OCC::TColStd_HArray1OfAsciiString::CreateDowncasted(::TColStd_HArray1OfAsciiString* instance)
{
	return gcnew RDC::OCC::TColStd_HArray1OfAsciiString(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_AsciiString^>^ RDC::OCC::TColStd_HArray1OfAsciiString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_AsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HArray1OfAsciiString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_AsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfAsciiString::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfBoolean
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfBoolean();
}

RDC::OCC::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfBoolean(theLower, theUpper);
}

RDC::OCC::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean(int theLower, int theUpper, bool theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<bool> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray1OfBoolean(theLower, theUpper, *(bool*)pp_theValue);
}

RDC::OCC::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean(bool theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<bool> pp_theBegin = &theBegin;
	NativeInstance = new ::TColStd_HArray1OfBoolean(*(bool*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean(RDC::OCC::TColStd_Array1OfBoolean^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfBoolean(*(::TColStd_Array1OfBoolean*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array1OfBoolean^ RDC::OCC::TColStd_HArray1OfBoolean::Array1()
{
	::TColStd_Array1OfBoolean* _result = new ::TColStd_Array1OfBoolean();
	*_result = (::TColStd_Array1OfBoolean)((::TColStd_HArray1OfBoolean*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfBoolean(_result);
}

RDC::OCC::TColStd_Array1OfBoolean^ RDC::OCC::TColStd_HArray1OfBoolean::ChangeArray1()
{
	::TColStd_Array1OfBoolean* _result = new ::TColStd_Array1OfBoolean();
	*_result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfBoolean(_result);
}

void RDC::OCC::TColStd_HArray1OfBoolean::Init(bool theValue)
{
	pin_ptr<bool> pp_theValue = &theValue;
	((::TColStd_HArray1OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

int RDC::OCC::TColStd_HArray1OfBoolean::Size()
{
	int _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfBoolean::Length()
{
	int _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfBoolean::IsEmpty()
{
	bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfBoolean::Lower()
{
	int _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfBoolean::Upper()
{
	int _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_HArray1OfBoolean^ RDC::OCC::TColStd_HArray1OfBoolean::Assign(RDC::OCC::TColStd_HArray1OfBoolean^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray1OfBoolean^ RDC::OCC::TColStd_HArray1OfBoolean::Move(RDC::OCC::TColStd_HArray1OfBoolean^ theOther)
{
	throw gcnew System::NotImplementedException();
}

bool RDC::OCC::TColStd_HArray1OfBoolean::First()
{
	bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->First();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfBoolean::Last()
{
	bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Last();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfBoolean::Value(int theIndex)
{
	bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Value(theIndex);
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfBoolean::ChangeValue(int theIndex)
{
	bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_HArray1OfBoolean::SetValue(int theIndex, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_HArray1OfBoolean*)_NativeInstance)->SetValue(theIndex, *(bool*)pp_theItem);
}

void RDC::OCC::TColStd_HArray1OfBoolean::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray1OfBoolean*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray1OfBoolean::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray1OfBoolean*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_HArray1OfBoolean::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfBoolean*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_HArray1OfBoolean::IsDeletable()
{
	bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray1OfBoolean^ RDC::OCC::TColStd_HArray1OfBoolean::CreateDowncasted(::TColStd_HArray1OfBoolean* instance)
{
	return gcnew RDC::OCC::TColStd_HArray1OfBoolean(instance);
}

System::Collections::Generic::IEnumerator<bool>^ RDC::OCC::TColStd_HArray1OfBoolean::GetEnumerator()
{
	return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HArray1OfBoolean::GetEnumerator2()
{
	return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfBoolean::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfByte
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray1OfByte::TColStd_HArray1OfByte()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfByte();
}

RDC::OCC::TColStd_HArray1OfByte::TColStd_HArray1OfByte(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfByte(theLower, theUpper);
}

RDC::OCC::TColStd_HArray1OfByte::TColStd_HArray1OfByte(int theLower, int theUpper, unsigned char theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<unsigned char> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray1OfByte(theLower, theUpper, *(unsigned char*)pp_theValue);
}

RDC::OCC::TColStd_HArray1OfByte::TColStd_HArray1OfByte(unsigned char theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<unsigned char> pp_theBegin = &theBegin;
	NativeInstance = new ::TColStd_HArray1OfByte(*(unsigned char*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColStd_HArray1OfByte::TColStd_HArray1OfByte(RDC::OCC::TColStd_Array1OfByte^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfByte(*(::TColStd_Array1OfByte*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array1OfByte^ RDC::OCC::TColStd_HArray1OfByte::Array1()
{
	::TColStd_Array1OfByte* _result = new ::TColStd_Array1OfByte();
	*_result = (::TColStd_Array1OfByte)((::TColStd_HArray1OfByte*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfByte(_result);
}

RDC::OCC::TColStd_Array1OfByte^ RDC::OCC::TColStd_HArray1OfByte::ChangeArray1()
{
	::TColStd_Array1OfByte* _result = new ::TColStd_Array1OfByte();
	*_result = ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfByte(_result);
}

void RDC::OCC::TColStd_HArray1OfByte::Init(unsigned char theValue)
{
	pin_ptr<unsigned char> pp_theValue = &theValue;
	((::TColStd_HArray1OfByte*)_NativeInstance)->Init(*(unsigned char*)pp_theValue);
}

int RDC::OCC::TColStd_HArray1OfByte::Size()
{
	int _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfByte::Length()
{
	int _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfByte::IsEmpty()
{
	bool _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfByte::Lower()
{
	int _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfByte::Upper()
{
	int _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_HArray1OfByte^ RDC::OCC::TColStd_HArray1OfByte::Assign(RDC::OCC::TColStd_HArray1OfByte^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray1OfByte^ RDC::OCC::TColStd_HArray1OfByte::Move(RDC::OCC::TColStd_HArray1OfByte^ theOther)
{
	throw gcnew System::NotImplementedException();
}

unsigned char RDC::OCC::TColStd_HArray1OfByte::First()
{
	unsigned char _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->First();
	return _result;
}

unsigned char RDC::OCC::TColStd_HArray1OfByte::Last()
{
	unsigned char _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Last();
	return _result;
}

unsigned char RDC::OCC::TColStd_HArray1OfByte::Value(int theIndex)
{
	unsigned char _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Value(theIndex);
	return _result;
}

unsigned char RDC::OCC::TColStd_HArray1OfByte::ChangeValue(int theIndex)
{
	unsigned char _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_HArray1OfByte::SetValue(int theIndex, unsigned char theItem)
{
	pin_ptr<unsigned char> pp_theItem = &theItem;
	((::TColStd_HArray1OfByte*)_NativeInstance)->SetValue(theIndex, *(unsigned char*)pp_theItem);
}

void RDC::OCC::TColStd_HArray1OfByte::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray1OfByte*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray1OfByte::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray1OfByte*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_HArray1OfByte::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfByte*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_HArray1OfByte::IsDeletable()
{
	bool _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray1OfByte^ RDC::OCC::TColStd_HArray1OfByte::CreateDowncasted(::TColStd_HArray1OfByte* instance)
{
	return gcnew RDC::OCC::TColStd_HArray1OfByte(instance);
}

System::Collections::Generic::IEnumerator<unsigned char>^ RDC::OCC::TColStd_HArray1OfByte::GetEnumerator()
{
	return gcnew IndexEnumerator<unsigned char>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HArray1OfByte::GetEnumerator2()
{
	return gcnew IndexEnumerator<unsigned char>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfByte::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfCharacter
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfCharacter();
}

RDC::OCC::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfCharacter(theLower, theUpper);
}

RDC::OCC::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter(int theLower, int theUpper, char theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray1OfCharacter(theLower, theUpper, *(char*)pp_theValue);
}

RDC::OCC::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter(char theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theBegin = &theBegin;
	NativeInstance = new ::TColStd_HArray1OfCharacter(*(char*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter(RDC::OCC::TColStd_Array1OfCharacter^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfCharacter(*(::TColStd_Array1OfCharacter*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array1OfCharacter^ RDC::OCC::TColStd_HArray1OfCharacter::Array1()
{
	::TColStd_Array1OfCharacter* _result = new ::TColStd_Array1OfCharacter();
	*_result = (::TColStd_Array1OfCharacter)((::TColStd_HArray1OfCharacter*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfCharacter(_result);
}

RDC::OCC::TColStd_Array1OfCharacter^ RDC::OCC::TColStd_HArray1OfCharacter::ChangeArray1()
{
	::TColStd_Array1OfCharacter* _result = new ::TColStd_Array1OfCharacter();
	*_result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfCharacter(_result);
}

void RDC::OCC::TColStd_HArray1OfCharacter::Init(char theValue)
{
	pin_ptr<char> pp_theValue = &theValue;
	((::TColStd_HArray1OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

int RDC::OCC::TColStd_HArray1OfCharacter::Size()
{
	int _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfCharacter::Length()
{
	int _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfCharacter::IsEmpty()
{
	bool _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfCharacter::Lower()
{
	int _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfCharacter::Upper()
{
	int _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_HArray1OfCharacter^ RDC::OCC::TColStd_HArray1OfCharacter::Assign(RDC::OCC::TColStd_HArray1OfCharacter^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray1OfCharacter^ RDC::OCC::TColStd_HArray1OfCharacter::Move(RDC::OCC::TColStd_HArray1OfCharacter^ theOther)
{
	throw gcnew System::NotImplementedException();
}

char RDC::OCC::TColStd_HArray1OfCharacter::First()
{
	char _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->First();
	return _result;
}

char RDC::OCC::TColStd_HArray1OfCharacter::Last()
{
	char _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Last();
	return _result;
}

char RDC::OCC::TColStd_HArray1OfCharacter::Value(int theIndex)
{
	char _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Value(theIndex);
	return _result;
}

char RDC::OCC::TColStd_HArray1OfCharacter::ChangeValue(int theIndex)
{
	char _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_HArray1OfCharacter::SetValue(int theIndex, char theItem)
{
	pin_ptr<char> pp_theItem = &theItem;
	((::TColStd_HArray1OfCharacter*)_NativeInstance)->SetValue(theIndex, *(char*)pp_theItem);
}

void RDC::OCC::TColStd_HArray1OfCharacter::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray1OfCharacter*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray1OfCharacter::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray1OfCharacter*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_HArray1OfCharacter::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfCharacter*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_HArray1OfCharacter::IsDeletable()
{
	bool _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray1OfCharacter^ RDC::OCC::TColStd_HArray1OfCharacter::CreateDowncasted(::TColStd_HArray1OfCharacter* instance)
{
	return gcnew RDC::OCC::TColStd_HArray1OfCharacter(instance);
}

System::Collections::Generic::IEnumerator<char>^ RDC::OCC::TColStd_HArray1OfCharacter::GetEnumerator()
{
	return gcnew IndexEnumerator<char>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HArray1OfCharacter::GetEnumerator2()
{
	return gcnew IndexEnumerator<char>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfCharacter::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfExtendedString
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfExtendedString();
}

RDC::OCC::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfExtendedString(theLower, theUpper);
}

RDC::OCC::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString(int theLower, int theUpper, RDC::OCC::TCollection_ExtendedString^ theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfExtendedString(theLower, theUpper, *(::TCollection_ExtendedString*)theValue->NativeInstance);
}

RDC::OCC::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString(RDC::OCC::TCollection_ExtendedString^ theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfExtendedString(*(::TCollection_ExtendedString*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

RDC::OCC::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString(RDC::OCC::TColStd_Array1OfExtendedString^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfExtendedString(*(::TColStd_Array1OfExtendedString*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array1OfExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::Array1()
{
	::TColStd_Array1OfExtendedString* _result = new ::TColStd_Array1OfExtendedString();
	*_result = (::TColStd_Array1OfExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfExtendedString(_result);
}

RDC::OCC::TColStd_Array1OfExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::ChangeArray1()
{
	::TColStd_Array1OfExtendedString* _result = new ::TColStd_Array1OfExtendedString();
	*_result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfExtendedString(_result);
}

void RDC::OCC::TColStd_HArray1OfExtendedString::Init(RDC::OCC::TCollection_ExtendedString^ theValue)
{
	((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Init(*(::TCollection_ExtendedString*)theValue->NativeInstance);
}

int RDC::OCC::TColStd_HArray1OfExtendedString::Size()
{
	int _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfExtendedString::Length()
{
	int _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfExtendedString::IsEmpty()
{
	bool _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfExtendedString::Lower()
{
	int _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfExtendedString::Upper()
{
	int _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_HArray1OfExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::Assign(RDC::OCC::TColStd_HArray1OfExtendedString^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray1OfExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::Move(RDC::OCC::TColStd_HArray1OfExtendedString^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::First()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::ChangeFirst()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::Last()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::ChangeLast()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::Value(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::ChangeValue(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

void RDC::OCC::TColStd_HArray1OfExtendedString::SetValue(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HArray1OfExtendedString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_HArray1OfExtendedString::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray1OfExtendedString*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray1OfExtendedString::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray1OfExtendedString*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_HArray1OfExtendedString::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_HArray1OfExtendedString::IsDeletable()
{
	bool _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray1OfExtendedString^ RDC::OCC::TColStd_HArray1OfExtendedString::CreateDowncasted(::TColStd_HArray1OfExtendedString* instance)
{
	return gcnew RDC::OCC::TColStd_HArray1OfExtendedString(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_ExtendedString^>^ RDC::OCC::TColStd_HArray1OfExtendedString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_ExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HArray1OfExtendedString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_ExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfExtendedString::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfInteger();
}

RDC::OCC::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfInteger(theLower, theUpper);
}

RDC::OCC::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger(int theLower, int theUpper, int theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<int> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray1OfInteger(theLower, theUpper, *(int*)pp_theValue);
}

RDC::OCC::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger(int theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<int> pp_theBegin = &theBegin;
	NativeInstance = new ::TColStd_HArray1OfInteger(*(int*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger(RDC::OCC::TColStd_Array1OfInteger^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfInteger(*(::TColStd_Array1OfInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array1OfInteger^ RDC::OCC::TColStd_HArray1OfInteger::Array1()
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result = (::TColStd_Array1OfInteger)((::TColStd_HArray1OfInteger*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfInteger(_result);
}

RDC::OCC::TColStd_Array1OfInteger^ RDC::OCC::TColStd_HArray1OfInteger::ChangeArray1()
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfInteger(_result);
}

void RDC::OCC::TColStd_HArray1OfInteger::Init(int theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	((::TColStd_HArray1OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

int RDC::OCC::TColStd_HArray1OfInteger::Size()
{
	int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfInteger::Length()
{
	int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfInteger::IsEmpty()
{
	bool _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfInteger::Lower()
{
	int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfInteger::Upper()
{
	int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_HArray1OfInteger^ RDC::OCC::TColStd_HArray1OfInteger::Assign(RDC::OCC::TColStd_HArray1OfInteger^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray1OfInteger^ RDC::OCC::TColStd_HArray1OfInteger::Move(RDC::OCC::TColStd_HArray1OfInteger^ theOther)
{
	throw gcnew System::NotImplementedException();
}

int RDC::OCC::TColStd_HArray1OfInteger::First()
{
	int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->First();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfInteger::Last()
{
	int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Last();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfInteger::Value(int theIndex)
{
	int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Value(theIndex);
	return _result;
}

int RDC::OCC::TColStd_HArray1OfInteger::ChangeValue(int theIndex)
{
	int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_HArray1OfInteger::SetValue(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HArray1OfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}

void RDC::OCC::TColStd_HArray1OfInteger::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray1OfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray1OfInteger::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray1OfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_HArray1OfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_HArray1OfInteger::IsDeletable()
{
	bool _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray1OfInteger^ RDC::OCC::TColStd_HArray1OfInteger::CreateDowncasted(::TColStd_HArray1OfInteger* instance)
{
	return gcnew RDC::OCC::TColStd_HArray1OfInteger(instance);
}

System::Collections::Generic::IEnumerator<int>^ RDC::OCC::TColStd_HArray1OfInteger::GetEnumerator()
{
	return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HArray1OfInteger::GetEnumerator2()
{
	return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfInteger::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfListOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray1OfListOfInteger::TColStd_HArray1OfListOfInteger()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfListOfInteger();
}

RDC::OCC::TColStd_HArray1OfListOfInteger::TColStd_HArray1OfListOfInteger(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfListOfInteger(theLower, theUpper);
}

RDC::OCC::TColStd_HArray1OfListOfInteger::TColStd_HArray1OfListOfInteger(RDC::OCC::TColStd_Array1OfListOfInteger^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfListOfInteger(*(::TColStd_Array1OfListOfInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array1OfListOfInteger^ RDC::OCC::TColStd_HArray1OfListOfInteger::Array1()
{
	::TColStd_Array1OfListOfInteger* _result = new ::TColStd_Array1OfListOfInteger();
	*_result = (::TColStd_Array1OfListOfInteger)((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfListOfInteger(_result);
}

RDC::OCC::TColStd_Array1OfListOfInteger^ RDC::OCC::TColStd_HArray1OfListOfInteger::ChangeArray1()
{
	::TColStd_Array1OfListOfInteger* _result = new ::TColStd_Array1OfListOfInteger();
	*_result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfListOfInteger(_result);
}

int RDC::OCC::TColStd_HArray1OfListOfInteger::Size()
{
	int _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfListOfInteger::Length()
{
	int _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfListOfInteger::IsEmpty()
{
	bool _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfListOfInteger::Lower()
{
	int _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfListOfInteger::Upper()
{
	int _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_HArray1OfListOfInteger^ RDC::OCC::TColStd_HArray1OfListOfInteger::Assign(RDC::OCC::TColStd_HArray1OfListOfInteger^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray1OfListOfInteger^ RDC::OCC::TColStd_HArray1OfListOfInteger::Move(RDC::OCC::TColStd_HArray1OfListOfInteger^ theOther)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColStd_HArray1OfListOfInteger::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray1OfListOfInteger::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_HArray1OfListOfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_HArray1OfListOfInteger::IsDeletable()
{
	bool _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray1OfListOfInteger^ RDC::OCC::TColStd_HArray1OfListOfInteger::CreateDowncasted(::TColStd_HArray1OfListOfInteger* instance)
{
	return gcnew RDC::OCC::TColStd_HArray1OfListOfInteger(instance);
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfListOfInteger::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray1OfReal::TColStd_HArray1OfReal()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfReal();
}

RDC::OCC::TColStd_HArray1OfReal::TColStd_HArray1OfReal(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfReal(theLower, theUpper);
}

RDC::OCC::TColStd_HArray1OfReal::TColStd_HArray1OfReal(int theLower, int theUpper, double theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray1OfReal(theLower, theUpper, *(double*)pp_theValue);
}

RDC::OCC::TColStd_HArray1OfReal::TColStd_HArray1OfReal(double theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theBegin = &theBegin;
	NativeInstance = new ::TColStd_HArray1OfReal(*(double*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TColStd_HArray1OfReal::TColStd_HArray1OfReal(RDC::OCC::TColStd_Array1OfReal^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfReal(*(::TColStd_Array1OfReal*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::TColStd_HArray1OfReal::Array1()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = (::TColStd_Array1OfReal)((::TColStd_HArray1OfReal*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::TColStd_HArray1OfReal::ChangeArray1()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

void RDC::OCC::TColStd_HArray1OfReal::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColStd_HArray1OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int RDC::OCC::TColStd_HArray1OfReal::Size()
{
	int _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfReal::Length()
{
	int _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfReal::IsEmpty()
{
	bool _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfReal::Lower()
{
	int _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfReal::Upper()
{
	int _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_HArray1OfReal^ RDC::OCC::TColStd_HArray1OfReal::Assign(RDC::OCC::TColStd_HArray1OfReal^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray1OfReal^ RDC::OCC::TColStd_HArray1OfReal::Move(RDC::OCC::TColStd_HArray1OfReal^ theOther)
{
	throw gcnew System::NotImplementedException();
}

double RDC::OCC::TColStd_HArray1OfReal::First()
{
	double _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->First();
	return _result;
}

double RDC::OCC::TColStd_HArray1OfReal::Last()
{
	double _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Last();
	return _result;
}

double RDC::OCC::TColStd_HArray1OfReal::Value(int theIndex)
{
	double _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Value(theIndex);
	return _result;
}

double RDC::OCC::TColStd_HArray1OfReal::ChangeValue(int theIndex)
{
	double _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_HArray1OfReal::SetValue(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HArray1OfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

void RDC::OCC::TColStd_HArray1OfReal::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray1OfReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray1OfReal::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray1OfReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_HArray1OfReal::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfReal*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_HArray1OfReal::IsDeletable()
{
	bool _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray1OfReal^ RDC::OCC::TColStd_HArray1OfReal::CreateDowncasted(::TColStd_HArray1OfReal* instance)
{
	return gcnew RDC::OCC::TColStd_HArray1OfReal(instance);
}

System::Collections::Generic::IEnumerator<double>^ RDC::OCC::TColStd_HArray1OfReal::GetEnumerator()
{
	return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HArray1OfReal::GetEnumerator2()
{
	return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfReal::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfTransient();
}

RDC::OCC::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfTransient(theLower, theUpper);
}

RDC::OCC::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient(int theLower, int theUpper, RDC::OCC::Standard_Transient^ theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfTransient(theLower, theUpper, Handle(::Standard_Transient)(theValue->NativeInstance));
}

RDC::OCC::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient(RDC::OCC::Standard_Transient^ theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfTransient(Handle(::Standard_Transient)(theBegin->NativeInstance), theLower, theUpper, parameter1);
}

RDC::OCC::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient(RDC::OCC::TColStd_Array1OfTransient^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfTransient(*(::TColStd_Array1OfTransient*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array1OfTransient^ RDC::OCC::TColStd_HArray1OfTransient::Array1()
{
	::TColStd_Array1OfTransient* _result = new ::TColStd_Array1OfTransient();
	*_result = (::TColStd_Array1OfTransient)((::TColStd_HArray1OfTransient*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfTransient(_result);
}

RDC::OCC::TColStd_Array1OfTransient^ RDC::OCC::TColStd_HArray1OfTransient::ChangeArray1()
{
	::TColStd_Array1OfTransient* _result = new ::TColStd_Array1OfTransient();
	*_result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfTransient(_result);
}

void RDC::OCC::TColStd_HArray1OfTransient::Init(RDC::OCC::Standard_Transient^ theValue)
{
	((::TColStd_HArray1OfTransient*)_NativeInstance)->Init(Handle(::Standard_Transient)(theValue->NativeInstance));
}

int RDC::OCC::TColStd_HArray1OfTransient::Size()
{
	int _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfTransient::Length()
{
	int _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TColStd_HArray1OfTransient::IsEmpty()
{
	bool _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfTransient::Lower()
{
	int _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray1OfTransient::Upper()
{
	int _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TColStd_HArray1OfTransient^ RDC::OCC::TColStd_HArray1OfTransient::Assign(RDC::OCC::TColStd_HArray1OfTransient^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray1OfTransient^ RDC::OCC::TColStd_HArray1OfTransient::Move(RDC::OCC::TColStd_HArray1OfTransient^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray1OfTransient::First()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray1OfTransient::ChangeFirst()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray1OfTransient::Last()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray1OfTransient::ChangeLast()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray1OfTransient::Value(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Value(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray1OfTransient::ChangeValue(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->ChangeValue(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_HArray1OfTransient::SetValue(int theIndex, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_HArray1OfTransient*)_NativeInstance)->SetValue(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HArray1OfTransient::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray1OfTransient*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray1OfTransient::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray1OfTransient*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TColStd_HArray1OfTransient::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfTransient*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TColStd_HArray1OfTransient::IsDeletable()
{
	bool _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray1OfTransient^ RDC::OCC::TColStd_HArray1OfTransient::CreateDowncasted(::TColStd_HArray1OfTransient* instance)
{
	return gcnew RDC::OCC::TColStd_HArray1OfTransient(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Standard_Transient^>^ RDC::OCC::TColStd_HArray1OfTransient::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Standard_Transient^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HArray1OfTransient::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Standard_Transient^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfTransient::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfBoolean
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray2OfBoolean::TColStd_HArray2OfBoolean(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfBoolean(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColStd_HArray2OfBoolean::TColStd_HArray2OfBoolean(int theRowLow, int theRowUpp, int theColLow, int theColUpp, bool theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<bool> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray2OfBoolean(theRowLow, theRowUpp, theColLow, theColUpp, *(bool*)pp_theValue);
}

RDC::OCC::TColStd_HArray2OfBoolean::TColStd_HArray2OfBoolean(RDC::OCC::TColStd_Array2OfBoolean^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfBoolean(*(::TColStd_Array2OfBoolean*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array2OfBoolean^ RDC::OCC::TColStd_HArray2OfBoolean::Array2()
{
	::TColStd_Array2OfBoolean* _result = new ::TColStd_Array2OfBoolean();
	*_result = (::TColStd_Array2OfBoolean)((::TColStd_HArray2OfBoolean*)_NativeInstance)->Array2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfBoolean(_result);
}

RDC::OCC::TColStd_Array2OfBoolean^ RDC::OCC::TColStd_HArray2OfBoolean::ChangeArray2()
{
	::TColStd_Array2OfBoolean* _result = new ::TColStd_Array2OfBoolean();
	*_result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeArray2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfBoolean(_result);
}

int RDC::OCC::TColStd_HArray2OfBoolean::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TColStd_HArray2OfBoolean::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TColStd_HArray2OfBoolean::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::Size()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::Length()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::NbRows()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::NbColumns()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::RowLength()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::ColLength()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::LowerRow()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::UpperRow()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::LowerCol()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::UpperCol()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TColStd_HArray2OfBoolean^ RDC::OCC::TColStd_HArray2OfBoolean::Assign(RDC::OCC::TColStd_HArray2OfBoolean^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray2OfBoolean^ RDC::OCC::TColStd_HArray2OfBoolean::Move(RDC::OCC::TColStd_HArray2OfBoolean^ theOther)
{
	throw gcnew System::NotImplementedException();
}

bool RDC::OCC::TColStd_HArray2OfBoolean::Value(int theRow, int theCol)
{
	bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

bool RDC::OCC::TColStd_HArray2OfBoolean::ChangeValue(int theRow, int theCol)
{
	bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result;
}

void RDC::OCC::TColStd_HArray2OfBoolean::SetValue(int theRow, int theCol, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_HArray2OfBoolean*)_NativeInstance)->SetValue(theRow, theCol, *(bool*)pp_theItem);
}

void RDC::OCC::TColStd_HArray2OfBoolean::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_HArray2OfBoolean*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColStd_HArray2OfBoolean::Init(bool theValue)
{
	pin_ptr<bool> pp_theValue = &theValue;
	((::TColStd_HArray2OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

bool RDC::OCC::TColStd_HArray2OfBoolean::IsEmpty()
{
	bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::Lower()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfBoolean::Upper()
{
	int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_HArray2OfBoolean::First()
{
	bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->First();
	return _result;
}

bool RDC::OCC::TColStd_HArray2OfBoolean::Last()
{
	bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Last();
	return _result;
}

void RDC::OCC::TColStd_HArray2OfBoolean::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray2OfBoolean*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray2OfBoolean::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray2OfBoolean*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColStd_HArray2OfBoolean::IsDeletable()
{
	bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray2OfBoolean^ RDC::OCC::TColStd_HArray2OfBoolean::CreateDowncasted(::TColStd_HArray2OfBoolean* instance)
{
	return gcnew RDC::OCC::TColStd_HArray2OfBoolean(instance);
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfBoolean::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfCharacter
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray2OfCharacter::TColStd_HArray2OfCharacter(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfCharacter(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColStd_HArray2OfCharacter::TColStd_HArray2OfCharacter(int theRowLow, int theRowUpp, int theColLow, int theColUpp, char theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray2OfCharacter(theRowLow, theRowUpp, theColLow, theColUpp, *(char*)pp_theValue);
}

RDC::OCC::TColStd_HArray2OfCharacter::TColStd_HArray2OfCharacter(RDC::OCC::TColStd_Array2OfCharacter^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfCharacter(*(::TColStd_Array2OfCharacter*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array2OfCharacter^ RDC::OCC::TColStd_HArray2OfCharacter::Array2()
{
	::TColStd_Array2OfCharacter* _result = new ::TColStd_Array2OfCharacter();
	*_result = (::TColStd_Array2OfCharacter)((::TColStd_HArray2OfCharacter*)_NativeInstance)->Array2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfCharacter(_result);
}

RDC::OCC::TColStd_Array2OfCharacter^ RDC::OCC::TColStd_HArray2OfCharacter::ChangeArray2()
{
	::TColStd_Array2OfCharacter* _result = new ::TColStd_Array2OfCharacter();
	*_result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeArray2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfCharacter(_result);
}

int RDC::OCC::TColStd_HArray2OfCharacter::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TColStd_HArray2OfCharacter::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TColStd_HArray2OfCharacter::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::Size()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::Length()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::NbRows()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::NbColumns()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::RowLength()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::ColLength()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::LowerRow()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::UpperRow()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::LowerCol()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::UpperCol()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TColStd_HArray2OfCharacter^ RDC::OCC::TColStd_HArray2OfCharacter::Assign(RDC::OCC::TColStd_HArray2OfCharacter^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray2OfCharacter^ RDC::OCC::TColStd_HArray2OfCharacter::Move(RDC::OCC::TColStd_HArray2OfCharacter^ theOther)
{
	throw gcnew System::NotImplementedException();
}

char RDC::OCC::TColStd_HArray2OfCharacter::Value(int theRow, int theCol)
{
	char _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

char RDC::OCC::TColStd_HArray2OfCharacter::ChangeValue(int theRow, int theCol)
{
	char _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result;
}

void RDC::OCC::TColStd_HArray2OfCharacter::SetValue(int theRow, int theCol, char theItem)
{
	pin_ptr<char> pp_theItem = &theItem;
	((::TColStd_HArray2OfCharacter*)_NativeInstance)->SetValue(theRow, theCol, *(char*)pp_theItem);
}

void RDC::OCC::TColStd_HArray2OfCharacter::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_HArray2OfCharacter*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColStd_HArray2OfCharacter::Init(char theValue)
{
	pin_ptr<char> pp_theValue = &theValue;
	((::TColStd_HArray2OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

bool RDC::OCC::TColStd_HArray2OfCharacter::IsEmpty()
{
	bool _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::Lower()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfCharacter::Upper()
{
	int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Upper();
	return _result;
}

char RDC::OCC::TColStd_HArray2OfCharacter::First()
{
	char _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->First();
	return _result;
}

char RDC::OCC::TColStd_HArray2OfCharacter::Last()
{
	char _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Last();
	return _result;
}

void RDC::OCC::TColStd_HArray2OfCharacter::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray2OfCharacter*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray2OfCharacter::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray2OfCharacter*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColStd_HArray2OfCharacter::IsDeletable()
{
	bool _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray2OfCharacter^ RDC::OCC::TColStd_HArray2OfCharacter::CreateDowncasted(::TColStd_HArray2OfCharacter* instance)
{
	return gcnew RDC::OCC::TColStd_HArray2OfCharacter(instance);
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfCharacter::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray2OfInteger::TColStd_HArray2OfInteger(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfInteger(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColStd_HArray2OfInteger::TColStd_HArray2OfInteger(int theRowLow, int theRowUpp, int theColLow, int theColUpp, int theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<int> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray2OfInteger(theRowLow, theRowUpp, theColLow, theColUpp, *(int*)pp_theValue);
}

RDC::OCC::TColStd_HArray2OfInteger::TColStd_HArray2OfInteger(RDC::OCC::TColStd_Array2OfInteger^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfInteger(*(::TColStd_Array2OfInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array2OfInteger^ RDC::OCC::TColStd_HArray2OfInteger::Array2()
{
	::TColStd_Array2OfInteger* _result = new ::TColStd_Array2OfInteger();
	*_result = (::TColStd_Array2OfInteger)((::TColStd_HArray2OfInteger*)_NativeInstance)->Array2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfInteger(_result);
}

RDC::OCC::TColStd_Array2OfInteger^ RDC::OCC::TColStd_HArray2OfInteger::ChangeArray2()
{
	::TColStd_Array2OfInteger* _result = new ::TColStd_Array2OfInteger();
	*_result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeArray2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfInteger(_result);
}

int RDC::OCC::TColStd_HArray2OfInteger::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TColStd_HArray2OfInteger::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TColStd_HArray2OfInteger::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::Size()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::Length()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::NbRows()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::NbColumns()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::RowLength()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::ColLength()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::LowerRow()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::UpperRow()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::LowerCol()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::UpperCol()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TColStd_HArray2OfInteger^ RDC::OCC::TColStd_HArray2OfInteger::Assign(RDC::OCC::TColStd_HArray2OfInteger^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray2OfInteger^ RDC::OCC::TColStd_HArray2OfInteger::Move(RDC::OCC::TColStd_HArray2OfInteger^ theOther)
{
	throw gcnew System::NotImplementedException();
}

int RDC::OCC::TColStd_HArray2OfInteger::Value(int theRow, int theCol)
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::ChangeValue(int theRow, int theCol)
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result;
}

void RDC::OCC::TColStd_HArray2OfInteger::SetValue(int theRow, int theCol, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HArray2OfInteger*)_NativeInstance)->SetValue(theRow, theCol, *(int*)pp_theItem);
}

void RDC::OCC::TColStd_HArray2OfInteger::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_HArray2OfInteger*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColStd_HArray2OfInteger::Init(int theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	((::TColStd_HArray2OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

bool RDC::OCC::TColStd_HArray2OfInteger::IsEmpty()
{
	bool _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::Lower()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::Upper()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Upper();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::First()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->First();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfInteger::Last()
{
	int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Last();
	return _result;
}

void RDC::OCC::TColStd_HArray2OfInteger::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray2OfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray2OfInteger::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray2OfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColStd_HArray2OfInteger::IsDeletable()
{
	bool _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray2OfInteger^ RDC::OCC::TColStd_HArray2OfInteger::CreateDowncasted(::TColStd_HArray2OfInteger* instance)
{
	return gcnew RDC::OCC::TColStd_HArray2OfInteger(instance);
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfInteger::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray2OfReal::TColStd_HArray2OfReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfReal(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColStd_HArray2OfReal::TColStd_HArray2OfReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp, double theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray2OfReal(theRowLow, theRowUpp, theColLow, theColUpp, *(double*)pp_theValue);
}

RDC::OCC::TColStd_HArray2OfReal::TColStd_HArray2OfReal(RDC::OCC::TColStd_Array2OfReal^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfReal(*(::TColStd_Array2OfReal*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array2OfReal^ RDC::OCC::TColStd_HArray2OfReal::Array2()
{
	::TColStd_Array2OfReal* _result = new ::TColStd_Array2OfReal();
	*_result = (::TColStd_Array2OfReal)((::TColStd_HArray2OfReal*)_NativeInstance)->Array2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfReal(_result);
}

RDC::OCC::TColStd_Array2OfReal^ RDC::OCC::TColStd_HArray2OfReal::ChangeArray2()
{
	::TColStd_Array2OfReal* _result = new ::TColStd_Array2OfReal();
	*_result = ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeArray2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfReal(_result);
}

int RDC::OCC::TColStd_HArray2OfReal::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TColStd_HArray2OfReal::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TColStd_HArray2OfReal::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::Size()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::Length()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::NbRows()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::NbColumns()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::RowLength()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::ColLength()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::LowerRow()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::UpperRow()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::LowerCol()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::UpperCol()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TColStd_HArray2OfReal^ RDC::OCC::TColStd_HArray2OfReal::Assign(RDC::OCC::TColStd_HArray2OfReal^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray2OfReal^ RDC::OCC::TColStd_HArray2OfReal::Move(RDC::OCC::TColStd_HArray2OfReal^ theOther)
{
	throw gcnew System::NotImplementedException();
}

double RDC::OCC::TColStd_HArray2OfReal::Value(int theRow, int theCol)
{
	double _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

double RDC::OCC::TColStd_HArray2OfReal::ChangeValue(int theRow, int theCol)
{
	double _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result;
}

void RDC::OCC::TColStd_HArray2OfReal::SetValue(int theRow, int theCol, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HArray2OfReal*)_NativeInstance)->SetValue(theRow, theCol, *(double*)pp_theItem);
}

void RDC::OCC::TColStd_HArray2OfReal::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_HArray2OfReal*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColStd_HArray2OfReal::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColStd_HArray2OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

bool RDC::OCC::TColStd_HArray2OfReal::IsEmpty()
{
	bool _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::Lower()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfReal::Upper()
{
	int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Upper();
	return _result;
}

double RDC::OCC::TColStd_HArray2OfReal::First()
{
	double _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->First();
	return _result;
}

double RDC::OCC::TColStd_HArray2OfReal::Last()
{
	double _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Last();
	return _result;
}

void RDC::OCC::TColStd_HArray2OfReal::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray2OfReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray2OfReal::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray2OfReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColStd_HArray2OfReal::IsDeletable()
{
	bool _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray2OfReal^ RDC::OCC::TColStd_HArray2OfReal::CreateDowncasted(::TColStd_HArray2OfReal* instance)
{
	return gcnew RDC::OCC::TColStd_HArray2OfReal(instance);
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfReal::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_HArray2OfTransient::TColStd_HArray2OfTransient(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfTransient(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TColStd_HArray2OfTransient::TColStd_HArray2OfTransient(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::Standard_Transient^ theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfTransient(theRowLow, theRowUpp, theColLow, theColUpp, Handle(::Standard_Transient)(theValue->NativeInstance));
}

RDC::OCC::TColStd_HArray2OfTransient::TColStd_HArray2OfTransient(RDC::OCC::TColStd_Array2OfTransient^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfTransient(*(::TColStd_Array2OfTransient*)theOther->NativeInstance);
}

RDC::OCC::TColStd_Array2OfTransient^ RDC::OCC::TColStd_HArray2OfTransient::Array2()
{
	::TColStd_Array2OfTransient* _result = new ::TColStd_Array2OfTransient();
	*_result = (::TColStd_Array2OfTransient)((::TColStd_HArray2OfTransient*)_NativeInstance)->Array2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfTransient(_result);
}

RDC::OCC::TColStd_Array2OfTransient^ RDC::OCC::TColStd_HArray2OfTransient::ChangeArray2()
{
	::TColStd_Array2OfTransient* _result = new ::TColStd_Array2OfTransient();
	*_result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ChangeArray2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfTransient(_result);
}

int RDC::OCC::TColStd_HArray2OfTransient::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TColStd_HArray2OfTransient::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TColStd_HArray2OfTransient::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::Size()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::Length()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::NbRows()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::NbColumns()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::RowLength()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::ColLength()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::LowerRow()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::UpperRow()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::LowerCol()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::UpperCol()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TColStd_HArray2OfTransient^ RDC::OCC::TColStd_HArray2OfTransient::Assign(RDC::OCC::TColStd_HArray2OfTransient^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TColStd_HArray2OfTransient^ RDC::OCC::TColStd_HArray2OfTransient::Move(RDC::OCC::TColStd_HArray2OfTransient^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray2OfTransient::Value(int theRow, int theCol)
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Value(theRow, theCol);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray2OfTransient::ChangeValue(int theRow, int theCol)
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_HArray2OfTransient::SetValue(int theRow, int theCol, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_HArray2OfTransient*)_NativeInstance)->SetValue(theRow, theCol, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HArray2OfTransient::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_HArray2OfTransient*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TColStd_HArray2OfTransient::Init(RDC::OCC::Standard_Transient^ theValue)
{
	((::TColStd_HArray2OfTransient*)_NativeInstance)->Init(Handle(::Standard_Transient)(theValue->NativeInstance));
}

bool RDC::OCC::TColStd_HArray2OfTransient::IsEmpty()
{
	bool _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::Lower()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HArray2OfTransient::Upper()
{
	int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray2OfTransient::First()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray2OfTransient::ChangeFirst()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray2OfTransient::Last()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HArray2OfTransient::ChangeLast()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_HArray2OfTransient::UpdateLowerBound(int theLower)
{
	((::TColStd_HArray2OfTransient*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TColStd_HArray2OfTransient::UpdateUpperBound(int theUpper)
{
	((::TColStd_HArray2OfTransient*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TColStd_HArray2OfTransient::IsDeletable()
{
	bool _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TColStd_HArray2OfTransient^ RDC::OCC::TColStd_HArray2OfTransient::CreateDowncasted(::TColStd_HArray2OfTransient* instance)
{
	return gcnew RDC::OCC::TColStd_HArray2OfTransient(instance);
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfTransient::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_PackedMapOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_PackedMapOfInteger::TColStd_PackedMapOfInteger(int theNbBuckets)
	: RDC::OCC::BaseClass<::TColStd_PackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_PackedMapOfInteger(theNbBuckets);
}

RDC::OCC::TColStd_PackedMapOfInteger::TColStd_PackedMapOfInteger()
	: RDC::OCC::BaseClass<::TColStd_PackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_PackedMapOfInteger(1);
}

RDC::OCC::TColStd_PackedMapOfInteger^ RDC::OCC::TColStd_PackedMapOfInteger::Assign(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1)
{
	::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
	*_result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Assign(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_PackedMapOfInteger(_result);
}

void RDC::OCC::TColStd_PackedMapOfInteger::ReSize(int NbBuckets)
{
	((::TColStd_PackedMapOfInteger*)_NativeInstance)->ReSize(NbBuckets);
}

void RDC::OCC::TColStd_PackedMapOfInteger::Clear()
{
	((::TColStd_PackedMapOfInteger*)_NativeInstance)->Clear();
}

bool RDC::OCC::TColStd_PackedMapOfInteger::Add(int aKey)
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Add(aKey);
	return _result;
}

bool RDC::OCC::TColStd_PackedMapOfInteger::Contains(int aKey)
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Contains(aKey);
	return _result;
}

bool RDC::OCC::TColStd_PackedMapOfInteger::Remove(int aKey)
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Remove(aKey);
	return _result;
}

int RDC::OCC::TColStd_PackedMapOfInteger::NbBuckets()
{
	int _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->NbBuckets();
	return _result;
}

int RDC::OCC::TColStd_PackedMapOfInteger::Extent()
{
	int _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Extent();
	return _result;
}

bool RDC::OCC::TColStd_PackedMapOfInteger::IsEmpty()
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TColStd_PackedMapOfInteger::GetMinimalMapped()
{
	int _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->GetMinimalMapped();
	return _result;
}

int RDC::OCC::TColStd_PackedMapOfInteger::GetMaximalMapped()
{
	int _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->GetMaximalMapped();
	return _result;
}

void RDC::OCC::TColStd_PackedMapOfInteger::Statistics(System::IO::TextWriter^ theStream)
{
	std::ostringstream oss_theStream;
	((::TColStd_PackedMapOfInteger*)_NativeInstance)->Statistics(oss_theStream);
	theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void RDC::OCC::TColStd_PackedMapOfInteger::Union(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1, RDC::OCC::TColStd_PackedMapOfInteger^ parameter2)
{
	((::TColStd_PackedMapOfInteger*)_NativeInstance)->Union(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance, *(::TColStd_PackedMapOfInteger*)parameter2->NativeInstance);
}

bool RDC::OCC::TColStd_PackedMapOfInteger::Unite(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1)
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Unite(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_PackedMapOfInteger::Intersection(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1, RDC::OCC::TColStd_PackedMapOfInteger^ parameter2)
{
	((::TColStd_PackedMapOfInteger*)_NativeInstance)->Intersection(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance, *(::TColStd_PackedMapOfInteger*)parameter2->NativeInstance);
}

bool RDC::OCC::TColStd_PackedMapOfInteger::Intersect(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1)
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Intersect(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_PackedMapOfInteger::Subtraction(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1, RDC::OCC::TColStd_PackedMapOfInteger^ parameter2)
{
	((::TColStd_PackedMapOfInteger*)_NativeInstance)->Subtraction(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance, *(::TColStd_PackedMapOfInteger*)parameter2->NativeInstance);
}

bool RDC::OCC::TColStd_PackedMapOfInteger::Subtract(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1)
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Subtract(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
	return _result;
}

void RDC::OCC::TColStd_PackedMapOfInteger::Difference(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1, RDC::OCC::TColStd_PackedMapOfInteger^ parameter2)
{
	((::TColStd_PackedMapOfInteger*)_NativeInstance)->Difference(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance, *(::TColStd_PackedMapOfInteger*)parameter2->NativeInstance);
}

bool RDC::OCC::TColStd_PackedMapOfInteger::Differ(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1)
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Differ(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_PackedMapOfInteger::IsEqual(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1)
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->IsEqual(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_PackedMapOfInteger::IsSubset(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1)
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->IsSubset(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_PackedMapOfInteger::HasIntersection(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1)
{
	bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->HasIntersection(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_PackedMapOfInteger::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_PackedMapOfInteger::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((TColStd_PackedMapOfInteger^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_PackedMapOfInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_PackedMapOfInteger::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_PackedMapOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_PackedMapOfInteger::Iterator();
}

RDC::OCC::TColStd_PackedMapOfInteger::Iterator::Iterator(RDC::OCC::TColStd_PackedMapOfInteger^ theMap)
	: RDC::OCC::BaseClass<::TColStd_PackedMapOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_PackedMapOfInteger::Iterator(*(::TColStd_PackedMapOfInteger*)theMap->NativeInstance);
}

void RDC::OCC::TColStd_PackedMapOfInteger::Iterator::Initialize(RDC::OCC::TColStd_PackedMapOfInteger^ theMap)
{
	((::TColStd_PackedMapOfInteger::Iterator*)_NativeInstance)->Initialize(*(::TColStd_PackedMapOfInteger*)theMap->NativeInstance);
}

void RDC::OCC::TColStd_PackedMapOfInteger::Iterator::Reset()
{
	((::TColStd_PackedMapOfInteger::Iterator*)_NativeInstance)->Reset();
}

int RDC::OCC::TColStd_PackedMapOfInteger::Iterator::Key()
{
	int _result = ((::TColStd_PackedMapOfInteger::Iterator*)_NativeInstance)->Key();
	return _result;
}

bool RDC::OCC::TColStd_PackedMapOfInteger::Iterator::More()
{
	bool _result = ((::TColStd_PackedMapOfInteger::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_PackedMapOfInteger::Iterator::Next()
{
	((::TColStd_PackedMapOfInteger::Iterator*)_NativeInstance)->Next();
}



//---------------------------------------------------------------------
//  Class  TColStd_HPackedMapOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_HPackedMapOfInteger::TColStd_HPackedMapOfInteger(int NbBuckets)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HPackedMapOfInteger(NbBuckets);
}

RDC::OCC::TColStd_HPackedMapOfInteger::TColStd_HPackedMapOfInteger()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HPackedMapOfInteger(1);
}

RDC::OCC::TColStd_HPackedMapOfInteger::TColStd_HPackedMapOfInteger(RDC::OCC::TColStd_PackedMapOfInteger^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HPackedMapOfInteger(*(::TColStd_PackedMapOfInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_PackedMapOfInteger^ RDC::OCC::TColStd_HPackedMapOfInteger::Map()
{
	::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
	*_result = (::TColStd_PackedMapOfInteger)((::TColStd_HPackedMapOfInteger*)_NativeInstance)->Map();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_PackedMapOfInteger(_result);
}

RDC::OCC::TColStd_PackedMapOfInteger^ RDC::OCC::TColStd_HPackedMapOfInteger::ChangeMap()
{
	::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
	*_result = ((::TColStd_HPackedMapOfInteger*)_NativeInstance)->ChangeMap();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_PackedMapOfInteger(_result);
}

RDC::OCC::TColStd_HPackedMapOfInteger^ RDC::OCC::TColStd_HPackedMapOfInteger::CreateDowncasted(::TColStd_HPackedMapOfInteger* instance)
{
	return gcnew RDC::OCC::TColStd_HPackedMapOfInteger(instance);
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfAsciiString
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfAsciiString::TColStd_HSequenceOfAsciiString()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfAsciiString();
}

RDC::OCC::TColStd_HSequenceOfAsciiString::TColStd_HSequenceOfAsciiString(RDC::OCC::TColStd_SequenceOfAsciiString^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfAsciiString(*(::TColStd_SequenceOfAsciiString*)theOther->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfAsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::Sequence()
{
	::TColStd_SequenceOfAsciiString* _result = new ::TColStd_SequenceOfAsciiString();
	*_result = (::TColStd_SequenceOfAsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Sequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfAsciiString(_result);
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::Append(RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Append(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::Append(RDC::OCC::TColStd_SequenceOfAsciiString^ theSequence)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Append(*(::TColStd_SequenceOfAsciiString*)theSequence->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfAsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::ChangeSequence()
{
	::TColStd_SequenceOfAsciiString* _result = new ::TColStd_SequenceOfAsciiString();
	*_result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->ChangeSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfAsciiString(_result);
}

int RDC::OCC::TColStd_HSequenceOfAsciiString::Size()
{
	int _result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfAsciiString::Length()
{
	int _result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfAsciiString::Lower()
{
	int _result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfAsciiString::Upper()
{
	int _result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfAsciiString::IsEmpty()
{
	bool _result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::Reverse()
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::Clear()
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_HSequenceOfAsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::Assign(RDC::OCC::TColStd_HSequenceOfAsciiString^ theOther)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::Remove(RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator^ thePosition)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfAsciiString::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::Prepend(RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::InsertBefore(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::InsertAfter(RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator^ thePosition, RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfAsciiString::Iterator*)thePosition->NativeInstance, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::Split(int theIndex, RDC::OCC::TColStd_HSequenceOfAsciiString^ theSeq)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfAsciiString*)theSeq->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::First()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::ChangeFirst()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::Last()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::ChangeLast()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::Value(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::ChangeValue(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::SetValue(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

RDC::OCC::TColStd_HSequenceOfAsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::CreateDowncasted(::TColStd_HSequenceOfAsciiString* instance)
{
	return gcnew RDC::OCC::TColStd_HSequenceOfAsciiString(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_AsciiString^>^ RDC::OCC::TColStd_HSequenceOfAsciiString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_AsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HSequenceOfAsciiString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_AsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfAsciiString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_HSequenceOfAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_HSequenceOfAsciiString::Iterator();
}

bool RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator::More()
{
	bool _result = ((::TColStd_HSequenceOfAsciiString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator::Next()
{
	((::TColStd_HSequenceOfAsciiString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator::Value()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator::ChangeValue()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HSequenceOfAsciiString::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

bool RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator::IsEqual(RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator^ theOther)
{
	bool _result = ((::TColStd_HSequenceOfAsciiString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfAsciiString::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfExtendedString
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfExtendedString::TColStd_HSequenceOfExtendedString()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfExtendedString();
}

RDC::OCC::TColStd_HSequenceOfExtendedString::TColStd_HSequenceOfExtendedString(RDC::OCC::TColStd_SequenceOfExtendedString^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfExtendedString(*(::TColStd_SequenceOfExtendedString*)theOther->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::Sequence()
{
	::TColStd_SequenceOfExtendedString* _result = new ::TColStd_SequenceOfExtendedString();
	*_result = (::TColStd_SequenceOfExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Sequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfExtendedString(_result);
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::Append(RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Append(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::Append(RDC::OCC::TColStd_SequenceOfExtendedString^ theSequence)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Append(*(::TColStd_SequenceOfExtendedString*)theSequence->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::ChangeSequence()
{
	::TColStd_SequenceOfExtendedString* _result = new ::TColStd_SequenceOfExtendedString();
	*_result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->ChangeSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfExtendedString(_result);
}

int RDC::OCC::TColStd_HSequenceOfExtendedString::Size()
{
	int _result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfExtendedString::Length()
{
	int _result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfExtendedString::Lower()
{
	int _result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfExtendedString::Upper()
{
	int _result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfExtendedString::IsEmpty()
{
	bool _result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::Reverse()
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::Clear()
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_HSequenceOfExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::Assign(RDC::OCC::TColStd_HSequenceOfExtendedString^ theOther)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::Remove(RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator^ thePosition)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfExtendedString::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::Prepend(RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Prepend(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::InsertBefore(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::InsertAfter(RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator^ thePosition, RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfExtendedString::Iterator*)thePosition->NativeInstance, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::Split(int theIndex, RDC::OCC::TColStd_HSequenceOfExtendedString^ theSeq)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfExtendedString*)theSeq->NativeInstance);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::First()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::ChangeFirst()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::Last()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::ChangeLast()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::Value(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::ChangeValue(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::SetValue(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

RDC::OCC::TColStd_HSequenceOfExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::CreateDowncasted(::TColStd_HSequenceOfExtendedString* instance)
{
	return gcnew RDC::OCC::TColStd_HSequenceOfExtendedString(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_ExtendedString^>^ RDC::OCC::TColStd_HSequenceOfExtendedString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_ExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HSequenceOfExtendedString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_ExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfExtendedString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_HSequenceOfExtendedString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_HSequenceOfExtendedString::Iterator();
}

bool RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator::More()
{
	bool _result = ((::TColStd_HSequenceOfExtendedString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator::Next()
{
	((::TColStd_HSequenceOfExtendedString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator::Value()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator::ChangeValue()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HSequenceOfExtendedString::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

bool RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator::IsEqual(RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator^ theOther)
{
	bool _result = ((::TColStd_HSequenceOfExtendedString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfExtendedString::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHAsciiString
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfHAsciiString::TColStd_HSequenceOfHAsciiString()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfHAsciiString();
}

RDC::OCC::TColStd_HSequenceOfHAsciiString::TColStd_HSequenceOfHAsciiString(RDC::OCC::TColStd_SequenceOfHAsciiString^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfHAsciiString(*(::TColStd_SequenceOfHAsciiString*)theOther->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfHAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::Sequence()
{
	::TColStd_SequenceOfHAsciiString* _result = new ::TColStd_SequenceOfHAsciiString();
	*_result = (::TColStd_SequenceOfHAsciiString)((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Sequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfHAsciiString(_result);
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::Append(RDC::OCC::TCollection_HAsciiString^ theItem)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Append(Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::Append(RDC::OCC::TColStd_SequenceOfHAsciiString^ theSequence)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Append(*(::TColStd_SequenceOfHAsciiString*)theSequence->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfHAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::ChangeSequence()
{
	::TColStd_SequenceOfHAsciiString* _result = new ::TColStd_SequenceOfHAsciiString();
	*_result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfHAsciiString(_result);
}

int RDC::OCC::TColStd_HSequenceOfHAsciiString::Size()
{
	int _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfHAsciiString::Length()
{
	int _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfHAsciiString::Lower()
{
	int _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfHAsciiString::Upper()
{
	int _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfHAsciiString::IsEmpty()
{
	bool _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::Reverse()
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::Clear()
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_HSequenceOfHAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::Assign(RDC::OCC::TColStd_HSequenceOfHAsciiString^ theOther)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::Remove(RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator^ thePosition)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfHAsciiString::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::Prepend(RDC::OCC::TCollection_HAsciiString^ theItem)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Prepend(Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::InsertBefore(int theIndex, RDC::OCC::TCollection_HAsciiString^ theItem)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->InsertBefore(theIndex, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::InsertAfter(RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator^ thePosition, RDC::OCC::TCollection_HAsciiString^ theItem)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfHAsciiString::Iterator*)thePosition->NativeInstance, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::Split(int theIndex, RDC::OCC::TColStd_HSequenceOfHAsciiString^ theSeq)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfHAsciiString*)theSeq->NativeInstance);
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::First()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::ChangeFirst()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::Last()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::ChangeLast()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::Value(int theIndex)
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Value(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::ChangeValue(int theIndex)
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::SetValue(int theIndex, RDC::OCC::TCollection_HAsciiString^ theItem)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->SetValue(theIndex, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

RDC::OCC::TColStd_HSequenceOfHAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::CreateDowncasted(::TColStd_HSequenceOfHAsciiString* instance)
{
	return gcnew RDC::OCC::TColStd_HSequenceOfHAsciiString(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_HAsciiString^>^ RDC::OCC::TColStd_HSequenceOfHAsciiString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_HAsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HSequenceOfHAsciiString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_HAsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHAsciiString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_HSequenceOfHAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_HSequenceOfHAsciiString::Iterator();
}

bool RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator::More()
{
	bool _result = ((::TColStd_HSequenceOfHAsciiString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator::Next()
{
	((::TColStd_HSequenceOfHAsciiString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator::Value()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator::ChangeValue()
{
	Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

bool RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator::IsEqual(RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator^ theOther)
{
	bool _result = ((::TColStd_HSequenceOfHAsciiString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfHAsciiString::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHExtendedString
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfHExtendedString::TColStd_HSequenceOfHExtendedString()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfHExtendedString();
}

RDC::OCC::TColStd_HSequenceOfHExtendedString::TColStd_HSequenceOfHExtendedString(RDC::OCC::TColStd_SequenceOfHExtendedString^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfHExtendedString(*(::TColStd_SequenceOfHExtendedString*)theOther->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfHExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::Sequence()
{
	::TColStd_SequenceOfHExtendedString* _result = new ::TColStd_SequenceOfHExtendedString();
	*_result = (::TColStd_SequenceOfHExtendedString)((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Sequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfHExtendedString(_result);
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::Append(RDC::OCC::TCollection_HExtendedString^ theItem)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Append(Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::Append(RDC::OCC::TColStd_SequenceOfHExtendedString^ theSequence)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Append(*(::TColStd_SequenceOfHExtendedString*)theSequence->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfHExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::ChangeSequence()
{
	::TColStd_SequenceOfHExtendedString* _result = new ::TColStd_SequenceOfHExtendedString();
	*_result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfHExtendedString(_result);
}

int RDC::OCC::TColStd_HSequenceOfHExtendedString::Size()
{
	int _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfHExtendedString::Length()
{
	int _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfHExtendedString::Lower()
{
	int _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfHExtendedString::Upper()
{
	int _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfHExtendedString::IsEmpty()
{
	bool _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::Reverse()
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::Clear()
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_HSequenceOfHExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::Assign(RDC::OCC::TColStd_HSequenceOfHExtendedString^ theOther)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::Remove(RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator^ thePosition)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfHExtendedString::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::Prepend(RDC::OCC::TCollection_HExtendedString^ theItem)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Prepend(Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::InsertBefore(int theIndex, RDC::OCC::TCollection_HExtendedString^ theItem)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->InsertBefore(theIndex, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::InsertAfter(RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator^ thePosition, RDC::OCC::TCollection_HExtendedString^ theItem)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfHExtendedString::Iterator*)thePosition->NativeInstance, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::Split(int theIndex, RDC::OCC::TColStd_HSequenceOfHExtendedString^ theSeq)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfHExtendedString*)theSeq->NativeInstance);
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::First()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::ChangeFirst()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::Last()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::ChangeLast()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::Value(int theIndex)
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Value(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::ChangeValue(int theIndex)
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::SetValue(int theIndex, RDC::OCC::TCollection_HExtendedString^ theItem)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->SetValue(theIndex, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

RDC::OCC::TColStd_HSequenceOfHExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::CreateDowncasted(::TColStd_HSequenceOfHExtendedString* instance)
{
	return gcnew RDC::OCC::TColStd_HSequenceOfHExtendedString(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_HExtendedString^>^ RDC::OCC::TColStd_HSequenceOfHExtendedString::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_HExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HSequenceOfHExtendedString::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TCollection_HExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHExtendedString::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_HSequenceOfHExtendedString::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_HSequenceOfHExtendedString::Iterator();
}

bool RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator::More()
{
	bool _result = ((::TColStd_HSequenceOfHExtendedString::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator::Next()
{
	((::TColStd_HSequenceOfHExtendedString::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator::Value()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator::ChangeValue()
{
	Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

bool RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator::IsEqual(RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator^ theOther)
{
	bool _result = ((::TColStd_HSequenceOfHExtendedString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfHExtendedString::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfInteger
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfInteger::TColStd_HSequenceOfInteger()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfInteger();
}

RDC::OCC::TColStd_HSequenceOfInteger::TColStd_HSequenceOfInteger(RDC::OCC::TColStd_SequenceOfInteger^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfInteger(*(::TColStd_SequenceOfInteger*)theOther->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfInteger^ RDC::OCC::TColStd_HSequenceOfInteger::Sequence()
{
	::TColStd_SequenceOfInteger* _result = new ::TColStd_SequenceOfInteger();
	*_result = (::TColStd_SequenceOfInteger)((::TColStd_HSequenceOfInteger*)_NativeInstance)->Sequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfInteger(_result);
}

void RDC::OCC::TColStd_HSequenceOfInteger::Append(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Append(*(int*)pp_theItem);
}

void RDC::OCC::TColStd_HSequenceOfInteger::Append(RDC::OCC::TColStd_SequenceOfInteger^ theSequence)
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Append(*(::TColStd_SequenceOfInteger*)theSequence->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfInteger^ RDC::OCC::TColStd_HSequenceOfInteger::ChangeSequence()
{
	::TColStd_SequenceOfInteger* _result = new ::TColStd_SequenceOfInteger();
	*_result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfInteger(_result);
}

int RDC::OCC::TColStd_HSequenceOfInteger::Size()
{
	int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfInteger::Length()
{
	int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfInteger::Lower()
{
	int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfInteger::Upper()
{
	int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfInteger::IsEmpty()
{
	bool _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfInteger::Reverse()
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_HSequenceOfInteger::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_HSequenceOfInteger::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfInteger::Clear()
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_HSequenceOfInteger^ RDC::OCC::TColStd_HSequenceOfInteger::Assign(RDC::OCC::TColStd_HSequenceOfInteger^ theOther)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColStd_HSequenceOfInteger::Remove(RDC::OCC::TColStd_HSequenceOfInteger::Iterator^ thePosition)
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfInteger::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfInteger::Prepend(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Prepend(*(int*)pp_theItem);
}

void RDC::OCC::TColStd_HSequenceOfInteger::InsertBefore(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->InsertBefore(theIndex, *(int*)pp_theItem);
}

void RDC::OCC::TColStd_HSequenceOfInteger::InsertAfter(RDC::OCC::TColStd_HSequenceOfInteger::Iterator^ thePosition, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfInteger::Iterator*)thePosition->NativeInstance, *(int*)pp_theItem);
}

void RDC::OCC::TColStd_HSequenceOfInteger::Split(int theIndex, RDC::OCC::TColStd_HSequenceOfInteger^ theSeq)
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfInteger*)theSeq->NativeInstance);
}

int RDC::OCC::TColStd_HSequenceOfInteger::First()
{
	int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->First();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfInteger::Last()
{
	int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Last();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfInteger::Value(int theIndex)
{
	int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Value(theIndex);
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfInteger::ChangeValue(int theIndex)
{
	int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfInteger::SetValue(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}

RDC::OCC::TColStd_HSequenceOfInteger^ RDC::OCC::TColStd_HSequenceOfInteger::CreateDowncasted(::TColStd_HSequenceOfInteger* instance)
{
	return gcnew RDC::OCC::TColStd_HSequenceOfInteger(instance);
}

System::Collections::Generic::IEnumerator<int>^ RDC::OCC::TColStd_HSequenceOfInteger::GetEnumerator()
{
	return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HSequenceOfInteger::GetEnumerator2()
{
	return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfInteger::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_HSequenceOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_HSequenceOfInteger::Iterator();
}

bool RDC::OCC::TColStd_HSequenceOfInteger::Iterator::More()
{
	bool _result = ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfInteger::Iterator::Next()
{
	((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->Next();
}

int RDC::OCC::TColStd_HSequenceOfInteger::Iterator::Value()
{
	int _result = ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->Value();
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfInteger::Iterator::IsEqual(RDC::OCC::TColStd_HSequenceOfInteger::Iterator^ theOther)
{
	bool _result = ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfInteger::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfInteger::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_HSequenceOfInteger::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfReal
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfReal::TColStd_HSequenceOfReal()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfReal();
}

RDC::OCC::TColStd_HSequenceOfReal::TColStd_HSequenceOfReal(RDC::OCC::TColStd_SequenceOfReal^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfReal(*(::TColStd_SequenceOfReal*)theOther->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::TColStd_HSequenceOfReal::Sequence()
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = (::TColStd_SequenceOfReal)((::TColStd_HSequenceOfReal*)_NativeInstance)->Sequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

void RDC::OCC::TColStd_HSequenceOfReal::Append(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Append(*(double*)pp_theItem);
}

void RDC::OCC::TColStd_HSequenceOfReal::Append(RDC::OCC::TColStd_SequenceOfReal^ theSequence)
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Append(*(::TColStd_SequenceOfReal*)theSequence->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::TColStd_HSequenceOfReal::ChangeSequence()
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

int RDC::OCC::TColStd_HSequenceOfReal::Size()
{
	int _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfReal::Length()
{
	int _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfReal::Lower()
{
	int _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfReal::Upper()
{
	int _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfReal::IsEmpty()
{
	bool _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfReal::Reverse()
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_HSequenceOfReal::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_HSequenceOfReal::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfReal::Clear()
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_HSequenceOfReal^ RDC::OCC::TColStd_HSequenceOfReal::Assign(RDC::OCC::TColStd_HSequenceOfReal^ theOther)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColStd_HSequenceOfReal::Remove(RDC::OCC::TColStd_HSequenceOfReal::Iterator^ thePosition)
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfReal::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfReal::Prepend(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Prepend(*(double*)pp_theItem);
}

void RDC::OCC::TColStd_HSequenceOfReal::InsertBefore(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->InsertBefore(theIndex, *(double*)pp_theItem);
}

void RDC::OCC::TColStd_HSequenceOfReal::InsertAfter(RDC::OCC::TColStd_HSequenceOfReal::Iterator^ thePosition, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfReal::Iterator*)thePosition->NativeInstance, *(double*)pp_theItem);
}

void RDC::OCC::TColStd_HSequenceOfReal::Split(int theIndex, RDC::OCC::TColStd_HSequenceOfReal^ theSeq)
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfReal*)theSeq->NativeInstance);
}

double RDC::OCC::TColStd_HSequenceOfReal::First()
{
	double _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->First();
	return _result;
}

double RDC::OCC::TColStd_HSequenceOfReal::Last()
{
	double _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Last();
	return _result;
}

double RDC::OCC::TColStd_HSequenceOfReal::Value(int theIndex)
{
	double _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Value(theIndex);
	return _result;
}

double RDC::OCC::TColStd_HSequenceOfReal::ChangeValue(int theIndex)
{
	double _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfReal::SetValue(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

RDC::OCC::TColStd_HSequenceOfReal^ RDC::OCC::TColStd_HSequenceOfReal::CreateDowncasted(::TColStd_HSequenceOfReal* instance)
{
	return gcnew RDC::OCC::TColStd_HSequenceOfReal(instance);
}

System::Collections::Generic::IEnumerator<double>^ RDC::OCC::TColStd_HSequenceOfReal::GetEnumerator()
{
	return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HSequenceOfReal::GetEnumerator2()
{
	return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfReal::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfReal::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_HSequenceOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_HSequenceOfReal::Iterator();
}

bool RDC::OCC::TColStd_HSequenceOfReal::Iterator::More()
{
	bool _result = ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfReal::Iterator::Next()
{
	((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->Next();
}

double RDC::OCC::TColStd_HSequenceOfReal::Iterator::Value()
{
	double _result = ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->Value();
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfReal::Iterator::IsEqual(RDC::OCC::TColStd_HSequenceOfReal::Iterator^ theOther)
{
	bool _result = ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfReal::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfReal::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_HSequenceOfReal::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfTransient
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfTransient::TColStd_HSequenceOfTransient()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfTransient();
}

RDC::OCC::TColStd_HSequenceOfTransient::TColStd_HSequenceOfTransient(RDC::OCC::TColStd_SequenceOfTransient^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfTransient(*(::TColStd_SequenceOfTransient*)theOther->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfTransient^ RDC::OCC::TColStd_HSequenceOfTransient::Sequence()
{
	::TColStd_SequenceOfTransient* _result = new ::TColStd_SequenceOfTransient();
	*_result = (::TColStd_SequenceOfTransient)((::TColStd_HSequenceOfTransient*)_NativeInstance)->Sequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfTransient(_result);
}

void RDC::OCC::TColStd_HSequenceOfTransient::Append(RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Append(Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfTransient::Append(RDC::OCC::TColStd_SequenceOfTransient^ theSequence)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Append(*(::TColStd_SequenceOfTransient*)theSequence->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfTransient^ RDC::OCC::TColStd_HSequenceOfTransient::ChangeSequence()
{
	::TColStd_SequenceOfTransient* _result = new ::TColStd_SequenceOfTransient();
	*_result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->ChangeSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfTransient(_result);
}

int RDC::OCC::TColStd_HSequenceOfTransient::Size()
{
	int _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfTransient::Length()
{
	int _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfTransient::Lower()
{
	int _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TColStd_HSequenceOfTransient::Upper()
{
	int _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfTransient::IsEmpty()
{
	bool _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfTransient::Reverse()
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Reverse();
}

void RDC::OCC::TColStd_HSequenceOfTransient::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TColStd_HSequenceOfTransient::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfTransient::Clear()
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TColStd_HSequenceOfTransient^ RDC::OCC::TColStd_HSequenceOfTransient::Assign(RDC::OCC::TColStd_HSequenceOfTransient^ theOther)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::TColStd_HSequenceOfTransient::Remove(RDC::OCC::TColStd_HSequenceOfTransient::Iterator^ thePosition)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfTransient::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TColStd_HSequenceOfTransient::Prepend(RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Prepend(Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfTransient::InsertBefore(int theIndex, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->InsertBefore(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfTransient::InsertAfter(RDC::OCC::TColStd_HSequenceOfTransient::Iterator^ thePosition, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfTransient::Iterator*)thePosition->NativeInstance, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void RDC::OCC::TColStd_HSequenceOfTransient::Split(int theIndex, RDC::OCC::TColStd_HSequenceOfTransient^ theSeq)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfTransient*)theSeq->NativeInstance);
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HSequenceOfTransient::First()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HSequenceOfTransient::ChangeFirst()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HSequenceOfTransient::Last()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HSequenceOfTransient::ChangeLast()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HSequenceOfTransient::Value(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Value(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HSequenceOfTransient::ChangeValue(int theIndex)
{
	Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->ChangeValue(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::TColStd_HSequenceOfTransient::SetValue(int theIndex, RDC::OCC::Standard_Transient^ theItem)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->SetValue(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

RDC::OCC::TColStd_HSequenceOfTransient^ RDC::OCC::TColStd_HSequenceOfTransient::CreateDowncasted(::TColStd_HSequenceOfTransient* instance)
{
	return gcnew RDC::OCC::TColStd_HSequenceOfTransient(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Standard_Transient^>^ RDC::OCC::TColStd_HSequenceOfTransient::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Standard_Transient^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TColStd_HSequenceOfTransient::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Standard_Transient^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfTransient::Iterator
//---------------------------------------------------------------------

RDC::OCC::TColStd_HSequenceOfTransient::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TColStd_HSequenceOfTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_HSequenceOfTransient::Iterator();
}

bool RDC::OCC::TColStd_HSequenceOfTransient::Iterator::More()
{
	bool _result = ((::TColStd_HSequenceOfTransient::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TColStd_HSequenceOfTransient::Iterator::Next()
{
	((::TColStd_HSequenceOfTransient::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HSequenceOfTransient::Iterator::Value()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Transient^ RDC::OCC::TColStd_HSequenceOfTransient::Iterator::ChangeValue()
{
	Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

bool RDC::OCC::TColStd_HSequenceOfTransient::Iterator::IsEqual(RDC::OCC::TColStd_HSequenceOfTransient::Iterator^ theOther)
{
	bool _result = ((::TColStd_HSequenceOfTransient::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfTransient::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TColStd_HSequenceOfTransient::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TColStd_HSequenceOfTransient::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}


