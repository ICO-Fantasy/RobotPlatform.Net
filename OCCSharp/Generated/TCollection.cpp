// Generated wrapper code for package TCollection

#include "OcctPCH.h"
#include "TCollection.h"

using namespace System::Runtime::InteropServices; // for class Marshal



//---------------------------------------------------------------------
//  Class  TCollection_ExtendedString
//---------------------------------------------------------------------

RDC::OCC::TCollection_ExtendedString::TCollection_ExtendedString()
    : RDC::OCC::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString();
}

RDC::OCC::TCollection_ExtendedString::TCollection_ExtendedString(System::String^ astring, bool isMultiByte)
    : RDC::OCC::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
    _NativeInstance = new ::TCollection_ExtendedString(sz_astring, isMultiByte);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

RDC::OCC::TCollection_ExtendedString::TCollection_ExtendedString(System::String^ astring)
    : RDC::OCC::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<const wchar_t> pp_astring = PtrToStringChars(astring);
    _NativeInstance = new ::TCollection_ExtendedString((Standard_ExtString)pp_astring);
}

RDC::OCC::TCollection_ExtendedString::TCollection_ExtendedString(char aChar)
    : RDC::OCC::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString(aChar);
}

RDC::OCC::TCollection_ExtendedString::TCollection_ExtendedString(int value)
    : RDC::OCC::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString(value);
}

RDC::OCC::TCollection_ExtendedString::TCollection_ExtendedString(double value)
    : RDC::OCC::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString(value);
}

RDC::OCC::TCollection_ExtendedString::TCollection_ExtendedString(RDC::OCC::TCollection_AsciiString^ astring, bool isMultiByte)
    : RDC::OCC::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString(*(::TCollection_AsciiString*)astring->NativeInstance, isMultiByte);
}

RDC::OCC::TCollection_ExtendedString::TCollection_ExtendedString(RDC::OCC::TCollection_AsciiString^ astring)
    : RDC::OCC::BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_ExtendedString(*(::TCollection_AsciiString*)astring->NativeInstance, true);
}

void RDC::OCC::TCollection_ExtendedString::AssignCat(RDC::OCC::TCollection_ExtendedString^ other)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->AssignCat(*(::TCollection_ExtendedString*)other->NativeInstance);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TCollection_ExtendedString::Cat(RDC::OCC::TCollection_ExtendedString^ other)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Cat(*(::TCollection_ExtendedString*)other->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

void RDC::OCC::TCollection_ExtendedString::Clear()
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Clear();
}

void RDC::OCC::TCollection_ExtendedString::Copy(RDC::OCC::TCollection_ExtendedString^ fromwhere)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Copy(*(::TCollection_ExtendedString*)fromwhere->NativeInstance);
}

void RDC::OCC::TCollection_ExtendedString::Swap(RDC::OCC::TCollection_ExtendedString^ theOther)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Swap(*(::TCollection_ExtendedString*)theOther->NativeInstance);
}

void RDC::OCC::TCollection_ExtendedString::Insert(int where, RDC::OCC::TCollection_ExtendedString^ what)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Insert(where, *(::TCollection_ExtendedString*)what->NativeInstance);
}

