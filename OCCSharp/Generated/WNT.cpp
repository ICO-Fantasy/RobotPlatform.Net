// Generated wrapper code for package WNT

#include "OcctPCH.h"
#include "WNT.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TCollection.h"
#include "Quantity.h"
#include "Aspect.h"


//---------------------------------------------------------------------
//  Class  WNT_WClass
//---------------------------------------------------------------------

RDC::OCC::WNT_WClass::WNT_WClass(RDC::OCC::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor, System::IntPtr theIcon, RDC::OCC::TCollection_AsciiString^ theMenuName)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, theCursor.ToPointer(), theIcon.ToPointer(), *(::TCollection_AsciiString*)theMenuName->NativeInstance);
}

RDC::OCC::WNT_WClass::WNT_WClass(RDC::OCC::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor, System::IntPtr theIcon)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, theCursor.ToPointer(), theIcon.ToPointer(), ::TCollection_AsciiString());
}

RDC::OCC::WNT_WClass::WNT_WClass(RDC::OCC::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, theCursor.ToPointer(), nullptr, ::TCollection_AsciiString());
}

RDC::OCC::WNT_WClass::WNT_WClass(RDC::OCC::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, nullptr, nullptr, ::TCollection_AsciiString());
}

RDC::OCC::WNT_WClass::WNT_WClass(RDC::OCC::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, 0, nullptr, nullptr, ::TCollection_AsciiString());
}

RDC::OCC::WNT_WClass::WNT_WClass(RDC::OCC::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, 0, 0, nullptr, nullptr, ::TCollection_AsciiString());
}

System::IntPtr RDC::OCC::WNT_WClass::WndProc()
{
	void* _result = ((::WNT_WClass*)_NativeInstance)->WndProc();
	return System::IntPtr(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::WNT_WClass::Name()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = (::TCollection_AsciiString)((::WNT_WClass*)_NativeInstance)->Name();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

System::IntPtr RDC::OCC::WNT_WClass::Instance()
{
	void* _result = ((::WNT_WClass*)_NativeInstance)->Instance();
	return System::IntPtr(_result);
}

RDC::OCC::WNT_WClass^ RDC::OCC::WNT_WClass::CreateDowncasted(::WNT_WClass* instance)
{
	return gcnew RDC::OCC::WNT_WClass(instance);
}



//---------------------------------------------------------------------
//  Class  WNT_Window
//---------------------------------------------------------------------

RDC::OCC::WNT_Window::WNT_Window(System::String^ theTitle, RDC::OCC::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, RDC::OCC::Quantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu, System::IntPtr theClientStruct)
	: RDC::OCC::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
	pin_ptr<long unsigned int> pp_theStyle = &theStyle;
	NativeInstance = new ::WNT_Window(sz_theTitle, Handle(::WNT_WClass)(theClass->NativeInstance), *(long unsigned int*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, theParent.ToPointer(), theMenu.ToPointer(), theClientStruct.ToPointer());
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
}

RDC::OCC::WNT_Window::WNT_Window(System::String^ theTitle, RDC::OCC::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, RDC::OCC::Quantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu)
	: RDC::OCC::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
	pin_ptr<long unsigned int> pp_theStyle = &theStyle;
	NativeInstance = new ::WNT_Window(sz_theTitle, Handle(::WNT_WClass)(theClass->NativeInstance), *(long unsigned int*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, theParent.ToPointer(), theMenu.ToPointer(), nullptr);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
}

RDC::OCC::WNT_Window::WNT_Window(System::String^ theTitle, RDC::OCC::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, RDC::OCC::Quantity_NameOfColor theBackColor, System::IntPtr theParent)
	: RDC::OCC::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
	pin_ptr<long unsigned int> pp_theStyle = &theStyle;
	NativeInstance = new ::WNT_Window(sz_theTitle, Handle(::WNT_WClass)(theClass->NativeInstance), *(long unsigned int*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, theParent.ToPointer(), nullptr, nullptr);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
}

RDC::OCC::WNT_Window::WNT_Window(System::String^ theTitle, RDC::OCC::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, RDC::OCC::Quantity_NameOfColor theBackColor)
	: RDC::OCC::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
	pin_ptr<long unsigned int> pp_theStyle = &theStyle;
	NativeInstance = new ::WNT_Window(sz_theTitle, Handle(::WNT_WClass)(theClass->NativeInstance), *(long unsigned int*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, nullptr, nullptr, nullptr);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
}

RDC::OCC::WNT_Window::WNT_Window(System::String^ theTitle, RDC::OCC::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight)
	: RDC::OCC::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
	pin_ptr<long unsigned int> pp_theStyle = &theStyle;
	NativeInstance = new ::WNT_Window(sz_theTitle, Handle(::WNT_WClass)(theClass->NativeInstance), *(long unsigned int*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, Quantity_NOC_MATRAGRAY, nullptr, nullptr, nullptr);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
}

RDC::OCC::WNT_Window::WNT_Window(System::IntPtr theHandle, RDC::OCC::Quantity_NameOfColor theBackColor)
	: RDC::OCC::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_Window(theHandle.ToPointer(), (::Quantity_NameOfColor)theBackColor);
}

RDC::OCC::WNT_Window::WNT_Window(System::IntPtr theHandle)
	: RDC::OCC::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_Window(theHandle.ToPointer(), Quantity_NOC_MATRAGRAY);
}

