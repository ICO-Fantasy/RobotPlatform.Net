// Generated wrapper code for package PrsMgr

#include "OcctPCH.h"
#include "PrsMgr.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Graphic3d.h"
#include "SelectMgr.h"
#include "StdSelect.h"
#include "Prs3d.h"
#include "TopLoc.h"
#include "gp.h"
#include "Bnd.h"
#include "Aspect.h"
#include "Quantity.h"
#include "TColStd.h"
#include "V3d.h"


//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentableObjects
//---------------------------------------------------------------------

RDC::OCC::PrsMgr_ListOfPresentableObjects::PrsMgr_ListOfPresentableObjects()
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentableObjects();
}

RDC::OCC::PrsMgr_ListOfPresentableObjects::PrsMgr_ListOfPresentableObjects(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentableObjects(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::PrsMgr_ListOfPresentableObjects::Size()
{
    int _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Size();
    return _result;
}

RDC::OCC::PrsMgr_ListOfPresentableObjects^ RDC::OCC::PrsMgr_ListOfPresentableObjects::Assign(RDC::OCC::PrsMgr_ListOfPresentableObjects^ theOther)
{
    ::PrsMgr_ListOfPresentableObjects* _result = new ::PrsMgr_ListOfPresentableObjects();
    *_result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Assign(*(::PrsMgr_ListOfPresentableObjects*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::PrsMgr_ListOfPresentableObjects(_result);
}

void RDC::OCC::PrsMgr_ListOfPresentableObjects::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::PrsMgr_ListOfPresentableObjects::Clear()
{
    ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Clear(0L);
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_ListOfPresentableObjects::First()
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_ListOfPresentableObjects::Last()
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_ListOfPresentableObjects::Append(RDC::OCC::PrsMgr_PresentableObject^ theItem)
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Append(Handle(::PrsMgr_PresentableObject)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_ListOfPresentableObjects::Prepend(RDC::OCC::PrsMgr_PresentableObject^ theItem)
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Prepend(Handle(::PrsMgr_PresentableObject)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_ListOfPresentableObjects::RemoveFirst()
{
    ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::PrsMgr_ListOfPresentableObjects::Remove(RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator^ theIter)
{
    ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Remove(*(::PrsMgr_ListOfPresentableObjects::Iterator*)theIter->NativeInstance);
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_ListOfPresentableObjects::InsertBefore(RDC::OCC::PrsMgr_PresentableObject^ theItem, RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator^ theIter)
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->InsertBefore(Handle(::PrsMgr_PresentableObject)(theItem->NativeInstance), *(::PrsMgr_ListOfPresentableObjects::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_ListOfPresentableObjects::InsertAfter(RDC::OCC::PrsMgr_PresentableObject^ theItem, RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator^ theIter)
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->InsertAfter(Handle(::PrsMgr_PresentableObject)(theItem->NativeInstance), *(::PrsMgr_ListOfPresentableObjects::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_ListOfPresentableObjects::Reverse()
{
    ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentableObjects::Iterator
//---------------------------------------------------------------------

RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator::Iterator()
    : RDC::OCC::BaseClass<::PrsMgr_ListOfPresentableObjects::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentableObjects::Iterator();
}

bool RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator::More()
{
    bool _result = ((::PrsMgr_ListOfPresentableObjects::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator::Next()
{
    ((::PrsMgr_ListOfPresentableObjects::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator::Value()
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator::ChangeValue()
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentableObjectsIter
//---------------------------------------------------------------------

RDC::OCC::PrsMgr_ListOfPresentableObjectsIter::PrsMgr_ListOfPresentableObjectsIter()
    : RDC::OCC::BaseClass<::PrsMgr_ListOfPresentableObjectsIter>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentableObjectsIter();
}

RDC::OCC::PrsMgr_ListOfPresentableObjectsIter::PrsMgr_ListOfPresentableObjectsIter(RDC::OCC::NCollection_BaseList^ theList)
    : RDC::OCC::BaseClass<::PrsMgr_ListOfPresentableObjectsIter>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentableObjectsIter(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::PrsMgr_ListOfPresentableObjectsIter::More()
{
    bool _result = ((::PrsMgr_ListOfPresentableObjectsIter*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::PrsMgr_ListOfPresentableObjectsIter::Next()
{
    ((::PrsMgr_ListOfPresentableObjectsIter*)_NativeInstance)->Next();
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_ListOfPresentableObjectsIter::Value()
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjectsIter*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_ListOfPresentableObjectsIter::ChangeValue()
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjectsIter*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentations
//---------------------------------------------------------------------

RDC::OCC::PrsMgr_ListOfPresentations::PrsMgr_ListOfPresentations()
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentations();
}

RDC::OCC::PrsMgr_ListOfPresentations::PrsMgr_ListOfPresentations(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentations(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::PrsMgr_ListOfPresentations::Size()
{
    int _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Size();
    return _result;
}

RDC::OCC::PrsMgr_ListOfPresentations^ RDC::OCC::PrsMgr_ListOfPresentations::Assign(RDC::OCC::PrsMgr_ListOfPresentations^ theOther)
{
    ::PrsMgr_ListOfPresentations* _result = new ::PrsMgr_ListOfPresentations();
    *_result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Assign(*(::PrsMgr_ListOfPresentations*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::PrsMgr_ListOfPresentations(_result);
}

void RDC::OCC::PrsMgr_ListOfPresentations::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::PrsMgr_ListOfPresentations::Clear()
{
    ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Clear(0L);
}

RDC::OCC::Graphic3d_Structure^ RDC::OCC::PrsMgr_ListOfPresentations::First()
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Structure::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_Structure^ RDC::OCC::PrsMgr_ListOfPresentations::Last()
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Structure::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_Structure^ RDC::OCC::PrsMgr_ListOfPresentations::Append(RDC::OCC::Graphic3d_Structure^ theItem)
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Append(Handle(::Graphic3d_Structure)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Structure::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_Structure^ RDC::OCC::PrsMgr_ListOfPresentations::Prepend(RDC::OCC::Graphic3d_Structure^ theItem)
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Prepend(Handle(::Graphic3d_Structure)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Structure::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_ListOfPresentations::RemoveFirst()
{
    ((::PrsMgr_ListOfPresentations*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::PrsMgr_ListOfPresentations::Remove(RDC::OCC::PrsMgr_ListOfPresentations::Iterator^ theIter)
{
    ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Remove(*(::PrsMgr_ListOfPresentations::Iterator*)theIter->NativeInstance);
}

RDC::OCC::Graphic3d_Structure^ RDC::OCC::PrsMgr_ListOfPresentations::InsertBefore(RDC::OCC::Graphic3d_Structure^ theItem, RDC::OCC::PrsMgr_ListOfPresentations::Iterator^ theIter)
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->InsertBefore(Handle(::Graphic3d_Structure)(theItem->NativeInstance), *(::PrsMgr_ListOfPresentations::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Structure::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_Structure^ RDC::OCC::PrsMgr_ListOfPresentations::InsertAfter(RDC::OCC::Graphic3d_Structure^ theItem, RDC::OCC::PrsMgr_ListOfPresentations::Iterator^ theIter)
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->InsertAfter(Handle(::Graphic3d_Structure)(theItem->NativeInstance), *(::PrsMgr_ListOfPresentations::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Structure::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_ListOfPresentations::Reverse()
{
    ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentations::Iterator
//---------------------------------------------------------------------

RDC::OCC::PrsMgr_ListOfPresentations::Iterator::Iterator()
    : RDC::OCC::BaseClass<::PrsMgr_ListOfPresentations::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentations::Iterator();
}

bool RDC::OCC::PrsMgr_ListOfPresentations::Iterator::More()
{
    bool _result = ((::PrsMgr_ListOfPresentations::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::PrsMgr_ListOfPresentations::Iterator::Next()
{
    ((::PrsMgr_ListOfPresentations::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Graphic3d_Structure^ RDC::OCC::PrsMgr_ListOfPresentations::Iterator::Value()
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Structure::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_Structure^ RDC::OCC::PrsMgr_ListOfPresentations::Iterator::ChangeValue()
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Structure::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  PrsMgr_Presentations
//---------------------------------------------------------------------

RDC::OCC::PrsMgr_Presentations::PrsMgr_Presentations()
    : RDC::OCC::BaseClass<::PrsMgr_Presentations>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_Presentations();
}

RDC::OCC::PrsMgr_Presentations::PrsMgr_Presentations(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::PrsMgr_Presentations>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_Presentations(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::PrsMgr_Presentations::Size()
{
    int _result = ((::PrsMgr_Presentations*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::PrsMgr_Presentations::Length()
{
    int _result = ((::PrsMgr_Presentations*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::PrsMgr_Presentations::Lower()
{
    int _result = ((::PrsMgr_Presentations*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::PrsMgr_Presentations::Upper()
{
    int _result = ((::PrsMgr_Presentations*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::PrsMgr_Presentations::IsEmpty()
{
    bool _result = ((::PrsMgr_Presentations*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::PrsMgr_Presentations::Reverse()
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Reverse();
}

void RDC::OCC::PrsMgr_Presentations::Exchange(int I, int J)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::PrsMgr_Presentations::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::PrsMgr_Presentations::Clear()
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Clear(0L);
}

RDC::OCC::PrsMgr_Presentations^ RDC::OCC::PrsMgr_Presentations::Assign(RDC::OCC::PrsMgr_Presentations^ theOther)
{
    ::PrsMgr_Presentations* _result = new ::PrsMgr_Presentations();
    *_result = ((::PrsMgr_Presentations*)_NativeInstance)->Assign(*(::PrsMgr_Presentations*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::PrsMgr_Presentations(_result);
}

void RDC::OCC::PrsMgr_Presentations::Remove(RDC::OCC::PrsMgr_Presentations::Iterator^ thePosition)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Remove(*(::PrsMgr_Presentations::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::PrsMgr_Presentations::Append(RDC::OCC::PrsMgr_Presentation^ theItem)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Append(Handle(::PrsMgr_Presentation)(theItem->NativeInstance));
}

void RDC::OCC::PrsMgr_Presentations::Prepend(RDC::OCC::PrsMgr_Presentation^ theItem)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Prepend(Handle(::PrsMgr_Presentation)(theItem->NativeInstance));
}

void RDC::OCC::PrsMgr_Presentations::InsertBefore(int theIndex, RDC::OCC::PrsMgr_Presentation^ theItem)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->InsertBefore(theIndex, Handle(::PrsMgr_Presentation)(theItem->NativeInstance));
}

void RDC::OCC::PrsMgr_Presentations::InsertAfter(RDC::OCC::PrsMgr_Presentations::Iterator^ thePosition, RDC::OCC::PrsMgr_Presentation^ theItem)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->InsertAfter(*(::PrsMgr_Presentations::Iterator*)thePosition->NativeInstance, Handle(::PrsMgr_Presentation)(theItem->NativeInstance));
}

void RDC::OCC::PrsMgr_Presentations::Split(int theIndex, RDC::OCC::PrsMgr_Presentations^ theSeq)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Split(theIndex, *(::PrsMgr_Presentations*)theSeq->NativeInstance);
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_Presentations::First()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_Presentations::ChangeFirst()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_Presentations::Last()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_Presentations::ChangeLast()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_Presentations::Value(int theIndex)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_Presentations::ChangeValue(int theIndex)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_Presentations::SetValue(int theIndex, RDC::OCC::PrsMgr_Presentation^ theItem)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->SetValue(theIndex, Handle(::PrsMgr_Presentation)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<RDC::OCC::PrsMgr_Presentation^>^ RDC::OCC::PrsMgr_Presentations::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::PrsMgr_Presentation^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::PrsMgr_Presentations::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::PrsMgr_Presentation^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  PrsMgr_Presentations::Iterator
//---------------------------------------------------------------------

RDC::OCC::PrsMgr_Presentations::Iterator::Iterator()
    : RDC::OCC::BaseClass<::PrsMgr_Presentations::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_Presentations::Iterator();
}

bool RDC::OCC::PrsMgr_Presentations::Iterator::More()
{
    bool _result = ((::PrsMgr_Presentations::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::PrsMgr_Presentations::Iterator::Next()
{
    ((::PrsMgr_Presentations::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_Presentations::Iterator::Value()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_Presentations::Iterator::ChangeValue()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

bool RDC::OCC::PrsMgr_Presentations::Iterator::IsEqual(RDC::OCC::PrsMgr_Presentations::Iterator^ theOther)
{
    bool _result = ((::PrsMgr_Presentations::Iterator*)_NativeInstance)->IsEqual(*(::PrsMgr_Presentations::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::PrsMgr_Presentations::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::PrsMgr_Presentations::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  PrsMgr_PresentableObject
//---------------------------------------------------------------------

RDC::OCC::PrsMgr_Presentations^ RDC::OCC::PrsMgr_PresentableObject::Presentations()
{
    ::PrsMgr_Presentations* _result = new ::PrsMgr_Presentations();
    *_result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Presentations();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::PrsMgr_Presentations(_result);
}

int RDC::OCC::PrsMgr_PresentableObject::ZLayer()
{
    int _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ZLayer();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetZLayer(int theLayerId)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetZLayer(theLayerId);
}

bool RDC::OCC::PrsMgr_PresentableObject::IsMutable()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->IsMutable();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetMutable(bool theIsMutable)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetMutable(theIsMutable);
}

RDC::OCC::Graphic3d_ViewAffinity^ RDC::OCC::PrsMgr_PresentableObject::ViewAffinity()
{
    Handle(::Graphic3d_ViewAffinity) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ViewAffinity();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_ViewAffinity::CreateDowncasted(_result.get());
}

bool RDC::OCC::PrsMgr_PresentableObject::HasDisplayMode()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasDisplayMode();
    return _result;
}

int RDC::OCC::PrsMgr_PresentableObject::DisplayMode()
{
    int _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->DisplayMode();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetDisplayMode(int theMode)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetDisplayMode(theMode);
}

void RDC::OCC::PrsMgr_PresentableObject::UnsetDisplayMode()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetDisplayMode();
}

bool RDC::OCC::PrsMgr_PresentableObject::HasHilightMode()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasHilightMode();
    return _result;
}

int RDC::OCC::PrsMgr_PresentableObject::HilightMode()
{
    int _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HilightMode();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetHilightMode(int theMode)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetHilightMode(theMode);
}

void RDC::OCC::PrsMgr_PresentableObject::UnsetHilightMode()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetHilightMode();
}

bool RDC::OCC::PrsMgr_PresentableObject::AcceptDisplayMode(int theMode)
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

int RDC::OCC::PrsMgr_PresentableObject::DefaultDisplayMode()
{
    int _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->DefaultDisplayMode();
    return _result;
}

bool RDC::OCC::PrsMgr_PresentableObject::ToBeUpdated(bool theToIncludeHidden)
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ToBeUpdated(theToIncludeHidden);
    return _result;
}

bool RDC::OCC::PrsMgr_PresentableObject::ToBeUpdated()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ToBeUpdated(false);
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetToUpdate(int theMode)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetToUpdate(theMode);
}

void RDC::OCC::PrsMgr_PresentableObject::SetToUpdate()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetToUpdate();
}

bool RDC::OCC::PrsMgr_PresentableObject::IsInfinite()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->IsInfinite();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetInfiniteState(bool theFlag)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetInfiniteState(theFlag);
}

void RDC::OCC::PrsMgr_PresentableObject::SetInfiniteState()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetInfiniteState(true);
}

RDC::OCC::PrsMgr_TypeOfPresentation3d RDC::OCC::PrsMgr_PresentableObject::TypeOfPresentation3d()
{
    ::PrsMgr_TypeOfPresentation3d _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->TypeOfPresentation3d();
    return (RDC::OCC::PrsMgr_TypeOfPresentation3d)_result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetTypeOfPresentation(RDC::OCC::PrsMgr_TypeOfPresentation3d theType)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetTypeOfPresentation((::PrsMgr_TypeOfPresentation3d)theType);
}

RDC::OCC::PrsMgr_DisplayStatus RDC::OCC::PrsMgr_PresentableObject::DisplayStatus()
{
    ::PrsMgr_DisplayStatus _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->DisplayStatus();
    return (RDC::OCC::PrsMgr_DisplayStatus)_result;
}

RDC::OCC::Prs3d_Drawer^ RDC::OCC::PrsMgr_PresentableObject::Attributes()
{
    Handle(::Prs3d_Drawer) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Attributes();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_PresentableObject::SetAttributes(RDC::OCC::Prs3d_Drawer^ theDrawer)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetAttributes(Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

RDC::OCC::Prs3d_Drawer^ RDC::OCC::PrsMgr_PresentableObject::HilightAttributes()
{
    Handle(::Prs3d_Drawer) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HilightAttributes();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_PresentableObject::SetHilightAttributes(RDC::OCC::Prs3d_Drawer^ theDrawer)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetHilightAttributes(Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

RDC::OCC::Prs3d_Drawer^ RDC::OCC::PrsMgr_PresentableObject::DynamicHilightAttributes()
{
    Handle(::Prs3d_Drawer) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->DynamicHilightAttributes();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_PresentableObject::SetDynamicHilightAttributes(RDC::OCC::Prs3d_Drawer^ theDrawer)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetDynamicHilightAttributes(Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentableObject::UnsetHilightAttributes()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetHilightAttributes();
}

void RDC::OCC::PrsMgr_PresentableObject::SynchronizeAspects()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SynchronizeAspects();
}

RDC::OCC::Graphic3d_TransformPers^ RDC::OCC::PrsMgr_PresentableObject::TransformPersistence()
{
    Handle(::Graphic3d_TransformPers) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->TransformPersistence();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_TransformPers::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_PresentableObject::SetTransformPersistence(RDC::OCC::Graphic3d_TransformPers^ theTrsfPers)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransformPersistence(Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
}

RDC::OCC::TopLoc_Datum3D^ RDC::OCC::PrsMgr_PresentableObject::LocalTransformationGeom()
{
    Handle(::TopLoc_Datum3D) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->LocalTransformationGeom();
    return _result.IsNull() ? nullptr : RDC::OCC::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_PresentableObject::SetLocalTransformation(RDC::OCC::Trsf theTrsf)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetLocalTransformation(*(gp_Trsf*)pp_theTrsf);
}

void RDC::OCC::PrsMgr_PresentableObject::SetLocalTransformation(RDC::OCC::TopLoc_Datum3D^ theTrsf)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetLocalTransformation(Handle(::TopLoc_Datum3D)(theTrsf->NativeInstance));
}

bool RDC::OCC::PrsMgr_PresentableObject::HasTransformation()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasTransformation();
    return _result;
}

RDC::OCC::TopLoc_Datum3D^ RDC::OCC::PrsMgr_PresentableObject::TransformationGeom()
{
    Handle(::TopLoc_Datum3D) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->TransformationGeom();
    return _result.IsNull() ? nullptr : RDC::OCC::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

RDC::OCC::Trsf RDC::OCC::PrsMgr_PresentableObject::LocalTransformation()
{
    ::gp_Trsf _nativeResult = ((::PrsMgr_PresentableObject*)_NativeInstance)->LocalTransformation();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::Trsf RDC::OCC::PrsMgr_PresentableObject::Transformation()
{
    ::gp_Trsf _nativeResult = ((::PrsMgr_PresentableObject*)_NativeInstance)->Transformation();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::gp_GTrsf^ RDC::OCC::PrsMgr_PresentableObject::InversedTransformation()
{
    ::gp_GTrsf* _result = new ::gp_GTrsf();
    *_result = (::gp_GTrsf)((::PrsMgr_PresentableObject*)_NativeInstance)->InversedTransformation();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf(_result);
}

RDC::OCC::TopLoc_Datum3D^ RDC::OCC::PrsMgr_PresentableObject::CombinedParentTransformation()
{
    Handle(::TopLoc_Datum3D) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->CombinedParentTransformation();
    return _result.IsNull() ? nullptr : RDC::OCC::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_PresentableObject::ResetTransformation()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->ResetTransformation();
}

void RDC::OCC::PrsMgr_PresentableObject::UpdateTransformation()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UpdateTransformation();
}

RDC::OCC::Graphic3d_SequenceOfHClipPlane^ RDC::OCC::PrsMgr_PresentableObject::ClipPlanes()
{
    Handle(::Graphic3d_SequenceOfHClipPlane) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ClipPlanes();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_SequenceOfHClipPlane::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_PresentableObject::SetClipPlanes(RDC::OCC::Graphic3d_SequenceOfHClipPlane^ thePlanes)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetClipPlanes(Handle(::Graphic3d_SequenceOfHClipPlane)(thePlanes->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentableObject::AddClipPlane(RDC::OCC::Graphic3d_ClipPlane^ thePlane)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->AddClipPlane(Handle(::Graphic3d_ClipPlane)(thePlane->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentableObject::RemoveClipPlane(RDC::OCC::Graphic3d_ClipPlane^ thePlane)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->RemoveClipPlane(Handle(::Graphic3d_ClipPlane)(thePlane->NativeInstance));
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_PresentableObject::Parent()
{
    ::PrsMgr_PresentableObject* _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Parent();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::PrsMgr_PresentableObject(_result);
}

RDC::OCC::PrsMgr_ListOfPresentableObjects^ RDC::OCC::PrsMgr_PresentableObject::Children()
{
    ::PrsMgr_ListOfPresentableObjects* _result = new ::PrsMgr_ListOfPresentableObjects();
    *_result = (::PrsMgr_ListOfPresentableObjects)((::PrsMgr_PresentableObject*)_NativeInstance)->Children();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::PrsMgr_ListOfPresentableObjects(_result);
}

void RDC::OCC::PrsMgr_PresentableObject::AddChild(RDC::OCC::PrsMgr_PresentableObject^ theObject)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->AddChild(Handle(::PrsMgr_PresentableObject)(theObject->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentableObject::AddChildWithCurrentTransformation(RDC::OCC::PrsMgr_PresentableObject^ theObject)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->AddChildWithCurrentTransformation(Handle(::PrsMgr_PresentableObject)(theObject->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentableObject::RemoveChild(RDC::OCC::PrsMgr_PresentableObject^ theObject)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->RemoveChild(Handle(::PrsMgr_PresentableObject)(theObject->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentableObject::RemoveChildWithRestoreTransformation(RDC::OCC::PrsMgr_PresentableObject^ theObject)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->RemoveChildWithRestoreTransformation(Handle(::PrsMgr_PresentableObject)(theObject->NativeInstance));
}

bool RDC::OCC::PrsMgr_PresentableObject::HasOwnPresentations()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasOwnPresentations();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::BoundingBox(RDC::OCC::Bnd_Box^ theBndBox)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->BoundingBox(*(::Bnd_Box*)theBndBox->NativeInstance);
}

void RDC::OCC::PrsMgr_PresentableObject::SetIsoOnTriangulation(bool theIsEnabled)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetIsoOnTriangulation(theIsEnabled);
}

RDC::OCC::Aspect_TypeOfFacingModel RDC::OCC::PrsMgr_PresentableObject::CurrentFacingModel()
{
    ::Aspect_TypeOfFacingModel _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->CurrentFacingModel();
    return (RDC::OCC::Aspect_TypeOfFacingModel)_result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetCurrentFacingModel(RDC::OCC::Aspect_TypeOfFacingModel theModel)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetCurrentFacingModel((::Aspect_TypeOfFacingModel)theModel);
}

void RDC::OCC::PrsMgr_PresentableObject::SetCurrentFacingModel()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetCurrentFacingModel(Aspect_TOFM_BOTH_SIDE);
}

bool RDC::OCC::PrsMgr_PresentableObject::HasColor()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasColor();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::Color(RDC::OCC::Quantity_Color^ theColor)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->Color(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::PrsMgr_PresentableObject::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::PrsMgr_PresentableObject::UnsetColor()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetColor();
}

bool RDC::OCC::PrsMgr_PresentableObject::HasWidth()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasWidth();
    return _result;
}

double RDC::OCC::PrsMgr_PresentableObject::Width()
{
    double _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Width();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetWidth(double theWidth)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetWidth(theWidth);
}

void RDC::OCC::PrsMgr_PresentableObject::UnsetWidth()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetWidth();
}

bool RDC::OCC::PrsMgr_PresentableObject::HasMaterial()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasMaterial();
    return _result;
}

RDC::OCC::Graphic3d_NameOfMaterial RDC::OCC::PrsMgr_PresentableObject::Material()
{
    ::Graphic3d_NameOfMaterial _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Material();
    return (RDC::OCC::Graphic3d_NameOfMaterial)_result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetMaterial(RDC::OCC::Graphic3d_MaterialAspect^ aName)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)aName->NativeInstance);
}

void RDC::OCC::PrsMgr_PresentableObject::UnsetMaterial()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetMaterial();
}

bool RDC::OCC::PrsMgr_PresentableObject::IsTransparent()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->IsTransparent();
    return _result;
}

double RDC::OCC::PrsMgr_PresentableObject::Transparency()
{
    double _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Transparency();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetTransparency(double aValue)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransparency(aValue);
}

void RDC::OCC::PrsMgr_PresentableObject::SetTransparency()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransparency(0.59999999999999998);
}

void RDC::OCC::PrsMgr_PresentableObject::UnsetTransparency()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetTransparency();
}

bool RDC::OCC::PrsMgr_PresentableObject::HasPolygonOffsets()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasPolygonOffsets();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::PolygonOffsets(int% aMode, float% aFactor, float% aUnits)
{
    pin_ptr<int> pp_aMode = &aMode;
    pin_ptr<float> pp_aFactor = &aFactor;
    pin_ptr<float> pp_aUnits = &aUnits;
    ((::PrsMgr_PresentableObject*)_NativeInstance)->PolygonOffsets(*(int*)pp_aMode, *(float*)pp_aFactor, *(float*)pp_aUnits);
}

void RDC::OCC::PrsMgr_PresentableObject::SetPolygonOffsets(int aMode, float aFactor, float aUnits)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetPolygonOffsets(aMode, aFactor, aUnits);
}

void RDC::OCC::PrsMgr_PresentableObject::SetPolygonOffsets(int aMode, float aFactor)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetPolygonOffsets(aMode, aFactor, 0.);
}

void RDC::OCC::PrsMgr_PresentableObject::SetPolygonOffsets(int aMode)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetPolygonOffsets(aMode, 1., 0.);
}

void RDC::OCC::PrsMgr_PresentableObject::UnsetAttributes()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetAttributes();
}

void RDC::OCC::PrsMgr_PresentableObject::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::PrsMgr_PresentableObject*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::PrsMgr_PresentableObject::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::PrsMgr_PresentableObject*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::PrsMgr_PresentableObject::ToBeUpdated(RDC::OCC::TColStd_ListOfInteger^ ListOfMode)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->ToBeUpdated(*(::TColStd_ListOfInteger*)ListOfMode->NativeInstance);
}

bool RDC::OCC::PrsMgr_PresentableObject::ToPropagateVisualState()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ToPropagateVisualState();
    return _result;
}

void RDC::OCC::PrsMgr_PresentableObject::SetPropagateVisualState(bool theFlag)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetPropagateVisualState(theFlag);
}

RDC::OCC::PrsMgr_PresentableObject^ RDC::OCC::PrsMgr_PresentableObject::CreateDowncasted(::PrsMgr_PresentableObject* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::SelectMgr_SelectableObject)))
        return RDC::OCC::SelectMgr_SelectableObject::CreateDowncasted((::SelectMgr_SelectableObject*)instance);
    if (instance->IsKind(STANDARD_TYPE(::StdSelect_Shape)))
        return RDC::OCC::StdSelect_Shape::CreateDowncasted((::StdSelect_Shape*)instance);
    
    return gcnew RDC::OCC::PrsMgr_PresentableObject( instance );
}



//---------------------------------------------------------------------
//  Class  PrsMgr_PresentationManager
//---------------------------------------------------------------------

RDC::OCC::PrsMgr_PresentationManager::PrsMgr_PresentationManager(RDC::OCC::Graphic3d_StructureManager^ theStructureManager)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::PrsMgr_PresentationManager(Handle(::Graphic3d_StructureManager)(theStructureManager->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentationManager::Display(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Display(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
}

void RDC::OCC::PrsMgr_PresentationManager::Display(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Display(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
}

void RDC::OCC::PrsMgr_PresentationManager::Erase(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Erase(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
}

void RDC::OCC::PrsMgr_PresentationManager::Erase(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Erase(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
}

void RDC::OCC::PrsMgr_PresentationManager::Clear(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
}

void RDC::OCC::PrsMgr_PresentationManager::Clear(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
}

void RDC::OCC::PrsMgr_PresentationManager::SetVisibility(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode, bool theValue)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->SetVisibility(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode, theValue);
}

void RDC::OCC::PrsMgr_PresentationManager::Unhighlight(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Unhighlight(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentationManager::SetDisplayPriority(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode, RDC::OCC::Graphic3d_DisplayPriority theNewPrior)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->SetDisplayPriority(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode, (::Graphic3d_DisplayPriority)theNewPrior);
}

RDC::OCC::Graphic3d_DisplayPriority RDC::OCC::PrsMgr_PresentationManager::DisplayPriority(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    ::Graphic3d_DisplayPriority _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->DisplayPriority(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
    return (RDC::OCC::Graphic3d_DisplayPriority)_result;
}

void RDC::OCC::PrsMgr_PresentationManager::SetZLayer(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theLayerId)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->SetZLayer(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theLayerId);
}

int RDC::OCC::PrsMgr_PresentationManager::GetZLayer(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject)
{
    int _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->GetZLayer(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance));
    return _result;
}

bool RDC::OCC::PrsMgr_PresentationManager::IsDisplayed(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->IsDisplayed(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
    return _result;
}

bool RDC::OCC::PrsMgr_PresentationManager::IsDisplayed(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->IsDisplayed(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
    return _result;
}

bool RDC::OCC::PrsMgr_PresentationManager::IsHighlighted(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->IsHighlighted(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
    return _result;
}

bool RDC::OCC::PrsMgr_PresentationManager::IsHighlighted(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->IsHighlighted(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
    return _result;
}

void RDC::OCC::PrsMgr_PresentationManager::Update(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Update(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
}

void RDC::OCC::PrsMgr_PresentationManager::Update(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Update(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
}

void RDC::OCC::PrsMgr_PresentationManager::BeginImmediateDraw()
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->BeginImmediateDraw();
}

void RDC::OCC::PrsMgr_PresentationManager::ClearImmediateDraw()
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->ClearImmediateDraw();
}

void RDC::OCC::PrsMgr_PresentationManager::AddToImmediateList(RDC::OCC::Graphic3d_Structure^ thePrs)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->AddToImmediateList(Handle(::Graphic3d_Structure)(thePrs->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentationManager::EndImmediateDraw(RDC::OCC::V3d_Viewer^ theViewer)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->EndImmediateDraw(Handle(::V3d_Viewer)(theViewer->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentationManager::RedrawImmediate(RDC::OCC::V3d_Viewer^ theViewer)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->RedrawImmediate(Handle(::V3d_Viewer)(theViewer->NativeInstance));
}

bool RDC::OCC::PrsMgr_PresentationManager::IsImmediateModeOn()
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->IsImmediateModeOn();
    return _result;
}

void RDC::OCC::PrsMgr_PresentationManager::Color(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode, RDC::OCC::PrsMgr_PresentableObject^ theSelObj, int theImmediateStructLayerId)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Color(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode, Handle(::PrsMgr_PresentableObject)(theSelObj->NativeInstance), theImmediateStructLayerId);
}

void RDC::OCC::PrsMgr_PresentationManager::Color(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode, RDC::OCC::PrsMgr_PresentableObject^ theSelObj)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Color(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode, Handle(::PrsMgr_PresentableObject)(theSelObj->NativeInstance), Graphic3d_ZLayerId_Topmost);
}

void RDC::OCC::PrsMgr_PresentationManager::Color(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Color(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode, nullptr, Graphic3d_ZLayerId_Topmost);
}

void RDC::OCC::PrsMgr_PresentationManager::Color(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::Prs3d_Drawer^ theStyle)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Color(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), 0, nullptr, Graphic3d_ZLayerId_Topmost);
}

void RDC::OCC::PrsMgr_PresentationManager::Connect(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::PrsMgr_PresentableObject^ theOtherObject, int theMode, int theOtherMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Connect(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::PrsMgr_PresentableObject)(theOtherObject->NativeInstance), theMode, theOtherMode);
}

void RDC::OCC::PrsMgr_PresentationManager::Connect(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::PrsMgr_PresentableObject^ theOtherObject, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Connect(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::PrsMgr_PresentableObject)(theOtherObject->NativeInstance), theMode, 0);
}

void RDC::OCC::PrsMgr_PresentationManager::Connect(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::PrsMgr_PresentableObject^ theOtherObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Connect(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::PrsMgr_PresentableObject)(theOtherObject->NativeInstance), 0, 0);
}

void RDC::OCC::PrsMgr_PresentationManager::Transform(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::TopLoc_Datum3D^ theTransformation, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Transform(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::TopLoc_Datum3D)(theTransformation->NativeInstance), theMode);
}

void RDC::OCC::PrsMgr_PresentationManager::Transform(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::TopLoc_Datum3D^ theTransformation)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Transform(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::TopLoc_Datum3D)(theTransformation->NativeInstance), 0);
}

RDC::OCC::Graphic3d_StructureManager^ RDC::OCC::PrsMgr_PresentationManager::StructureManager()
{
    Handle(::Graphic3d_StructureManager) _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->StructureManager();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_StructureManager::CreateDowncasted(_result.get());
}

bool RDC::OCC::PrsMgr_PresentationManager::HasPresentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->HasPresentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
    return _result;
}

bool RDC::OCC::PrsMgr_PresentationManager::HasPresentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->HasPresentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
    return _result;
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_PresentationManager::Presentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode, bool theToCreate, RDC::OCC::PrsMgr_PresentableObject^ theSelObj)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->Presentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode, theToCreate, Handle(::PrsMgr_PresentableObject)(theSelObj->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_PresentationManager::Presentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode, bool theToCreate)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->Presentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode, theToCreate, nullptr);
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_PresentationManager::Presentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->Presentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode, false, nullptr);
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_PresentationManager::Presentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->Presentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0, false, nullptr);
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_PresentationManager::UpdateHighlightTrsf(RDC::OCC::V3d_Viewer^ theViewer, RDC::OCC::PrsMgr_PresentableObject^ theObj, int theMode, RDC::OCC::PrsMgr_PresentableObject^ theSelObj)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->UpdateHighlightTrsf(Handle(::V3d_Viewer)(theViewer->NativeInstance), Handle(::PrsMgr_PresentableObject)(theObj->NativeInstance), theMode, Handle(::PrsMgr_PresentableObject)(theSelObj->NativeInstance));
}

void RDC::OCC::PrsMgr_PresentationManager::UpdateHighlightTrsf(RDC::OCC::V3d_Viewer^ theViewer, RDC::OCC::PrsMgr_PresentableObject^ theObj, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->UpdateHighlightTrsf(Handle(::V3d_Viewer)(theViewer->NativeInstance), Handle(::PrsMgr_PresentableObject)(theObj->NativeInstance), theMode, nullptr);
}

void RDC::OCC::PrsMgr_PresentationManager::UpdateHighlightTrsf(RDC::OCC::V3d_Viewer^ theViewer, RDC::OCC::PrsMgr_PresentableObject^ theObj)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->UpdateHighlightTrsf(Handle(::V3d_Viewer)(theViewer->NativeInstance), Handle(::PrsMgr_PresentableObject)(theObj->NativeInstance), 0, nullptr);
}

RDC::OCC::PrsMgr_PresentationManager^ RDC::OCC::PrsMgr_PresentationManager::CreateDowncasted(::PrsMgr_PresentationManager* instance)
{
    return gcnew RDC::OCC::PrsMgr_PresentationManager( instance );
}



//---------------------------------------------------------------------
//  Class  PrsMgr_Presentation
//---------------------------------------------------------------------

RDC::OCC::Graphic3d_Structure^ RDC::OCC::PrsMgr_Presentation::Presentation()
{
    ::Graphic3d_Structure* _result = ((::PrsMgr_Presentation*)_NativeInstance)->Presentation();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Structure(_result);
}

RDC::OCC::PrsMgr_PresentationManager^ RDC::OCC::PrsMgr_Presentation::PresentationManager()
{
    Handle(::PrsMgr_PresentationManager) _result = ((::PrsMgr_Presentation*)_NativeInstance)->PresentationManager();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentationManager::CreateDowncasted(_result.get());
}

void RDC::OCC::PrsMgr_Presentation::SetUpdateStatus(bool theUpdateStatus)
{
    ((::PrsMgr_Presentation*)_NativeInstance)->SetUpdateStatus(theUpdateStatus);
}

bool RDC::OCC::PrsMgr_Presentation::MustBeUpdated()
{
    bool _result = ((::PrsMgr_Presentation*)_NativeInstance)->MustBeUpdated();
    return _result;
}

int RDC::OCC::PrsMgr_Presentation::Mode()
{
    int _result = ((::PrsMgr_Presentation*)_NativeInstance)->Mode();
    return _result;
}

void RDC::OCC::PrsMgr_Presentation::Display()
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Display();
}

void RDC::OCC::PrsMgr_Presentation::Erase()
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Erase();
}

void RDC::OCC::PrsMgr_Presentation::Highlight(RDC::OCC::Prs3d_Drawer^ theStyle)
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Highlight(Handle(::Prs3d_Drawer)(theStyle->NativeInstance));
}

void RDC::OCC::PrsMgr_Presentation::Unhighlight()
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Unhighlight();
}

bool RDC::OCC::PrsMgr_Presentation::IsDisplayed()
{
    bool _result = ((::PrsMgr_Presentation*)_NativeInstance)->IsDisplayed();
    return _result;
}

void RDC::OCC::PrsMgr_Presentation::Clear(bool theWithDestruction)
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Clear(theWithDestruction);
}

void RDC::OCC::PrsMgr_Presentation::Clear()
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Clear(true);
}

void RDC::OCC::PrsMgr_Presentation::Compute()
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Compute();
}

void RDC::OCC::PrsMgr_Presentation::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::PrsMgr_Presentation*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::PrsMgr_Presentation::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::PrsMgr_Presentation*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::PrsMgr_Presentation^ RDC::OCC::PrsMgr_Presentation::CreateDowncasted(::PrsMgr_Presentation* instance)
{
    return gcnew RDC::OCC::PrsMgr_Presentation( instance );
}