bool RDC::OCC::TCollection_ExtendedString::IsEmpty()
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsEmpty();
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::IsEqual(System::String^ other)
{
    pin_ptr<const wchar_t> pp_other = PtrToStringChars(other);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsEqual((Standard_ExtString)pp_other);
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::IsEqual(RDC::OCC::TCollection_ExtendedString^ other)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsEqual(*(::TCollection_ExtendedString*)other->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::IsDifferent(System::String^ other)
{
    pin_ptr<const wchar_t> pp_other = PtrToStringChars(other);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsDifferent((Standard_ExtString)pp_other);
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::IsDifferent(RDC::OCC::TCollection_ExtendedString^ other)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsDifferent(*(::TCollection_ExtendedString*)other->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::IsLess(System::String^ other)
{
    pin_ptr<const wchar_t> pp_other = PtrToStringChars(other);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsLess((Standard_ExtString)pp_other);
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::IsLess(RDC::OCC::TCollection_ExtendedString^ other)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsLess(*(::TCollection_ExtendedString*)other->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::IsGreater(System::String^ other)
{
    pin_ptr<const wchar_t> pp_other = PtrToStringChars(other);
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsGreater((Standard_ExtString)pp_other);
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::IsGreater(RDC::OCC::TCollection_ExtendedString^ other)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsGreater(*(::TCollection_ExtendedString*)other->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::StartsWith(RDC::OCC::TCollection_ExtendedString^ theStartString)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->StartsWith(*(::TCollection_ExtendedString*)theStartString->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::EndsWith(RDC::OCC::TCollection_ExtendedString^ theEndString)
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->EndsWith(*(::TCollection_ExtendedString*)theEndString->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::IsAscii()
{
    bool _result = ((::TCollection_ExtendedString*)_NativeInstance)->IsAscii();
    return _result;
}

int RDC::OCC::TCollection_ExtendedString::Length()
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->Length();
    return _result;
}

void RDC::OCC::TCollection_ExtendedString::Print(System::IO::TextWriter^ astream)
{
    std::ostringstream oss_astream;
    ((::TCollection_ExtendedString*)_NativeInstance)->Print(oss_astream);
    astream->Write(gcnew System::String(oss_astream.str().c_str()));
}

void RDC::OCC::TCollection_ExtendedString::Remove(int where, int ahowmany)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Remove(where, ahowmany);
}

void RDC::OCC::TCollection_ExtendedString::Remove(int where)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Remove(where, 1);
}

int RDC::OCC::TCollection_ExtendedString::Search(RDC::OCC::TCollection_ExtendedString^ what)
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->Search(*(::TCollection_ExtendedString*)what->NativeInstance);
    return _result;
}

int RDC::OCC::TCollection_ExtendedString::SearchFromEnd(RDC::OCC::TCollection_ExtendedString^ what)
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->SearchFromEnd(*(::TCollection_ExtendedString*)what->NativeInstance);
    return _result;
}

void RDC::OCC::TCollection_ExtendedString::SetValue(int where, RDC::OCC::TCollection_ExtendedString^ what)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->SetValue(where, *(::TCollection_ExtendedString*)what->NativeInstance);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TCollection_ExtendedString::Split(int where)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Split(where);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TCollection_ExtendedString::Token(System::String^ separators, int whichone)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    pin_ptr<const wchar_t> pp_separators = PtrToStringChars(separators);
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Token((Standard_ExtString)pp_separators, whichone);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TCollection_ExtendedString::Token(System::String^ separators)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    pin_ptr<const wchar_t> pp_separators = PtrToStringChars(separators);
    *_result = ((::TCollection_ExtendedString*)_NativeInstance)->Token((Standard_ExtString)pp_separators, 1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

System::String^ RDC::OCC::TCollection_ExtendedString::ToExtString()
{
    Standard_ExtString _result = ((::TCollection_ExtendedString*)_NativeInstance)->ToExtString();
    return gcnew System::String((const wchar_t *)_result);
}

void RDC::OCC::TCollection_ExtendedString::Trunc(int ahowmany)
{
    ((::TCollection_ExtendedString*)_NativeInstance)->Trunc(ahowmany);
}

long long unsigned int RDC::OCC::TCollection_ExtendedString::HashCode()
{
    long long unsigned int _result = ((::TCollection_ExtendedString*)_NativeInstance)->HashCode();
    return _result;
}

bool RDC::OCC::TCollection_ExtendedString::IsEqual(RDC::OCC::TCollection_ExtendedString^ theString1, RDC::OCC::TCollection_ExtendedString^ theString2)
{
    bool _result = ::TCollection_ExtendedString::IsEqual(*(::TCollection_ExtendedString*)theString1->NativeInstance, *(::TCollection_ExtendedString*)theString2->NativeInstance);
    return _result;
}

int RDC::OCC::TCollection_ExtendedString::ToUTF8CString(char% theCString)
{
    pin_ptr<char> pp_theCString = &theCString;
    char* p_theCString = (char*)theCString;
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->ToUTF8CString(p_theCString);
    return _result;
}

int RDC::OCC::TCollection_ExtendedString::LengthOfCString()
{
    int _result = ((::TCollection_ExtendedString*)_NativeInstance)->LengthOfCString();
    return _result;
}

int RDC::OCC::TCollection_ExtendedString::GetHashCode()
{
    return std::hash<::TCollection_ExtendedString>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TCollection_AsciiString
//---------------------------------------------------------------------

RDC::OCC::TCollection_AsciiString::TCollection_AsciiString()
    : RDC::OCC::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString();
}

RDC::OCC::TCollection_AsciiString::TCollection_AsciiString(System::String^ message)
    : RDC::OCC::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    const char* sz_message = (char*)(void*)Marshal::StringToHGlobalAnsi(message);
    _NativeInstance = new ::TCollection_AsciiString(sz_message);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_message);
}

RDC::OCC::TCollection_AsciiString::TCollection_AsciiString(System::String^ message, int aLen)
    : RDC::OCC::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    const char* sz_message = (char*)(void*)Marshal::StringToHGlobalAnsi(message);
    _NativeInstance = new ::TCollection_AsciiString(sz_message, aLen);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_message);
}

RDC::OCC::TCollection_AsciiString::TCollection_AsciiString(int length, char filler)
    : RDC::OCC::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(length, filler);
}

RDC::OCC::TCollection_AsciiString::TCollection_AsciiString(int value)
    : RDC::OCC::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(value);
}

RDC::OCC::TCollection_AsciiString::TCollection_AsciiString(double value)
    : RDC::OCC::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(value);
}

RDC::OCC::TCollection_AsciiString::TCollection_AsciiString(RDC::OCC::TCollection_AsciiString^ astring, char message)
    : RDC::OCC::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(*(::TCollection_AsciiString*)astring->NativeInstance, message);
}

RDC::OCC::TCollection_AsciiString::TCollection_AsciiString(RDC::OCC::TCollection_AsciiString^ astring, RDC::OCC::TCollection_AsciiString^ message)
    : RDC::OCC::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(*(::TCollection_AsciiString*)astring->NativeInstance, *(::TCollection_AsciiString*)message->NativeInstance);
}

