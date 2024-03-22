// Generated wrapper code for package V3d

#include "OcctPCH.h"
#include "V3d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Graphic3d.h"
#include "Aspect.h"
#include "Quantity.h"
#include "Bnd.h"
#include "gp.h"
#include "Image.h"
#include "TColStd.h"
#include "TCollection.h"
#include "Prs3d.h"


//---------------------------------------------------------------------
//  Class  V3d_ListOfLight
//---------------------------------------------------------------------

RDC::OCC::V3d_ListOfLight::V3d_ListOfLight()
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ListOfLight();
}

RDC::OCC::V3d_ListOfLight::V3d_ListOfLight(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ListOfLight(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::V3d_ListOfLight::Size()
{
    int _result = ((::V3d_ListOfLight*)_NativeInstance)->Size();
    return _result;
}

RDC::OCC::V3d_ListOfLight^ RDC::OCC::V3d_ListOfLight::Assign(RDC::OCC::V3d_ListOfLight^ theOther)
{
    ::V3d_ListOfLight* _result = new ::V3d_ListOfLight();
    *_result = ((::V3d_ListOfLight*)_NativeInstance)->Assign(*(::V3d_ListOfLight*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::V3d_ListOfLight(_result);
}

void RDC::OCC::V3d_ListOfLight::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::V3d_ListOfLight*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::V3d_ListOfLight::Clear()
{
    ((::V3d_ListOfLight*)_NativeInstance)->Clear(0L);
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_ListOfLight::First()
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_ListOfLight*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_ListOfLight::Last()
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_ListOfLight*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_ListOfLight::Append(RDC::OCC::Graphic3d_CLight^ theItem)
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_ListOfLight*)_NativeInstance)->Append(Handle(::Graphic3d_CLight)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_ListOfLight::Prepend(RDC::OCC::Graphic3d_CLight^ theItem)
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_ListOfLight*)_NativeInstance)->Prepend(Handle(::Graphic3d_CLight)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_ListOfLight::RemoveFirst()
{
    ((::V3d_ListOfLight*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::V3d_ListOfLight::Remove(RDC::OCC::V3d_ListOfLight::Iterator^ theIter)
{
    ((::V3d_ListOfLight*)_NativeInstance)->Remove(*(::V3d_ListOfLight::Iterator*)theIter->NativeInstance);
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_ListOfLight::InsertBefore(RDC::OCC::Graphic3d_CLight^ theItem, RDC::OCC::V3d_ListOfLight::Iterator^ theIter)
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_ListOfLight*)_NativeInstance)->InsertBefore(Handle(::Graphic3d_CLight)(theItem->NativeInstance), *(::V3d_ListOfLight::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_ListOfLight::InsertAfter(RDC::OCC::Graphic3d_CLight^ theItem, RDC::OCC::V3d_ListOfLight::Iterator^ theIter)
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_ListOfLight*)_NativeInstance)->InsertAfter(Handle(::Graphic3d_CLight)(theItem->NativeInstance), *(::V3d_ListOfLight::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_ListOfLight::Reverse()
{
    ((::V3d_ListOfLight*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  V3d_ListOfLight::Iterator
//---------------------------------------------------------------------

RDC::OCC::V3d_ListOfLight::Iterator::Iterator()
    : RDC::OCC::BaseClass<::V3d_ListOfLight::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ListOfLight::Iterator();
}

bool RDC::OCC::V3d_ListOfLight::Iterator::More()
{
    bool _result = ((::V3d_ListOfLight::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::V3d_ListOfLight::Iterator::Next()
{
    ((::V3d_ListOfLight::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_ListOfLight::Iterator::Value()
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_ListOfLight::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_ListOfLight::Iterator::ChangeValue()
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_ListOfLight::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  V3d_ListOfLightIterator
//---------------------------------------------------------------------

RDC::OCC::V3d_ListOfLightIterator::V3d_ListOfLightIterator()
    : RDC::OCC::BaseClass<::V3d_ListOfLightIterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ListOfLightIterator();
}

RDC::OCC::V3d_ListOfLightIterator::V3d_ListOfLightIterator(RDC::OCC::NCollection_BaseList^ theList)
    : RDC::OCC::BaseClass<::V3d_ListOfLightIterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ListOfLightIterator(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::V3d_ListOfLightIterator::More()
{
    bool _result = ((::V3d_ListOfLightIterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::V3d_ListOfLightIterator::Next()
{
    ((::V3d_ListOfLightIterator*)_NativeInstance)->Next();
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_ListOfLightIterator::Value()
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_ListOfLightIterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_ListOfLightIterator::ChangeValue()
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_ListOfLightIterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  V3d_ListOfView
//---------------------------------------------------------------------

RDC::OCC::V3d_ListOfView::V3d_ListOfView()
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ListOfView();
}

RDC::OCC::V3d_ListOfView::V3d_ListOfView(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ListOfView(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::V3d_ListOfView::Size()
{
    int _result = ((::V3d_ListOfView*)_NativeInstance)->Size();
    return _result;
}

RDC::OCC::V3d_ListOfView^ RDC::OCC::V3d_ListOfView::Assign(RDC::OCC::V3d_ListOfView^ theOther)
{
    ::V3d_ListOfView* _result = new ::V3d_ListOfView();
    *_result = ((::V3d_ListOfView*)_NativeInstance)->Assign(*(::V3d_ListOfView*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::V3d_ListOfView(_result);
}

void RDC::OCC::V3d_ListOfView::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::V3d_ListOfView*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::V3d_ListOfView::Clear()
{
    ((::V3d_ListOfView*)_NativeInstance)->Clear(0L);
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_ListOfView::First()
{
    Handle(::V3d_View) _result = ((::V3d_ListOfView*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_ListOfView::Last()
{
    Handle(::V3d_View) _result = ((::V3d_ListOfView*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_ListOfView::Append(RDC::OCC::V3d_View^ theItem)
{
    Handle(::V3d_View) _result = ((::V3d_ListOfView*)_NativeInstance)->Append(Handle(::V3d_View)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_ListOfView::Prepend(RDC::OCC::V3d_View^ theItem)
{
    Handle(::V3d_View) _result = ((::V3d_ListOfView*)_NativeInstance)->Prepend(Handle(::V3d_View)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_ListOfView::RemoveFirst()
{
    ((::V3d_ListOfView*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::V3d_ListOfView::Remove(RDC::OCC::V3d_ListOfView::Iterator^ theIter)
{
    ((::V3d_ListOfView*)_NativeInstance)->Remove(*(::V3d_ListOfView::Iterator*)theIter->NativeInstance);
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_ListOfView::InsertBefore(RDC::OCC::V3d_View^ theItem, RDC::OCC::V3d_ListOfView::Iterator^ theIter)
{
    Handle(::V3d_View) _result = ((::V3d_ListOfView*)_NativeInstance)->InsertBefore(Handle(::V3d_View)(theItem->NativeInstance), *(::V3d_ListOfView::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_ListOfView::InsertAfter(RDC::OCC::V3d_View^ theItem, RDC::OCC::V3d_ListOfView::Iterator^ theIter)
{
    Handle(::V3d_View) _result = ((::V3d_ListOfView*)_NativeInstance)->InsertAfter(Handle(::V3d_View)(theItem->NativeInstance), *(::V3d_ListOfView::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_ListOfView::Reverse()
{
    ((::V3d_ListOfView*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  V3d_ListOfView::Iterator
//---------------------------------------------------------------------

RDC::OCC::V3d_ListOfView::Iterator::Iterator()
    : RDC::OCC::BaseClass<::V3d_ListOfView::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ListOfView::Iterator();
}

bool RDC::OCC::V3d_ListOfView::Iterator::More()
{
    bool _result = ((::V3d_ListOfView::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::V3d_ListOfView::Iterator::Next()
{
    ((::V3d_ListOfView::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_ListOfView::Iterator::Value()
{
    Handle(::V3d_View) _result = ((::V3d_ListOfView::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_ListOfView::Iterator::ChangeValue()
{
    Handle(::V3d_View) _result = ((::V3d_ListOfView::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  V3d_ListOfViewIterator
//---------------------------------------------------------------------

RDC::OCC::V3d_ListOfViewIterator::V3d_ListOfViewIterator()
    : RDC::OCC::BaseClass<::V3d_ListOfViewIterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ListOfViewIterator();
}

RDC::OCC::V3d_ListOfViewIterator::V3d_ListOfViewIterator(RDC::OCC::NCollection_BaseList^ theList)
    : RDC::OCC::BaseClass<::V3d_ListOfViewIterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ListOfViewIterator(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::V3d_ListOfViewIterator::More()
{
    bool _result = ((::V3d_ListOfViewIterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::V3d_ListOfViewIterator::Next()
{
    ((::V3d_ListOfViewIterator*)_NativeInstance)->Next();
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_ListOfViewIterator::Value()
{
    Handle(::V3d_View) _result = ((::V3d_ListOfViewIterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_ListOfViewIterator::ChangeValue()
{
    Handle(::V3d_View) _result = ((::V3d_ListOfViewIterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  V3d_ImageDumpOptions
//---------------------------------------------------------------------

RDC::OCC::V3d_ImageDumpOptions::V3d_ImageDumpOptions()
    : RDC::OCC::BaseClass<::V3d_ImageDumpOptions>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d_ImageDumpOptions();
}



//---------------------------------------------------------------------
//  Class  V3d_View
//---------------------------------------------------------------------

RDC::OCC::V3d_View::V3d_View(RDC::OCC::V3d_Viewer^ theViewer, RDC::OCC::V3d_TypeOfView theType)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_View(Handle(::V3d_Viewer)(theViewer->NativeInstance), (::V3d_TypeOfView)theType);
}

RDC::OCC::V3d_View::V3d_View(RDC::OCC::V3d_Viewer^ theViewer)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_View(Handle(::V3d_Viewer)(theViewer->NativeInstance), V3d_ORTHOGRAPHIC);
}

RDC::OCC::V3d_View::V3d_View(RDC::OCC::V3d_Viewer^ theViewer, RDC::OCC::V3d_View^ theView)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_View(Handle(::V3d_Viewer)(theViewer->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::V3d_View::SetWindow(RDC::OCC::Aspect_Window^ theWindow, System::IntPtr theContext)
{
    ((::V3d_View*)_NativeInstance)->SetWindow(Handle(::Aspect_Window)(theWindow->NativeInstance), theContext.ToPointer());
}

void RDC::OCC::V3d_View::SetWindow(RDC::OCC::Aspect_Window^ theWindow)
{
    ((::V3d_View*)_NativeInstance)->SetWindow(Handle(::Aspect_Window)(theWindow->NativeInstance), nullptr);
}

void RDC::OCC::V3d_View::SetWindow(RDC::OCC::V3d_View^ theParentView, RDC::OCC::Graphic3d_Vec2d^ theSize, RDC::OCC::Aspect_TypeOfTriedronPosition theCorner, RDC::OCC::Graphic3d_Vec2d^ theOffset, RDC::OCC::Graphic3d_Vec2i^ theMargins)
{
    ((::V3d_View*)_NativeInstance)->SetWindow(Handle(::V3d_View)(theParentView->NativeInstance), *(::Graphic3d_Vec2d*)theSize->NativeInstance, (::Aspect_TypeOfTriedronPosition)theCorner, *(::Graphic3d_Vec2d*)theOffset->NativeInstance, *(::Graphic3d_Vec2i*)theMargins->NativeInstance);
}

void RDC::OCC::V3d_View::SetWindow(RDC::OCC::V3d_View^ theParentView, RDC::OCC::Graphic3d_Vec2d^ theSize, RDC::OCC::Aspect_TypeOfTriedronPosition theCorner, RDC::OCC::Graphic3d_Vec2d^ theOffset)
{
    ((::V3d_View*)_NativeInstance)->SetWindow(Handle(::V3d_View)(theParentView->NativeInstance), *(::Graphic3d_Vec2d*)theSize->NativeInstance, (::Aspect_TypeOfTriedronPosition)theCorner, *(::Graphic3d_Vec2d*)theOffset->NativeInstance, ::Graphic3d_Vec2i());
}

void RDC::OCC::V3d_View::SetWindow(RDC::OCC::V3d_View^ theParentView, RDC::OCC::Graphic3d_Vec2d^ theSize, RDC::OCC::Aspect_TypeOfTriedronPosition theCorner)
{
    ((::V3d_View*)_NativeInstance)->SetWindow(Handle(::V3d_View)(theParentView->NativeInstance), *(::Graphic3d_Vec2d*)theSize->NativeInstance, (::Aspect_TypeOfTriedronPosition)theCorner, ::Graphic3d_Vec2d(), ::Graphic3d_Vec2i());
}

void RDC::OCC::V3d_View::SetWindow(RDC::OCC::V3d_View^ theParentView, RDC::OCC::Graphic3d_Vec2d^ theSize)
{
    ((::V3d_View*)_NativeInstance)->SetWindow(Handle(::V3d_View)(theParentView->NativeInstance), *(::Graphic3d_Vec2d*)theSize->NativeInstance, Aspect_TOTP_LEFT_UPPER, ::Graphic3d_Vec2d(), ::Graphic3d_Vec2i());
}

void RDC::OCC::V3d_View::SetMagnify(RDC::OCC::Aspect_Window^ theWindow, RDC::OCC::V3d_View^ thePreviousView, int theX1, int theY1, int theX2, int theY2)
{
    ((::V3d_View*)_NativeInstance)->SetMagnify(Handle(::Aspect_Window)(theWindow->NativeInstance), Handle(::V3d_View)(thePreviousView->NativeInstance), theX1, theY1, theX2, theY2);
}

void RDC::OCC::V3d_View::Remove()
{
    ((::V3d_View*)_NativeInstance)->Remove();
}

void RDC::OCC::V3d_View::Update()
{
    ((::V3d_View*)_NativeInstance)->Update();
}

void RDC::OCC::V3d_View::Redraw()
{
    ((::V3d_View*)_NativeInstance)->Redraw();
}

void RDC::OCC::V3d_View::RedrawImmediate()
{
    ((::V3d_View*)_NativeInstance)->RedrawImmediate();
}

void RDC::OCC::V3d_View::Invalidate()
{
    ((::V3d_View*)_NativeInstance)->Invalidate();
}

bool RDC::OCC::V3d_View::IsInvalidated()
{
    bool _result = ((::V3d_View*)_NativeInstance)->IsInvalidated();
    return _result;
}

bool RDC::OCC::V3d_View::IsInvalidatedImmediate()
{
    bool _result = ((::V3d_View*)_NativeInstance)->IsInvalidatedImmediate();
    return _result;
}

void RDC::OCC::V3d_View::InvalidateImmediate()
{
    ((::V3d_View*)_NativeInstance)->InvalidateImmediate();
}

void RDC::OCC::V3d_View::MustBeResized()
{
    ((::V3d_View*)_NativeInstance)->MustBeResized();
}

void RDC::OCC::V3d_View::DoMapping()
{
    ((::V3d_View*)_NativeInstance)->DoMapping();
}

bool RDC::OCC::V3d_View::IsEmpty()
{
    bool _result = ((::V3d_View*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::V3d_View::UpdateLights()
{
    ((::V3d_View*)_NativeInstance)->UpdateLights();
}

void RDC::OCC::V3d_View::SetAutoZFitMode(bool theIsOn, double theScaleFactor)
{
    ((::V3d_View*)_NativeInstance)->SetAutoZFitMode(theIsOn, theScaleFactor);
}

void RDC::OCC::V3d_View::SetAutoZFitMode(bool theIsOn)
{
    ((::V3d_View*)_NativeInstance)->SetAutoZFitMode(theIsOn, 1.);
}

bool RDC::OCC::V3d_View::AutoZFitMode()
{
    bool _result = ((::V3d_View*)_NativeInstance)->AutoZFitMode();
    return _result;
}

double RDC::OCC::V3d_View::AutoZFitScaleFactor()
{
    double _result = ((::V3d_View*)_NativeInstance)->AutoZFitScaleFactor();
    return _result;
}

void RDC::OCC::V3d_View::AutoZFit()
{
    ((::V3d_View*)_NativeInstance)->AutoZFit();
}

void RDC::OCC::V3d_View::ZFitAll(double theScaleFactor)
{
    ((::V3d_View*)_NativeInstance)->ZFitAll(theScaleFactor);
}

void RDC::OCC::V3d_View::ZFitAll()
{
    ((::V3d_View*)_NativeInstance)->ZFitAll(1.);
}

void RDC::OCC::V3d_View::SetBackgroundColor(RDC::OCC::Quantity_TypeOfColor theType, double theV1, double theV2, double theV3)
{
    ((::V3d_View*)_NativeInstance)->SetBackgroundColor((::Quantity_TypeOfColor)theType, theV1, theV2, theV3);
}

void RDC::OCC::V3d_View::SetBackgroundColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::V3d_View*)_NativeInstance)->SetBackgroundColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::V3d_View::SetBgGradientColors(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2, RDC::OCC::Aspect_GradientFillMethod theFillStyle, bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->SetBgGradientColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, (::Aspect_GradientFillMethod)theFillStyle, theToUpdate);
}

void RDC::OCC::V3d_View::SetBgGradientColors(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2, RDC::OCC::Aspect_GradientFillMethod theFillStyle)
{
    ((::V3d_View*)_NativeInstance)->SetBgGradientColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, (::Aspect_GradientFillMethod)theFillStyle, false);
}

void RDC::OCC::V3d_View::SetBgGradientColors(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2)
{
    ((::V3d_View*)_NativeInstance)->SetBgGradientColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, Aspect_GradientFillMethod_Horizontal, false);
}

void RDC::OCC::V3d_View::SetBgGradientStyle(RDC::OCC::Aspect_GradientFillMethod theMethod, bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->SetBgGradientStyle((::Aspect_GradientFillMethod)theMethod, theToUpdate);
}

void RDC::OCC::V3d_View::SetBgGradientStyle(RDC::OCC::Aspect_GradientFillMethod theMethod)
{
    ((::V3d_View*)_NativeInstance)->SetBgGradientStyle((::Aspect_GradientFillMethod)theMethod, false);
}

void RDC::OCC::V3d_View::SetBgGradientStyle()
{
    ((::V3d_View*)_NativeInstance)->SetBgGradientStyle(Aspect_GradientFillMethod_Horizontal, false);
}

void RDC::OCC::V3d_View::SetBackgroundImage(System::String^ theFileName, RDC::OCC::Aspect_FillMethod theFillStyle, bool theToUpdate)
{
    const char* sz_theFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(theFileName);
    ((::V3d_View*)_NativeInstance)->SetBackgroundImage(sz_theFileName, (::Aspect_FillMethod)theFillStyle, theToUpdate);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFileName);
}

void RDC::OCC::V3d_View::SetBackgroundImage(System::String^ theFileName, RDC::OCC::Aspect_FillMethod theFillStyle)
{
    const char* sz_theFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(theFileName);
    ((::V3d_View*)_NativeInstance)->SetBackgroundImage(sz_theFileName, (::Aspect_FillMethod)theFillStyle, false);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFileName);
}

void RDC::OCC::V3d_View::SetBackgroundImage(System::String^ theFileName)
{
    const char* sz_theFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(theFileName);
    ((::V3d_View*)_NativeInstance)->SetBackgroundImage(sz_theFileName, Aspect_FM_CENTERED, false);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFileName);
}

void RDC::OCC::V3d_View::SetBackgroundImage(RDC::OCC::Graphic3d_Texture2D^ theTexture, RDC::OCC::Aspect_FillMethod theFillStyle, bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->SetBackgroundImage(Handle(::Graphic3d_Texture2D)(theTexture->NativeInstance), (::Aspect_FillMethod)theFillStyle, theToUpdate);
}

void RDC::OCC::V3d_View::SetBackgroundImage(RDC::OCC::Graphic3d_Texture2D^ theTexture, RDC::OCC::Aspect_FillMethod theFillStyle)
{
    ((::V3d_View*)_NativeInstance)->SetBackgroundImage(Handle(::Graphic3d_Texture2D)(theTexture->NativeInstance), (::Aspect_FillMethod)theFillStyle, false);
}

void RDC::OCC::V3d_View::SetBackgroundImage(RDC::OCC::Graphic3d_Texture2D^ theTexture)
{
    ((::V3d_View*)_NativeInstance)->SetBackgroundImage(Handle(::Graphic3d_Texture2D)(theTexture->NativeInstance), Aspect_FM_CENTERED, false);
}

void RDC::OCC::V3d_View::SetBgImageStyle(RDC::OCC::Aspect_FillMethod theFillStyle, bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->SetBgImageStyle((::Aspect_FillMethod)theFillStyle, theToUpdate);
}

void RDC::OCC::V3d_View::SetBgImageStyle(RDC::OCC::Aspect_FillMethod theFillStyle)
{
    ((::V3d_View*)_NativeInstance)->SetBgImageStyle((::Aspect_FillMethod)theFillStyle, false);
}

void RDC::OCC::V3d_View::SetBackgroundCubeMap(RDC::OCC::Graphic3d_CubeMap^ theCubeMap, bool theToUpdatePBREnv, bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->SetBackgroundCubeMap(Handle(::Graphic3d_CubeMap)(theCubeMap->NativeInstance), theToUpdatePBREnv, theToUpdate);
}

void RDC::OCC::V3d_View::SetBackgroundCubeMap(RDC::OCC::Graphic3d_CubeMap^ theCubeMap, bool theToUpdatePBREnv)
{
    ((::V3d_View*)_NativeInstance)->SetBackgroundCubeMap(Handle(::Graphic3d_CubeMap)(theCubeMap->NativeInstance), theToUpdatePBREnv, false);
}

void RDC::OCC::V3d_View::SetBackgroundCubeMap(RDC::OCC::Graphic3d_CubeMap^ theCubeMap)
{
    ((::V3d_View*)_NativeInstance)->SetBackgroundCubeMap(Handle(::Graphic3d_CubeMap)(theCubeMap->NativeInstance), true, false);
}

RDC::OCC::Aspect_SkydomeBackground^ RDC::OCC::V3d_View::BackgroundSkydome()
{
    ::Aspect_SkydomeBackground* _result = new ::Aspect_SkydomeBackground();
    *_result = (::Aspect_SkydomeBackground)((::V3d_View*)_NativeInstance)->BackgroundSkydome();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_SkydomeBackground(_result);
}

void RDC::OCC::V3d_View::SetBackgroundSkydome(RDC::OCC::Aspect_SkydomeBackground^ theAspect, bool theToUpdatePBREnv)
{
    ((::V3d_View*)_NativeInstance)->SetBackgroundSkydome(*(::Aspect_SkydomeBackground*)theAspect->NativeInstance, theToUpdatePBREnv);
}

void RDC::OCC::V3d_View::SetBackgroundSkydome(RDC::OCC::Aspect_SkydomeBackground^ theAspect)
{
    ((::V3d_View*)_NativeInstance)->SetBackgroundSkydome(*(::Aspect_SkydomeBackground*)theAspect->NativeInstance, true);
}

bool RDC::OCC::V3d_View::IsImageBasedLighting()
{
    bool _result = ((::V3d_View*)_NativeInstance)->IsImageBasedLighting();
    return _result;
}

void RDC::OCC::V3d_View::SetImageBasedLighting(bool theToEnableIBL, bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->SetImageBasedLighting(theToEnableIBL, theToUpdate);
}

void RDC::OCC::V3d_View::SetImageBasedLighting(bool theToEnableIBL)
{
    ((::V3d_View*)_NativeInstance)->SetImageBasedLighting(theToEnableIBL, false);
}

void RDC::OCC::V3d_View::GeneratePBREnvironment(bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->GeneratePBREnvironment(theToUpdate);
}

void RDC::OCC::V3d_View::GeneratePBREnvironment()
{
    ((::V3d_View*)_NativeInstance)->GeneratePBREnvironment(false);
}

void RDC::OCC::V3d_View::ClearPBREnvironment(bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->ClearPBREnvironment(theToUpdate);
}

void RDC::OCC::V3d_View::ClearPBREnvironment()
{
    ((::V3d_View*)_NativeInstance)->ClearPBREnvironment(false);
}

void RDC::OCC::V3d_View::SetTextureEnv(RDC::OCC::Graphic3d_TextureEnv^ theTexture)
{
    ((::V3d_View*)_NativeInstance)->SetTextureEnv(Handle(::Graphic3d_TextureEnv)(theTexture->NativeInstance));
}

void RDC::OCC::V3d_View::SetAxis(double X, double Y, double Z, double Vx, double Vy, double Vz)
{
    ((::V3d_View*)_NativeInstance)->SetAxis(X, Y, Z, Vx, Vy, Vz);
}

void RDC::OCC::V3d_View::SetVisualization(RDC::OCC::V3d_TypeOfVisualization theType)
{
    ((::V3d_View*)_NativeInstance)->SetVisualization((::V3d_TypeOfVisualization)theType);
}

void RDC::OCC::V3d_View::SetLightOn(RDC::OCC::Graphic3d_CLight^ theLight)
{
    ((::V3d_View*)_NativeInstance)->SetLightOn(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
}

void RDC::OCC::V3d_View::SetLightOn()
{
    ((::V3d_View*)_NativeInstance)->SetLightOn();
}

void RDC::OCC::V3d_View::SetLightOff(RDC::OCC::Graphic3d_CLight^ theLight)
{
    ((::V3d_View*)_NativeInstance)->SetLightOff(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
}

void RDC::OCC::V3d_View::SetLightOff()
{
    ((::V3d_View*)_NativeInstance)->SetLightOff();
}

bool RDC::OCC::V3d_View::IsActiveLight(RDC::OCC::Graphic3d_CLight^ theLight)
{
    bool _result = ((::V3d_View*)_NativeInstance)->IsActiveLight(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
    return _result;
}

bool RDC::OCC::V3d_View::SetImmediateUpdate(bool theImmediateUpdate)
{
    bool _result = ((::V3d_View*)_NativeInstance)->SetImmediateUpdate(theImmediateUpdate);
    return _result;
}

RDC::OCC::V3d_Trihedron^ RDC::OCC::V3d_View::Trihedron(bool theToCreate)
{
    Handle(::V3d_Trihedron) _result = ((::V3d_View*)_NativeInstance)->Trihedron(theToCreate);
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_Trihedron::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_Trihedron^ RDC::OCC::V3d_View::Trihedron()
{
    Handle(::V3d_Trihedron) _result = ((::V3d_View*)_NativeInstance)->Trihedron(true);
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_Trihedron::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_View::ZBufferTriedronSetup(RDC::OCC::Quantity_Color^ theXColor, RDC::OCC::Quantity_Color^ theYColor, RDC::OCC::Quantity_Color^ theZColor, double theSizeRatio, double theAxisDiametr, int theNbFacettes)
{
    ((::V3d_View*)_NativeInstance)->ZBufferTriedronSetup(*(::Quantity_Color*)theXColor->NativeInstance, *(::Quantity_Color*)theYColor->NativeInstance, *(::Quantity_Color*)theZColor->NativeInstance, theSizeRatio, theAxisDiametr, theNbFacettes);
}

void RDC::OCC::V3d_View::ZBufferTriedronSetup(RDC::OCC::Quantity_Color^ theXColor, RDC::OCC::Quantity_Color^ theYColor, RDC::OCC::Quantity_Color^ theZColor, double theSizeRatio, double theAxisDiametr)
{
    ((::V3d_View*)_NativeInstance)->ZBufferTriedronSetup(*(::Quantity_Color*)theXColor->NativeInstance, *(::Quantity_Color*)theYColor->NativeInstance, *(::Quantity_Color*)theZColor->NativeInstance, theSizeRatio, theAxisDiametr, 12);
}

void RDC::OCC::V3d_View::ZBufferTriedronSetup(RDC::OCC::Quantity_Color^ theXColor, RDC::OCC::Quantity_Color^ theYColor, RDC::OCC::Quantity_Color^ theZColor, double theSizeRatio)
{
    ((::V3d_View*)_NativeInstance)->ZBufferTriedronSetup(*(::Quantity_Color*)theXColor->NativeInstance, *(::Quantity_Color*)theYColor->NativeInstance, *(::Quantity_Color*)theZColor->NativeInstance, theSizeRatio, 0.050000000000000003, 12);
}

void RDC::OCC::V3d_View::ZBufferTriedronSetup(RDC::OCC::Quantity_Color^ theXColor, RDC::OCC::Quantity_Color^ theYColor, RDC::OCC::Quantity_Color^ theZColor)
{
    ((::V3d_View*)_NativeInstance)->ZBufferTriedronSetup(*(::Quantity_Color*)theXColor->NativeInstance, *(::Quantity_Color*)theYColor->NativeInstance, *(::Quantity_Color*)theZColor->NativeInstance, 0.80000000000000004, 0.050000000000000003, 12);
}

void RDC::OCC::V3d_View::ZBufferTriedronSetup(RDC::OCC::Quantity_Color^ theXColor, RDC::OCC::Quantity_Color^ theYColor)
{
    ((::V3d_View*)_NativeInstance)->ZBufferTriedronSetup(*(::Quantity_Color*)theXColor->NativeInstance, *(::Quantity_Color*)theYColor->NativeInstance, Quantity_NOC_BLUE1, 0.80000000000000004, 0.050000000000000003, 12);
}

void RDC::OCC::V3d_View::ZBufferTriedronSetup(RDC::OCC::Quantity_Color^ theXColor)
{
    ((::V3d_View*)_NativeInstance)->ZBufferTriedronSetup(*(::Quantity_Color*)theXColor->NativeInstance, Quantity_NOC_GREEN, Quantity_NOC_BLUE1, 0.80000000000000004, 0.050000000000000003, 12);
}

void RDC::OCC::V3d_View::ZBufferTriedronSetup()
{
    ((::V3d_View*)_NativeInstance)->ZBufferTriedronSetup(Quantity_NOC_RED, Quantity_NOC_GREEN, Quantity_NOC_BLUE1, 0.80000000000000004, 0.050000000000000003, 12);
}

void RDC::OCC::V3d_View::TriedronDisplay(RDC::OCC::Aspect_TypeOfTriedronPosition thePosition, RDC::OCC::Quantity_Color^ theColor, double theScale, RDC::OCC::V3d_TypeOfVisualization theMode)
{
    ((::V3d_View*)_NativeInstance)->TriedronDisplay((::Aspect_TypeOfTriedronPosition)thePosition, *(::Quantity_Color*)theColor->NativeInstance, theScale, (::V3d_TypeOfVisualization)theMode);
}

void RDC::OCC::V3d_View::TriedronDisplay(RDC::OCC::Aspect_TypeOfTriedronPosition thePosition, RDC::OCC::Quantity_Color^ theColor, double theScale)
{
    ((::V3d_View*)_NativeInstance)->TriedronDisplay((::Aspect_TypeOfTriedronPosition)thePosition, *(::Quantity_Color*)theColor->NativeInstance, theScale, V3d_WIREFRAME);
}

void RDC::OCC::V3d_View::TriedronDisplay(RDC::OCC::Aspect_TypeOfTriedronPosition thePosition, RDC::OCC::Quantity_Color^ theColor)
{
    ((::V3d_View*)_NativeInstance)->TriedronDisplay((::Aspect_TypeOfTriedronPosition)thePosition, *(::Quantity_Color*)theColor->NativeInstance, 0.02, V3d_WIREFRAME);
}

void RDC::OCC::V3d_View::TriedronDisplay(RDC::OCC::Aspect_TypeOfTriedronPosition thePosition)
{
    ((::V3d_View*)_NativeInstance)->TriedronDisplay((::Aspect_TypeOfTriedronPosition)thePosition, Quantity_NOC_WHITE, 0.02, V3d_WIREFRAME);
}

void RDC::OCC::V3d_View::TriedronDisplay()
{
    ((::V3d_View*)_NativeInstance)->TriedronDisplay(Aspect_TOTP_CENTER, Quantity_NOC_WHITE, 0.02, V3d_WIREFRAME);
}

void RDC::OCC::V3d_View::TriedronErase()
{
    ((::V3d_View*)_NativeInstance)->TriedronErase();
}

RDC::OCC::Graphic3d_GraduatedTrihedron^ RDC::OCC::V3d_View::GetGraduatedTrihedron()
{
    ::Graphic3d_GraduatedTrihedron* _result = new ::Graphic3d_GraduatedTrihedron();
    *_result = (::Graphic3d_GraduatedTrihedron)((::V3d_View*)_NativeInstance)->GetGraduatedTrihedron();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_GraduatedTrihedron(_result);
}

void RDC::OCC::V3d_View::GraduatedTrihedronDisplay(RDC::OCC::Graphic3d_GraduatedTrihedron^ theTrihedronData)
{
    ((::V3d_View*)_NativeInstance)->GraduatedTrihedronDisplay(*(::Graphic3d_GraduatedTrihedron*)theTrihedronData->NativeInstance);
}

void RDC::OCC::V3d_View::GraduatedTrihedronErase()
{
    ((::V3d_View*)_NativeInstance)->GraduatedTrihedronErase();
}

void RDC::OCC::V3d_View::SetFront()
{
    ((::V3d_View*)_NativeInstance)->SetFront();
}

void RDC::OCC::V3d_View::Rotate(double Ax, double Ay, double Az, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Rotate(Ax, Ay, Az, Start);
}

void RDC::OCC::V3d_View::Rotate(double Ax, double Ay, double Az)
{
    ((::V3d_View*)_NativeInstance)->Rotate(Ax, Ay, Az, true);
}

void RDC::OCC::V3d_View::Rotate(double Ax, double Ay, double Az, double X, double Y, double Z, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Rotate(Ax, Ay, Az, X, Y, Z, Start);
}

void RDC::OCC::V3d_View::Rotate(double Ax, double Ay, double Az, double X, double Y, double Z)
{
    ((::V3d_View*)_NativeInstance)->Rotate(Ax, Ay, Az, X, Y, Z, true);
}

void RDC::OCC::V3d_View::Rotate(RDC::OCC::V3d_TypeOfAxe Axe, double Angle, double X, double Y, double Z, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Rotate((::V3d_TypeOfAxe)Axe, Angle, X, Y, Z, Start);
}

void RDC::OCC::V3d_View::Rotate(RDC::OCC::V3d_TypeOfAxe Axe, double Angle, double X, double Y, double Z)
{
    ((::V3d_View*)_NativeInstance)->Rotate((::V3d_TypeOfAxe)Axe, Angle, X, Y, Z, true);
}

void RDC::OCC::V3d_View::Rotate(RDC::OCC::V3d_TypeOfAxe Axe, double Angle, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Rotate((::V3d_TypeOfAxe)Axe, Angle, Start);
}

void RDC::OCC::V3d_View::Rotate(RDC::OCC::V3d_TypeOfAxe Axe, double Angle)
{
    ((::V3d_View*)_NativeInstance)->Rotate((::V3d_TypeOfAxe)Axe, Angle, true);
}

void RDC::OCC::V3d_View::Rotate(double Angle, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Rotate(Angle, Start);
}

void RDC::OCC::V3d_View::Rotate(double Angle)
{
    ((::V3d_View*)_NativeInstance)->Rotate(Angle, true);
}

void RDC::OCC::V3d_View::Move(double Dx, double Dy, double Dz, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Move(Dx, Dy, Dz, Start);
}

void RDC::OCC::V3d_View::Move(double Dx, double Dy, double Dz)
{
    ((::V3d_View*)_NativeInstance)->Move(Dx, Dy, Dz, true);
}

void RDC::OCC::V3d_View::Move(RDC::OCC::V3d_TypeOfAxe Axe, double Length, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Move((::V3d_TypeOfAxe)Axe, Length, Start);
}

void RDC::OCC::V3d_View::Move(RDC::OCC::V3d_TypeOfAxe Axe, double Length)
{
    ((::V3d_View*)_NativeInstance)->Move((::V3d_TypeOfAxe)Axe, Length, true);
}

void RDC::OCC::V3d_View::Move(double Length, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Move(Length, Start);
}

void RDC::OCC::V3d_View::Move(double Length)
{
    ((::V3d_View*)_NativeInstance)->Move(Length, true);
}

void RDC::OCC::V3d_View::Translate(double Dx, double Dy, double Dz, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Translate(Dx, Dy, Dz, Start);
}

void RDC::OCC::V3d_View::Translate(double Dx, double Dy, double Dz)
{
    ((::V3d_View*)_NativeInstance)->Translate(Dx, Dy, Dz, true);
}

void RDC::OCC::V3d_View::Translate(RDC::OCC::V3d_TypeOfAxe Axe, double Length, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Translate((::V3d_TypeOfAxe)Axe, Length, Start);
}

void RDC::OCC::V3d_View::Translate(RDC::OCC::V3d_TypeOfAxe Axe, double Length)
{
    ((::V3d_View*)_NativeInstance)->Translate((::V3d_TypeOfAxe)Axe, Length, true);
}

void RDC::OCC::V3d_View::Translate(double Length, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Translate(Length, Start);
}

void RDC::OCC::V3d_View::Translate(double Length)
{
    ((::V3d_View*)_NativeInstance)->Translate(Length, true);
}

void RDC::OCC::V3d_View::Place(int theXp, int theYp, double theZoomFactor)
{
    ((::V3d_View*)_NativeInstance)->Place(theXp, theYp, theZoomFactor);
}

void RDC::OCC::V3d_View::Place(int theXp, int theYp)
{
    ((::V3d_View*)_NativeInstance)->Place(theXp, theYp, 1);
}

void RDC::OCC::V3d_View::Turn(double Ax, double Ay, double Az, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Turn(Ax, Ay, Az, Start);
}

void RDC::OCC::V3d_View::Turn(double Ax, double Ay, double Az)
{
    ((::V3d_View*)_NativeInstance)->Turn(Ax, Ay, Az, true);
}

void RDC::OCC::V3d_View::Turn(RDC::OCC::V3d_TypeOfAxe Axe, double Angle, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Turn((::V3d_TypeOfAxe)Axe, Angle, Start);
}

void RDC::OCC::V3d_View::Turn(RDC::OCC::V3d_TypeOfAxe Axe, double Angle)
{
    ((::V3d_View*)_NativeInstance)->Turn((::V3d_TypeOfAxe)Axe, Angle, true);
}

void RDC::OCC::V3d_View::Turn(double Angle, bool Start)
{
    ((::V3d_View*)_NativeInstance)->Turn(Angle, Start);
}

void RDC::OCC::V3d_View::Turn(double Angle)
{
    ((::V3d_View*)_NativeInstance)->Turn(Angle, true);
}

void RDC::OCC::V3d_View::SetTwist(double Angle)
{
    ((::V3d_View*)_NativeInstance)->SetTwist(Angle);
}

void RDC::OCC::V3d_View::SetEye(double X, double Y, double Z)
{
    ((::V3d_View*)_NativeInstance)->SetEye(X, Y, Z);
}

void RDC::OCC::V3d_View::SetDepth(double Depth)
{
    ((::V3d_View*)_NativeInstance)->SetDepth(Depth);
}

void RDC::OCC::V3d_View::SetProj(double Vx, double Vy, double Vz)
{
    ((::V3d_View*)_NativeInstance)->SetProj(Vx, Vy, Vz);
}

void RDC::OCC::V3d_View::SetProj(RDC::OCC::V3d_TypeOfOrientation theOrientation, bool theIsYup)
{
    ((::V3d_View*)_NativeInstance)->SetProj((::V3d_TypeOfOrientation)theOrientation, theIsYup);
}

void RDC::OCC::V3d_View::SetProj(RDC::OCC::V3d_TypeOfOrientation theOrientation)
{
    ((::V3d_View*)_NativeInstance)->SetProj((::V3d_TypeOfOrientation)theOrientation, false);
}

void RDC::OCC::V3d_View::SetAt(double X, double Y, double Z)
{
    ((::V3d_View*)_NativeInstance)->SetAt(X, Y, Z);
}

void RDC::OCC::V3d_View::SetUp(double Vx, double Vy, double Vz)
{
    ((::V3d_View*)_NativeInstance)->SetUp(Vx, Vy, Vz);
}

void RDC::OCC::V3d_View::SetUp(RDC::OCC::V3d_TypeOfOrientation Orientation)
{
    ((::V3d_View*)_NativeInstance)->SetUp((::V3d_TypeOfOrientation)Orientation);
}

void RDC::OCC::V3d_View::SetViewOrientationDefault()
{
    ((::V3d_View*)_NativeInstance)->SetViewOrientationDefault();
}

void RDC::OCC::V3d_View::ResetViewOrientation()
{
    ((::V3d_View*)_NativeInstance)->ResetViewOrientation();
}

void RDC::OCC::V3d_View::Panning(double theDXv, double theDYv, double theZoomFactor, bool theToStart)
{
    ((::V3d_View*)_NativeInstance)->Panning(theDXv, theDYv, theZoomFactor, theToStart);
}

void RDC::OCC::V3d_View::Panning(double theDXv, double theDYv, double theZoomFactor)
{
    ((::V3d_View*)_NativeInstance)->Panning(theDXv, theDYv, theZoomFactor, true);
}

void RDC::OCC::V3d_View::Panning(double theDXv, double theDYv)
{
    ((::V3d_View*)_NativeInstance)->Panning(theDXv, theDYv, 1, true);
}

void RDC::OCC::V3d_View::SetCenter(int theXp, int theYp)
{
    ((::V3d_View*)_NativeInstance)->SetCenter(theXp, theYp);
}

void RDC::OCC::V3d_View::SetSize(double theSize)
{
    ((::V3d_View*)_NativeInstance)->SetSize(theSize);
}

void RDC::OCC::V3d_View::SetZSize(double SetZSize)
{
    ((::V3d_View*)_NativeInstance)->SetZSize(SetZSize);
}

void RDC::OCC::V3d_View::SetZoom(double Coef, bool Start)
{
    ((::V3d_View*)_NativeInstance)->SetZoom(Coef, Start);
}

void RDC::OCC::V3d_View::SetZoom(double Coef)
{
    ((::V3d_View*)_NativeInstance)->SetZoom(Coef, true);
}

void RDC::OCC::V3d_View::SetScale(double Coef)
{
    ((::V3d_View*)_NativeInstance)->SetScale(Coef);
}

void RDC::OCC::V3d_View::SetAxialScale(double Sx, double Sy, double Sz)
{
    ((::V3d_View*)_NativeInstance)->SetAxialScale(Sx, Sy, Sz);
}

void RDC::OCC::V3d_View::FitAll(double theMargin, bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->FitAll(theMargin, theToUpdate);
}

void RDC::OCC::V3d_View::FitAll(double theMargin)
{
    ((::V3d_View*)_NativeInstance)->FitAll(theMargin, true);
}

void RDC::OCC::V3d_View::FitAll()
{
    ((::V3d_View*)_NativeInstance)->FitAll(0.01, true);
}

void RDC::OCC::V3d_View::FitAll(RDC::OCC::Bnd_Box^ theBox, double theMargin, bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->FitAll(*(::Bnd_Box*)theBox->NativeInstance, theMargin, theToUpdate);
}

void RDC::OCC::V3d_View::FitAll(RDC::OCC::Bnd_Box^ theBox, double theMargin)
{
    ((::V3d_View*)_NativeInstance)->FitAll(*(::Bnd_Box*)theBox->NativeInstance, theMargin, true);
}

void RDC::OCC::V3d_View::FitAll(RDC::OCC::Bnd_Box^ theBox)
{
    ((::V3d_View*)_NativeInstance)->FitAll(*(::Bnd_Box*)theBox->NativeInstance, 0.01, true);
}

void RDC::OCC::V3d_View::DepthFitAll(double Aspect, double Margin)
{
    ((::V3d_View*)_NativeInstance)->DepthFitAll(Aspect, Margin);
}

void RDC::OCC::V3d_View::DepthFitAll(double Aspect)
{
    ((::V3d_View*)_NativeInstance)->DepthFitAll(Aspect, 0.01);
}

void RDC::OCC::V3d_View::DepthFitAll()
{
    ((::V3d_View*)_NativeInstance)->DepthFitAll(0.01, 0.01);
}

void RDC::OCC::V3d_View::FitAll(double theMinXv, double theMinYv, double theMaxXv, double theMaxYv)
{
    ((::V3d_View*)_NativeInstance)->FitAll(theMinXv, theMinYv, theMaxXv, theMaxYv);
}

void RDC::OCC::V3d_View::WindowFit(int theMinXp, int theMinYp, int theMaxXp, int theMaxYp)
{
    ((::V3d_View*)_NativeInstance)->WindowFit(theMinXp, theMinYp, theMaxXp, theMaxYp);
}

void RDC::OCC::V3d_View::SetViewMappingDefault()
{
    ((::V3d_View*)_NativeInstance)->SetViewMappingDefault();
}

void RDC::OCC::V3d_View::ResetViewMapping()
{
    ((::V3d_View*)_NativeInstance)->ResetViewMapping();
}

void RDC::OCC::V3d_View::Reset(bool theToUpdate)
{
    ((::V3d_View*)_NativeInstance)->Reset(theToUpdate);
}

void RDC::OCC::V3d_View::Reset()
{
    ((::V3d_View*)_NativeInstance)->Reset(true);
}

double RDC::OCC::V3d_View::Convert(int Vp)
{
    double _result = ((::V3d_View*)_NativeInstance)->Convert(Vp);
    return _result;
}

void RDC::OCC::V3d_View::Convert(int Xp, int Yp, double% Xv, double% Yv)
{
    pin_ptr<double> pp_Xv = &Xv;
    pin_ptr<double> pp_Yv = &Yv;
    ((::V3d_View*)_NativeInstance)->Convert(Xp, Yp, *(double*)pp_Xv, *(double*)pp_Yv);
}

int RDC::OCC::V3d_View::Convert(double Vv)
{
    int _result = ((::V3d_View*)_NativeInstance)->Convert(Vv);
    return _result;
}

void RDC::OCC::V3d_View::Convert(double Xv, double Yv, int% Xp, int% Yp)
{
    pin_ptr<int> pp_Xp = &Xp;
    pin_ptr<int> pp_Yp = &Yp;
    ((::V3d_View*)_NativeInstance)->Convert(Xv, Yv, *(int*)pp_Xp, *(int*)pp_Yp);
}

void RDC::OCC::V3d_View::Convert(int Xp, int Yp, double% X, double% Y, double% Z)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    pin_ptr<double> pp_Z = &Z;
    ((::V3d_View*)_NativeInstance)->Convert(Xp, Yp, *(double*)pp_X, *(double*)pp_Y, *(double*)pp_Z);
}

void RDC::OCC::V3d_View::ConvertWithProj(int Xp, int Yp, double% X, double% Y, double% Z, double% Vx, double% Vy, double% Vz)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    pin_ptr<double> pp_Z = &Z;
    pin_ptr<double> pp_Vx = &Vx;
    pin_ptr<double> pp_Vy = &Vy;
    pin_ptr<double> pp_Vz = &Vz;
    ((::V3d_View*)_NativeInstance)->ConvertWithProj(Xp, Yp, *(double*)pp_X, *(double*)pp_Y, *(double*)pp_Z, *(double*)pp_Vx, *(double*)pp_Vy, *(double*)pp_Vz);
}

void RDC::OCC::V3d_View::ConvertToGrid(int Xp, int Yp, double% Xg, double% Yg, double% Zg)
{
    pin_ptr<double> pp_Xg = &Xg;
    pin_ptr<double> pp_Yg = &Yg;
    pin_ptr<double> pp_Zg = &Zg;
    ((::V3d_View*)_NativeInstance)->ConvertToGrid(Xp, Yp, *(double*)pp_Xg, *(double*)pp_Yg, *(double*)pp_Zg);
}

void RDC::OCC::V3d_View::ConvertToGrid(double X, double Y, double Z, double% Xg, double% Yg, double% Zg)
{
    pin_ptr<double> pp_Xg = &Xg;
    pin_ptr<double> pp_Yg = &Yg;
    pin_ptr<double> pp_Zg = &Zg;
    ((::V3d_View*)_NativeInstance)->ConvertToGrid(X, Y, Z, *(double*)pp_Xg, *(double*)pp_Yg, *(double*)pp_Zg);
}

void RDC::OCC::V3d_View::Convert(double X, double Y, double Z, int% Xp, int% Yp)
{
    pin_ptr<int> pp_Xp = &Xp;
    pin_ptr<int> pp_Yp = &Yp;
    ((::V3d_View*)_NativeInstance)->Convert(X, Y, Z, *(int*)pp_Xp, *(int*)pp_Yp);
}

void RDC::OCC::V3d_View::Project(double theX, double theY, double theZ, double% theXp, double% theYp)
{
    pin_ptr<double> pp_theXp = &theXp;
    pin_ptr<double> pp_theYp = &theYp;
    ((::V3d_View*)_NativeInstance)->Project(theX, theY, theZ, *(double*)pp_theXp, *(double*)pp_theYp);
}

void RDC::OCC::V3d_View::Project(double theX, double theY, double theZ, double% theXp, double% theYp, double% theZp)
{
    pin_ptr<double> pp_theXp = &theXp;
    pin_ptr<double> pp_theYp = &theYp;
    pin_ptr<double> pp_theZp = &theZp;
    ((::V3d_View*)_NativeInstance)->Project(theX, theY, theZ, *(double*)pp_theXp, *(double*)pp_theYp, *(double*)pp_theZp);
}

void RDC::OCC::V3d_View::BackgroundColor(RDC::OCC::Quantity_TypeOfColor Type, double% V1, double% V2, double% V3)
{
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_V2 = &V2;
    pin_ptr<double> pp_V3 = &V3;
    ((::V3d_View*)_NativeInstance)->BackgroundColor((::Quantity_TypeOfColor)Type, *(double*)pp_V1, *(double*)pp_V2, *(double*)pp_V3);
}

RDC::OCC::Quantity_Color^ RDC::OCC::V3d_View::BackgroundColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::V3d_View*)_NativeInstance)->BackgroundColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::V3d_View::GradientBackgroundColors(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2)
{
    ((::V3d_View*)_NativeInstance)->GradientBackgroundColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance);
}

RDC::OCC::Aspect_GradientBackground^ RDC::OCC::V3d_View::GradientBackground()
{
    ::Aspect_GradientBackground* _result = new ::Aspect_GradientBackground();
    *_result = ((::V3d_View*)_NativeInstance)->GradientBackground();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_GradientBackground(_result);
}

double RDC::OCC::V3d_View::Scale()
{
    double _result = ((::V3d_View*)_NativeInstance)->Scale();
    return _result;
}

void RDC::OCC::V3d_View::AxialScale(double% Sx, double% Sy, double% Sz)
{
    pin_ptr<double> pp_Sx = &Sx;
    pin_ptr<double> pp_Sy = &Sy;
    pin_ptr<double> pp_Sz = &Sz;
    ((::V3d_View*)_NativeInstance)->AxialScale(*(double*)pp_Sx, *(double*)pp_Sy, *(double*)pp_Sz);
}

void RDC::OCC::V3d_View::Size(double% Width, double% Height)
{
    pin_ptr<double> pp_Width = &Width;
    pin_ptr<double> pp_Height = &Height;
    ((::V3d_View*)_NativeInstance)->Size(*(double*)pp_Width, *(double*)pp_Height);
}

double RDC::OCC::V3d_View::ZSize()
{
    double _result = ((::V3d_View*)_NativeInstance)->ZSize();
    return _result;
}

void RDC::OCC::V3d_View::Eye(double% X, double% Y, double% Z)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    pin_ptr<double> pp_Z = &Z;
    ((::V3d_View*)_NativeInstance)->Eye(*(double*)pp_X, *(double*)pp_Y, *(double*)pp_Z);
}

void RDC::OCC::V3d_View::FocalReferencePoint(double% X, double% Y, double% Z)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    pin_ptr<double> pp_Z = &Z;
    ((::V3d_View*)_NativeInstance)->FocalReferencePoint(*(double*)pp_X, *(double*)pp_Y, *(double*)pp_Z);
}

void RDC::OCC::V3d_View::ProjReferenceAxe(int Xpix, int Ypix, double% XP, double% YP, double% ZP, double% VX, double% VY, double% VZ)
{
    pin_ptr<double> pp_XP = &XP;
    pin_ptr<double> pp_YP = &YP;
    pin_ptr<double> pp_ZP = &ZP;
    pin_ptr<double> pp_VX = &VX;
    pin_ptr<double> pp_VY = &VY;
    pin_ptr<double> pp_VZ = &VZ;
    ((::V3d_View*)_NativeInstance)->ProjReferenceAxe(Xpix, Ypix, *(double*)pp_XP, *(double*)pp_YP, *(double*)pp_ZP, *(double*)pp_VX, *(double*)pp_VY, *(double*)pp_VZ);
}

double RDC::OCC::V3d_View::Depth()
{
    double _result = ((::V3d_View*)_NativeInstance)->Depth();
    return _result;
}

void RDC::OCC::V3d_View::Proj(double% Vx, double% Vy, double% Vz)
{
    pin_ptr<double> pp_Vx = &Vx;
    pin_ptr<double> pp_Vy = &Vy;
    pin_ptr<double> pp_Vz = &Vz;
    ((::V3d_View*)_NativeInstance)->Proj(*(double*)pp_Vx, *(double*)pp_Vy, *(double*)pp_Vz);
}

void RDC::OCC::V3d_View::At(double% X, double% Y, double% Z)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    pin_ptr<double> pp_Z = &Z;
    ((::V3d_View*)_NativeInstance)->At(*(double*)pp_X, *(double*)pp_Y, *(double*)pp_Z);
}

void RDC::OCC::V3d_View::Up(double% Vx, double% Vy, double% Vz)
{
    pin_ptr<double> pp_Vx = &Vx;
    pin_ptr<double> pp_Vy = &Vy;
    pin_ptr<double> pp_Vz = &Vz;
    ((::V3d_View*)_NativeInstance)->Up(*(double*)pp_Vx, *(double*)pp_Vy, *(double*)pp_Vz);
}

double RDC::OCC::V3d_View::Twist()
{
    double _result = ((::V3d_View*)_NativeInstance)->Twist();
    return _result;
}

RDC::OCC::Graphic3d_TypeOfShadingModel RDC::OCC::V3d_View::ShadingModel()
{
    ::Graphic3d_TypeOfShadingModel _result = ((::V3d_View*)_NativeInstance)->ShadingModel();
    return (RDC::OCC::Graphic3d_TypeOfShadingModel)_result;
}

void RDC::OCC::V3d_View::SetShadingModel(RDC::OCC::Graphic3d_TypeOfShadingModel theShadingModel)
{
    ((::V3d_View*)_NativeInstance)->SetShadingModel((::Graphic3d_TypeOfShadingModel)theShadingModel);
}

RDC::OCC::Graphic3d_TextureEnv^ RDC::OCC::V3d_View::TextureEnv()
{
    Handle(::Graphic3d_TextureEnv) _result = ((::V3d_View*)_NativeInstance)->TextureEnv();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_TextureEnv::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_TypeOfVisualization RDC::OCC::V3d_View::Visualization()
{
    ::V3d_TypeOfVisualization _result = ((::V3d_View*)_NativeInstance)->Visualization();
    return (RDC::OCC::V3d_TypeOfVisualization)_result;
}

RDC::OCC::V3d_ListOfLight^ RDC::OCC::V3d_View::ActiveLights()
{
    ::V3d_ListOfLight* _result = new ::V3d_ListOfLight();
    *_result = (::V3d_ListOfLight)((::V3d_View*)_NativeInstance)->ActiveLights();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::V3d_ListOfLight(_result);
}

int RDC::OCC::V3d_View::LightLimit()
{
    int _result = ((::V3d_View*)_NativeInstance)->LightLimit();
    return _result;
}

RDC::OCC::V3d_Viewer^ RDC::OCC::V3d_View::Viewer()
{
    Handle(::V3d_Viewer) _result = ((::V3d_View*)_NativeInstance)->Viewer();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_Viewer::CreateDowncasted(_result.get());
}

bool RDC::OCC::V3d_View::IfWindow()
{
    bool _result = ((::V3d_View*)_NativeInstance)->IfWindow();
    return _result;
}

RDC::OCC::Aspect_Window^ RDC::OCC::V3d_View::Window()
{
    Handle(::Aspect_Window) _result = ((::V3d_View*)_NativeInstance)->Window();
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_Window::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_TypeOfView RDC::OCC::V3d_View::Type()
{
    ::V3d_TypeOfView _result = ((::V3d_View*)_NativeInstance)->Type();
    return (RDC::OCC::V3d_TypeOfView)_result;
}

void RDC::OCC::V3d_View::Pan(int theDXp, int theDYp, double theZoomFactor, bool theToStart)
{
    ((::V3d_View*)_NativeInstance)->Pan(theDXp, theDYp, theZoomFactor, theToStart);
}

void RDC::OCC::V3d_View::Pan(int theDXp, int theDYp, double theZoomFactor)
{
    ((::V3d_View*)_NativeInstance)->Pan(theDXp, theDYp, theZoomFactor, true);
}

void RDC::OCC::V3d_View::Pan(int theDXp, int theDYp)
{
    ((::V3d_View*)_NativeInstance)->Pan(theDXp, theDYp, 1, true);
}

void RDC::OCC::V3d_View::Zoom(int theXp1, int theYp1, int theXp2, int theYp2)
{
    ((::V3d_View*)_NativeInstance)->Zoom(theXp1, theYp1, theXp2, theYp2);
}

void RDC::OCC::V3d_View::StartZoomAtPoint(int theXp, int theYp)
{
    ((::V3d_View*)_NativeInstance)->StartZoomAtPoint(theXp, theYp);
}

void RDC::OCC::V3d_View::ZoomAtPoint(int theMouseStartX, int theMouseStartY, int theMouseEndX, int theMouseEndY)
{
    ((::V3d_View*)_NativeInstance)->ZoomAtPoint(theMouseStartX, theMouseStartY, theMouseEndX, theMouseEndY);
}

void RDC::OCC::V3d_View::AxialScale(int Dx, int Dy, RDC::OCC::V3d_TypeOfAxe Axis)
{
    ((::V3d_View*)_NativeInstance)->AxialScale(Dx, Dy, (::V3d_TypeOfAxe)Axis);
}

void RDC::OCC::V3d_View::StartRotation(int X, int Y, double zRotationThreshold)
{
    ((::V3d_View*)_NativeInstance)->StartRotation(X, Y, zRotationThreshold);
}

void RDC::OCC::V3d_View::StartRotation(int X, int Y)
{
    ((::V3d_View*)_NativeInstance)->StartRotation(X, Y, 0.);
}

void RDC::OCC::V3d_View::Rotation(int X, int Y)
{
    ((::V3d_View*)_NativeInstance)->Rotation(X, Y);
}

void RDC::OCC::V3d_View::SetFocale(double Focale)
{
    ((::V3d_View*)_NativeInstance)->SetFocale(Focale);
}

double RDC::OCC::V3d_View::Focale()
{
    double _result = ((::V3d_View*)_NativeInstance)->Focale();
    return _result;
}

RDC::OCC::Graphic3d_CView^ RDC::OCC::V3d_View::View()
{
    Handle(::Graphic3d_CView) _result = ((::V3d_View*)_NativeInstance)->View();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CView::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_View::SetComputedMode(bool theMode)
{
    ((::V3d_View*)_NativeInstance)->SetComputedMode(theMode);
}

bool RDC::OCC::V3d_View::ComputedMode()
{
    bool _result = ((::V3d_View*)_NativeInstance)->ComputedMode();
    return _result;
}

void RDC::OCC::V3d_View::WindowFitAll(int Xmin, int Ymin, int Xmax, int Ymax)
{
    ((::V3d_View*)_NativeInstance)->WindowFitAll(Xmin, Ymin, Xmax, Ymax);
}

bool RDC::OCC::V3d_View::FitMinMax(RDC::OCC::Graphic3d_Camera^ theCamera, RDC::OCC::Bnd_Box^ theBox, double theMargin, double theResolution, bool theToEnlargeIfLine)
{
    bool _result = ((::V3d_View*)_NativeInstance)->FitMinMax(Handle(::Graphic3d_Camera)(theCamera->NativeInstance), *(::Bnd_Box*)theBox->NativeInstance, theMargin, theResolution, theToEnlargeIfLine);
    return _result;
}

bool RDC::OCC::V3d_View::FitMinMax(RDC::OCC::Graphic3d_Camera^ theCamera, RDC::OCC::Bnd_Box^ theBox, double theMargin, double theResolution)
{
    bool _result = ((::V3d_View*)_NativeInstance)->FitMinMax(Handle(::Graphic3d_Camera)(theCamera->NativeInstance), *(::Bnd_Box*)theBox->NativeInstance, theMargin, theResolution, true);
    return _result;
}

bool RDC::OCC::V3d_View::FitMinMax(RDC::OCC::Graphic3d_Camera^ theCamera, RDC::OCC::Bnd_Box^ theBox, double theMargin)
{
    bool _result = ((::V3d_View*)_NativeInstance)->FitMinMax(Handle(::Graphic3d_Camera)(theCamera->NativeInstance), *(::Bnd_Box*)theBox->NativeInstance, theMargin, 0., true);
    return _result;
}

void RDC::OCC::V3d_View::SetGrid(RDC::OCC::Ax3 aPlane, RDC::OCC::Aspect_Grid^ aGrid)
{
    pin_ptr<RDC::OCC::Ax3> pp_aPlane = &aPlane;
    ((::V3d_View*)_NativeInstance)->SetGrid(*(gp_Ax3*)pp_aPlane, Handle(::Aspect_Grid)(aGrid->NativeInstance));
}

void RDC::OCC::V3d_View::SetGridActivity(bool aFlag)
{
    ((::V3d_View*)_NativeInstance)->SetGridActivity(aFlag);
}

bool RDC::OCC::V3d_View::Dump(System::String^ theFile, RDC::OCC::Graphic3d_BufferType theBufferType)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    pin_ptr<RDC::OCC::Graphic3d_BufferType> pp_theBufferType = &theBufferType;
    bool _result = ((::V3d_View*)_NativeInstance)->Dump(sz_theFile, *(::Graphic3d_BufferType*)pp_theBufferType);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::V3d_View::Dump(System::String^ theFile)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ((::V3d_View*)_NativeInstance)->Dump(sz_theFile, Graphic3d_BT_RGB);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::V3d_View::ToPixMap(RDC::OCC::Image_PixMap^ theImage, RDC::OCC::V3d_ImageDumpOptions^ theParams)
{
    bool _result = ((::V3d_View*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, *(::V3d_ImageDumpOptions*)theParams->NativeInstance);
    return _result;
}

bool RDC::OCC::V3d_View::ToPixMap(RDC::OCC::Image_PixMap^ theImage, int theWidth, int theHeight, RDC::OCC::Graphic3d_BufferType theBufferType, bool theToAdjustAspect, RDC::OCC::V3d_StereoDumpOptions theStereoOptions)
{
    pin_ptr<RDC::OCC::Graphic3d_BufferType> pp_theBufferType = &theBufferType;
    bool _result = ((::V3d_View*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, theWidth, theHeight, *(::Graphic3d_BufferType*)pp_theBufferType, theToAdjustAspect, (::V3d_StereoDumpOptions)theStereoOptions);
    return _result;
}

bool RDC::OCC::V3d_View::ToPixMap(RDC::OCC::Image_PixMap^ theImage, int theWidth, int theHeight, RDC::OCC::Graphic3d_BufferType theBufferType, bool theToAdjustAspect)
{
    pin_ptr<RDC::OCC::Graphic3d_BufferType> pp_theBufferType = &theBufferType;
    bool _result = ((::V3d_View*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, theWidth, theHeight, *(::Graphic3d_BufferType*)pp_theBufferType, theToAdjustAspect, V3d_SDO_MONO);
    return _result;
}

bool RDC::OCC::V3d_View::ToPixMap(RDC::OCC::Image_PixMap^ theImage, int theWidth, int theHeight, RDC::OCC::Graphic3d_BufferType theBufferType)
{
    pin_ptr<RDC::OCC::Graphic3d_BufferType> pp_theBufferType = &theBufferType;
    bool _result = ((::V3d_View*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, theWidth, theHeight, *(::Graphic3d_BufferType*)pp_theBufferType, true, V3d_SDO_MONO);
    return _result;
}

bool RDC::OCC::V3d_View::ToPixMap(RDC::OCC::Image_PixMap^ theImage, int theWidth, int theHeight)
{
    bool _result = ((::V3d_View*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, theWidth, theHeight, Graphic3d_BT_RGB, true, V3d_SDO_MONO);
    return _result;
}

void RDC::OCC::V3d_View::SetBackFacingModel(RDC::OCC::Graphic3d_TypeOfBackfacingModel theModel)
{
    ((::V3d_View*)_NativeInstance)->SetBackFacingModel((::Graphic3d_TypeOfBackfacingModel)theModel);
}

void RDC::OCC::V3d_View::SetBackFacingModel()
{
    ((::V3d_View*)_NativeInstance)->SetBackFacingModel(Graphic3d_TypeOfBackfacingModel_Auto);
}

RDC::OCC::Graphic3d_TypeOfBackfacingModel RDC::OCC::V3d_View::BackFacingModel()
{
    ::Graphic3d_TypeOfBackfacingModel _result = ((::V3d_View*)_NativeInstance)->BackFacingModel();
    return (RDC::OCC::Graphic3d_TypeOfBackfacingModel)_result;
}

void RDC::OCC::V3d_View::AddClipPlane(RDC::OCC::Graphic3d_ClipPlane^ thePlane)
{
    ((::V3d_View*)_NativeInstance)->AddClipPlane(Handle(::Graphic3d_ClipPlane)(thePlane->NativeInstance));
}

void RDC::OCC::V3d_View::RemoveClipPlane(RDC::OCC::Graphic3d_ClipPlane^ thePlane)
{
    ((::V3d_View*)_NativeInstance)->RemoveClipPlane(Handle(::Graphic3d_ClipPlane)(thePlane->NativeInstance));
}

RDC::OCC::Graphic3d_SequenceOfHClipPlane^ RDC::OCC::V3d_View::ClipPlanes()
{
    Handle(::Graphic3d_SequenceOfHClipPlane) _result = ((::V3d_View*)_NativeInstance)->ClipPlanes();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_SequenceOfHClipPlane::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_View::SetClipPlanes(RDC::OCC::Graphic3d_SequenceOfHClipPlane^ thePlanes)
{
    ((::V3d_View*)_NativeInstance)->SetClipPlanes(Handle(::Graphic3d_SequenceOfHClipPlane)(thePlanes->NativeInstance));
}

int RDC::OCC::V3d_View::PlaneLimit()
{
    int _result = ((::V3d_View*)_NativeInstance)->PlaneLimit();
    return _result;
}

void RDC::OCC::V3d_View::SetCamera(RDC::OCC::Graphic3d_Camera^ theCamera)
{
    ((::V3d_View*)_NativeInstance)->SetCamera(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

RDC::OCC::Graphic3d_Camera^ RDC::OCC::V3d_View::Camera()
{
    Handle(::Graphic3d_Camera) _result = ((::V3d_View*)_NativeInstance)->Camera();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Camera::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_Camera^ RDC::OCC::V3d_View::DefaultCamera()
{
    Handle(::Graphic3d_Camera) _result = ((::V3d_View*)_NativeInstance)->DefaultCamera();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Camera::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_RenderingParams^ RDC::OCC::V3d_View::RenderingParams()
{
    ::Graphic3d_RenderingParams* _result = new ::Graphic3d_RenderingParams();
    *_result = (::Graphic3d_RenderingParams)((::V3d_View*)_NativeInstance)->RenderingParams();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_RenderingParams(_result);
}

bool RDC::OCC::V3d_View::IsCullingEnabled()
{
    bool _result = ((::V3d_View*)_NativeInstance)->IsCullingEnabled();
    return _result;
}

void RDC::OCC::V3d_View::SetFrustumCulling(bool theMode)
{
    ((::V3d_View*)_NativeInstance)->SetFrustumCulling(theMode);
}

void RDC::OCC::V3d_View::DiagnosticInformation(RDC::OCC::TColStd_IndexedDataMapOfStringString^ theDict, RDC::OCC::Graphic3d_DiagnosticInfo theFlags)
{
    ((::V3d_View*)_NativeInstance)->DiagnosticInformation(*(::TColStd_IndexedDataMapOfStringString*)theDict->NativeInstance, (::Graphic3d_DiagnosticInfo)theFlags);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::V3d_View::StatisticInformation()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::V3d_View*)_NativeInstance)->StatisticInformation();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::V3d_View::StatisticInformation(RDC::OCC::TColStd_IndexedDataMapOfStringString^ theDict)
{
    ((::V3d_View*)_NativeInstance)->StatisticInformation(*(::TColStd_IndexedDataMapOfStringString*)theDict->NativeInstance);
}

RDC::OCC::Pnt RDC::OCC::V3d_View::GravityPoint()
{
    ::gp_Pnt _nativeResult = ((::V3d_View*)_NativeInstance)->GravityPoint();
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::V3d_View::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::V3d_View*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::V3d_View::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::V3d_View*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool RDC::OCC::V3d_View::IsSubview()
{
    bool _result = ((::V3d_View*)_NativeInstance)->IsSubview();
    return _result;
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_View::ParentView()
{
    ::V3d_View* _result = ((::V3d_View*)_NativeInstance)->ParentView();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::V3d_View(_result);
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_View::PickSubview(RDC::OCC::Graphic3d_Vec2i^ thePnt)
{
    Handle(::V3d_View) _result = ((::V3d_View*)_NativeInstance)->PickSubview(*(::Graphic3d_Vec2i*)thePnt->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_View::AddSubview(RDC::OCC::V3d_View^ theView)
{
    ((::V3d_View*)_NativeInstance)->AddSubview(Handle(::V3d_View)(theView->NativeInstance));
}

bool RDC::OCC::V3d_View::RemoveSubview(RDC::OCC::V3d_View^ theView)
{
    bool _result = ((::V3d_View*)_NativeInstance)->RemoveSubview((::V3d_View*)theView->NativeInstance);
    return _result;
}

bool RDC::OCC::V3d_View::IfMoreLights()
{
    bool _result = ((::V3d_View*)_NativeInstance)->IfMoreLights();
    return _result;
}

void RDC::OCC::V3d_View::InitActiveLights()
{
    ((::V3d_View*)_NativeInstance)->InitActiveLights();
}

bool RDC::OCC::V3d_View::MoreActiveLights()
{
    bool _result = ((::V3d_View*)_NativeInstance)->MoreActiveLights();
    return _result;
}

void RDC::OCC::V3d_View::NextActiveLights()
{
    ((::V3d_View*)_NativeInstance)->NextActiveLights();
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_View::ActiveLight()
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_View*)_NativeInstance)->ActiveLight();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_View::CreateDowncasted(::V3d_View* instance)
{
    return gcnew RDC::OCC::V3d_View( instance );
}



//---------------------------------------------------------------------
//  Class  V3d
//---------------------------------------------------------------------

RDC::OCC::V3d::V3d()
    : RDC::OCC::BaseClass<::V3d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::V3d();
}

RDC::OCC::Dir RDC::OCC::V3d::GetProjAxis(RDC::OCC::V3d_TypeOfOrientation theOrientation)
{
    ::gp_Dir _nativeResult = ::V3d::GetProjAxis((::V3d_TypeOfOrientation)theOrientation);
    return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::V3d::ArrowOfRadius(RDC::OCC::Graphic3d_Group^ garrow, double X0, double Y0, double Z0, double DX, double DY, double DZ, double Alpha, double Lng)
{
    ::V3d::ArrowOfRadius(Handle(::Graphic3d_Group)(garrow->NativeInstance), X0, Y0, Z0, DX, DY, DZ, Alpha, Lng);
}

void RDC::OCC::V3d::CircleInPlane(RDC::OCC::Graphic3d_Group^ gcircle, double X0, double Y0, double Z0, double VX, double VY, double VZ, double Radius)
{
    ::V3d::CircleInPlane(Handle(::Graphic3d_Group)(gcircle->NativeInstance), X0, Y0, Z0, VX, VY, VZ, Radius);
}

void RDC::OCC::V3d::SwitchViewsinWindow(RDC::OCC::V3d_View^ aPreviousView, RDC::OCC::V3d_View^ aNextView)
{
    ::V3d::SwitchViewsinWindow(Handle(::V3d_View)(aPreviousView->NativeInstance), Handle(::V3d_View)(aNextView->NativeInstance));
}

System::String^ RDC::OCC::V3d::TypeOfOrientationToString(RDC::OCC::V3d_TypeOfOrientation theType)
{
    Standard_CString _result = ::V3d::TypeOfOrientationToString((::V3d_TypeOfOrientation)theType);
    return gcnew System::String(_result);
}

RDC::OCC::V3d_TypeOfOrientation RDC::OCC::V3d::TypeOfOrientationFromString(System::String^ theTypeString)
{
    const char* sz_theTypeString = (char*)(void*)Marshal::StringToHGlobalAnsi(theTypeString);
    ::V3d_TypeOfOrientation _result = ::V3d::TypeOfOrientationFromString(sz_theTypeString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTypeString);
    return (RDC::OCC::V3d_TypeOfOrientation)_result;
}

bool RDC::OCC::V3d::TypeOfOrientationFromString(System::String^ theTypeString, RDC::OCC::V3d_TypeOfOrientation% theType)
{
    const char* sz_theTypeString = (char*)(void*)Marshal::StringToHGlobalAnsi(theTypeString);
    pin_ptr<RDC::OCC::V3d_TypeOfOrientation> pp_theType = &theType;
    bool _result = ::V3d::TypeOfOrientationFromString(sz_theTypeString, *(::V3d_TypeOfOrientation*)pp_theType);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTypeString);
    return _result;
}



//---------------------------------------------------------------------
//  Class  V3d_AmbientLight
//---------------------------------------------------------------------

RDC::OCC::V3d_AmbientLight::V3d_AmbientLight(RDC::OCC::Quantity_Color^ theColor)
    : RDC::OCC::Graphic3d_CLight(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_AmbientLight(*(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::V3d_AmbientLight::V3d_AmbientLight()
    : RDC::OCC::Graphic3d_CLight(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_AmbientLight(Quantity_NOC_WHITE);
}

RDC::OCC::V3d_AmbientLight^ RDC::OCC::V3d_AmbientLight::CreateDowncasted(::V3d_AmbientLight* instance)
{
    return gcnew RDC::OCC::V3d_AmbientLight( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_BadValue
//---------------------------------------------------------------------

RDC::OCC::V3d_BadValue::V3d_BadValue()
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_BadValue();
}

RDC::OCC::V3d_BadValue::V3d_BadValue(System::String^ theMessage)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::V3d_BadValue(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::V3d_BadValue::V3d_BadValue(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::V3d_BadValue(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::V3d_BadValue::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::V3d_BadValue::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::V3d_BadValue::Raise()
{
    ::V3d_BadValue::Raise("");
}

RDC::OCC::V3d_BadValue^ RDC::OCC::V3d_BadValue::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::V3d_BadValue) _result = ::V3d_BadValue::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_BadValue::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_BadValue^ RDC::OCC::V3d_BadValue::NewInstance()
{
    Handle(::V3d_BadValue) _result = ::V3d_BadValue::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_BadValue::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_BadValue^ RDC::OCC::V3d_BadValue::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::V3d_BadValue) _result = ::V3d_BadValue::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_BadValue::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_BadValue^ RDC::OCC::V3d_BadValue::CreateDowncasted(::V3d_BadValue* instance)
{
    return gcnew RDC::OCC::V3d_BadValue( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_Viewer
//---------------------------------------------------------------------

RDC::OCC::V3d_Viewer::V3d_Viewer(RDC::OCC::Graphic3d_GraphicDriver^ theDriver)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_Viewer(Handle(::Graphic3d_GraphicDriver)(theDriver->NativeInstance));
}

bool RDC::OCC::V3d_Viewer::IfMoreViews()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->IfMoreViews();
    return _result;
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_Viewer::CreateView()
{
    Handle(::V3d_View) _result = ((::V3d_Viewer*)_NativeInstance)->CreateView();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_Viewer::SetViewOn()
{
    ((::V3d_Viewer*)_NativeInstance)->SetViewOn();
}

void RDC::OCC::V3d_Viewer::SetViewOn(RDC::OCC::V3d_View^ theView)
{
    ((::V3d_Viewer*)_NativeInstance)->SetViewOn(Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::V3d_Viewer::SetViewOff()
{
    ((::V3d_Viewer*)_NativeInstance)->SetViewOff();
}

void RDC::OCC::V3d_Viewer::SetViewOff(RDC::OCC::V3d_View^ theView)
{
    ((::V3d_Viewer*)_NativeInstance)->SetViewOff(Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::V3d_Viewer::Update()
{
    ((::V3d_Viewer*)_NativeInstance)->Update();
}

void RDC::OCC::V3d_Viewer::Redraw()
{
    ((::V3d_Viewer*)_NativeInstance)->Redraw();
}

void RDC::OCC::V3d_Viewer::RedrawImmediate()
{
    ((::V3d_Viewer*)_NativeInstance)->RedrawImmediate();
}

void RDC::OCC::V3d_Viewer::Invalidate()
{
    ((::V3d_Viewer*)_NativeInstance)->Invalidate();
}

void RDC::OCC::V3d_Viewer::Remove()
{
    ((::V3d_Viewer*)_NativeInstance)->Remove();
}

RDC::OCC::Graphic3d_GraphicDriver^ RDC::OCC::V3d_Viewer::Driver()
{
    Handle(::Graphic3d_GraphicDriver) _result = ((::V3d_Viewer*)_NativeInstance)->Driver();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_GraphicDriver::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_StructureManager^ RDC::OCC::V3d_Viewer::StructureManager()
{
    Handle(::Graphic3d_StructureManager) _result = ((::V3d_Viewer*)_NativeInstance)->StructureManager();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_StructureManager::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_RenderingParams^ RDC::OCC::V3d_Viewer::DefaultRenderingParams()
{
    ::Graphic3d_RenderingParams* _result = new ::Graphic3d_RenderingParams();
    *_result = (::Graphic3d_RenderingParams)((::V3d_Viewer*)_NativeInstance)->DefaultRenderingParams();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_RenderingParams(_result);
}

void RDC::OCC::V3d_Viewer::SetDefaultRenderingParams(RDC::OCC::Graphic3d_RenderingParams^ theParams)
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultRenderingParams(*(::Graphic3d_RenderingParams*)theParams->NativeInstance);
}

void RDC::OCC::V3d_Viewer::SetDefaultBackgroundColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultBackgroundColor(*(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::Aspect_GradientBackground^ RDC::OCC::V3d_Viewer::GetGradientBackground()
{
    ::Aspect_GradientBackground* _result = new ::Aspect_GradientBackground();
    *_result = (::Aspect_GradientBackground)((::V3d_Viewer*)_NativeInstance)->GetGradientBackground();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_GradientBackground(_result);
}

void RDC::OCC::V3d_Viewer::SetDefaultBgGradientColors(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2, RDC::OCC::Aspect_GradientFillMethod theFillStyle)
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultBgGradientColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, (::Aspect_GradientFillMethod)theFillStyle);
}

void RDC::OCC::V3d_Viewer::SetDefaultBgGradientColors(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2)
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultBgGradientColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, Aspect_GradientFillMethod_Horizontal);
}

double RDC::OCC::V3d_Viewer::DefaultViewSize()
{
    double _result = ((::V3d_Viewer*)_NativeInstance)->DefaultViewSize();
    return _result;
}

void RDC::OCC::V3d_Viewer::SetDefaultViewSize(double theSize)
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultViewSize(theSize);
}

RDC::OCC::V3d_TypeOfOrientation RDC::OCC::V3d_Viewer::DefaultViewProj()
{
    ::V3d_TypeOfOrientation _result = ((::V3d_Viewer*)_NativeInstance)->DefaultViewProj();
    return (RDC::OCC::V3d_TypeOfOrientation)_result;
}

void RDC::OCC::V3d_Viewer::SetDefaultViewProj(RDC::OCC::V3d_TypeOfOrientation theOrientation)
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultViewProj((::V3d_TypeOfOrientation)theOrientation);
}

RDC::OCC::V3d_TypeOfVisualization RDC::OCC::V3d_Viewer::DefaultVisualization()
{
    ::V3d_TypeOfVisualization _result = ((::V3d_Viewer*)_NativeInstance)->DefaultVisualization();
    return (RDC::OCC::V3d_TypeOfVisualization)_result;
}

void RDC::OCC::V3d_Viewer::SetDefaultVisualization(RDC::OCC::V3d_TypeOfVisualization theType)
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultVisualization((::V3d_TypeOfVisualization)theType);
}

RDC::OCC::Graphic3d_TypeOfShadingModel RDC::OCC::V3d_Viewer::DefaultShadingModel()
{
    ::Graphic3d_TypeOfShadingModel _result = ((::V3d_Viewer*)_NativeInstance)->DefaultShadingModel();
    return (RDC::OCC::Graphic3d_TypeOfShadingModel)_result;
}

void RDC::OCC::V3d_Viewer::SetDefaultShadingModel(RDC::OCC::Graphic3d_TypeOfShadingModel theType)
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultShadingModel((::Graphic3d_TypeOfShadingModel)theType);
}

RDC::OCC::V3d_TypeOfView RDC::OCC::V3d_Viewer::DefaultTypeOfView()
{
    ::V3d_TypeOfView _result = ((::V3d_Viewer*)_NativeInstance)->DefaultTypeOfView();
    return (RDC::OCC::V3d_TypeOfView)_result;
}

void RDC::OCC::V3d_Viewer::SetDefaultTypeOfView(RDC::OCC::V3d_TypeOfView theType)
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultTypeOfView((::V3d_TypeOfView)theType);
}

RDC::OCC::Quantity_Color^ RDC::OCC::V3d_Viewer::DefaultBackgroundColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::V3d_Viewer*)_NativeInstance)->DefaultBackgroundColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::V3d_Viewer::DefaultBgGradientColors(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2)
{
    ((::V3d_Viewer*)_NativeInstance)->DefaultBgGradientColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance);
}

void RDC::OCC::V3d_Viewer::GetAllZLayers(RDC::OCC::TColStd_SequenceOfInteger^ theLayerSeq)
{
    ((::V3d_Viewer*)_NativeInstance)->GetAllZLayers(*(::TColStd_SequenceOfInteger*)theLayerSeq->NativeInstance);
}

bool RDC::OCC::V3d_Viewer::AddZLayer(int% theLayerId, RDC::OCC::Graphic3d_ZLayerSettings^ theSettings)
{
    pin_ptr<int> pp_theLayerId = &theLayerId;
    bool _result = ((::V3d_Viewer*)_NativeInstance)->AddZLayer(*(int*)pp_theLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance);
    return _result;
}

bool RDC::OCC::V3d_Viewer::AddZLayer(int% theLayerId)
{
    pin_ptr<int> pp_theLayerId = &theLayerId;
    bool _result = ((::V3d_Viewer*)_NativeInstance)->AddZLayer(*(int*)pp_theLayerId, ::Graphic3d_ZLayerSettings());
    return _result;
}

bool RDC::OCC::V3d_Viewer::InsertLayerBefore(int% theNewLayerId, RDC::OCC::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter)
{
    pin_ptr<int> pp_theNewLayerId = &theNewLayerId;
    bool _result = ((::V3d_Viewer*)_NativeInstance)->InsertLayerBefore(*(int*)pp_theNewLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance, theLayerAfter);
    return _result;
}

bool RDC::OCC::V3d_Viewer::InsertLayerAfter(int% theNewLayerId, RDC::OCC::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore)
{
    pin_ptr<int> pp_theNewLayerId = &theNewLayerId;
    bool _result = ((::V3d_Viewer*)_NativeInstance)->InsertLayerAfter(*(int*)pp_theNewLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance, theLayerBefore);
    return _result;
}

bool RDC::OCC::V3d_Viewer::RemoveZLayer(int theLayerId)
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->RemoveZLayer(theLayerId);
    return _result;
}

RDC::OCC::Graphic3d_ZLayerSettings^ RDC::OCC::V3d_Viewer::ZLayerSettings(int theLayerId)
{
    ::Graphic3d_ZLayerSettings* _result = new ::Graphic3d_ZLayerSettings();
    *_result = (::Graphic3d_ZLayerSettings)((::V3d_Viewer*)_NativeInstance)->ZLayerSettings(theLayerId);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_ZLayerSettings(_result);
}

void RDC::OCC::V3d_Viewer::SetZLayerSettings(int theLayerId, RDC::OCC::Graphic3d_ZLayerSettings^ theSettings)
{
    ((::V3d_Viewer*)_NativeInstance)->SetZLayerSettings(theLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance);
}

RDC::OCC::V3d_ListOfView^ RDC::OCC::V3d_Viewer::ActiveViews()
{
    ::V3d_ListOfView* _result = new ::V3d_ListOfView();
    *_result = (::V3d_ListOfView)((::V3d_Viewer*)_NativeInstance)->ActiveViews();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::V3d_ListOfView(_result);
}

bool RDC::OCC::V3d_Viewer::LastActiveView()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->LastActiveView();
    return _result;
}

RDC::OCC::V3d_ListOfView^ RDC::OCC::V3d_Viewer::DefinedViews()
{
    ::V3d_ListOfView* _result = new ::V3d_ListOfView();
    *_result = (::V3d_ListOfView)((::V3d_Viewer*)_NativeInstance)->DefinedViews();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::V3d_ListOfView(_result);
}

void RDC::OCC::V3d_Viewer::SetDefaultLights()
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultLights();
}

void RDC::OCC::V3d_Viewer::SetLightOn(RDC::OCC::Graphic3d_CLight^ theLight)
{
    ((::V3d_Viewer*)_NativeInstance)->SetLightOn(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
}

void RDC::OCC::V3d_Viewer::SetLightOn()
{
    ((::V3d_Viewer*)_NativeInstance)->SetLightOn();
}

void RDC::OCC::V3d_Viewer::SetLightOff(RDC::OCC::Graphic3d_CLight^ theLight)
{
    ((::V3d_Viewer*)_NativeInstance)->SetLightOff(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
}

void RDC::OCC::V3d_Viewer::SetLightOff()
{
    ((::V3d_Viewer*)_NativeInstance)->SetLightOff();
}

void RDC::OCC::V3d_Viewer::AddLight(RDC::OCC::Graphic3d_CLight^ theLight)
{
    ((::V3d_Viewer*)_NativeInstance)->AddLight(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
}

void RDC::OCC::V3d_Viewer::DelLight(RDC::OCC::Graphic3d_CLight^ theLight)
{
    ((::V3d_Viewer*)_NativeInstance)->DelLight(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
}

void RDC::OCC::V3d_Viewer::UpdateLights()
{
    ((::V3d_Viewer*)_NativeInstance)->UpdateLights();
}

bool RDC::OCC::V3d_Viewer::IsGlobalLight(RDC::OCC::Graphic3d_CLight^ TheLight)
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->IsGlobalLight(Handle(::Graphic3d_CLight)(TheLight->NativeInstance));
    return _result;
}

RDC::OCC::V3d_ListOfLight^ RDC::OCC::V3d_Viewer::ActiveLights()
{
    ::V3d_ListOfLight* _result = new ::V3d_ListOfLight();
    *_result = (::V3d_ListOfLight)((::V3d_Viewer*)_NativeInstance)->ActiveLights();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::V3d_ListOfLight(_result);
}

RDC::OCC::V3d_ListOfLight^ RDC::OCC::V3d_Viewer::DefinedLights()
{
    ::V3d_ListOfLight* _result = new ::V3d_ListOfLight();
    *_result = (::V3d_ListOfLight)((::V3d_Viewer*)_NativeInstance)->DefinedLights();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::V3d_ListOfLight(_result);
}

void RDC::OCC::V3d_Viewer::Erase()
{
    ((::V3d_Viewer*)_NativeInstance)->Erase();
}

void RDC::OCC::V3d_Viewer::UnHighlight()
{
    ((::V3d_Viewer*)_NativeInstance)->UnHighlight();
}

bool RDC::OCC::V3d_Viewer::ComputedMode()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->ComputedMode();
    return _result;
}

void RDC::OCC::V3d_Viewer::SetComputedMode(bool theMode)
{
    ((::V3d_Viewer*)_NativeInstance)->SetComputedMode(theMode);
}

bool RDC::OCC::V3d_Viewer::DefaultComputedMode()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->DefaultComputedMode();
    return _result;
}

void RDC::OCC::V3d_Viewer::SetDefaultComputedMode(bool theMode)
{
    ((::V3d_Viewer*)_NativeInstance)->SetDefaultComputedMode(theMode);
}

RDC::OCC::Ax3 RDC::OCC::V3d_Viewer::PrivilegedPlane()
{
    ::gp_Ax3 _nativeResult = ((::V3d_Viewer*)_NativeInstance)->PrivilegedPlane();
    return RDC::OCC::Ax3(_nativeResult);
}

void RDC::OCC::V3d_Viewer::SetPrivilegedPlane(RDC::OCC::Ax3 thePlane)
{
    pin_ptr<RDC::OCC::Ax3> pp_thePlane = &thePlane;
    ((::V3d_Viewer*)_NativeInstance)->SetPrivilegedPlane(*(gp_Ax3*)pp_thePlane);
}

void RDC::OCC::V3d_Viewer::DisplayPrivilegedPlane(bool theOnOff, double theSize)
{
    ((::V3d_Viewer*)_NativeInstance)->DisplayPrivilegedPlane(theOnOff, theSize);
}

void RDC::OCC::V3d_Viewer::DisplayPrivilegedPlane(bool theOnOff)
{
    ((::V3d_Viewer*)_NativeInstance)->DisplayPrivilegedPlane(theOnOff, 1);
}

void RDC::OCC::V3d_Viewer::ActivateGrid(RDC::OCC::Aspect_GridType aGridType, RDC::OCC::Aspect_GridDrawMode aGridDrawMode)
{
    ((::V3d_Viewer*)_NativeInstance)->ActivateGrid((::Aspect_GridType)aGridType, (::Aspect_GridDrawMode)aGridDrawMode);
}

void RDC::OCC::V3d_Viewer::DeactivateGrid()
{
    ((::V3d_Viewer*)_NativeInstance)->DeactivateGrid();
}

void RDC::OCC::V3d_Viewer::SetGridEcho(bool showGrid)
{
    ((::V3d_Viewer*)_NativeInstance)->SetGridEcho(showGrid);
}

void RDC::OCC::V3d_Viewer::SetGridEcho()
{
    ((::V3d_Viewer*)_NativeInstance)->SetGridEcho(true);
}

void RDC::OCC::V3d_Viewer::SetGridEcho(RDC::OCC::Graphic3d_AspectMarker3d^ aMarker)
{
    ((::V3d_Viewer*)_NativeInstance)->SetGridEcho(Handle(::Graphic3d_AspectMarker3d)(aMarker->NativeInstance));
}

bool RDC::OCC::V3d_Viewer::GridEcho()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->GridEcho();
    return _result;
}

bool RDC::OCC::V3d_Viewer::IsGridActive()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->IsGridActive();
    return _result;
}

RDC::OCC::Aspect_Grid^ RDC::OCC::V3d_Viewer::Grid(bool theToCreate)
{
    Handle(::Aspect_Grid) _result = ((::V3d_Viewer*)_NativeInstance)->Grid(theToCreate);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_Grid::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_Grid^ RDC::OCC::V3d_Viewer::Grid()
{
    Handle(::Aspect_Grid) _result = ((::V3d_Viewer*)_NativeInstance)->Grid(true);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_Grid::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_Grid^ RDC::OCC::V3d_Viewer::Grid(RDC::OCC::Aspect_GridType theGridType, bool theToCreate)
{
    Handle(::Aspect_Grid) _result = ((::V3d_Viewer*)_NativeInstance)->Grid((::Aspect_GridType)theGridType, theToCreate);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_Grid::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_Grid^ RDC::OCC::V3d_Viewer::Grid(RDC::OCC::Aspect_GridType theGridType)
{
    Handle(::Aspect_Grid) _result = ((::V3d_Viewer*)_NativeInstance)->Grid((::Aspect_GridType)theGridType, true);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_Grid::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_GridType RDC::OCC::V3d_Viewer::GridType()
{
    ::Aspect_GridType _result = ((::V3d_Viewer*)_NativeInstance)->GridType();
    return (RDC::OCC::Aspect_GridType)_result;
}

RDC::OCC::Aspect_GridDrawMode RDC::OCC::V3d_Viewer::GridDrawMode()
{
    ::Aspect_GridDrawMode _result = ((::V3d_Viewer*)_NativeInstance)->GridDrawMode();
    return (RDC::OCC::Aspect_GridDrawMode)_result;
}

void RDC::OCC::V3d_Viewer::RectangularGridValues(double% theXOrigin, double% theYOrigin, double% theXStep, double% theYStep, double% theRotationAngle)
{
    pin_ptr<double> pp_theXOrigin = &theXOrigin;
    pin_ptr<double> pp_theYOrigin = &theYOrigin;
    pin_ptr<double> pp_theXStep = &theXStep;
    pin_ptr<double> pp_theYStep = &theYStep;
    pin_ptr<double> pp_theRotationAngle = &theRotationAngle;
    ((::V3d_Viewer*)_NativeInstance)->RectangularGridValues(*(double*)pp_theXOrigin, *(double*)pp_theYOrigin, *(double*)pp_theXStep, *(double*)pp_theYStep, *(double*)pp_theRotationAngle);
}

void RDC::OCC::V3d_Viewer::SetRectangularGridValues(double XOrigin, double YOrigin, double XStep, double YStep, double RotationAngle)
{
    ((::V3d_Viewer*)_NativeInstance)->SetRectangularGridValues(XOrigin, YOrigin, XStep, YStep, RotationAngle);
}

void RDC::OCC::V3d_Viewer::CircularGridValues(double% theXOrigin, double% theYOrigin, double% theRadiusStep, int% theDivisionNumber, double% theRotationAngle)
{
    pin_ptr<double> pp_theXOrigin = &theXOrigin;
    pin_ptr<double> pp_theYOrigin = &theYOrigin;
    pin_ptr<double> pp_theRadiusStep = &theRadiusStep;
    pin_ptr<int> pp_theDivisionNumber = &theDivisionNumber;
    pin_ptr<double> pp_theRotationAngle = &theRotationAngle;
    ((::V3d_Viewer*)_NativeInstance)->CircularGridValues(*(double*)pp_theXOrigin, *(double*)pp_theYOrigin, *(double*)pp_theRadiusStep, *(int*)pp_theDivisionNumber, *(double*)pp_theRotationAngle);
}

void RDC::OCC::V3d_Viewer::SetCircularGridValues(double XOrigin, double YOrigin, double RadiusStep, int DivisionNumber, double RotationAngle)
{
    ((::V3d_Viewer*)_NativeInstance)->SetCircularGridValues(XOrigin, YOrigin, RadiusStep, DivisionNumber, RotationAngle);
}

void RDC::OCC::V3d_Viewer::CircularGridGraphicValues(double% theRadius, double% theOffSet)
{
    pin_ptr<double> pp_theRadius = &theRadius;
    pin_ptr<double> pp_theOffSet = &theOffSet;
    ((::V3d_Viewer*)_NativeInstance)->CircularGridGraphicValues(*(double*)pp_theRadius, *(double*)pp_theOffSet);
}

void RDC::OCC::V3d_Viewer::SetCircularGridGraphicValues(double Radius, double OffSet)
{
    ((::V3d_Viewer*)_NativeInstance)->SetCircularGridGraphicValues(Radius, OffSet);
}

void RDC::OCC::V3d_Viewer::RectangularGridGraphicValues(double% theXSize, double% theYSize, double% theOffSet)
{
    pin_ptr<double> pp_theXSize = &theXSize;
    pin_ptr<double> pp_theYSize = &theYSize;
    pin_ptr<double> pp_theOffSet = &theOffSet;
    ((::V3d_Viewer*)_NativeInstance)->RectangularGridGraphicValues(*(double*)pp_theXSize, *(double*)pp_theYSize, *(double*)pp_theOffSet);
}

void RDC::OCC::V3d_Viewer::SetRectangularGridGraphicValues(double XSize, double YSize, double OffSet)
{
    ((::V3d_Viewer*)_NativeInstance)->SetRectangularGridGraphicValues(XSize, YSize, OffSet);
}

void RDC::OCC::V3d_Viewer::ShowGridEcho(RDC::OCC::V3d_View^ theView, RDC::OCC::Graphic3d_Vertex^ thePoint)
{
    ((::V3d_Viewer*)_NativeInstance)->ShowGridEcho(Handle(::V3d_View)(theView->NativeInstance), *(::Graphic3d_Vertex*)thePoint->NativeInstance);
}

void RDC::OCC::V3d_Viewer::HideGridEcho(RDC::OCC::V3d_View^ theView)
{
    ((::V3d_Viewer*)_NativeInstance)->HideGridEcho(Handle(::V3d_View)(theView->NativeInstance));
}

bool RDC::OCC::V3d_Viewer::IsActive()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->IsActive();
    return _result;
}

void RDC::OCC::V3d_Viewer::InitActiveViews()
{
    ((::V3d_Viewer*)_NativeInstance)->InitActiveViews();
}

bool RDC::OCC::V3d_Viewer::MoreActiveViews()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->MoreActiveViews();
    return _result;
}

void RDC::OCC::V3d_Viewer::NextActiveViews()
{
    ((::V3d_Viewer*)_NativeInstance)->NextActiveViews();
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_Viewer::ActiveView()
{
    Handle(::V3d_View) _result = ((::V3d_Viewer*)_NativeInstance)->ActiveView();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_Viewer::InitDefinedViews()
{
    ((::V3d_Viewer*)_NativeInstance)->InitDefinedViews();
}

bool RDC::OCC::V3d_Viewer::MoreDefinedViews()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->MoreDefinedViews();
    return _result;
}

void RDC::OCC::V3d_Viewer::NextDefinedViews()
{
    ((::V3d_Viewer*)_NativeInstance)->NextDefinedViews();
}

RDC::OCC::V3d_View^ RDC::OCC::V3d_Viewer::DefinedView()
{
    Handle(::V3d_View) _result = ((::V3d_Viewer*)_NativeInstance)->DefinedView();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_Viewer::InitActiveLights()
{
    ((::V3d_Viewer*)_NativeInstance)->InitActiveLights();
}

bool RDC::OCC::V3d_Viewer::MoreActiveLights()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->MoreActiveLights();
    return _result;
}

void RDC::OCC::V3d_Viewer::NextActiveLights()
{
    ((::V3d_Viewer*)_NativeInstance)->NextActiveLights();
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_Viewer::ActiveLight()
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_Viewer*)_NativeInstance)->ActiveLight();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_Viewer::InitDefinedLights()
{
    ((::V3d_Viewer*)_NativeInstance)->InitDefinedLights();
}

bool RDC::OCC::V3d_Viewer::MoreDefinedLights()
{
    bool _result = ((::V3d_Viewer*)_NativeInstance)->MoreDefinedLights();
    return _result;
}

void RDC::OCC::V3d_Viewer::NextDefinedLights()
{
    ((::V3d_Viewer*)_NativeInstance)->NextDefinedLights();
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::V3d_Viewer::DefinedLight()
{
    Handle(::Graphic3d_CLight) _result = ((::V3d_Viewer*)_NativeInstance)->DefinedLight();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_Viewer::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::V3d_Viewer*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::V3d_Viewer::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::V3d_Viewer*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::V3d_Viewer^ RDC::OCC::V3d_Viewer::CreateDowncasted(::V3d_Viewer* instance)
{
    return gcnew RDC::OCC::V3d_Viewer( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_CircularGrid
//---------------------------------------------------------------------

RDC::OCC::V3d_CircularGrid::V3d_CircularGrid(RDC::OCC::V3d_Viewer^ aViewer, RDC::OCC::Quantity_Color^ aColor, RDC::OCC::Quantity_Color^ aTenthColor)
    : RDC::OCC::Aspect_CircularGrid(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_CircularGrid((::V3d_Viewer*)aViewer->NativeInstance, *(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void RDC::OCC::V3d_CircularGrid::SetColors(RDC::OCC::Quantity_Color^ aColor, RDC::OCC::Quantity_Color^ aTenthColor)
{
    ((::V3d_CircularGrid*)_NativeInstance)->SetColors(*(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void RDC::OCC::V3d_CircularGrid::Display()
{
    ((::V3d_CircularGrid*)_NativeInstance)->Display();
}

void RDC::OCC::V3d_CircularGrid::Erase()
{
    ((::V3d_CircularGrid*)_NativeInstance)->Erase();
}

bool RDC::OCC::V3d_CircularGrid::IsDisplayed()
{
    bool _result = ((::V3d_CircularGrid*)_NativeInstance)->IsDisplayed();
    return _result;
}

void RDC::OCC::V3d_CircularGrid::GraphicValues(double% Radius, double% OffSet)
{
    pin_ptr<double> pp_Radius = &Radius;
    pin_ptr<double> pp_OffSet = &OffSet;
    ((::V3d_CircularGrid*)_NativeInstance)->GraphicValues(*(double*)pp_Radius, *(double*)pp_OffSet);
}

void RDC::OCC::V3d_CircularGrid::SetGraphicValues(double Radius, double OffSet)
{
    ((::V3d_CircularGrid*)_NativeInstance)->SetGraphicValues(Radius, OffSet);
}

void RDC::OCC::V3d_CircularGrid::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::V3d_CircularGrid*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::V3d_CircularGrid::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::V3d_CircularGrid*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::V3d_CircularGrid^ RDC::OCC::V3d_CircularGrid::CreateDowncasted(::V3d_CircularGrid* instance)
{
    return gcnew RDC::OCC::V3d_CircularGrid( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_PositionLight
//---------------------------------------------------------------------

RDC::OCC::V3d_PositionLight^ RDC::OCC::V3d_PositionLight::CreateDowncasted(::V3d_PositionLight* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::V3d_DirectionalLight)))
        return RDC::OCC::V3d_DirectionalLight::CreateDowncasted((::V3d_DirectionalLight*)instance);
    if (instance->IsKind(STANDARD_TYPE(::V3d_PositionalLight)))
        return RDC::OCC::V3d_PositionalLight::CreateDowncasted((::V3d_PositionalLight*)instance);
    if (instance->IsKind(STANDARD_TYPE(::V3d_SpotLight)))
        return RDC::OCC::V3d_SpotLight::CreateDowncasted((::V3d_SpotLight*)instance);
    
    return gcnew RDC::OCC::V3d_PositionLight( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_DirectionalLight
//---------------------------------------------------------------------

RDC::OCC::V3d_DirectionalLight::V3d_DirectionalLight(RDC::OCC::V3d_TypeOfOrientation theDirection, RDC::OCC::Quantity_Color^ theColor, bool theIsHeadlight)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_DirectionalLight((::V3d_TypeOfOrientation)theDirection, *(::Quantity_Color*)theColor->NativeInstance, theIsHeadlight);
}

RDC::OCC::V3d_DirectionalLight::V3d_DirectionalLight(RDC::OCC::V3d_TypeOfOrientation theDirection, RDC::OCC::Quantity_Color^ theColor)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_DirectionalLight((::V3d_TypeOfOrientation)theDirection, *(::Quantity_Color*)theColor->NativeInstance, false);
}

RDC::OCC::V3d_DirectionalLight::V3d_DirectionalLight(RDC::OCC::V3d_TypeOfOrientation theDirection)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_DirectionalLight((::V3d_TypeOfOrientation)theDirection, Quantity_NOC_WHITE, false);
}

RDC::OCC::V3d_DirectionalLight::V3d_DirectionalLight()
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_DirectionalLight(V3d_XposYposZpos, Quantity_NOC_WHITE, false);
}

RDC::OCC::V3d_DirectionalLight::V3d_DirectionalLight(RDC::OCC::Dir theDirection, RDC::OCC::Quantity_Color^ theColor, bool theIsHeadlight)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_theDirection = &theDirection;
    NativeInstance = new ::V3d_DirectionalLight(*(gp_Dir*)pp_theDirection, *(::Quantity_Color*)theColor->NativeInstance, theIsHeadlight);
}

RDC::OCC::V3d_DirectionalLight::V3d_DirectionalLight(RDC::OCC::Dir theDirection, RDC::OCC::Quantity_Color^ theColor)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_theDirection = &theDirection;
    NativeInstance = new ::V3d_DirectionalLight(*(gp_Dir*)pp_theDirection, *(::Quantity_Color*)theColor->NativeInstance, false);
}

RDC::OCC::V3d_DirectionalLight::V3d_DirectionalLight(RDC::OCC::Dir theDirection)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_theDirection = &theDirection;
    NativeInstance = new ::V3d_DirectionalLight(*(gp_Dir*)pp_theDirection, Quantity_NOC_WHITE, false);
}

void RDC::OCC::V3d_DirectionalLight::SetDirection(RDC::OCC::V3d_TypeOfOrientation theDirection)
{
    ((::V3d_DirectionalLight*)_NativeInstance)->SetDirection((::V3d_TypeOfOrientation)theDirection);
}

RDC::OCC::V3d_DirectionalLight^ RDC::OCC::V3d_DirectionalLight::CreateDowncasted(::V3d_DirectionalLight* instance)
{
    return gcnew RDC::OCC::V3d_DirectionalLight( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_RectangularGrid
//---------------------------------------------------------------------

RDC::OCC::V3d_RectangularGrid::V3d_RectangularGrid(RDC::OCC::V3d_Viewer^ aViewer, RDC::OCC::Quantity_Color^ aColor, RDC::OCC::Quantity_Color^ aTenthColor)
    : RDC::OCC::Aspect_RectangularGrid(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_RectangularGrid((::V3d_Viewer*)aViewer->NativeInstance, *(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void RDC::OCC::V3d_RectangularGrid::SetColors(RDC::OCC::Quantity_Color^ aColor, RDC::OCC::Quantity_Color^ aTenthColor)
{
    ((::V3d_RectangularGrid*)_NativeInstance)->SetColors(*(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void RDC::OCC::V3d_RectangularGrid::Display()
{
    ((::V3d_RectangularGrid*)_NativeInstance)->Display();
}

void RDC::OCC::V3d_RectangularGrid::Erase()
{
    ((::V3d_RectangularGrid*)_NativeInstance)->Erase();
}

bool RDC::OCC::V3d_RectangularGrid::IsDisplayed()
{
    bool _result = ((::V3d_RectangularGrid*)_NativeInstance)->IsDisplayed();
    return _result;
}

void RDC::OCC::V3d_RectangularGrid::GraphicValues(double% XSize, double% YSize, double% OffSet)
{
    pin_ptr<double> pp_XSize = &XSize;
    pin_ptr<double> pp_YSize = &YSize;
    pin_ptr<double> pp_OffSet = &OffSet;
    ((::V3d_RectangularGrid*)_NativeInstance)->GraphicValues(*(double*)pp_XSize, *(double*)pp_YSize, *(double*)pp_OffSet);
}

void RDC::OCC::V3d_RectangularGrid::SetGraphicValues(double XSize, double YSize, double OffSet)
{
    ((::V3d_RectangularGrid*)_NativeInstance)->SetGraphicValues(XSize, YSize, OffSet);
}

void RDC::OCC::V3d_RectangularGrid::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::V3d_RectangularGrid*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::V3d_RectangularGrid::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::V3d_RectangularGrid*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::V3d_RectangularGrid^ RDC::OCC::V3d_RectangularGrid::CreateDowncasted(::V3d_RectangularGrid* instance)
{
    return gcnew RDC::OCC::V3d_RectangularGrid( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_Trihedron
//---------------------------------------------------------------------

RDC::OCC::V3d_Trihedron::V3d_Trihedron()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_Trihedron();
}

bool RDC::OCC::V3d_Trihedron::IsWireframe()
{
    bool _result = ((::V3d_Trihedron*)_NativeInstance)->IsWireframe();
    return _result;
}

void RDC::OCC::V3d_Trihedron::SetWireframe(bool theAsWireframe)
{
    ((::V3d_Trihedron*)_NativeInstance)->SetWireframe(theAsWireframe);
}

RDC::OCC::Graphic3d_TransformPers^ RDC::OCC::V3d_Trihedron::TransformPersistence()
{
    Handle(::Graphic3d_TransformPers) _result = ((::V3d_Trihedron*)_NativeInstance)->TransformPersistence();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_TransformPers::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_Trihedron::SetPosition(RDC::OCC::Aspect_TypeOfTriedronPosition thePosition)
{
    ((::V3d_Trihedron*)_NativeInstance)->SetPosition((::Aspect_TypeOfTriedronPosition)thePosition);
}

double RDC::OCC::V3d_Trihedron::Scale()
{
    double _result = ((::V3d_Trihedron*)_NativeInstance)->Scale();
    return _result;
}

void RDC::OCC::V3d_Trihedron::SetScale(double theScale)
{
    ((::V3d_Trihedron*)_NativeInstance)->SetScale(theScale);
}

double RDC::OCC::V3d_Trihedron::SizeRatio()
{
    double _result = ((::V3d_Trihedron*)_NativeInstance)->SizeRatio();
    return _result;
}

void RDC::OCC::V3d_Trihedron::SetSizeRatio(double theRatio)
{
    ((::V3d_Trihedron*)_NativeInstance)->SetSizeRatio(theRatio);
}

double RDC::OCC::V3d_Trihedron::ArrowDiameter()
{
    double _result = ((::V3d_Trihedron*)_NativeInstance)->ArrowDiameter();
    return _result;
}

void RDC::OCC::V3d_Trihedron::SetArrowDiameter(double theDiam)
{
    ((::V3d_Trihedron*)_NativeInstance)->SetArrowDiameter(theDiam);
}

int RDC::OCC::V3d_Trihedron::NbFacets()
{
    int _result = ((::V3d_Trihedron*)_NativeInstance)->NbFacets();
    return _result;
}

void RDC::OCC::V3d_Trihedron::SetNbFacets(int theNbFacets)
{
    ((::V3d_Trihedron*)_NativeInstance)->SetNbFacets(theNbFacets);
}

RDC::OCC::Prs3d_TextAspect^ RDC::OCC::V3d_Trihedron::LabelAspect(RDC::OCC::V3d_TypeOfAxe theAxis)
{
    Handle(::Prs3d_TextAspect) _result = ((::V3d_Trihedron*)_NativeInstance)->LabelAspect((::V3d_TypeOfAxe)theAxis);
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_TextAspect::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_Trihedron::SetLabelsColor(RDC::OCC::Quantity_Color^ theXColor, RDC::OCC::Quantity_Color^ theYColor, RDC::OCC::Quantity_Color^ theZColor)
{
    ((::V3d_Trihedron*)_NativeInstance)->SetLabelsColor(*(::Quantity_Color*)theXColor->NativeInstance, *(::Quantity_Color*)theYColor->NativeInstance, *(::Quantity_Color*)theZColor->NativeInstance);
}

void RDC::OCC::V3d_Trihedron::SetLabelsColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::V3d_Trihedron*)_NativeInstance)->SetLabelsColor(*(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::Prs3d_ShadingAspect^ RDC::OCC::V3d_Trihedron::ArrowAspect(RDC::OCC::V3d_TypeOfAxe theAxis)
{
    Handle(::Prs3d_ShadingAspect) _result = ((::V3d_Trihedron*)_NativeInstance)->ArrowAspect((::V3d_TypeOfAxe)theAxis);
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_ShadingAspect::CreateDowncasted(_result.get());
}

void RDC::OCC::V3d_Trihedron::SetArrowsColor(RDC::OCC::Quantity_Color^ theXColor, RDC::OCC::Quantity_Color^ theYColor, RDC::OCC::Quantity_Color^ theZColor)
{
    ((::V3d_Trihedron*)_NativeInstance)->SetArrowsColor(*(::Quantity_Color*)theXColor->NativeInstance, *(::Quantity_Color*)theYColor->NativeInstance, *(::Quantity_Color*)theZColor->NativeInstance);
}

RDC::OCC::Prs3d_ShadingAspect^ RDC::OCC::V3d_Trihedron::OriginAspect()
{
    Handle(::Prs3d_ShadingAspect) _result = ((::V3d_Trihedron*)_NativeInstance)->OriginAspect();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_ShadingAspect::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::V3d_Trihedron::Label(RDC::OCC::V3d_TypeOfAxe theAxis)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::V3d_Trihedron*)_NativeInstance)->Label((::V3d_TypeOfAxe)theAxis);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::V3d_Trihedron::SetLabels(RDC::OCC::TCollection_AsciiString^ theX, RDC::OCC::TCollection_AsciiString^ theY, RDC::OCC::TCollection_AsciiString^ theZ)
{
    ((::V3d_Trihedron*)_NativeInstance)->SetLabels(*(::TCollection_AsciiString*)theX->NativeInstance, *(::TCollection_AsciiString*)theY->NativeInstance, *(::TCollection_AsciiString*)theZ->NativeInstance);
}

void RDC::OCC::V3d_Trihedron::Display(RDC::OCC::V3d_View^ theView)
{
    ((::V3d_Trihedron*)_NativeInstance)->Display(Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::V3d_Trihedron::Erase()
{
    ((::V3d_Trihedron*)_NativeInstance)->Erase();
}

void RDC::OCC::V3d_Trihedron::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::V3d_Trihedron*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::V3d_Trihedron::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::V3d_Trihedron*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::V3d_Trihedron^ RDC::OCC::V3d_Trihedron::CreateDowncasted(::V3d_Trihedron* instance)
{
    return gcnew RDC::OCC::V3d_Trihedron( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_Plane
//---------------------------------------------------------------------

RDC::OCC::V3d_Plane::V3d_Plane(double theA, double theB, double theC, double theD)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_Plane(theA, theB, theC, theD);
}

RDC::OCC::V3d_Plane::V3d_Plane(double theA, double theB, double theC)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_Plane(theA, theB, theC, 0.);
}

RDC::OCC::V3d_Plane::V3d_Plane(double theA, double theB)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_Plane(theA, theB, 1., 0.);
}

RDC::OCC::V3d_Plane::V3d_Plane(double theA)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_Plane(theA, 0., 1., 0.);
}

RDC::OCC::V3d_Plane::V3d_Plane()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_Plane(0., 0., 1., 0.);
}

void RDC::OCC::V3d_Plane::SetPlane(double theA, double theB, double theC, double theD)
{
    ((::V3d_Plane*)_NativeInstance)->SetPlane(theA, theB, theC, theD);
}

void RDC::OCC::V3d_Plane::Display(RDC::OCC::V3d_View^ theView, RDC::OCC::Quantity_Color^ theColor)
{
    ((::V3d_Plane*)_NativeInstance)->Display(Handle(::V3d_View)(theView->NativeInstance), *(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::V3d_Plane::Display(RDC::OCC::V3d_View^ theView)
{
    ((::V3d_Plane*)_NativeInstance)->Display(Handle(::V3d_View)(theView->NativeInstance), Quantity_NOC_GRAY);
}

void RDC::OCC::V3d_Plane::Erase()
{
    ((::V3d_Plane*)_NativeInstance)->Erase();
}

void RDC::OCC::V3d_Plane::Plane(double% theA, double% theB, double% theC, double% theD)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    pin_ptr<double> pp_theD = &theD;
    ((::V3d_Plane*)_NativeInstance)->Plane(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC, *(double*)pp_theD);
}

bool RDC::OCC::V3d_Plane::IsDisplayed()
{
    bool _result = ((::V3d_Plane*)_NativeInstance)->IsDisplayed();
    return _result;
}

RDC::OCC::Graphic3d_ClipPlane^ RDC::OCC::V3d_Plane::ClipPlane()
{
    Handle(::Graphic3d_ClipPlane) _result = ((::V3d_Plane*)_NativeInstance)->ClipPlane();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_ClipPlane::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_Plane^ RDC::OCC::V3d_Plane::CreateDowncasted(::V3d_Plane* instance)
{
    return gcnew RDC::OCC::V3d_Plane( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_PositionalLight
//---------------------------------------------------------------------

RDC::OCC::V3d_PositionalLight::V3d_PositionalLight(RDC::OCC::Pnt thePos, RDC::OCC::Quantity_Color^ theColor)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePos = &thePos;
    NativeInstance = new ::V3d_PositionalLight(*(gp_Pnt*)pp_thePos, *(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::V3d_PositionalLight::V3d_PositionalLight(RDC::OCC::Pnt thePos)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePos = &thePos;
    NativeInstance = new ::V3d_PositionalLight(*(gp_Pnt*)pp_thePos, Quantity_NOC_WHITE);
}

RDC::OCC::V3d_PositionalLight^ RDC::OCC::V3d_PositionalLight::CreateDowncasted(::V3d_PositionalLight* instance)
{
    return gcnew RDC::OCC::V3d_PositionalLight( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_SpotLight
//---------------------------------------------------------------------

RDC::OCC::V3d_SpotLight::V3d_SpotLight(RDC::OCC::Pnt thePos, RDC::OCC::V3d_TypeOfOrientation theDirection, RDC::OCC::Quantity_Color^ theColor)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePos = &thePos;
    NativeInstance = new ::V3d_SpotLight(*(gp_Pnt*)pp_thePos, (::V3d_TypeOfOrientation)theDirection, *(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::V3d_SpotLight::V3d_SpotLight(RDC::OCC::Pnt thePos, RDC::OCC::V3d_TypeOfOrientation theDirection)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePos = &thePos;
    NativeInstance = new ::V3d_SpotLight(*(gp_Pnt*)pp_thePos, (::V3d_TypeOfOrientation)theDirection, Quantity_NOC_WHITE);
}

RDC::OCC::V3d_SpotLight::V3d_SpotLight(RDC::OCC::Pnt thePos)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePos = &thePos;
    NativeInstance = new ::V3d_SpotLight(*(gp_Pnt*)pp_thePos, V3d_XnegYnegZpos, Quantity_NOC_WHITE);
}

RDC::OCC::V3d_SpotLight::V3d_SpotLight(RDC::OCC::Pnt thePos, RDC::OCC::Dir theDirection, RDC::OCC::Quantity_Color^ theColor)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePos = &thePos;
    pin_ptr<RDC::OCC::Dir> pp_theDirection = &theDirection;
    NativeInstance = new ::V3d_SpotLight(*(gp_Pnt*)pp_thePos, *(gp_Dir*)pp_theDirection, *(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::V3d_SpotLight::V3d_SpotLight(RDC::OCC::Pnt thePos, RDC::OCC::Dir theDirection)
    : RDC::OCC::V3d_PositionLight(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePos = &thePos;
    pin_ptr<RDC::OCC::Dir> pp_theDirection = &theDirection;
    NativeInstance = new ::V3d_SpotLight(*(gp_Pnt*)pp_thePos, *(gp_Dir*)pp_theDirection, Quantity_NOC_WHITE);
}

void RDC::OCC::V3d_SpotLight::SetDirection(RDC::OCC::V3d_TypeOfOrientation theOrientation)
{
    ((::V3d_SpotLight*)_NativeInstance)->SetDirection((::V3d_TypeOfOrientation)theOrientation);
}

RDC::OCC::V3d_SpotLight^ RDC::OCC::V3d_SpotLight::CreateDowncasted(::V3d_SpotLight* instance)
{
    return gcnew RDC::OCC::V3d_SpotLight( instance );
}



//---------------------------------------------------------------------
//  Class  V3d_UnMapped
//---------------------------------------------------------------------

RDC::OCC::V3d_UnMapped::V3d_UnMapped()
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::V3d_UnMapped();
}

RDC::OCC::V3d_UnMapped::V3d_UnMapped(System::String^ theMessage)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::V3d_UnMapped(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::V3d_UnMapped::V3d_UnMapped(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::V3d_UnMapped(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::V3d_UnMapped::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::V3d_UnMapped::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::V3d_UnMapped::Raise()
{
    ::V3d_UnMapped::Raise("");
}

RDC::OCC::V3d_UnMapped^ RDC::OCC::V3d_UnMapped::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::V3d_UnMapped) _result = ::V3d_UnMapped::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_UnMapped::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_UnMapped^ RDC::OCC::V3d_UnMapped::NewInstance()
{
    Handle(::V3d_UnMapped) _result = ::V3d_UnMapped::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_UnMapped::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_UnMapped^ RDC::OCC::V3d_UnMapped::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::V3d_UnMapped) _result = ::V3d_UnMapped::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_UnMapped::CreateDowncasted(_result.get());
}

RDC::OCC::V3d_UnMapped^ RDC::OCC::V3d_UnMapped::CreateDowncasted(::V3d_UnMapped* instance)
{
    return gcnew RDC::OCC::V3d_UnMapped( instance );
}