unsigned int RDC::OCC::WNT_Window::VirtualKeyFromNative(int theKey)
{
	unsigned int _result = ::WNT_Window::VirtualKeyFromNative(theKey);
	return _result;
}

unsigned int RDC::OCC::WNT_Window::MouseKeyFlagsFromEvent(long long unsigned int theKeys)
{
	unsigned int _result = ::WNT_Window::MouseKeyFlagsFromEvent(theKeys);
	return _result;
}

unsigned int RDC::OCC::WNT_Window::MouseButtonsFromEvent(long long unsigned int theKeys)
{
	unsigned int _result = ::WNT_Window::MouseButtonsFromEvent(theKeys);
	return _result;
}

unsigned int RDC::OCC::WNT_Window::MouseKeyFlagsAsync()
{
	unsigned int _result = ::WNT_Window::MouseKeyFlagsAsync();
	return _result;
}

unsigned int RDC::OCC::WNT_Window::MouseButtonsAsync()
{
	unsigned int _result = ::WNT_Window::MouseButtonsAsync();
	return _result;
}

void RDC::OCC::WNT_Window::SetCursor(System::IntPtr theCursor)
{
	((::WNT_Window*)_NativeInstance)->SetCursor(theCursor.ToPointer());
}

void RDC::OCC::WNT_Window::Map()
{
	((::WNT_Window*)_NativeInstance)->Map();
}

void RDC::OCC::WNT_Window::Map(int theMapMode)
{
	((::WNT_Window*)_NativeInstance)->Map(theMapMode);
}

void RDC::OCC::WNT_Window::Unmap()
{
	((::WNT_Window*)_NativeInstance)->Unmap();
}

RDC::OCC::Aspect_TypeOfResize RDC::OCC::WNT_Window::DoResize()
{
	::Aspect_TypeOfResize _result = ((::WNT_Window*)_NativeInstance)->DoResize();
	return (RDC::OCC::Aspect_TypeOfResize)_result;
}

bool RDC::OCC::WNT_Window::DoMapping()
{
	bool _result = ((::WNT_Window*)_NativeInstance)->DoMapping();
	return _result;
}

void RDC::OCC::WNT_Window::SetPos(int X, int Y, int X1, int Y1)
{
	((::WNT_Window*)_NativeInstance)->SetPos(X, Y, X1, Y1);
}

bool RDC::OCC::WNT_Window::IsMapped()
{
	bool _result = ((::WNT_Window*)_NativeInstance)->IsMapped();
	return _result;
}

double RDC::OCC::WNT_Window::Ratio()
{
	double _result = ((::WNT_Window*)_NativeInstance)->Ratio();
	return _result;
}

void RDC::OCC::WNT_Window::Position(int% X1, int% Y1, int% X2, int% Y2)
{
	pin_ptr<int> pp_X1 = &X1;
	pin_ptr<int> pp_Y1 = &Y1;
	pin_ptr<int> pp_X2 = &X2;
	pin_ptr<int> pp_Y2 = &Y2;
	((::WNT_Window*)_NativeInstance)->Position(*(int*)pp_X1, *(int*)pp_Y1, *(int*)pp_X2, *(int*)pp_Y2);
}

void RDC::OCC::WNT_Window::Size(int% Width, int% Height)
{
	pin_ptr<int> pp_Width = &Width;
	pin_ptr<int> pp_Height = &Height;
	((::WNT_Window*)_NativeInstance)->Size(*(int*)pp_Width, *(int*)pp_Height);
}

System::IntPtr RDC::OCC::WNT_Window::NativeHandle()
{
	void* _result = ((::WNT_Window*)_NativeInstance)->NativeHandle();
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::WNT_Window::NativeParentHandle()
{
	void* _result = ((::WNT_Window*)_NativeInstance)->NativeParentHandle();
	return System::IntPtr(_result);
}

void RDC::OCC::WNT_Window::SetTitle(RDC::OCC::TCollection_AsciiString^ theTitle)
{
	((::WNT_Window*)_NativeInstance)->SetTitle(*(::TCollection_AsciiString*)theTitle->NativeInstance);
}

void RDC::OCC::WNT_Window::InvalidateContent()
{
	((::WNT_Window*)_NativeInstance)->InvalidateContent(::opencascade::handle<::Aspect_DisplayConnection>());
}

System::IntPtr RDC::OCC::WNT_Window::HWindow()
{
	void* _result = ((::WNT_Window*)_NativeInstance)->HWindow();
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::WNT_Window::HParentWindow()
{
	void* _result = ((::WNT_Window*)_NativeInstance)->HParentWindow();
	return System::IntPtr(_result);
}

int RDC::OCC::WNT_Window::RegisterRawInputDevices(unsigned int theRawDeviceMask)
{
	int _result = ((::WNT_Window*)_NativeInstance)->RegisterRawInputDevices(theRawDeviceMask);
	return _result;
}

RDC::OCC::WNT_Window^ RDC::OCC::WNT_Window::CreateDowncasted(::WNT_Window* instance)
{
	return gcnew RDC::OCC::WNT_Window(instance);
}