RDC::OCC::TCollection_AsciiString::TCollection_AsciiString(RDC::OCC::TCollection_ExtendedString^ astring, char replaceNonAscii)
    : RDC::OCC::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(*(::TCollection_ExtendedString*)astring->NativeInstance, replaceNonAscii);
}

RDC::OCC::TCollection_AsciiString::TCollection_AsciiString(RDC::OCC::TCollection_ExtendedString^ astring)
    : RDC::OCC::BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection_AsciiString(*(::TCollection_ExtendedString*)astring->NativeInstance, 0);
}

void RDC::OCC::TCollection_AsciiString::AssignCat(char other)
{
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(other);
}

void RDC::OCC::TCollection_AsciiString::AssignCat(int other)
{
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(other);
}

void RDC::OCC::TCollection_AsciiString::AssignCat(double other)
{
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(other);
}

void RDC::OCC::TCollection_AsciiString::AssignCat(RDC::OCC::TCollection_AsciiString^ other)
{
    ((::TCollection_AsciiString*)_NativeInstance)->AssignCat(*(::TCollection_AsciiString*)other->NativeInstance);
}

void RDC::OCC::TCollection_AsciiString::Capitalize()
{
    ((::TCollection_AsciiString*)_NativeInstance)->Capitalize();
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TCollection_AsciiString::Cat(char other)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(other);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TCollection_AsciiString::Cat(int other)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(other);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TCollection_AsciiString::Cat(double other)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(other);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TCollection_AsciiString::Cat(RDC::OCC::TCollection_AsciiString^ other)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(*(::TCollection_AsciiString*)other->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::TCollection_AsciiString::Center(int Width, char Filler)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Center(Width, Filler);
}

void RDC::OCC::TCollection_AsciiString::ChangeAll(char aChar, char NewChar, bool CaseSensitive)
{
    ((::TCollection_AsciiString*)_NativeInstance)->ChangeAll(aChar, NewChar, CaseSensitive);
}

void RDC::OCC::TCollection_AsciiString::ChangeAll(char aChar, char NewChar)
{
    ((::TCollection_AsciiString*)_NativeInstance)->ChangeAll(aChar, NewChar, true);
}

void RDC::OCC::TCollection_AsciiString::Clear()
{
    ((::TCollection_AsciiString*)_NativeInstance)->Clear();
}

void RDC::OCC::TCollection_AsciiString::Copy(System::String^ fromwhere)
{
    const char* sz_fromwhere = (char*)(void*)Marshal::StringToHGlobalAnsi(fromwhere);
    ((::TCollection_AsciiString*)_NativeInstance)->Copy(sz_fromwhere);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_fromwhere);
}

void RDC::OCC::TCollection_AsciiString::Copy(RDC::OCC::TCollection_AsciiString^ fromwhere)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Copy(*(::TCollection_AsciiString*)fromwhere->NativeInstance);
}

void RDC::OCC::TCollection_AsciiString::Swap(RDC::OCC::TCollection_AsciiString^ theOther)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Swap(*(::TCollection_AsciiString*)theOther->NativeInstance);
}

int RDC::OCC::TCollection_AsciiString::FirstLocationInSet(RDC::OCC::TCollection_AsciiString^ Set, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->FirstLocationInSet(*(::TCollection_AsciiString*)Set->NativeInstance, FromIndex, ToIndex);
    return _result;
}

int RDC::OCC::TCollection_AsciiString::FirstLocationNotInSet(RDC::OCC::TCollection_AsciiString^ Set, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->FirstLocationNotInSet(*(::TCollection_AsciiString*)Set->NativeInstance, FromIndex, ToIndex);
    return _result;
}

void RDC::OCC::TCollection_AsciiString::Insert(int where, char what)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Insert(where, what);
}

void RDC::OCC::TCollection_AsciiString::Insert(int where, RDC::OCC::TCollection_AsciiString^ what)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Insert(where, *(::TCollection_AsciiString*)what->NativeInstance);
}

void RDC::OCC::TCollection_AsciiString::InsertAfter(int Index, RDC::OCC::TCollection_AsciiString^ other)
{
    ((::TCollection_AsciiString*)_NativeInstance)->InsertAfter(Index, *(::TCollection_AsciiString*)other->NativeInstance);
}

void RDC::OCC::TCollection_AsciiString::InsertBefore(int Index, RDC::OCC::TCollection_AsciiString^ other)
{
    ((::TCollection_AsciiString*)_NativeInstance)->InsertBefore(Index, *(::TCollection_AsciiString*)other->NativeInstance);
}

