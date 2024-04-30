// Generated wrapper code for package Quantity

#include "OcctPCH.h"
#include "Quantity.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "TCollection.h"
#include "Graphic3d.h"


//---------------------------------------------------------------------
//  Class  Quantity_Array1OfColor
//---------------------------------------------------------------------

RDC::OCC::Quantity_Array1OfColor::Quantity_Array1OfColor()
	: RDC::OCC::BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array1OfColor();
}

RDC::OCC::Quantity_Array1OfColor::Quantity_Array1OfColor(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array1OfColor(theLower, theUpper);
}

RDC::OCC::Quantity_Array1OfColor::Quantity_Array1OfColor(RDC::OCC::Quantity_Color^ theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array1OfColor(*(::Quantity_Color*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

RDC::OCC::Quantity_Array1OfColor::Quantity_Array1OfColor(RDC::OCC::Quantity_Color^ theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array1OfColor(*(::Quantity_Color*)theBegin->NativeInstance, theLower, theUpper, true);
}

void RDC::OCC::Quantity_Array1OfColor::Init(RDC::OCC::Quantity_Color^ theValue)
{
	((::Quantity_Array1OfColor*)_NativeInstance)->Init(*(::Quantity_Color*)theValue->NativeInstance);
}

int RDC::OCC::Quantity_Array1OfColor::Size()
{
	int _result = ((::Quantity_Array1OfColor*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Quantity_Array1OfColor::Length()
{
	int _result = ((::Quantity_Array1OfColor*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::Quantity_Array1OfColor::IsEmpty()
{
	bool _result = ((::Quantity_Array1OfColor*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::Quantity_Array1OfColor::Lower()
{
	int _result = ((::Quantity_Array1OfColor*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Quantity_Array1OfColor::Upper()
{
	int _result = ((::Quantity_Array1OfColor*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::Quantity_Array1OfColor^ RDC::OCC::Quantity_Array1OfColor::Assign(RDC::OCC::Quantity_Array1OfColor^ theOther)
{
	::Quantity_Array1OfColor* _result = new ::Quantity_Array1OfColor();
	*_result = ((::Quantity_Array1OfColor*)_NativeInstance)->Assign(*(::Quantity_Array1OfColor*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Array1OfColor(_result);
}

RDC::OCC::Quantity_Array1OfColor^ RDC::OCC::Quantity_Array1OfColor::Move(RDC::OCC::Quantity_Array1OfColor^ theOther)
{
	::Quantity_Array1OfColor* _result = new ::Quantity_Array1OfColor();
	*_result = ((::Quantity_Array1OfColor*)_NativeInstance)->Move(*(::Quantity_Array1OfColor*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Array1OfColor(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_Array1OfColor::First()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = (::Quantity_Color)((::Quantity_Array1OfColor*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_Array1OfColor::ChangeFirst()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_Array1OfColor*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_Array1OfColor::Last()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = (::Quantity_Color)((::Quantity_Array1OfColor*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_Array1OfColor::ChangeLast()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_Array1OfColor*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_Array1OfColor::Value(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = (::Quantity_Color)((::Quantity_Array1OfColor*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_Array1OfColor::ChangeValue(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_Array1OfColor*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::Quantity_Array1OfColor::SetValue(int theIndex, RDC::OCC::Quantity_Color^ theItem)
{
	((::Quantity_Array1OfColor*)_NativeInstance)->SetValue(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void RDC::OCC::Quantity_Array1OfColor::UpdateLowerBound(int theLower)
{
	((::Quantity_Array1OfColor*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::Quantity_Array1OfColor::UpdateUpperBound(int theUpper)
{
	((::Quantity_Array1OfColor*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::Quantity_Array1OfColor::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Quantity_Array1OfColor*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::Quantity_Array1OfColor::IsDeletable()
{
	bool _result = ((::Quantity_Array1OfColor*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Quantity_Color^>^ RDC::OCC::Quantity_Array1OfColor::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Quantity_Color^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Quantity_Array1OfColor::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Quantity_Color^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Quantity_Array1OfColor::Iterator
//---------------------------------------------------------------------

void RDC::OCC::Quantity_Array1OfColor::Iterator::Init(RDC::OCC::Quantity_Array1OfColor^ theList)
{
	((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->Init(*(::Quantity_Array1OfColor*)theList->NativeInstance);
}

bool RDC::OCC::Quantity_Array1OfColor::Iterator::More()
{
	bool _result = ((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::Quantity_Array1OfColor::Iterator::Initialize(RDC::OCC::Quantity_Array1OfColor^ theList)
{
	((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->Initialize(*(::Quantity_Array1OfColor*)theList->NativeInstance);
}

void RDC::OCC::Quantity_Array1OfColor::Iterator::Next()
{
	((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_Array1OfColor::Iterator::Value()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = (::Quantity_Color)((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_Array1OfColor::Iterator::ChangeValue()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}



//---------------------------------------------------------------------
//  Class  Quantity_Color
//---------------------------------------------------------------------

RDC::OCC::Quantity_Color::Quantity_Color()
	: RDC::OCC::BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Color();
}

RDC::OCC::Quantity_Color::Quantity_Color(RDC::OCC::Quantity_NameOfColor theName)
	: RDC::OCC::BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Color((::Quantity_NameOfColor)theName);
}

RDC::OCC::Quantity_Color::Quantity_Color(double theC1, double theC2, double theC3, RDC::OCC::Quantity_TypeOfColor theType)
	: RDC::OCC::BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Color(theC1, theC2, theC3, (::Quantity_TypeOfColor)theType);
}

RDC::OCC::Quantity_Color::Quantity_Color(RDC::OCC::gp_Vec3f^ theRgb)
	: RDC::OCC::BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Color(*(::gp_Vec3f*)theRgb->NativeInstance);
}

RDC::OCC::Quantity_NameOfColor RDC::OCC::Quantity_Color::Name()
{
	::Quantity_NameOfColor _result = ((::Quantity_Color*)_NativeInstance)->Name();
	return (RDC::OCC::Quantity_NameOfColor)_result;
}

void RDC::OCC::Quantity_Color::SetValues(RDC::OCC::Quantity_NameOfColor theName)
{
	((::Quantity_Color*)_NativeInstance)->SetValues((::Quantity_NameOfColor)theName);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Rgb()
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = (::gp_Vec3f)((::Quantity_Color*)_NativeInstance)->Rgb();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

void RDC::OCC::Quantity_Color::Values(double% theC1, double% theC2, double% theC3, RDC::OCC::Quantity_TypeOfColor theType)
{
	pin_ptr<double> pp_theC1 = &theC1;
	pin_ptr<double> pp_theC2 = &theC2;
	pin_ptr<double> pp_theC3 = &theC3;
	((::Quantity_Color*)_NativeInstance)->Values(*(double*)pp_theC1, *(double*)pp_theC2, *(double*)pp_theC3, (::Quantity_TypeOfColor)theType);
}

void RDC::OCC::Quantity_Color::SetValues(double theC1, double theC2, double theC3, RDC::OCC::Quantity_TypeOfColor theType)
{
	((::Quantity_Color*)_NativeInstance)->SetValues(theC1, theC2, theC3, (::Quantity_TypeOfColor)theType);
}

double RDC::OCC::Quantity_Color::Red()
{
	double _result = ((::Quantity_Color*)_NativeInstance)->Red();
	return _result;
}

double RDC::OCC::Quantity_Color::Green()
{
	double _result = ((::Quantity_Color*)_NativeInstance)->Green();
	return _result;
}

double RDC::OCC::Quantity_Color::Blue()
{
	double _result = ((::Quantity_Color*)_NativeInstance)->Blue();
	return _result;
}

double RDC::OCC::Quantity_Color::Hue()
{
	double _result = ((::Quantity_Color*)_NativeInstance)->Hue();
	return _result;
}

double RDC::OCC::Quantity_Color::Light()
{
	double _result = ((::Quantity_Color*)_NativeInstance)->Light();
	return _result;
}

void RDC::OCC::Quantity_Color::ChangeIntensity(double theDelta)
{
	((::Quantity_Color*)_NativeInstance)->ChangeIntensity(theDelta);
}

double RDC::OCC::Quantity_Color::Saturation()
{
	double _result = ((::Quantity_Color*)_NativeInstance)->Saturation();
	return _result;
}

void RDC::OCC::Quantity_Color::ChangeContrast(double theDelta)
{
	((::Quantity_Color*)_NativeInstance)->ChangeContrast(theDelta);
}

bool RDC::OCC::Quantity_Color::IsDifferent(RDC::OCC::Quantity_Color^ theOther)
{
	bool _result = ((::Quantity_Color*)_NativeInstance)->IsDifferent(*(::Quantity_Color*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Quantity_Color::IsEqual(RDC::OCC::Quantity_Color^ theOther)
{
	bool _result = ((::Quantity_Color*)_NativeInstance)->IsEqual(*(::Quantity_Color*)theOther->NativeInstance);
	return _result;
}

double RDC::OCC::Quantity_Color::Distance(RDC::OCC::Quantity_Color^ theColor)
{
	double _result = ((::Quantity_Color*)_NativeInstance)->Distance(*(::Quantity_Color*)theColor->NativeInstance);
	return _result;
}

double RDC::OCC::Quantity_Color::SquareDistance(RDC::OCC::Quantity_Color^ theColor)
{
	double _result = ((::Quantity_Color*)_NativeInstance)->SquareDistance(*(::Quantity_Color*)theColor->NativeInstance);
	return _result;
}

void RDC::OCC::Quantity_Color::Delta(RDC::OCC::Quantity_Color^ theColor, double% DC, double% DI)
{
	pin_ptr<double> pp_DC = &DC;
	pin_ptr<double> pp_DI = &DI;
	((::Quantity_Color*)_NativeInstance)->Delta(*(::Quantity_Color*)theColor->NativeInstance, *(double*)pp_DC, *(double*)pp_DI);
}

double RDC::OCC::Quantity_Color::DeltaE2000(RDC::OCC::Quantity_Color^ theOther)
{
	double _result = ((::Quantity_Color*)_NativeInstance)->DeltaE2000(*(::Quantity_Color*)theOther->NativeInstance);
	return _result;
}

RDC::OCC::Quantity_NameOfColor RDC::OCC::Quantity_Color::Name(double theR, double theG, double theB)
{
	::Quantity_NameOfColor _result = ::Quantity_Color::Name(theR, theG, theB);
	return (RDC::OCC::Quantity_NameOfColor)_result;
}

System::String^ RDC::OCC::Quantity_Color::StringName(RDC::OCC::Quantity_NameOfColor theColor)
{
	Standard_CString _result = ::Quantity_Color::StringName((::Quantity_NameOfColor)theColor);
	return gcnew System::String(_result);
}

bool RDC::OCC::Quantity_Color::ColorFromName(System::String^ theName, RDC::OCC::Quantity_NameOfColor% theColor)
{
	const char* sz_theName = (char*)(void*)Marshal::StringToHGlobalAnsi(theName);
	pin_ptr<RDC::OCC::Quantity_NameOfColor> pp_theColor = &theColor;
	bool _result = ::Quantity_Color::ColorFromName(sz_theName, *(::Quantity_NameOfColor*)pp_theColor);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theName);
	return _result;
}

bool RDC::OCC::Quantity_Color::ColorFromName(System::String^ theColorNameString, RDC::OCC::Quantity_Color^ theColor)
{
	const char* sz_theColorNameString = (char*)(void*)Marshal::StringToHGlobalAnsi(theColorNameString);
	bool _result = ::Quantity_Color::ColorFromName(sz_theColorNameString, *(::Quantity_Color*)theColor->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theColorNameString);
	return _result;
}

bool RDC::OCC::Quantity_Color::ColorFromHex(System::String^ theHexColorString, RDC::OCC::Quantity_Color^ theColor)
{
	const char* sz_theHexColorString = (char*)(void*)Marshal::StringToHGlobalAnsi(theHexColorString);
	bool _result = ::Quantity_Color::ColorFromHex(sz_theHexColorString, *(::Quantity_Color*)theColor->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theHexColorString);
	return _result;
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Quantity_Color::ColorToHex(RDC::OCC::Quantity_Color^ theColor, bool theToPrefixHash)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Quantity_Color::ColorToHex(*(::Quantity_Color*)theColor->NativeInstance, theToPrefixHash);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Quantity_Color::ColorToHex(RDC::OCC::Quantity_Color^ theColor)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Quantity_Color::ColorToHex(*(::Quantity_Color*)theColor->NativeInstance, true);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_sRGB_To_HLS(RDC::OCC::gp_Vec3f^ theRgb)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_sRGB_To_HLS(*(::gp_Vec3f*)theRgb->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_HLS_To_sRGB(RDC::OCC::gp_Vec3f^ theHls)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_HLS_To_sRGB(*(::gp_Vec3f*)theHls->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_LinearRGB_To_HLS(RDC::OCC::gp_Vec3f^ theRgb)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_LinearRGB_To_HLS(*(::gp_Vec3f*)theRgb->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_HLS_To_LinearRGB(RDC::OCC::gp_Vec3f^ theHls)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_HLS_To_LinearRGB(*(::gp_Vec3f*)theHls->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_LinearRGB_To_Lab(RDC::OCC::gp_Vec3f^ theRgb)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_LinearRGB_To_Lab(*(::gp_Vec3f*)theRgb->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_Lab_To_Lch(RDC::OCC::gp_Vec3f^ theLab)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_Lab_To_Lch(*(::gp_Vec3f*)theLab->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_Lab_To_LinearRGB(RDC::OCC::gp_Vec3f^ theLab)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_Lab_To_LinearRGB(*(::gp_Vec3f*)theLab->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_Lch_To_Lab(RDC::OCC::gp_Vec3f^ theLch)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_Lch_To_Lab(*(::gp_Vec3f*)theLch->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

void RDC::OCC::Quantity_Color::Color2argb(RDC::OCC::Quantity_Color^ theColor, int% theARGB)
{
	pin_ptr<int> pp_theARGB = &theARGB;
	::Quantity_Color::Color2argb(*(::Quantity_Color*)theColor->NativeInstance, *(int*)pp_theARGB);
}

void RDC::OCC::Quantity_Color::Argb2color(int theARGB, RDC::OCC::Quantity_Color^ theColor)
{
	::Quantity_Color::Argb2color(theARGB, *(::Quantity_Color*)theColor->NativeInstance);
}

double RDC::OCC::Quantity_Color::Convert_LinearRGB_To_sRGB(double theLinearValue)
{
	double _result = ::Quantity_Color::Convert_LinearRGB_To_sRGB(theLinearValue);
	return _result;
}

float RDC::OCC::Quantity_Color::Convert_LinearRGB_To_sRGB(float theLinearValue)
{
	float _result = ::Quantity_Color::Convert_LinearRGB_To_sRGB(theLinearValue);
	return _result;
}

double RDC::OCC::Quantity_Color::Convert_sRGB_To_LinearRGB(double thesRGBValue)
{
	double _result = ::Quantity_Color::Convert_sRGB_To_LinearRGB(thesRGBValue);
	return _result;
}

float RDC::OCC::Quantity_Color::Convert_sRGB_To_LinearRGB(float thesRGBValue)
{
	float _result = ::Quantity_Color::Convert_sRGB_To_LinearRGB(thesRGBValue);
	return _result;
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_LinearRGB_To_sRGB(RDC::OCC::gp_Vec3f^ theRGB)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_LinearRGB_To_sRGB(*(::gp_Vec3f*)theRGB->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_sRGB_To_LinearRGB(RDC::OCC::gp_Vec3f^ theRGB)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_sRGB_To_LinearRGB(*(::gp_Vec3f*)theRGB->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

float RDC::OCC::Quantity_Color::Convert_LinearRGB_To_sRGB_approx22(float theLinearValue)
{
	float _result = ::Quantity_Color::Convert_LinearRGB_To_sRGB_approx22(theLinearValue);
	return _result;
}

float RDC::OCC::Quantity_Color::Convert_sRGB_To_LinearRGB_approx22(float thesRGBValue)
{
	float _result = ::Quantity_Color::Convert_sRGB_To_LinearRGB_approx22(thesRGBValue);
	return _result;
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_LinearRGB_To_sRGB_approx22(RDC::OCC::gp_Vec3f^ theRGB)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_LinearRGB_To_sRGB_approx22(*(::gp_Vec3f*)theRGB->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::Quantity_Color::Convert_sRGB_To_LinearRGB_approx22(RDC::OCC::gp_Vec3f^ theRGB)
{
	::gp_Vec3f* _result = new ::gp_Vec3f();
	*_result = ::Quantity_Color::Convert_sRGB_To_LinearRGB_approx22(*(::gp_Vec3f*)theRGB->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

void RDC::OCC::Quantity_Color::HlsRgb(double theH, double theL, double theS, double% theR, double% theG, double% theB)
{
	pin_ptr<double> pp_theR = &theR;
	pin_ptr<double> pp_theG = &theG;
	pin_ptr<double> pp_theB = &theB;
	::Quantity_Color::HlsRgb(theH, theL, theS, *(double*)pp_theR, *(double*)pp_theG, *(double*)pp_theB);
}

void RDC::OCC::Quantity_Color::RgbHls(double theR, double theG, double theB, double% theH, double% theL, double% theS)
{
	pin_ptr<double> pp_theH = &theH;
	pin_ptr<double> pp_theL = &theL;
	pin_ptr<double> pp_theS = &theS;
	::Quantity_Color::RgbHls(theR, theG, theB, *(double*)pp_theH, *(double*)pp_theL, *(double*)pp_theS);
}

double RDC::OCC::Quantity_Color::Epsilon()
{
	double _result = ::Quantity_Color::Epsilon();
	return _result;
}

void RDC::OCC::Quantity_Color::SetEpsilon(double theEpsilon)
{
	::Quantity_Color::SetEpsilon(theEpsilon);
}

void RDC::OCC::Quantity_Color::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Quantity_Color*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Quantity_Color::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Quantity_Color*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool RDC::OCC::Quantity_Color::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::Quantity_Color::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Quantity_Color^)obj)->NativeInstance);
	}
	return false;
}

int RDC::OCC::Quantity_Color::GetHashCode()
{
	return std::hash<::Quantity_Color>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Quantity_ColorRGBA
//---------------------------------------------------------------------

RDC::OCC::Quantity_ColorRGBA::Quantity_ColorRGBA()
	: RDC::OCC::BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBA();
}

RDC::OCC::Quantity_ColorRGBA::Quantity_ColorRGBA(RDC::OCC::Quantity_Color^ theRgb)
	: RDC::OCC::BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBA(*(::Quantity_Color*)theRgb->NativeInstance);
}

RDC::OCC::Quantity_ColorRGBA::Quantity_ColorRGBA(RDC::OCC::Quantity_Color^ theRgb, float theAlpha)
	: RDC::OCC::BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBA(*(::Quantity_Color*)theRgb->NativeInstance, theAlpha);
}

RDC::OCC::Quantity_ColorRGBA::Quantity_ColorRGBA(RDC::OCC::Graphic3d_Vec4^ theRgba)
	: RDC::OCC::BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBA(*(::Graphic3d_Vec4*)theRgba->NativeInstance);
}

RDC::OCC::Quantity_ColorRGBA::Quantity_ColorRGBA(float theRed, float theGreen, float theBlue, float theAlpha)
	: RDC::OCC::BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBA(theRed, theGreen, theBlue, theAlpha);
}

void RDC::OCC::Quantity_ColorRGBA::SetValues(float theRed, float theGreen, float theBlue, float theAlpha)
{
	((::Quantity_ColorRGBA*)_NativeInstance)->SetValues(theRed, theGreen, theBlue, theAlpha);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_ColorRGBA::GetRGB()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = (::Quantity_Color)((::Quantity_ColorRGBA*)_NativeInstance)->GetRGB();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_ColorRGBA::ChangeRGB()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_ColorRGBA*)_NativeInstance)->ChangeRGB();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::Quantity_ColorRGBA::SetRGB(RDC::OCC::Quantity_Color^ theRgb)
{
	((::Quantity_ColorRGBA*)_NativeInstance)->SetRGB(*(::Quantity_Color*)theRgb->NativeInstance);
}

float RDC::OCC::Quantity_ColorRGBA::Alpha()
{
	float _result = ((::Quantity_ColorRGBA*)_NativeInstance)->Alpha();
	return _result;
}

void RDC::OCC::Quantity_ColorRGBA::SetAlpha(float theAlpha)
{
	((::Quantity_ColorRGBA*)_NativeInstance)->SetAlpha(theAlpha);
}

bool RDC::OCC::Quantity_ColorRGBA::IsDifferent(RDC::OCC::Quantity_ColorRGBA^ theOther)
{
	bool _result = ((::Quantity_ColorRGBA*)_NativeInstance)->IsDifferent(*(::Quantity_ColorRGBA*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Quantity_ColorRGBA::IsEqual(RDC::OCC::Quantity_ColorRGBA^ theOther)
{
	bool _result = ((::Quantity_ColorRGBA*)_NativeInstance)->IsEqual(*(::Quantity_ColorRGBA*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Quantity_ColorRGBA::ColorFromName(System::String^ theColorNameString, RDC::OCC::Quantity_ColorRGBA^ theColor)
{
	const char* sz_theColorNameString = (char*)(void*)Marshal::StringToHGlobalAnsi(theColorNameString);
	bool _result = ::Quantity_ColorRGBA::ColorFromName(sz_theColorNameString, *(::Quantity_ColorRGBA*)theColor->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theColorNameString);
	return _result;
}

bool RDC::OCC::Quantity_ColorRGBA::ColorFromHex(char theHexColorString, RDC::OCC::Quantity_ColorRGBA^ theColor, bool theAlphaComponentIsOff)
{
	pin_ptr<char> pp_theHexColorString = &theHexColorString;
	bool _result = ::Quantity_ColorRGBA::ColorFromHex((char*)pp_theHexColorString, *(::Quantity_ColorRGBA*)theColor->NativeInstance, theAlphaComponentIsOff);
	return _result;
}

bool RDC::OCC::Quantity_ColorRGBA::ColorFromHex(char theHexColorString, RDC::OCC::Quantity_ColorRGBA^ theColor)
{
	pin_ptr<char> pp_theHexColorString = &theHexColorString;
	bool _result = ::Quantity_ColorRGBA::ColorFromHex((char*)pp_theHexColorString, *(::Quantity_ColorRGBA*)theColor->NativeInstance, false);
	return _result;
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Quantity_ColorRGBA::ColorToHex(RDC::OCC::Quantity_ColorRGBA^ theColor, bool theToPrefixHash)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Quantity_ColorRGBA::ColorToHex(*(::Quantity_ColorRGBA*)theColor->NativeInstance, theToPrefixHash);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Quantity_ColorRGBA::ColorToHex(RDC::OCC::Quantity_ColorRGBA^ theColor)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Quantity_ColorRGBA::ColorToHex(*(::Quantity_ColorRGBA*)theColor->NativeInstance, true);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::Graphic3d_Vec4^ RDC::OCC::Quantity_ColorRGBA::Convert_LinearRGB_To_sRGB(RDC::OCC::Graphic3d_Vec4^ theRGB)
{
	::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
	*_result = ::Quantity_ColorRGBA::Convert_LinearRGB_To_sRGB(*(::Graphic3d_Vec4*)theRGB->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec4(_result);
}

RDC::OCC::Graphic3d_Vec4^ RDC::OCC::Quantity_ColorRGBA::Convert_sRGB_To_LinearRGB(RDC::OCC::Graphic3d_Vec4^ theRGB)
{
	::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
	*_result = ::Quantity_ColorRGBA::Convert_sRGB_To_LinearRGB(*(::Graphic3d_Vec4*)theRGB->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec4(_result);
}

void RDC::OCC::Quantity_ColorRGBA::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Quantity_ColorRGBA*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Quantity_ColorRGBA::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Quantity_ColorRGBA*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool RDC::OCC::Quantity_ColorRGBA::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::Quantity_ColorRGBA::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Quantity_ColorRGBA^)obj)->NativeInstance);
	}
	return false;
}

int RDC::OCC::Quantity_ColorRGBA::GetHashCode()
{
	return std::hash<::Quantity_ColorRGBA>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Quantity_Period
//---------------------------------------------------------------------

RDC::OCC::Quantity_Period::Quantity_Period(int dd, int hh, int mn, int ss, int mis, int mics)
	: RDC::OCC::BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(dd, hh, mn, ss, mis, mics);
}

RDC::OCC::Quantity_Period::Quantity_Period(int dd, int hh, int mn, int ss, int mis)
	: RDC::OCC::BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(dd, hh, mn, ss, mis, 0);
}

RDC::OCC::Quantity_Period::Quantity_Period(int dd, int hh, int mn, int ss)
	: RDC::OCC::BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(dd, hh, mn, ss, 0, 0);
}

RDC::OCC::Quantity_Period::Quantity_Period(int ss, int mics)
	: RDC::OCC::BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(ss, mics);
}

RDC::OCC::Quantity_Period::Quantity_Period(int ss)
	: RDC::OCC::BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(ss, 0);
}

void RDC::OCC::Quantity_Period::Values(int% dd, int% hh, int% mn, int% ss, int% mis, int% mics)
{
	pin_ptr<int> pp_dd = &dd;
	pin_ptr<int> pp_hh = &hh;
	pin_ptr<int> pp_mn = &mn;
	pin_ptr<int> pp_ss = &ss;
	pin_ptr<int> pp_mis = &mis;
	pin_ptr<int> pp_mics = &mics;
	((::Quantity_Period*)_NativeInstance)->Values(*(int*)pp_dd, *(int*)pp_hh, *(int*)pp_mn, *(int*)pp_ss, *(int*)pp_mis, *(int*)pp_mics);
}

void RDC::OCC::Quantity_Period::Values(int% ss, int% mics)
{
	pin_ptr<int> pp_ss = &ss;
	pin_ptr<int> pp_mics = &mics;
	((::Quantity_Period*)_NativeInstance)->Values(*(int*)pp_ss, *(int*)pp_mics);
}

void RDC::OCC::Quantity_Period::SetValues(int dd, int hh, int mn, int ss, int mis, int mics)
{
	((::Quantity_Period*)_NativeInstance)->SetValues(dd, hh, mn, ss, mis, mics);
}

void RDC::OCC::Quantity_Period::SetValues(int dd, int hh, int mn, int ss, int mis)
{
	((::Quantity_Period*)_NativeInstance)->SetValues(dd, hh, mn, ss, mis, 0);
}

void RDC::OCC::Quantity_Period::SetValues(int dd, int hh, int mn, int ss)
{
	((::Quantity_Period*)_NativeInstance)->SetValues(dd, hh, mn, ss, 0, 0);
}

void RDC::OCC::Quantity_Period::SetValues(int ss, int mics)
{
	((::Quantity_Period*)_NativeInstance)->SetValues(ss, mics);
}

void RDC::OCC::Quantity_Period::SetValues(int ss)
{
	((::Quantity_Period*)_NativeInstance)->SetValues(ss, 0);
}

RDC::OCC::Quantity_Period^ RDC::OCC::Quantity_Period::Subtract(RDC::OCC::Quantity_Period^ anOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Quantity_Period^ RDC::OCC::Quantity_Period::Add(RDC::OCC::Quantity_Period^ anOther)
{
	throw gcnew System::NotImplementedException();
}

bool RDC::OCC::Quantity_Period::IsEqual(RDC::OCC::Quantity_Period^ anOther)
{
	bool _result = ((::Quantity_Period*)_NativeInstance)->IsEqual(*(::Quantity_Period*)anOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Quantity_Period::IsShorter(RDC::OCC::Quantity_Period^ anOther)
{
	bool _result = ((::Quantity_Period*)_NativeInstance)->IsShorter(*(::Quantity_Period*)anOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Quantity_Period::IsLonger(RDC::OCC::Quantity_Period^ anOther)
{
	bool _result = ((::Quantity_Period*)_NativeInstance)->IsLonger(*(::Quantity_Period*)anOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Quantity_Period::IsValid(int dd, int hh, int mn, int ss, int mis, int mics)
{
	bool _result = ::Quantity_Period::IsValid(dd, hh, mn, ss, mis, mics);
	return _result;
}

bool RDC::OCC::Quantity_Period::IsValid(int dd, int hh, int mn, int ss, int mis)
{
	bool _result = ::Quantity_Period::IsValid(dd, hh, mn, ss, mis, 0);
	return _result;
}

bool RDC::OCC::Quantity_Period::IsValid(int dd, int hh, int mn, int ss)
{
	bool _result = ::Quantity_Period::IsValid(dd, hh, mn, ss, 0, 0);
	return _result;
}

bool RDC::OCC::Quantity_Period::IsValid(int ss, int mics)
{
	bool _result = ::Quantity_Period::IsValid(ss, mics);
	return _result;
}

bool RDC::OCC::Quantity_Period::IsValid(int ss)
{
	bool _result = ::Quantity_Period::IsValid(ss, 0);
	return _result;
}

bool RDC::OCC::Quantity_Period::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::Quantity_Period::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Quantity_Period^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  Quantity_Date
//---------------------------------------------------------------------

RDC::OCC::Quantity_Date::Quantity_Date()
	: RDC::OCC::BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Date();
}

RDC::OCC::Quantity_Date::Quantity_Date(int mm, int dd, int yyyy, int hh, int mn, int ss, int mis, int mics)
	: RDC::OCC::BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Date(mm, dd, yyyy, hh, mn, ss, mis, mics);
}

RDC::OCC::Quantity_Date::Quantity_Date(int mm, int dd, int yyyy, int hh, int mn, int ss, int mis)
	: RDC::OCC::BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Date(mm, dd, yyyy, hh, mn, ss, mis, 0);
}

RDC::OCC::Quantity_Date::Quantity_Date(int mm, int dd, int yyyy, int hh, int mn, int ss)
	: RDC::OCC::BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Date(mm, dd, yyyy, hh, mn, ss, 0, 0);
}

void RDC::OCC::Quantity_Date::Values(int% mm, int% dd, int% yy, int% hh, int% mn, int% ss, int% mis, int% mics)
{
	pin_ptr<int> pp_mm = &mm;
	pin_ptr<int> pp_dd = &dd;
	pin_ptr<int> pp_yy = &yy;
	pin_ptr<int> pp_hh = &hh;
	pin_ptr<int> pp_mn = &mn;
	pin_ptr<int> pp_ss = &ss;
	pin_ptr<int> pp_mis = &mis;
	pin_ptr<int> pp_mics = &mics;
	((::Quantity_Date*)_NativeInstance)->Values(*(int*)pp_mm, *(int*)pp_dd, *(int*)pp_yy, *(int*)pp_hh, *(int*)pp_mn, *(int*)pp_ss, *(int*)pp_mis, *(int*)pp_mics);
}

void RDC::OCC::Quantity_Date::SetValues(int mm, int dd, int yy, int hh, int mn, int ss, int mis, int mics)
{
	((::Quantity_Date*)_NativeInstance)->SetValues(mm, dd, yy, hh, mn, ss, mis, mics);
}

void RDC::OCC::Quantity_Date::SetValues(int mm, int dd, int yy, int hh, int mn, int ss, int mis)
{
	((::Quantity_Date*)_NativeInstance)->SetValues(mm, dd, yy, hh, mn, ss, mis, 0);
}

void RDC::OCC::Quantity_Date::SetValues(int mm, int dd, int yy, int hh, int mn, int ss)
{
	((::Quantity_Date*)_NativeInstance)->SetValues(mm, dd, yy, hh, mn, ss, 0, 0);
}

RDC::OCC::Quantity_Period^ RDC::OCC::Quantity_Date::Difference(RDC::OCC::Quantity_Date^ anOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Quantity_Date^ RDC::OCC::Quantity_Date::Subtract(RDC::OCC::Quantity_Period^ aPeriod)
{
	::Quantity_Date* _result = new ::Quantity_Date();
	*_result = ((::Quantity_Date*)_NativeInstance)->Subtract(*(::Quantity_Period*)aPeriod->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Date(_result);
}

RDC::OCC::Quantity_Date^ RDC::OCC::Quantity_Date::Add(RDC::OCC::Quantity_Period^ aPeriod)
{
	::Quantity_Date* _result = new ::Quantity_Date();
	*_result = ((::Quantity_Date*)_NativeInstance)->Add(*(::Quantity_Period*)aPeriod->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Date(_result);
}

int RDC::OCC::Quantity_Date::Year()
{
	int _result = ((::Quantity_Date*)_NativeInstance)->Year();
	return _result;
}

int RDC::OCC::Quantity_Date::Month()
{
	int _result = ((::Quantity_Date*)_NativeInstance)->Month();
	return _result;
}

int RDC::OCC::Quantity_Date::Day()
{
	int _result = ((::Quantity_Date*)_NativeInstance)->Day();
	return _result;
}

int RDC::OCC::Quantity_Date::Hour()
{
	int _result = ((::Quantity_Date*)_NativeInstance)->Hour();
	return _result;
}

int RDC::OCC::Quantity_Date::Minute()
{
	int _result = ((::Quantity_Date*)_NativeInstance)->Minute();
	return _result;
}

int RDC::OCC::Quantity_Date::Second()
{
	int _result = ((::Quantity_Date*)_NativeInstance)->Second();
	return _result;
}

int RDC::OCC::Quantity_Date::MilliSecond()
{
	int _result = ((::Quantity_Date*)_NativeInstance)->MilliSecond();
	return _result;
}

int RDC::OCC::Quantity_Date::MicroSecond()
{
	int _result = ((::Quantity_Date*)_NativeInstance)->MicroSecond();
	return _result;
}

bool RDC::OCC::Quantity_Date::IsEqual(RDC::OCC::Quantity_Date^ anOther)
{
	bool _result = ((::Quantity_Date*)_NativeInstance)->IsEqual(*(::Quantity_Date*)anOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Quantity_Date::IsEarlier(RDC::OCC::Quantity_Date^ anOther)
{
	bool _result = ((::Quantity_Date*)_NativeInstance)->IsEarlier(*(::Quantity_Date*)anOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Quantity_Date::IsLater(RDC::OCC::Quantity_Date^ anOther)
{
	bool _result = ((::Quantity_Date*)_NativeInstance)->IsLater(*(::Quantity_Date*)anOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Quantity_Date::IsValid(int mm, int dd, int yy, int hh, int mn, int ss, int mis, int mics)
{
	bool _result = ::Quantity_Date::IsValid(mm, dd, yy, hh, mn, ss, mis, mics);
	return _result;
}

bool RDC::OCC::Quantity_Date::IsValid(int mm, int dd, int yy, int hh, int mn, int ss, int mis)
{
	bool _result = ::Quantity_Date::IsValid(mm, dd, yy, hh, mn, ss, mis, 0);
	return _result;
}

bool RDC::OCC::Quantity_Date::IsValid(int mm, int dd, int yy, int hh, int mn, int ss)
{
	bool _result = ::Quantity_Date::IsValid(mm, dd, yy, hh, mn, ss, 0, 0);
	return _result;
}

bool RDC::OCC::Quantity_Date::IsLeap(int yy)
{
	bool _result = ::Quantity_Date::IsLeap(yy);
	return _result;
}

bool RDC::OCC::Quantity_Date::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::Quantity_Date::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Quantity_Date^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  Quantity_DateDefinitionError
//---------------------------------------------------------------------

RDC::OCC::Quantity_DateDefinitionError::Quantity_DateDefinitionError()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_DateDefinitionError();
}

RDC::OCC::Quantity_DateDefinitionError::Quantity_DateDefinitionError(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Quantity_DateDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Quantity_DateDefinitionError::Quantity_DateDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Quantity_DateDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Quantity_DateDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Quantity_DateDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Quantity_DateDefinitionError::Raise()
{
	::Quantity_DateDefinitionError::Raise("");
}

RDC::OCC::Quantity_DateDefinitionError^ RDC::OCC::Quantity_DateDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Quantity_DateDefinitionError) _result = ::Quantity_DateDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Quantity_DateDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Quantity_DateDefinitionError^ RDC::OCC::Quantity_DateDefinitionError::NewInstance()
{
	Handle(::Quantity_DateDefinitionError) _result = ::Quantity_DateDefinitionError::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Quantity_DateDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Quantity_DateDefinitionError^ RDC::OCC::Quantity_DateDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Quantity_DateDefinitionError) _result = ::Quantity_DateDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Quantity_DateDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Quantity_DateDefinitionError^ RDC::OCC::Quantity_DateDefinitionError::CreateDowncasted(::Quantity_DateDefinitionError* instance)
{
	return gcnew RDC::OCC::Quantity_DateDefinitionError(instance);
}



//---------------------------------------------------------------------
//  Class  Quantity_HArray1OfColor
//---------------------------------------------------------------------

RDC::OCC::Quantity_HArray1OfColor::Quantity_HArray1OfColor()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_HArray1OfColor();
}

RDC::OCC::Quantity_HArray1OfColor::Quantity_HArray1OfColor(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_HArray1OfColor(theLower, theUpper);
}

RDC::OCC::Quantity_HArray1OfColor::Quantity_HArray1OfColor(int theLower, int theUpper, RDC::OCC::Quantity_Color^ theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_HArray1OfColor(theLower, theUpper, *(::Quantity_Color*)theValue->NativeInstance);
}

RDC::OCC::Quantity_HArray1OfColor::Quantity_HArray1OfColor(RDC::OCC::Quantity_Color^ theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_HArray1OfColor(*(::Quantity_Color*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

RDC::OCC::Quantity_HArray1OfColor::Quantity_HArray1OfColor(RDC::OCC::Quantity_Array1OfColor^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_HArray1OfColor(*(::Quantity_Array1OfColor*)theOther->NativeInstance);
}

RDC::OCC::Quantity_Array1OfColor^ RDC::OCC::Quantity_HArray1OfColor::Array1()
{
	::Quantity_Array1OfColor* _result = new ::Quantity_Array1OfColor();
	*_result = (::Quantity_Array1OfColor)((::Quantity_HArray1OfColor*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Array1OfColor(_result);
}

RDC::OCC::Quantity_Array1OfColor^ RDC::OCC::Quantity_HArray1OfColor::ChangeArray1()
{
	::Quantity_Array1OfColor* _result = new ::Quantity_Array1OfColor();
	*_result = ((::Quantity_HArray1OfColor*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Array1OfColor(_result);
}

void RDC::OCC::Quantity_HArray1OfColor::Init(RDC::OCC::Quantity_Color^ theValue)
{
	((::Quantity_HArray1OfColor*)_NativeInstance)->Init(*(::Quantity_Color*)theValue->NativeInstance);
}

int RDC::OCC::Quantity_HArray1OfColor::Size()
{
	int _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Quantity_HArray1OfColor::Length()
{
	int _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::Quantity_HArray1OfColor::IsEmpty()
{
	bool _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::Quantity_HArray1OfColor::Lower()
{
	int _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Quantity_HArray1OfColor::Upper()
{
	int _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::Quantity_HArray1OfColor^ RDC::OCC::Quantity_HArray1OfColor::Assign(RDC::OCC::Quantity_HArray1OfColor^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Quantity_HArray1OfColor^ RDC::OCC::Quantity_HArray1OfColor::Move(RDC::OCC::Quantity_HArray1OfColor^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_HArray1OfColor::First()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = (::Quantity_Color)((::Quantity_HArray1OfColor*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_HArray1OfColor::ChangeFirst()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_HArray1OfColor*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_HArray1OfColor::Last()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = (::Quantity_Color)((::Quantity_HArray1OfColor*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_HArray1OfColor::ChangeLast()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_HArray1OfColor*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_HArray1OfColor::Value(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = (::Quantity_Color)((::Quantity_HArray1OfColor*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_HArray1OfColor::ChangeValue(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_HArray1OfColor*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::Quantity_HArray1OfColor::SetValue(int theIndex, RDC::OCC::Quantity_Color^ theItem)
{
	((::Quantity_HArray1OfColor*)_NativeInstance)->SetValue(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void RDC::OCC::Quantity_HArray1OfColor::UpdateLowerBound(int theLower)
{
	((::Quantity_HArray1OfColor*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::Quantity_HArray1OfColor::UpdateUpperBound(int theUpper)
{
	((::Quantity_HArray1OfColor*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::Quantity_HArray1OfColor::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Quantity_HArray1OfColor*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::Quantity_HArray1OfColor::IsDeletable()
{
	bool _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::Quantity_HArray1OfColor^ RDC::OCC::Quantity_HArray1OfColor::CreateDowncasted(::Quantity_HArray1OfColor* instance)
{
	return gcnew RDC::OCC::Quantity_HArray1OfColor(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Quantity_Color^>^ RDC::OCC::Quantity_HArray1OfColor::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Quantity_Color^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Quantity_HArray1OfColor::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Quantity_Color^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Quantity_HArray1OfColor::Iterator
//---------------------------------------------------------------------

void RDC::OCC::Quantity_HArray1OfColor::Iterator::Init(RDC::OCC::Quantity_HArray1OfColor^ theList)
{
	((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->Init(*(::Quantity_HArray1OfColor*)theList->NativeInstance);
}

bool RDC::OCC::Quantity_HArray1OfColor::Iterator::More()
{
	bool _result = ((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::Quantity_HArray1OfColor::Iterator::Initialize(RDC::OCC::Quantity_HArray1OfColor^ theList)
{
	((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->Initialize(*(::Quantity_HArray1OfColor*)theList->NativeInstance);
}

void RDC::OCC::Quantity_HArray1OfColor::Iterator::Next()
{
	((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_HArray1OfColor::Iterator::Value()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = (::Quantity_Color)((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Quantity_HArray1OfColor::Iterator::ChangeValue()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}



//---------------------------------------------------------------------
//  Class  Quantity_PeriodDefinitionError
//---------------------------------------------------------------------

RDC::OCC::Quantity_PeriodDefinitionError::Quantity_PeriodDefinitionError()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_PeriodDefinitionError();
}

RDC::OCC::Quantity_PeriodDefinitionError::Quantity_PeriodDefinitionError(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Quantity_PeriodDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Quantity_PeriodDefinitionError::Quantity_PeriodDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Quantity_PeriodDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Quantity_PeriodDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Quantity_PeriodDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Quantity_PeriodDefinitionError::Raise()
{
	::Quantity_PeriodDefinitionError::Raise("");
}

RDC::OCC::Quantity_PeriodDefinitionError^ RDC::OCC::Quantity_PeriodDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Quantity_PeriodDefinitionError) _result = ::Quantity_PeriodDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Quantity_PeriodDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Quantity_PeriodDefinitionError^ RDC::OCC::Quantity_PeriodDefinitionError::NewInstance()
{
	Handle(::Quantity_PeriodDefinitionError) _result = ::Quantity_PeriodDefinitionError::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Quantity_PeriodDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Quantity_PeriodDefinitionError^ RDC::OCC::Quantity_PeriodDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Quantity_PeriodDefinitionError) _result = ::Quantity_PeriodDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Quantity_PeriodDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Quantity_PeriodDefinitionError^ RDC::OCC::Quantity_PeriodDefinitionError::CreateDowncasted(::Quantity_PeriodDefinitionError* instance)
{
	return gcnew RDC::OCC::Quantity_PeriodDefinitionError(instance);
}