bool RDC::OCC::TCollection_AsciiString::IsEmpty()
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsEmpty();
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsEqual(System::String^ other)
{
    const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsEqual(sz_other);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsEqual(RDC::OCC::TCollection_AsciiString^ other)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsEqual(*(::TCollection_AsciiString*)other->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsDifferent(System::String^ other)
{
    const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsDifferent(sz_other);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsDifferent(RDC::OCC::TCollection_AsciiString^ other)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsDifferent(*(::TCollection_AsciiString*)other->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsLess(System::String^ other)
{
    const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsLess(sz_other);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsLess(RDC::OCC::TCollection_AsciiString^ other)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsLess(*(::TCollection_AsciiString*)other->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsGreater(System::String^ other)
{
    const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsGreater(sz_other);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsGreater(RDC::OCC::TCollection_AsciiString^ other)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsGreater(*(::TCollection_AsciiString*)other->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::StartsWith(RDC::OCC::TCollection_AsciiString^ theStartString)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->StartsWith(*(::TCollection_AsciiString*)theStartString->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::EndsWith(RDC::OCC::TCollection_AsciiString^ theEndString)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->EndsWith(*(::TCollection_AsciiString*)theEndString->NativeInstance);
    return _result;
}

int RDC::OCC::TCollection_AsciiString::IntegerValue()
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->IntegerValue();
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsIntegerValue()
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsIntegerValue();
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsRealValue(bool theToCheckFull)
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsRealValue(theToCheckFull);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsRealValue()
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsRealValue(false);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsAscii()
{
    bool _result = ((::TCollection_AsciiString*)_NativeInstance)->IsAscii();
    return _result;
}

void RDC::OCC::TCollection_AsciiString::LeftAdjust()
{
    ((::TCollection_AsciiString*)_NativeInstance)->LeftAdjust();
}

void RDC::OCC::TCollection_AsciiString::LeftJustify(int Width, char Filler)
{
    ((::TCollection_AsciiString*)_NativeInstance)->LeftJustify(Width, Filler);
}

int RDC::OCC::TCollection_AsciiString::Length()
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TCollection_AsciiString::Location(RDC::OCC::TCollection_AsciiString^ other, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Location(*(::TCollection_AsciiString*)other->NativeInstance, FromIndex, ToIndex);
    return _result;
}

int RDC::OCC::TCollection_AsciiString::Location(int N, char C, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Location(N, C, FromIndex, ToIndex);
    return _result;
}

void RDC::OCC::TCollection_AsciiString::LowerCase()
{
    ((::TCollection_AsciiString*)_NativeInstance)->LowerCase();
}

void RDC::OCC::TCollection_AsciiString::Prepend(RDC::OCC::TCollection_AsciiString^ other)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)other->NativeInstance);
}

void RDC::OCC::TCollection_AsciiString::Print(System::IO::TextWriter^ astream)
{
    std::ostringstream oss_astream;
    ((::TCollection_AsciiString*)_NativeInstance)->Print(oss_astream);
    astream->Write(gcnew System::String(oss_astream.str().c_str()));
}

double RDC::OCC::TCollection_AsciiString::RealValue()
{
    double _result = ((::TCollection_AsciiString*)_NativeInstance)->RealValue();
    return _result;
}

void RDC::OCC::TCollection_AsciiString::RemoveAll(char C, bool CaseSensitive)
{
    ((::TCollection_AsciiString*)_NativeInstance)->RemoveAll(C, CaseSensitive);
}

void RDC::OCC::TCollection_AsciiString::RemoveAll(char what)
{
    ((::TCollection_AsciiString*)_NativeInstance)->RemoveAll(what);
}

void RDC::OCC::TCollection_AsciiString::Remove(int where, int ahowmany)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Remove(where, ahowmany);
}

void RDC::OCC::TCollection_AsciiString::Remove(int where)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Remove(where, 1);
}

void RDC::OCC::TCollection_AsciiString::RightAdjust()
{
    ((::TCollection_AsciiString*)_NativeInstance)->RightAdjust();
}

void RDC::OCC::TCollection_AsciiString::RightJustify(int Width, char Filler)
{
    ((::TCollection_AsciiString*)_NativeInstance)->RightJustify(Width, Filler);
}

int RDC::OCC::TCollection_AsciiString::Search(System::String^ what)
{
    const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Search(sz_what);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
    return _result;
}

int RDC::OCC::TCollection_AsciiString::Search(RDC::OCC::TCollection_AsciiString^ what)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->Search(*(::TCollection_AsciiString*)what->NativeInstance);
    return _result;
}

int RDC::OCC::TCollection_AsciiString::SearchFromEnd(System::String^ what)
{
    const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->SearchFromEnd(sz_what);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
    return _result;
}

int RDC::OCC::TCollection_AsciiString::SearchFromEnd(RDC::OCC::TCollection_AsciiString^ what)
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->SearchFromEnd(*(::TCollection_AsciiString*)what->NativeInstance);
    return _result;
}

void RDC::OCC::TCollection_AsciiString::SetValue(int where, char what)
{
    ((::TCollection_AsciiString*)_NativeInstance)->SetValue(where, what);
}

void RDC::OCC::TCollection_AsciiString::SetValue(int where, RDC::OCC::TCollection_AsciiString^ what)
{
    ((::TCollection_AsciiString*)_NativeInstance)->SetValue(where, *(::TCollection_AsciiString*)what->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TCollection_AsciiString::Split(int where)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Split(where);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TCollection_AsciiString::SubString(int FromIndex, int ToIndex)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->SubString(FromIndex, ToIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

System::String^ RDC::OCC::TCollection_AsciiString::ToCString()
{
    Standard_CString _result = ((::TCollection_AsciiString*)_NativeInstance)->ToCString();
    return gcnew System::String(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TCollection_AsciiString::Token(System::String^ separators, int whichone)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    const char* sz_separators = (char*)(void*)Marshal::StringToHGlobalAnsi(separators);
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Token(sz_separators, whichone);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_separators);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TCollection_AsciiString::Token(System::String^ separators)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    const char* sz_separators = (char*)(void*)Marshal::StringToHGlobalAnsi(separators);
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Token(sz_separators, 1);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_separators);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TCollection_AsciiString::Token()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TCollection_AsciiString*)_NativeInstance)->Token(" \t", 1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::TCollection_AsciiString::Trunc(int ahowmany)
{
    ((::TCollection_AsciiString*)_NativeInstance)->Trunc(ahowmany);
}

void RDC::OCC::TCollection_AsciiString::UpperCase()
{
    ((::TCollection_AsciiString*)_NativeInstance)->UpperCase();
}

int RDC::OCC::TCollection_AsciiString::UsefullLength()
{
    int _result = ((::TCollection_AsciiString*)_NativeInstance)->UsefullLength();
    return _result;
}

char RDC::OCC::TCollection_AsciiString::Value(int where)
{
    char _result = ((::TCollection_AsciiString*)_NativeInstance)->Value(where);
    return _result;
}

long long unsigned int RDC::OCC::TCollection_AsciiString::HashCode()
{
    long long unsigned int _result = ((::TCollection_AsciiString*)_NativeInstance)->HashCode();
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsEqual(RDC::OCC::TCollection_AsciiString^ string1, RDC::OCC::TCollection_AsciiString^ string2)
{
    bool _result = ::TCollection_AsciiString::IsEqual(*(::TCollection_AsciiString*)string1->NativeInstance, *(::TCollection_AsciiString*)string2->NativeInstance);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsEqual(RDC::OCC::TCollection_AsciiString^ string1, System::String^ string2)
{
    const char* sz_string2 = (char*)(void*)Marshal::StringToHGlobalAnsi(string2);
    bool _result = ::TCollection_AsciiString::IsEqual(*(::TCollection_AsciiString*)string1->NativeInstance, sz_string2);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_string2);
    return _result;
}

bool RDC::OCC::TCollection_AsciiString::IsSameString(RDC::OCC::TCollection_AsciiString^ theString1, RDC::OCC::TCollection_AsciiString^ theString2, bool theIsCaseSensitive)
{
    bool _result = ::TCollection_AsciiString::IsSameString(*(::TCollection_AsciiString*)theString1->NativeInstance, *(::TCollection_AsciiString*)theString2->NativeInstance, theIsCaseSensitive);
    return _result;
}



//---------------------------------------------------------------------
//  Class  TCollection_HExtendedString
//---------------------------------------------------------------------

RDC::OCC::TCollection_HExtendedString::TCollection_HExtendedString()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HExtendedString();
}

RDC::OCC::TCollection_HExtendedString::TCollection_HExtendedString(System::String^ message)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<const wchar_t> pp_message = PtrToStringChars(message);
    NativeInstance = new ::TCollection_HExtendedString((Standard_ExtString)pp_message);
}

RDC::OCC::TCollection_HExtendedString::TCollection_HExtendedString(RDC::OCC::TCollection_ExtendedString^ aString)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HExtendedString(*(::TCollection_ExtendedString*)aString->NativeInstance);
}

RDC::OCC::TCollection_HExtendedString::TCollection_HExtendedString(RDC::OCC::TCollection_HAsciiString^ aString)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HExtendedString(Handle(::TCollection_HAsciiString)(aString->NativeInstance));
}

void RDC::OCC::TCollection_HExtendedString::AssignCat(RDC::OCC::TCollection_HExtendedString^ other)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->AssignCat(Handle(::TCollection_HExtendedString)(other->NativeInstance));
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TCollection_HExtendedString::Cat(RDC::OCC::TCollection_HExtendedString^ other)
{
    Handle(::TCollection_HExtendedString) _result = ((::TCollection_HExtendedString*)_NativeInstance)->Cat(Handle(::TCollection_HExtendedString)(other->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

void RDC::OCC::TCollection_HExtendedString::Clear()
{
    ((::TCollection_HExtendedString*)_NativeInstance)->Clear();
}

bool RDC::OCC::TCollection_HExtendedString::IsEmpty()
{
    bool _result = ((::TCollection_HExtendedString*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TCollection_HExtendedString::Insert(int where, RDC::OCC::TCollection_HExtendedString^ what)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->Insert(where, Handle(::TCollection_HExtendedString)(what->NativeInstance));
}

bool RDC::OCC::TCollection_HExtendedString::IsLess(RDC::OCC::TCollection_HExtendedString^ other)
{
    bool _result = ((::TCollection_HExtendedString*)_NativeInstance)->IsLess(Handle(::TCollection_HExtendedString)(other->NativeInstance));
    return _result;
}

bool RDC::OCC::TCollection_HExtendedString::IsGreater(RDC::OCC::TCollection_HExtendedString^ other)
{
    bool _result = ((::TCollection_HExtendedString*)_NativeInstance)->IsGreater(Handle(::TCollection_HExtendedString)(other->NativeInstance));
    return _result;
}

bool RDC::OCC::TCollection_HExtendedString::IsAscii()
{
    bool _result = ((::TCollection_HExtendedString*)_NativeInstance)->IsAscii();
    return _result;
}

int RDC::OCC::TCollection_HExtendedString::Length()
{
    int _result = ((::TCollection_HExtendedString*)_NativeInstance)->Length();
    return _result;
}

void RDC::OCC::TCollection_HExtendedString::Remove(int where, int ahowmany)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->Remove(where, ahowmany);
}

void RDC::OCC::TCollection_HExtendedString::Remove(int where)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->Remove(where, 1);
}

void RDC::OCC::TCollection_HExtendedString::SetValue(int where, RDC::OCC::TCollection_HExtendedString^ what)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->SetValue(where, Handle(::TCollection_HExtendedString)(what->NativeInstance));
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TCollection_HExtendedString::Split(int where)
{
    Handle(::TCollection_HExtendedString) _result = ((::TCollection_HExtendedString*)_NativeInstance)->Split(where);
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

int RDC::OCC::TCollection_HExtendedString::Search(RDC::OCC::TCollection_HExtendedString^ what)
{
    int _result = ((::TCollection_HExtendedString*)_NativeInstance)->Search(Handle(::TCollection_HExtendedString)(what->NativeInstance));
    return _result;
}

int RDC::OCC::TCollection_HExtendedString::SearchFromEnd(RDC::OCC::TCollection_HExtendedString^ what)
{
    int _result = ((::TCollection_HExtendedString*)_NativeInstance)->SearchFromEnd(Handle(::TCollection_HExtendedString)(what->NativeInstance));
    return _result;
}

System::String^ RDC::OCC::TCollection_HExtendedString::ToExtString()
{
    Standard_ExtString _result = ((::TCollection_HExtendedString*)_NativeInstance)->ToExtString();
    return gcnew System::String((const wchar_t *)_result);
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TCollection_HExtendedString::Token(System::String^ separators, int whichone)
{
    pin_ptr<const wchar_t> pp_separators = PtrToStringChars(separators);
    Handle(::TCollection_HExtendedString) _result = ((::TCollection_HExtendedString*)_NativeInstance)->Token((Standard_ExtString)pp_separators, whichone);
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TCollection_HExtendedString::Token(System::String^ separators)
{
    pin_ptr<const wchar_t> pp_separators = PtrToStringChars(separators);
    Handle(::TCollection_HExtendedString) _result = ((::TCollection_HExtendedString*)_NativeInstance)->Token((Standard_ExtString)pp_separators, 1);
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

void RDC::OCC::TCollection_HExtendedString::Trunc(int ahowmany)
{
    ((::TCollection_HExtendedString*)_NativeInstance)->Trunc(ahowmany);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::TCollection_HExtendedString::String()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::TCollection_HExtendedString*)_NativeInstance)->String();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

void RDC::OCC::TCollection_HExtendedString::Print(System::IO::TextWriter^ astream)
{
    std::ostringstream oss_astream;
    ((::TCollection_HExtendedString*)_NativeInstance)->Print(oss_astream);
    astream->Write(gcnew System::String(oss_astream.str().c_str()));
}

bool RDC::OCC::TCollection_HExtendedString::IsSameState(RDC::OCC::TCollection_HExtendedString^ other)
{
    bool _result = ((::TCollection_HExtendedString*)_NativeInstance)->IsSameState(Handle(::TCollection_HExtendedString)(other->NativeInstance));
    return _result;
}

RDC::OCC::TCollection_HExtendedString^ RDC::OCC::TCollection_HExtendedString::CreateDowncasted(::TCollection_HExtendedString* instance)
{
    return gcnew RDC::OCC::TCollection_HExtendedString( instance );
}



//---------------------------------------------------------------------
//  Class  TCollection_HAsciiString
//---------------------------------------------------------------------

RDC::OCC::TCollection_HAsciiString::TCollection_HAsciiString()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString();
}

RDC::OCC::TCollection_HAsciiString::TCollection_HAsciiString(System::String^ message)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    const char* sz_message = (char*)(void*)Marshal::StringToHGlobalAnsi(message);
    NativeInstance = new ::TCollection_HAsciiString(sz_message);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_message);
}

RDC::OCC::TCollection_HAsciiString::TCollection_HAsciiString(int length, char filler)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString(length, filler);
}

RDC::OCC::TCollection_HAsciiString::TCollection_HAsciiString(int value)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString(value);
}

RDC::OCC::TCollection_HAsciiString::TCollection_HAsciiString(double value)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString(value);
}

RDC::OCC::TCollection_HAsciiString::TCollection_HAsciiString(RDC::OCC::TCollection_AsciiString^ aString)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString(*(::TCollection_AsciiString*)aString->NativeInstance);
}

RDC::OCC::TCollection_HAsciiString::TCollection_HAsciiString(RDC::OCC::TCollection_HExtendedString^ aString, char replaceNonAscii)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TCollection_HAsciiString(Handle(::TCollection_HExtendedString)(aString->NativeInstance), replaceNonAscii);
}

void RDC::OCC::TCollection_HAsciiString::AssignCat(System::String^ other)
{
    const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
    ((::TCollection_HAsciiString*)_NativeInstance)->AssignCat(sz_other);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
}

void RDC::OCC::TCollection_HAsciiString::AssignCat(RDC::OCC::TCollection_HAsciiString^ other)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->AssignCat(Handle(::TCollection_HAsciiString)(other->NativeInstance));
}

void RDC::OCC::TCollection_HAsciiString::Capitalize()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Capitalize();
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TCollection_HAsciiString::Cat(System::String^ other)
{
    const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Cat(sz_other);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TCollection_HAsciiString::Cat(RDC::OCC::TCollection_HAsciiString^ other)
{
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Cat(Handle(::TCollection_HAsciiString)(other->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

void RDC::OCC::TCollection_HAsciiString::Center(int Width, char Filler)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Center(Width, Filler);
}

void RDC::OCC::TCollection_HAsciiString::ChangeAll(char aChar, char NewChar, bool CaseSensitive)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->ChangeAll(aChar, NewChar, CaseSensitive);
}

void RDC::OCC::TCollection_HAsciiString::ChangeAll(char aChar, char NewChar)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->ChangeAll(aChar, NewChar, true);
}

void RDC::OCC::TCollection_HAsciiString::Clear()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Clear();
}

int RDC::OCC::TCollection_HAsciiString::FirstLocationInSet(RDC::OCC::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->FirstLocationInSet(Handle(::TCollection_HAsciiString)(Set->NativeInstance), FromIndex, ToIndex);
    return _result;
}

int RDC::OCC::TCollection_HAsciiString::FirstLocationNotInSet(RDC::OCC::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->FirstLocationNotInSet(Handle(::TCollection_HAsciiString)(Set->NativeInstance), FromIndex, ToIndex);
    return _result;
}

void RDC::OCC::TCollection_HAsciiString::Insert(int where, char what)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Insert(where, what);
}

void RDC::OCC::TCollection_HAsciiString::Insert(int where, RDC::OCC::TCollection_HAsciiString^ what)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Insert(where, Handle(::TCollection_HAsciiString)(what->NativeInstance));
}

void RDC::OCC::TCollection_HAsciiString::InsertAfter(int Index, RDC::OCC::TCollection_HAsciiString^ other)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->InsertAfter(Index, Handle(::TCollection_HAsciiString)(other->NativeInstance));
}

void RDC::OCC::TCollection_HAsciiString::InsertBefore(int Index, RDC::OCC::TCollection_HAsciiString^ other)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->InsertBefore(Index, Handle(::TCollection_HAsciiString)(other->NativeInstance));
}

bool RDC::OCC::TCollection_HAsciiString::IsEmpty()
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsEmpty();
    return _result;
}

bool RDC::OCC::TCollection_HAsciiString::IsLess(RDC::OCC::TCollection_HAsciiString^ other)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsLess(Handle(::TCollection_HAsciiString)(other->NativeInstance));
    return _result;
}

bool RDC::OCC::TCollection_HAsciiString::IsGreater(RDC::OCC::TCollection_HAsciiString^ other)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsGreater(Handle(::TCollection_HAsciiString)(other->NativeInstance));
    return _result;
}

int RDC::OCC::TCollection_HAsciiString::IntegerValue()
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->IntegerValue();
    return _result;
}

bool RDC::OCC::TCollection_HAsciiString::IsIntegerValue()
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsIntegerValue();
    return _result;
}

bool RDC::OCC::TCollection_HAsciiString::IsRealValue()
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsRealValue();
    return _result;
}

bool RDC::OCC::TCollection_HAsciiString::IsAscii()
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsAscii();
    return _result;
}

bool RDC::OCC::TCollection_HAsciiString::IsDifferent(RDC::OCC::TCollection_HAsciiString^ S)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsDifferent(Handle(::TCollection_HAsciiString)(S->NativeInstance));
    return _result;
}

bool RDC::OCC::TCollection_HAsciiString::IsSameString(RDC::OCC::TCollection_HAsciiString^ S)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsSameString(Handle(::TCollection_HAsciiString)(S->NativeInstance));
    return _result;
}

bool RDC::OCC::TCollection_HAsciiString::IsSameString(RDC::OCC::TCollection_HAsciiString^ S, bool CaseSensitive)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsSameString(Handle(::TCollection_HAsciiString)(S->NativeInstance), CaseSensitive);
    return _result;
}

void RDC::OCC::TCollection_HAsciiString::LeftAdjust()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->LeftAdjust();
}

void RDC::OCC::TCollection_HAsciiString::LeftJustify(int Width, char Filler)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->LeftJustify(Width, Filler);
}

int RDC::OCC::TCollection_HAsciiString::Length()
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::TCollection_HAsciiString::Location(RDC::OCC::TCollection_HAsciiString^ other, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->Location(Handle(::TCollection_HAsciiString)(other->NativeInstance), FromIndex, ToIndex);
    return _result;
}

int RDC::OCC::TCollection_HAsciiString::Location(int N, char C, int FromIndex, int ToIndex)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->Location(N, C, FromIndex, ToIndex);
    return _result;
}

void RDC::OCC::TCollection_HAsciiString::LowerCase()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->LowerCase();
}

void RDC::OCC::TCollection_HAsciiString::Prepend(RDC::OCC::TCollection_HAsciiString^ other)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Prepend(Handle(::TCollection_HAsciiString)(other->NativeInstance));
}

void RDC::OCC::TCollection_HAsciiString::Print(System::IO::TextWriter^ astream)
{
    std::ostringstream oss_astream;
    ((::TCollection_HAsciiString*)_NativeInstance)->Print(oss_astream);
    astream->Write(gcnew System::String(oss_astream.str().c_str()));
}

double RDC::OCC::TCollection_HAsciiString::RealValue()
{
    double _result = ((::TCollection_HAsciiString*)_NativeInstance)->RealValue();
    return _result;
}

void RDC::OCC::TCollection_HAsciiString::RemoveAll(char C, bool CaseSensitive)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->RemoveAll(C, CaseSensitive);
}

void RDC::OCC::TCollection_HAsciiString::RemoveAll(char what)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->RemoveAll(what);
}

void RDC::OCC::TCollection_HAsciiString::Remove(int where, int ahowmany)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Remove(where, ahowmany);
}

void RDC::OCC::TCollection_HAsciiString::Remove(int where)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Remove(where, 1);
}

void RDC::OCC::TCollection_HAsciiString::RightAdjust()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->RightAdjust();
}

void RDC::OCC::TCollection_HAsciiString::RightJustify(int Width, char Filler)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->RightJustify(Width, Filler);
}

int RDC::OCC::TCollection_HAsciiString::Search(System::String^ what)
{
    const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->Search(sz_what);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
    return _result;
}

int RDC::OCC::TCollection_HAsciiString::Search(RDC::OCC::TCollection_HAsciiString^ what)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->Search(Handle(::TCollection_HAsciiString)(what->NativeInstance));
    return _result;
}

int RDC::OCC::TCollection_HAsciiString::SearchFromEnd(System::String^ what)
{
    const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->SearchFromEnd(sz_what);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
    return _result;
}

int RDC::OCC::TCollection_HAsciiString::SearchFromEnd(RDC::OCC::TCollection_HAsciiString^ what)
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->SearchFromEnd(Handle(::TCollection_HAsciiString)(what->NativeInstance));
    return _result;
}

void RDC::OCC::TCollection_HAsciiString::SetValue(int where, char what)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->SetValue(where, what);
}

void RDC::OCC::TCollection_HAsciiString::SetValue(int where, RDC::OCC::TCollection_HAsciiString^ what)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->SetValue(where, Handle(::TCollection_HAsciiString)(what->NativeInstance));
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TCollection_HAsciiString::Split(int where)
{
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Split(where);
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TCollection_HAsciiString::SubString(int FromIndex, int ToIndex)
{
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->SubString(FromIndex, ToIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

System::String^ RDC::OCC::TCollection_HAsciiString::ToCString()
{
    Standard_CString _result = ((::TCollection_HAsciiString*)_NativeInstance)->ToCString();
    return gcnew System::String(_result);
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TCollection_HAsciiString::Token(System::String^ separators, int whichone)
{
    const char* sz_separators = (char*)(void*)Marshal::StringToHGlobalAnsi(separators);
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Token(sz_separators, whichone);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_separators);
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TCollection_HAsciiString::Token(System::String^ separators)
{
    const char* sz_separators = (char*)(void*)Marshal::StringToHGlobalAnsi(separators);
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Token(sz_separators, 1);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_separators);
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TCollection_HAsciiString::Token()
{
    Handle(::TCollection_HAsciiString) _result = ((::TCollection_HAsciiString*)_NativeInstance)->Token(" \t", 1);
    return _result.IsNull() ? nullptr : RDC::OCC::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

void RDC::OCC::TCollection_HAsciiString::Trunc(int ahowmany)
{
    ((::TCollection_HAsciiString*)_NativeInstance)->Trunc(ahowmany);
}

void RDC::OCC::TCollection_HAsciiString::UpperCase()
{
    ((::TCollection_HAsciiString*)_NativeInstance)->UpperCase();
}

int RDC::OCC::TCollection_HAsciiString::UsefullLength()
{
    int _result = ((::TCollection_HAsciiString*)_NativeInstance)->UsefullLength();
    return _result;
}

char RDC::OCC::TCollection_HAsciiString::Value(int where)
{
    char _result = ((::TCollection_HAsciiString*)_NativeInstance)->Value(where);
    return _result;
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::TCollection_HAsciiString::String()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TCollection_HAsciiString*)_NativeInstance)->String();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

bool RDC::OCC::TCollection_HAsciiString::IsSameState(RDC::OCC::TCollection_HAsciiString^ other)
{
    bool _result = ((::TCollection_HAsciiString*)_NativeInstance)->IsSameState(Handle(::TCollection_HAsciiString)(other->NativeInstance));
    return _result;
}

RDC::OCC::TCollection_HAsciiString^ RDC::OCC::TCollection_HAsciiString::CreateDowncasted(::TCollection_HAsciiString* instance)
{
    return gcnew RDC::OCC::TCollection_HAsciiString( instance );
}



//---------------------------------------------------------------------
//  Class  TCollection
//---------------------------------------------------------------------

RDC::OCC::TCollection::TCollection()
    : RDC::OCC::BaseClass<::TCollection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TCollection();
}

int RDC::OCC::TCollection::NextPrimeForMap(int I)
{
    int _result = ::TCollection::NextPrimeForMap(I);
    return _result;
}


