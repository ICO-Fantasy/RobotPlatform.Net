// Generated wrapper code for package AIS

#include "OcctPCH.h"
#include "AIS.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "SelectMgr.h"
#include "TopoDS.h"
#include "V3d.h"
#include "PrsMgr.h"
#include "TCollection.h"
#include "Prs3d.h"
#include "Graphic3d.h"
#include "TopLoc.h"
#include "gp.h"
#include "TColgp.h"
#include "Bnd.h"
#include "Standard.h"
#include "TColStd.h"
#include "Aspect.h"
#include "Quantity.h"
#include "Geom.h"
#include "TopAbs.h"
#include "Image.h"


//---------------------------------------------------------------------
//  Class  AIS_DataMapOfIOStatus
//---------------------------------------------------------------------

RDC::OCC::AIS_DataMapOfIOStatus::AIS_DataMapOfIOStatus()
    : RDC::OCC::BaseClass<::AIS_DataMapOfIOStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfIOStatus();
}

RDC::OCC::AIS_DataMapOfIOStatus::AIS_DataMapOfIOStatus(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::AIS_DataMapOfIOStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfIOStatus(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::AIS_DataMapOfIOStatus::AIS_DataMapOfIOStatus(int theNbBuckets)
    : RDC::OCC::BaseClass<::AIS_DataMapOfIOStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfIOStatus(theNbBuckets, 0L);
}

void RDC::OCC::AIS_DataMapOfIOStatus::Exchange(RDC::OCC::AIS_DataMapOfIOStatus^ theOther)
{
    ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Exchange(*(::AIS_DataMapOfIOStatus*)theOther->NativeInstance);
}

RDC::OCC::AIS_DataMapOfIOStatus^ RDC::OCC::AIS_DataMapOfIOStatus::Assign(RDC::OCC::AIS_DataMapOfIOStatus^ theOther)
{
    ::AIS_DataMapOfIOStatus* _result = new ::AIS_DataMapOfIOStatus();
    *_result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Assign(*(::AIS_DataMapOfIOStatus*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_DataMapOfIOStatus(_result);
}

void RDC::OCC::AIS_DataMapOfIOStatus::ReSize(int N)
{
    ((::AIS_DataMapOfIOStatus*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::AIS_DataMapOfIOStatus::Bind(RDC::OCC::AIS_InteractiveObject^ theKey, RDC::OCC::AIS_GlobalStatus^ theItem)
{
    bool _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Bind(Handle(::AIS_InteractiveObject)(theKey->NativeInstance), Handle(::AIS_GlobalStatus)(theItem->NativeInstance));
    return _result;
}

RDC::OCC::AIS_GlobalStatus^ RDC::OCC::AIS_DataMapOfIOStatus::Bound(RDC::OCC::AIS_InteractiveObject^ theKey, RDC::OCC::AIS_GlobalStatus^ theItem)
{
    throw gcnew System::NotImplementedException();
}

bool RDC::OCC::AIS_DataMapOfIOStatus::IsBound(RDC::OCC::AIS_InteractiveObject^ theKey)
{
    bool _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->IsBound(Handle(::AIS_InteractiveObject)(theKey->NativeInstance));
    return _result;
}

bool RDC::OCC::AIS_DataMapOfIOStatus::UnBind(RDC::OCC::AIS_InteractiveObject^ theKey)
{
    bool _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->UnBind(Handle(::AIS_InteractiveObject)(theKey->NativeInstance));
    return _result;
}

RDC::OCC::AIS_GlobalStatus^ RDC::OCC::AIS_DataMapOfIOStatus::Seek(RDC::OCC::AIS_InteractiveObject^ theKey)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::AIS_GlobalStatus^ RDC::OCC::AIS_DataMapOfIOStatus::Find(RDC::OCC::AIS_InteractiveObject^ theKey)
{
    Handle(::AIS_GlobalStatus) _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Find(Handle(::AIS_InteractiveObject)(theKey->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_GlobalStatus::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_GlobalStatus^ RDC::OCC::AIS_DataMapOfIOStatus::ChangeSeek(RDC::OCC::AIS_InteractiveObject^ theKey)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::AIS_GlobalStatus^ RDC::OCC::AIS_DataMapOfIOStatus::ChangeFind(RDC::OCC::AIS_InteractiveObject^ theKey)
{
    Handle(::AIS_GlobalStatus) _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->ChangeFind(Handle(::AIS_InteractiveObject)(theKey->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_GlobalStatus::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_DataMapOfIOStatus::Clear(bool doReleaseMemory)
{
    ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::AIS_DataMapOfIOStatus::Clear()
{
    ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Clear(false);
}

int RDC::OCC::AIS_DataMapOfIOStatus::Size()
{
    int _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_DataMapOfIOStatus::Iterator
//---------------------------------------------------------------------

RDC::OCC::AIS_DataMapOfIOStatus::Iterator::Iterator()
    : RDC::OCC::BaseClass<::AIS_DataMapOfIOStatus::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfIOStatus::Iterator();
}

bool RDC::OCC::AIS_DataMapOfIOStatus::Iterator::More()
{
    bool _result = ((::AIS_DataMapOfIOStatus::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::AIS_DataMapOfIOStatus::Iterator::Next()
{
    ((::AIS_DataMapOfIOStatus::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::AIS_GlobalStatus^ RDC::OCC::AIS_DataMapOfIOStatus::Iterator::Value()
{
    Handle(::AIS_GlobalStatus) _result = ((::AIS_DataMapOfIOStatus::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_GlobalStatus::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_GlobalStatus^ RDC::OCC::AIS_DataMapOfIOStatus::Iterator::ChangeValue()
{
    Handle(::AIS_GlobalStatus) _result = ((::AIS_DataMapOfIOStatus::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_GlobalStatus::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_DataMapOfIOStatus::Iterator::Key()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_DataMapOfIOStatus::Iterator*)_NativeInstance)->Key();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  AIS_ListOfInteractive
//---------------------------------------------------------------------

RDC::OCC::AIS_ListOfInteractive::AIS_ListOfInteractive()
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ListOfInteractive();
}

RDC::OCC::AIS_ListOfInteractive::AIS_ListOfInteractive(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ListOfInteractive(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::AIS_ListOfInteractive::Size()
{
    int _result = ((::AIS_ListOfInteractive*)_NativeInstance)->Size();
    return _result;
}

RDC::OCC::AIS_ListOfInteractive^ RDC::OCC::AIS_ListOfInteractive::Assign(RDC::OCC::AIS_ListOfInteractive^ theOther)
{
    ::AIS_ListOfInteractive* _result = new ::AIS_ListOfInteractive();
    *_result = ((::AIS_ListOfInteractive*)_NativeInstance)->Assign(*(::AIS_ListOfInteractive*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_ListOfInteractive(_result);
}

void RDC::OCC::AIS_ListOfInteractive::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::AIS_ListOfInteractive*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::AIS_ListOfInteractive::Clear()
{
    ((::AIS_ListOfInteractive*)_NativeInstance)->Clear(0L);
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ListOfInteractive::First()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ListOfInteractive::Last()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ListOfInteractive::Append(RDC::OCC::AIS_InteractiveObject^ theItem)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->Append(Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ListOfInteractive::Prepend(RDC::OCC::AIS_InteractiveObject^ theItem)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->Prepend(Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_ListOfInteractive::RemoveFirst()
{
    ((::AIS_ListOfInteractive*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::AIS_ListOfInteractive::Remove(RDC::OCC::AIS_ListOfInteractive::Iterator^ theIter)
{
    ((::AIS_ListOfInteractive*)_NativeInstance)->Remove(*(::AIS_ListOfInteractive::Iterator*)theIter->NativeInstance);
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ListOfInteractive::InsertBefore(RDC::OCC::AIS_InteractiveObject^ theItem, RDC::OCC::AIS_ListOfInteractive::Iterator^ theIter)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->InsertBefore(Handle(::AIS_InteractiveObject)(theItem->NativeInstance), *(::AIS_ListOfInteractive::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ListOfInteractive::InsertAfter(RDC::OCC::AIS_InteractiveObject^ theItem, RDC::OCC::AIS_ListOfInteractive::Iterator^ theIter)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->InsertAfter(Handle(::AIS_InteractiveObject)(theItem->NativeInstance), *(::AIS_ListOfInteractive::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_ListOfInteractive::Reverse()
{
    ((::AIS_ListOfInteractive*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  AIS_ListOfInteractive::Iterator
//---------------------------------------------------------------------

RDC::OCC::AIS_ListOfInteractive::Iterator::Iterator()
    : RDC::OCC::BaseClass<::AIS_ListOfInteractive::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ListOfInteractive::Iterator();
}

bool RDC::OCC::AIS_ListOfInteractive::Iterator::More()
{
    bool _result = ((::AIS_ListOfInteractive::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::AIS_ListOfInteractive::Iterator::Next()
{
    ((::AIS_ListOfInteractive::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ListOfInteractive::Iterator::Value()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ListOfInteractive::Iterator::ChangeValue()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  AIS_ListIteratorOfListOfInteractive
//---------------------------------------------------------------------

RDC::OCC::AIS_ListIteratorOfListOfInteractive::AIS_ListIteratorOfListOfInteractive()
    : RDC::OCC::BaseClass<::AIS_ListIteratorOfListOfInteractive>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ListIteratorOfListOfInteractive();
}

RDC::OCC::AIS_ListIteratorOfListOfInteractive::AIS_ListIteratorOfListOfInteractive(RDC::OCC::NCollection_BaseList^ theList)
    : RDC::OCC::BaseClass<::AIS_ListIteratorOfListOfInteractive>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ListIteratorOfListOfInteractive(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::AIS_ListIteratorOfListOfInteractive::More()
{
    bool _result = ((::AIS_ListIteratorOfListOfInteractive*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::AIS_ListIteratorOfListOfInteractive::Next()
{
    ((::AIS_ListIteratorOfListOfInteractive*)_NativeInstance)->Next();
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ListIteratorOfListOfInteractive::Value()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListIteratorOfListOfInteractive*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ListIteratorOfListOfInteractive::ChangeValue()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListIteratorOfListOfInteractive*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  AIS_NArray1OfEntityOwner
//---------------------------------------------------------------------

RDC::OCC::AIS_NArray1OfEntityOwner::AIS_NArray1OfEntityOwner()
    : RDC::OCC::BaseClass<::AIS_NArray1OfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NArray1OfEntityOwner();
}

RDC::OCC::AIS_NArray1OfEntityOwner::AIS_NArray1OfEntityOwner(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::AIS_NArray1OfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NArray1OfEntityOwner(theLower, theUpper);
}

RDC::OCC::AIS_NArray1OfEntityOwner::AIS_NArray1OfEntityOwner(RDC::OCC::SelectMgr_EntityOwner^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::AIS_NArray1OfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NArray1OfEntityOwner(Handle(::SelectMgr_EntityOwner)(theBegin->NativeInstance), theLower, theUpper, theUseBuffer);
}

RDC::OCC::AIS_NArray1OfEntityOwner::AIS_NArray1OfEntityOwner(RDC::OCC::SelectMgr_EntityOwner^ theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::AIS_NArray1OfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NArray1OfEntityOwner(Handle(::SelectMgr_EntityOwner)(theBegin->NativeInstance), theLower, theUpper, true);
}

void RDC::OCC::AIS_NArray1OfEntityOwner::Init(RDC::OCC::SelectMgr_EntityOwner^ theValue)
{
    ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Init(Handle(::SelectMgr_EntityOwner)(theValue->NativeInstance));
}

int RDC::OCC::AIS_NArray1OfEntityOwner::Size()
{
    int _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::AIS_NArray1OfEntityOwner::Length()
{
    int _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::AIS_NArray1OfEntityOwner::IsEmpty()
{
    bool _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::AIS_NArray1OfEntityOwner::Lower()
{
    int _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::AIS_NArray1OfEntityOwner::Upper()
{
    int _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::AIS_NArray1OfEntityOwner^ RDC::OCC::AIS_NArray1OfEntityOwner::Assign(RDC::OCC::AIS_NArray1OfEntityOwner^ theOther)
{
    ::AIS_NArray1OfEntityOwner* _result = new ::AIS_NArray1OfEntityOwner();
    *_result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Assign(*(::AIS_NArray1OfEntityOwner*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_NArray1OfEntityOwner(_result);
}

RDC::OCC::AIS_NArray1OfEntityOwner^ RDC::OCC::AIS_NArray1OfEntityOwner::Move(RDC::OCC::AIS_NArray1OfEntityOwner^ theOther)
{
    ::AIS_NArray1OfEntityOwner* _result = new ::AIS_NArray1OfEntityOwner();
    *_result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Move(*(::AIS_NArray1OfEntityOwner*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_NArray1OfEntityOwner(_result);
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NArray1OfEntityOwner::First()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NArray1OfEntityOwner::ChangeFirst()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NArray1OfEntityOwner::Last()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NArray1OfEntityOwner::ChangeLast()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NArray1OfEntityOwner::Value(int theIndex)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NArray1OfEntityOwner::ChangeValue(int theIndex)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_NArray1OfEntityOwner::SetValue(int theIndex, RDC::OCC::SelectMgr_EntityOwner^ theItem)
{
    ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->SetValue(theIndex, Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
}

void RDC::OCC::AIS_NArray1OfEntityOwner::UpdateLowerBound(int theLower)
{
    ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::AIS_NArray1OfEntityOwner::UpdateUpperBound(int theUpper)
{
    ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::AIS_NArray1OfEntityOwner::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::AIS_NArray1OfEntityOwner::IsDeletable()
{
    bool _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::SelectMgr_EntityOwner^>^ RDC::OCC::AIS_NArray1OfEntityOwner::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::SelectMgr_EntityOwner^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::AIS_NArray1OfEntityOwner::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::SelectMgr_EntityOwner^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  AIS_NArray1OfEntityOwner::Iterator
//---------------------------------------------------------------------

void RDC::OCC::AIS_NArray1OfEntityOwner::Iterator::Init(RDC::OCC::AIS_NArray1OfEntityOwner^ theList)
{
    ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->Init(*(::AIS_NArray1OfEntityOwner*)theList->NativeInstance);
}

bool RDC::OCC::AIS_NArray1OfEntityOwner::Iterator::More()
{
    bool _result = ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::AIS_NArray1OfEntityOwner::Iterator::Initialize(RDC::OCC::AIS_NArray1OfEntityOwner^ theList)
{
    ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->Initialize(*(::AIS_NArray1OfEntityOwner*)theList->NativeInstance);
}

void RDC::OCC::AIS_NArray1OfEntityOwner::Iterator::Next()
{
    ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NArray1OfEntityOwner::Iterator::Value()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NArray1OfEntityOwner::Iterator::ChangeValue()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  AIS_NListOfEntityOwner
//---------------------------------------------------------------------

RDC::OCC::AIS_NListOfEntityOwner::AIS_NListOfEntityOwner()
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NListOfEntityOwner();
}

RDC::OCC::AIS_NListOfEntityOwner::AIS_NListOfEntityOwner(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NListOfEntityOwner(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::AIS_NListOfEntityOwner::Size()
{
    int _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Size();
    return _result;
}

RDC::OCC::AIS_NListOfEntityOwner^ RDC::OCC::AIS_NListOfEntityOwner::Assign(RDC::OCC::AIS_NListOfEntityOwner^ theOther)
{
    ::AIS_NListOfEntityOwner* _result = new ::AIS_NListOfEntityOwner();
    *_result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Assign(*(::AIS_NListOfEntityOwner*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_NListOfEntityOwner(_result);
}

void RDC::OCC::AIS_NListOfEntityOwner::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::AIS_NListOfEntityOwner*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::AIS_NListOfEntityOwner::Clear()
{
    ((::AIS_NListOfEntityOwner*)_NativeInstance)->Clear(0L);
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NListOfEntityOwner::First()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NListOfEntityOwner::Last()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NListOfEntityOwner::Append(RDC::OCC::SelectMgr_EntityOwner^ theItem)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Append(Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NListOfEntityOwner::Prepend(RDC::OCC::SelectMgr_EntityOwner^ theItem)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Prepend(Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_NListOfEntityOwner::RemoveFirst()
{
    ((::AIS_NListOfEntityOwner*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::AIS_NListOfEntityOwner::Remove(RDC::OCC::AIS_NListOfEntityOwner::Iterator^ theIter)
{
    ((::AIS_NListOfEntityOwner*)_NativeInstance)->Remove(*(::AIS_NListOfEntityOwner::Iterator*)theIter->NativeInstance);
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NListOfEntityOwner::InsertBefore(RDC::OCC::SelectMgr_EntityOwner^ theItem, RDC::OCC::AIS_NListOfEntityOwner::Iterator^ theIter)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->InsertBefore(Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance), *(::AIS_NListOfEntityOwner::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NListOfEntityOwner::InsertAfter(RDC::OCC::SelectMgr_EntityOwner^ theItem, RDC::OCC::AIS_NListOfEntityOwner::Iterator^ theIter)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->InsertAfter(Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance), *(::AIS_NListOfEntityOwner::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_NListOfEntityOwner::Reverse()
{
    ((::AIS_NListOfEntityOwner*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  AIS_NListOfEntityOwner::Iterator
//---------------------------------------------------------------------

RDC::OCC::AIS_NListOfEntityOwner::Iterator::Iterator()
    : RDC::OCC::BaseClass<::AIS_NListOfEntityOwner::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NListOfEntityOwner::Iterator();
}

bool RDC::OCC::AIS_NListOfEntityOwner::Iterator::More()
{
    bool _result = ((::AIS_NListOfEntityOwner::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::AIS_NListOfEntityOwner::Iterator::Next()
{
    ((::AIS_NListOfEntityOwner::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NListOfEntityOwner::Iterator::Value()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_NListOfEntityOwner::Iterator::ChangeValue()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  AIS_DataMapOfShapeDrawer
//---------------------------------------------------------------------

RDC::OCC::AIS_DataMapOfShapeDrawer::AIS_DataMapOfShapeDrawer()
    : RDC::OCC::BaseClass<::AIS_DataMapOfShapeDrawer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfShapeDrawer();
}

RDC::OCC::AIS_DataMapOfShapeDrawer::AIS_DataMapOfShapeDrawer(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::AIS_DataMapOfShapeDrawer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfShapeDrawer(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::AIS_DataMapOfShapeDrawer::AIS_DataMapOfShapeDrawer(int theNbBuckets)
    : RDC::OCC::BaseClass<::AIS_DataMapOfShapeDrawer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfShapeDrawer(theNbBuckets, 0L);
}

void RDC::OCC::AIS_DataMapOfShapeDrawer::Exchange(RDC::OCC::AIS_DataMapOfShapeDrawer^ theOther)
{
    ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Exchange(*(::AIS_DataMapOfShapeDrawer*)theOther->NativeInstance);
}

RDC::OCC::AIS_DataMapOfShapeDrawer^ RDC::OCC::AIS_DataMapOfShapeDrawer::Assign(RDC::OCC::AIS_DataMapOfShapeDrawer^ theOther)
{
    ::AIS_DataMapOfShapeDrawer* _result = new ::AIS_DataMapOfShapeDrawer();
    *_result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Assign(*(::AIS_DataMapOfShapeDrawer*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_DataMapOfShapeDrawer(_result);
}

void RDC::OCC::AIS_DataMapOfShapeDrawer::ReSize(int N)
{
    ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::AIS_DataMapOfShapeDrawer::Bind(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::AIS_ColoredDrawer^ theItem)
{
    bool _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, Handle(::AIS_ColoredDrawer)(theItem->NativeInstance));
    return _result;
}

RDC::OCC::AIS_ColoredDrawer^ RDC::OCC::AIS_DataMapOfShapeDrawer::Bound(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::AIS_ColoredDrawer^ theItem)
{
    throw gcnew System::NotImplementedException();
}

bool RDC::OCC::AIS_DataMapOfShapeDrawer::IsBound(RDC::OCC::TopoDS_Shape^ theKey)
{
    bool _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool RDC::OCC::AIS_DataMapOfShapeDrawer::UnBind(RDC::OCC::TopoDS_Shape^ theKey)
{
    bool _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

RDC::OCC::AIS_ColoredDrawer^ RDC::OCC::AIS_DataMapOfShapeDrawer::Seek(RDC::OCC::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::AIS_ColoredDrawer^ RDC::OCC::AIS_DataMapOfShapeDrawer::Find(RDC::OCC::TopoDS_Shape^ theKey)
{
    Handle(::AIS_ColoredDrawer) _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_ColoredDrawer::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_ColoredDrawer^ RDC::OCC::AIS_DataMapOfShapeDrawer::ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::AIS_ColoredDrawer^ RDC::OCC::AIS_DataMapOfShapeDrawer::ChangeFind(RDC::OCC::TopoDS_Shape^ theKey)
{
    Handle(::AIS_ColoredDrawer) _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_ColoredDrawer::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_DataMapOfShapeDrawer::Clear(bool doReleaseMemory)
{
    ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::AIS_DataMapOfShapeDrawer::Clear()
{
    ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Clear(false);
}

int RDC::OCC::AIS_DataMapOfShapeDrawer::Size()
{
    int _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_DataMapOfShapeDrawer::Iterator
//---------------------------------------------------------------------

RDC::OCC::AIS_DataMapOfShapeDrawer::Iterator::Iterator()
    : RDC::OCC::BaseClass<::AIS_DataMapOfShapeDrawer::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfShapeDrawer::Iterator();
}

bool RDC::OCC::AIS_DataMapOfShapeDrawer::Iterator::More()
{
    bool _result = ((::AIS_DataMapOfShapeDrawer::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::AIS_DataMapOfShapeDrawer::Iterator::Next()
{
    ((::AIS_DataMapOfShapeDrawer::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::AIS_ColoredDrawer^ RDC::OCC::AIS_DataMapOfShapeDrawer::Iterator::Value()
{
    Handle(::AIS_ColoredDrawer) _result = ((::AIS_DataMapOfShapeDrawer::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_ColoredDrawer::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_ColoredDrawer^ RDC::OCC::AIS_DataMapOfShapeDrawer::Iterator::ChangeValue()
{
    Handle(::AIS_ColoredDrawer) _result = ((::AIS_DataMapOfShapeDrawer::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_ColoredDrawer::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::AIS_DataMapOfShapeDrawer::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::AIS_DataMapOfShapeDrawer::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  AIS_MouseGestureMap
//---------------------------------------------------------------------

RDC::OCC::AIS_MouseGestureMap::AIS_MouseGestureMap()
    : RDC::OCC::BaseClass<::AIS_MouseGestureMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseGestureMap();
}

RDC::OCC::AIS_MouseGestureMap::AIS_MouseGestureMap(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::AIS_MouseGestureMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseGestureMap(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::AIS_MouseGestureMap::AIS_MouseGestureMap(int theNbBuckets)
    : RDC::OCC::BaseClass<::AIS_MouseGestureMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseGestureMap(theNbBuckets, 0L);
}

void RDC::OCC::AIS_MouseGestureMap::Exchange(RDC::OCC::AIS_MouseGestureMap^ theOther)
{
    ((::AIS_MouseGestureMap*)_NativeInstance)->Exchange(*(::AIS_MouseGestureMap*)theOther->NativeInstance);
}

RDC::OCC::AIS_MouseGestureMap^ RDC::OCC::AIS_MouseGestureMap::Assign(RDC::OCC::AIS_MouseGestureMap^ theOther)
{
    ::AIS_MouseGestureMap* _result = new ::AIS_MouseGestureMap();
    *_result = ((::AIS_MouseGestureMap*)_NativeInstance)->Assign(*(::AIS_MouseGestureMap*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_MouseGestureMap(_result);
}

void RDC::OCC::AIS_MouseGestureMap::ReSize(int N)
{
    ((::AIS_MouseGestureMap*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::AIS_MouseGestureMap::Bind(unsigned int theKey, RDC::OCC::AIS_MouseGesture theItem)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    pin_ptr<RDC::OCC::AIS_MouseGesture> pp_theItem = &theItem;
    bool _result = ((::AIS_MouseGestureMap*)_NativeInstance)->Bind(*(unsigned int*)pp_theKey, *(::AIS_MouseGesture*)pp_theItem);
    return _result;
}

RDC::OCC::AIS_MouseGesture RDC::OCC::AIS_MouseGestureMap::Bound(unsigned int theKey, RDC::OCC::AIS_MouseGesture theItem)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    pin_ptr<RDC::OCC::AIS_MouseGesture> pp_theItem = &theItem;
    const ::AIS_MouseGesture* _result = ((::AIS_MouseGestureMap*)_NativeInstance)->Bound(*(unsigned int*)pp_theKey, *(::AIS_MouseGesture*)pp_theItem);
    return (RDC::OCC::AIS_MouseGesture)*_result;
}

bool RDC::OCC::AIS_MouseGestureMap::IsBound(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    bool _result = ((::AIS_MouseGestureMap*)_NativeInstance)->IsBound(*(unsigned int*)pp_theKey);
    return _result;
}

bool RDC::OCC::AIS_MouseGestureMap::UnBind(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    bool _result = ((::AIS_MouseGestureMap*)_NativeInstance)->UnBind(*(unsigned int*)pp_theKey);
    return _result;
}

RDC::OCC::AIS_MouseGesture RDC::OCC::AIS_MouseGestureMap::Seek(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    const ::AIS_MouseGesture* _result = ((::AIS_MouseGestureMap*)_NativeInstance)->Seek(*(unsigned int*)pp_theKey);
    return (RDC::OCC::AIS_MouseGesture)*_result;
}

RDC::OCC::AIS_MouseGesture RDC::OCC::AIS_MouseGestureMap::Find(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    ::AIS_MouseGesture _result = ((::AIS_MouseGestureMap*)_NativeInstance)->Find(*(unsigned int*)pp_theKey);
    return (RDC::OCC::AIS_MouseGesture)_result;
}

RDC::OCC::AIS_MouseGesture RDC::OCC::AIS_MouseGestureMap::ChangeSeek(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    const ::AIS_MouseGesture* _result = ((::AIS_MouseGestureMap*)_NativeInstance)->ChangeSeek(*(unsigned int*)pp_theKey);
    return (RDC::OCC::AIS_MouseGesture)*_result;
}

RDC::OCC::AIS_MouseGesture RDC::OCC::AIS_MouseGestureMap::ChangeFind(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    ::AIS_MouseGesture _result = ((::AIS_MouseGestureMap*)_NativeInstance)->ChangeFind(*(unsigned int*)pp_theKey);
    return (RDC::OCC::AIS_MouseGesture)_result;
}

void RDC::OCC::AIS_MouseGestureMap::Clear(bool doReleaseMemory)
{
    ((::AIS_MouseGestureMap*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::AIS_MouseGestureMap::Clear()
{
    ((::AIS_MouseGestureMap*)_NativeInstance)->Clear(false);
}

int RDC::OCC::AIS_MouseGestureMap::Size()
{
    int _result = ((::AIS_MouseGestureMap*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_MouseGestureMap::Iterator
//---------------------------------------------------------------------

RDC::OCC::AIS_MouseGestureMap::Iterator::Iterator()
    : RDC::OCC::BaseClass<::AIS_MouseGestureMap::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseGestureMap::Iterator();
}

bool RDC::OCC::AIS_MouseGestureMap::Iterator::More()
{
    bool _result = ((::AIS_MouseGestureMap::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::AIS_MouseGestureMap::Iterator::Next()
{
    ((::AIS_MouseGestureMap::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::AIS_MouseGesture RDC::OCC::AIS_MouseGestureMap::Iterator::Value()
{
    ::AIS_MouseGesture _result = ((::AIS_MouseGestureMap::Iterator*)_NativeInstance)->Value();
    return (RDC::OCC::AIS_MouseGesture)_result;
}

RDC::OCC::AIS_MouseGesture RDC::OCC::AIS_MouseGestureMap::Iterator::ChangeValue()
{
    ::AIS_MouseGesture _result = ((::AIS_MouseGestureMap::Iterator*)_NativeInstance)->ChangeValue();
    return (RDC::OCC::AIS_MouseGesture)_result;
}

unsigned int RDC::OCC::AIS_MouseGestureMap::Iterator::Key()
{
    unsigned int _result = ((::AIS_MouseGestureMap::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_MouseSelectionSchemeMap
//---------------------------------------------------------------------

RDC::OCC::AIS_MouseSelectionSchemeMap::AIS_MouseSelectionSchemeMap()
    : RDC::OCC::BaseClass<::AIS_MouseSelectionSchemeMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseSelectionSchemeMap();
}

RDC::OCC::AIS_MouseSelectionSchemeMap::AIS_MouseSelectionSchemeMap(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::AIS_MouseSelectionSchemeMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseSelectionSchemeMap(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::AIS_MouseSelectionSchemeMap::AIS_MouseSelectionSchemeMap(int theNbBuckets)
    : RDC::OCC::BaseClass<::AIS_MouseSelectionSchemeMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseSelectionSchemeMap(theNbBuckets, 0L);
}

void RDC::OCC::AIS_MouseSelectionSchemeMap::Exchange(RDC::OCC::AIS_MouseSelectionSchemeMap^ theOther)
{
    ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Exchange(*(::AIS_MouseSelectionSchemeMap*)theOther->NativeInstance);
}

RDC::OCC::AIS_MouseSelectionSchemeMap^ RDC::OCC::AIS_MouseSelectionSchemeMap::Assign(RDC::OCC::AIS_MouseSelectionSchemeMap^ theOther)
{
    ::AIS_MouseSelectionSchemeMap* _result = new ::AIS_MouseSelectionSchemeMap();
    *_result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Assign(*(::AIS_MouseSelectionSchemeMap*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_MouseSelectionSchemeMap(_result);
}

void RDC::OCC::AIS_MouseSelectionSchemeMap::ReSize(int N)
{
    ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::AIS_MouseSelectionSchemeMap::Bind(unsigned int theKey, RDC::OCC::AIS_SelectionScheme theItem)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    pin_ptr<RDC::OCC::AIS_SelectionScheme> pp_theItem = &theItem;
    bool _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Bind(*(unsigned int*)pp_theKey, *(::AIS_SelectionScheme*)pp_theItem);
    return _result;
}

RDC::OCC::AIS_SelectionScheme RDC::OCC::AIS_MouseSelectionSchemeMap::Bound(unsigned int theKey, RDC::OCC::AIS_SelectionScheme theItem)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    pin_ptr<RDC::OCC::AIS_SelectionScheme> pp_theItem = &theItem;
    const ::AIS_SelectionScheme* _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Bound(*(unsigned int*)pp_theKey, *(::AIS_SelectionScheme*)pp_theItem);
    return (RDC::OCC::AIS_SelectionScheme)*_result;
}

bool RDC::OCC::AIS_MouseSelectionSchemeMap::IsBound(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    bool _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->IsBound(*(unsigned int*)pp_theKey);
    return _result;
}

bool RDC::OCC::AIS_MouseSelectionSchemeMap::UnBind(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    bool _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->UnBind(*(unsigned int*)pp_theKey);
    return _result;
}

RDC::OCC::AIS_SelectionScheme RDC::OCC::AIS_MouseSelectionSchemeMap::Seek(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    const ::AIS_SelectionScheme* _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Seek(*(unsigned int*)pp_theKey);
    return (RDC::OCC::AIS_SelectionScheme)*_result;
}

RDC::OCC::AIS_SelectionScheme RDC::OCC::AIS_MouseSelectionSchemeMap::Find(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    ::AIS_SelectionScheme _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Find(*(unsigned int*)pp_theKey);
    return (RDC::OCC::AIS_SelectionScheme)_result;
}

RDC::OCC::AIS_SelectionScheme RDC::OCC::AIS_MouseSelectionSchemeMap::ChangeSeek(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    const ::AIS_SelectionScheme* _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->ChangeSeek(*(unsigned int*)pp_theKey);
    return (RDC::OCC::AIS_SelectionScheme)*_result;
}

RDC::OCC::AIS_SelectionScheme RDC::OCC::AIS_MouseSelectionSchemeMap::ChangeFind(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    ::AIS_SelectionScheme _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->ChangeFind(*(unsigned int*)pp_theKey);
    return (RDC::OCC::AIS_SelectionScheme)_result;
}

void RDC::OCC::AIS_MouseSelectionSchemeMap::Clear(bool doReleaseMemory)
{
    ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::AIS_MouseSelectionSchemeMap::Clear()
{
    ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Clear(false);
}

int RDC::OCC::AIS_MouseSelectionSchemeMap::Size()
{
    int _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_MouseSelectionSchemeMap::Iterator
//---------------------------------------------------------------------

RDC::OCC::AIS_MouseSelectionSchemeMap::Iterator::Iterator()
    : RDC::OCC::BaseClass<::AIS_MouseSelectionSchemeMap::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseSelectionSchemeMap::Iterator();
}

bool RDC::OCC::AIS_MouseSelectionSchemeMap::Iterator::More()
{
    bool _result = ((::AIS_MouseSelectionSchemeMap::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::AIS_MouseSelectionSchemeMap::Iterator::Next()
{
    ((::AIS_MouseSelectionSchemeMap::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::AIS_SelectionScheme RDC::OCC::AIS_MouseSelectionSchemeMap::Iterator::Value()
{
    ::AIS_SelectionScheme _result = ((::AIS_MouseSelectionSchemeMap::Iterator*)_NativeInstance)->Value();
    return (RDC::OCC::AIS_SelectionScheme)_result;
}

RDC::OCC::AIS_SelectionScheme RDC::OCC::AIS_MouseSelectionSchemeMap::Iterator::ChangeValue()
{
    ::AIS_SelectionScheme _result = ((::AIS_MouseSelectionSchemeMap::Iterator*)_NativeInstance)->ChangeValue();
    return (RDC::OCC::AIS_SelectionScheme)_result;
}

unsigned int RDC::OCC::AIS_MouseSelectionSchemeMap::Iterator::Key()
{
    unsigned int _result = ((::AIS_MouseSelectionSchemeMap::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_AnimationProgress
//---------------------------------------------------------------------

RDC::OCC::AIS_AnimationProgress::AIS_AnimationProgress()
    : RDC::OCC::BaseClass<::AIS_AnimationProgress>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_AnimationProgress();
}



//---------------------------------------------------------------------
//  Class  AIS_WalkPart
//---------------------------------------------------------------------

RDC::OCC::AIS_WalkPart::AIS_WalkPart()
    : RDC::OCC::BaseClass<::AIS_WalkPart>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_WalkPart();
}

bool RDC::OCC::AIS_WalkPart::IsEmpty()
{
    bool _result = ((::AIS_WalkPart*)_NativeInstance)->IsEmpty();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_WalkDelta
//---------------------------------------------------------------------

RDC::OCC::AIS_WalkDelta::AIS_WalkDelta()
    : RDC::OCC::BaseClass<::AIS_WalkDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_WalkDelta();
}

bool RDC::OCC::AIS_WalkDelta::IsJumping()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->IsJumping();
    return _result;
}

void RDC::OCC::AIS_WalkDelta::SetJumping(bool theIsJumping)
{
    ((::AIS_WalkDelta*)_NativeInstance)->SetJumping(theIsJumping);
}

bool RDC::OCC::AIS_WalkDelta::IsCrouching()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->IsCrouching();
    return _result;
}

void RDC::OCC::AIS_WalkDelta::SetCrouching(bool theIsCrouching)
{
    ((::AIS_WalkDelta*)_NativeInstance)->SetCrouching(theIsCrouching);
}

bool RDC::OCC::AIS_WalkDelta::IsRunning()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->IsRunning();
    return _result;
}

void RDC::OCC::AIS_WalkDelta::SetRunning(bool theIsRunning)
{
    ((::AIS_WalkDelta*)_NativeInstance)->SetRunning(theIsRunning);
}

bool RDC::OCC::AIS_WalkDelta::IsDefined()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->IsDefined();
    return _result;
}

void RDC::OCC::AIS_WalkDelta::SetDefined(bool theIsDefined)
{
    ((::AIS_WalkDelta*)_NativeInstance)->SetDefined(theIsDefined);
}

bool RDC::OCC::AIS_WalkDelta::IsEmpty()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->IsEmpty();
    return _result;
}

bool RDC::OCC::AIS_WalkDelta::ToMove()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->ToMove();
    return _result;
}

bool RDC::OCC::AIS_WalkDelta::ToRotate()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->ToRotate();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS
//---------------------------------------------------------------------

RDC::OCC::AIS::AIS()
    : RDC::OCC::BaseClass<::AIS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS();
}



//---------------------------------------------------------------------
//  Class  AIS_InteractiveContext
//---------------------------------------------------------------------

RDC::OCC::AIS_InteractiveContext::AIS_InteractiveContext(RDC::OCC::V3d_Viewer^ MainViewer)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_InteractiveContext(Handle(::V3d_Viewer)(MainViewer->NativeInstance));
}

RDC::OCC::PrsMgr_DisplayStatus RDC::OCC::AIS_InteractiveContext::DisplayStatus(RDC::OCC::AIS_InteractiveObject^ anIobj)
{
    ::PrsMgr_DisplayStatus _result = ((::AIS_InteractiveContext*)_NativeInstance)->DisplayStatus(Handle(::AIS_InteractiveObject)(anIobj->NativeInstance));
    return (RDC::OCC::PrsMgr_DisplayStatus)_result;
}

void RDC::OCC::AIS_InteractiveContext::Status(RDC::OCC::AIS_InteractiveObject^ anObj, RDC::OCC::TCollection_ExtendedString^ astatus)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Status(Handle(::AIS_InteractiveObject)(anObj->NativeInstance), *(::TCollection_ExtendedString*)astatus->NativeInstance);
}

bool RDC::OCC::AIS_InteractiveContext::IsDisplayed(RDC::OCC::AIS_InteractiveObject^ anIobj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsDisplayed(Handle(::AIS_InteractiveObject)(anIobj->NativeInstance));
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::IsDisplayed(RDC::OCC::AIS_InteractiveObject^ aniobj, int aMode)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsDisplayed(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance), aMode);
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::SetAutoActivateSelection(bool theIsAuto)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetAutoActivateSelection(theIsAuto);
}

bool RDC::OCC::AIS_InteractiveContext::GetAutoActivateSelection()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->GetAutoActivateSelection();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::Display(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Display(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::Display(RDC::OCC::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, RDC::OCC::PrsMgr_DisplayStatus theDispStatus)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Display(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theDispMode, theSelectionMode, theToUpdateViewer, (::PrsMgr_DisplayStatus)theDispStatus);
}

void RDC::OCC::AIS_InteractiveContext::Display(RDC::OCC::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Display(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theDispMode, theSelectionMode, theToUpdateViewer, PrsMgr_DisplayStatus_None);
}

void RDC::OCC::AIS_InteractiveContext::Load(RDC::OCC::AIS_InteractiveObject^ theObj, int theSelectionMode)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Load(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theSelectionMode);
}

void RDC::OCC::AIS_InteractiveContext::Load(RDC::OCC::AIS_InteractiveObject^ theObj)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Load(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), -1);
}

void RDC::OCC::AIS_InteractiveContext::Erase(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Erase(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::EraseAll(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->EraseAll(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::DisplayAll(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplayAll(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::EraseSelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->EraseSelected(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::DisplaySelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplaySelected(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::ClearPrs(RDC::OCC::AIS_InteractiveObject^ theIObj, int theMode, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ClearPrs(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theMode, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::Remove(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Remove(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::RemoveAll(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RemoveAll(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::Redisplay(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer, bool theAllModes)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Redisplay(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer, theAllModes);
}

void RDC::OCC::AIS_InteractiveContext::Redisplay(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Redisplay(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer, false);
}

void RDC::OCC::AIS_InteractiveContext::Redisplay(RDC::OCC::AIS_KindOfInteractive theTypeOfObject, int theSignature, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Redisplay((::AIS_KindOfInteractive)theTypeOfObject, theSignature, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::RecomputePrsOnly(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer, bool theAllModes)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RecomputePrsOnly(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer, theAllModes);
}

void RDC::OCC::AIS_InteractiveContext::RecomputePrsOnly(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RecomputePrsOnly(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer, false);
}

void RDC::OCC::AIS_InteractiveContext::RecomputeSelectionOnly(RDC::OCC::AIS_InteractiveObject^ anIObj)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RecomputeSelectionOnly(Handle(::AIS_InteractiveObject)(anIObj->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::Update(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Update(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theUpdateViewer);
}

RDC::OCC::Prs3d_Drawer^ RDC::OCC::AIS_InteractiveContext::HighlightStyle(RDC::OCC::Prs3d_TypeOfHighlight theStyleType)
{
    Handle(::Prs3d_Drawer) _result = ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle((::Prs3d_TypeOfHighlight)theStyleType);
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_InteractiveContext::SetHighlightStyle(RDC::OCC::Prs3d_TypeOfHighlight theStyleType, RDC::OCC::Prs3d_Drawer^ theStyle)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetHighlightStyle((::Prs3d_TypeOfHighlight)theStyleType, Handle(::Prs3d_Drawer)(theStyle->NativeInstance));
}

RDC::OCC::Prs3d_Drawer^ RDC::OCC::AIS_InteractiveContext::HighlightStyle()
{
    Handle(::Prs3d_Drawer) _result = ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_InteractiveContext::SetHighlightStyle(RDC::OCC::Prs3d_Drawer^ theStyle)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetHighlightStyle(Handle(::Prs3d_Drawer)(theStyle->NativeInstance));
}

RDC::OCC::Prs3d_Drawer^ RDC::OCC::AIS_InteractiveContext::SelectionStyle()
{
    Handle(::Prs3d_Drawer) _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectionStyle();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_InteractiveContext::SetSelectionStyle(RDC::OCC::Prs3d_Drawer^ theStyle)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionStyle(Handle(::Prs3d_Drawer)(theStyle->NativeInstance));
}

bool RDC::OCC::AIS_InteractiveContext::HighlightStyle(RDC::OCC::AIS_InteractiveObject^ theObj, RDC::OCC::Prs3d_Drawer^ theStyle)
{
    Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), h_theStyle);
    theStyle->NativeInstance = h_theStyle.get();
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::HighlightStyle(RDC::OCC::SelectMgr_EntityOwner^ theOwner, RDC::OCC::Prs3d_Drawer^ theStyle)
{
    Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), h_theStyle);
    theStyle->NativeInstance = h_theStyle.get();
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::IsHilighted(RDC::OCC::AIS_InteractiveObject^ theObj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsHilighted(Handle(::AIS_InteractiveObject)(theObj->NativeInstance));
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::IsHilighted(RDC::OCC::SelectMgr_EntityOwner^ theOwner)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsHilighted(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance));
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::HilightWithColor(RDC::OCC::AIS_InteractiveObject^ theObj, RDC::OCC::Prs3d_Drawer^ theStyle, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->HilightWithColor(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::Unhilight(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Unhilight(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

RDC::OCC::Graphic3d_DisplayPriority RDC::OCC::AIS_InteractiveContext::DisplayPriority(RDC::OCC::AIS_InteractiveObject^ theIObj)
{
    ::Graphic3d_DisplayPriority _result = ((::AIS_InteractiveContext*)_NativeInstance)->DisplayPriority(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance));
    return (RDC::OCC::Graphic3d_DisplayPriority)_result;
}

void RDC::OCC::AIS_InteractiveContext::SetDisplayPriority(RDC::OCC::AIS_InteractiveObject^ theIObj, RDC::OCC::Graphic3d_DisplayPriority thePriority)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayPriority(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), (::Graphic3d_DisplayPriority)thePriority);
}

void RDC::OCC::AIS_InteractiveContext::SetDisplayPriority(RDC::OCC::AIS_InteractiveObject^ theIObj, int thePriority)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayPriority(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), thePriority);
}

int RDC::OCC::AIS_InteractiveContext::GetZLayer(RDC::OCC::AIS_InteractiveObject^ theIObj)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->GetZLayer(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance));
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::SetZLayer(RDC::OCC::AIS_InteractiveObject^ theIObj, int theLayerId)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetZLayer(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theLayerId);
}

void RDC::OCC::AIS_InteractiveContext::SetViewAffinity(RDC::OCC::AIS_InteractiveObject^ theIObj, RDC::OCC::V3d_View^ theView, bool theIsVisible)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetViewAffinity(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), theIsVisible);
}

int RDC::OCC::AIS_InteractiveContext::DisplayMode()
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->DisplayMode();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::SetDisplayMode(int theMode, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayMode(theMode, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetDisplayMode(RDC::OCC::AIS_InteractiveObject^ theIObj, int theMode, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayMode(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theMode, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::UnsetDisplayMode(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetDisplayMode(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetLocation(RDC::OCC::AIS_InteractiveObject^ theObject, RDC::OCC::TopLoc_Location^ theLocation)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetLocation(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), *(::TopLoc_Location*)theLocation->NativeInstance);
}

void RDC::OCC::AIS_InteractiveContext::ResetLocation(RDC::OCC::AIS_InteractiveObject^ theObject)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ResetLocation(Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
}

bool RDC::OCC::AIS_InteractiveContext::HasLocation(RDC::OCC::AIS_InteractiveObject^ theObject)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasLocation(Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
    return _result;
}

RDC::OCC::TopLoc_Location^ RDC::OCC::AIS_InteractiveContext::Location(RDC::OCC::AIS_InteractiveObject^ theObject)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::AIS_InteractiveContext*)_NativeInstance)->Location(Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

void RDC::OCC::AIS_InteractiveContext::SetTransformPersistence(RDC::OCC::AIS_InteractiveObject^ theObject, RDC::OCC::Graphic3d_TransformPers^ theTrsfPers)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetTransformPersistence(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::SetPixelTolerance(int thePrecision)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPixelTolerance(thePrecision);
}

void RDC::OCC::AIS_InteractiveContext::SetPixelTolerance()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPixelTolerance(2);
}

int RDC::OCC::AIS_InteractiveContext::PixelTolerance()
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->PixelTolerance();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::SetSelectionSensitivity(RDC::OCC::AIS_InteractiveObject^ theObject, int theMode, int theNewSensitivity)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionSensitivity(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), theMode, theNewSensitivity);
}

RDC::OCC::V3d_View^ RDC::OCC::AIS_InteractiveContext::LastActiveView()
{
    Handle(::V3d_View) _result = ((::AIS_InteractiveContext*)_NativeInstance)->LastActiveView();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_StatusOfDetection RDC::OCC::AIS_InteractiveContext::MoveTo(int theXPix, int theYPix, RDC::OCC::V3d_View^ theView, bool theToRedrawOnUpdate)
{
    ::AIS_StatusOfDetection _result = ((::AIS_InteractiveContext*)_NativeInstance)->MoveTo(theXPix, theYPix, Handle(::V3d_View)(theView->NativeInstance), theToRedrawOnUpdate);
    return (RDC::OCC::AIS_StatusOfDetection)_result;
}

RDC::OCC::AIS_StatusOfDetection RDC::OCC::AIS_InteractiveContext::MoveTo(RDC::OCC::Ax1 theAxis, RDC::OCC::V3d_View^ theView, bool theToRedrawOnUpdate)
{
    pin_ptr<RDC::OCC::Ax1> pp_theAxis = &theAxis;
    ::AIS_StatusOfDetection _result = ((::AIS_InteractiveContext*)_NativeInstance)->MoveTo(*(gp_Ax1*)pp_theAxis, Handle(::V3d_View)(theView->NativeInstance), theToRedrawOnUpdate);
    return (RDC::OCC::AIS_StatusOfDetection)_result;
}

bool RDC::OCC::AIS_InteractiveContext::ClearDetected(bool theToRedrawImmediate)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->ClearDetected(theToRedrawImmediate);
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::ClearDetected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->ClearDetected(false);
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::HasDetected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasDetected();
    return _result;
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_InteractiveContext::DetectedOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedOwner();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_InteractiveContext::DetectedInteractive()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedInteractive();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

bool RDC::OCC::AIS_InteractiveContext::HasDetectedShape()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasDetectedShape();
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::AIS_InteractiveContext::DetectedShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::AIS_InteractiveContext*)_NativeInstance)->DetectedShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::AIS_InteractiveContext::HasNextDetected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasNextDetected();
    return _result;
}

int RDC::OCC::AIS_InteractiveContext::HilightNextDetected(RDC::OCC::V3d_View^ theView, bool theToRedrawImmediate)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->HilightNextDetected(Handle(::V3d_View)(theView->NativeInstance), theToRedrawImmediate);
    return _result;
}

int RDC::OCC::AIS_InteractiveContext::HilightNextDetected(RDC::OCC::V3d_View^ theView)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->HilightNextDetected(Handle(::V3d_View)(theView->NativeInstance), true);
    return _result;
}

int RDC::OCC::AIS_InteractiveContext::HilightPreviousDetected(RDC::OCC::V3d_View^ theView, bool theToRedrawImmediate)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->HilightPreviousDetected(Handle(::V3d_View)(theView->NativeInstance), theToRedrawImmediate);
    return _result;
}

int RDC::OCC::AIS_InteractiveContext::HilightPreviousDetected(RDC::OCC::V3d_View^ theView)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->HilightPreviousDetected(Handle(::V3d_View)(theView->NativeInstance), true);
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::InitDetected()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->InitDetected();
}

bool RDC::OCC::AIS_InteractiveContext::MoreDetected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->MoreDetected();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::NextDetected()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->NextDetected();
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_InteractiveContext::DetectedCurrentOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedCurrentOwner();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::AddSelect(RDC::OCC::SelectMgr_EntityOwner^ theObject)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->AddSelect(Handle(::SelectMgr_EntityOwner)(theObject->NativeInstance));
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::AddSelect(RDC::OCC::AIS_InteractiveObject^ theObject)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->AddSelect(Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::SelectRectangle(RDC::OCC::Graphic3d_Vec2i^ thePntMin, RDC::OCC::Graphic3d_Vec2i^ thePntMax, RDC::OCC::V3d_View^ theView, RDC::OCC::AIS_SelectionScheme theSelScheme)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectRectangle(*(::Graphic3d_Vec2i*)thePntMin->NativeInstance, *(::Graphic3d_Vec2i*)thePntMax->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), (::AIS_SelectionScheme)theSelScheme);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::SelectRectangle(RDC::OCC::Graphic3d_Vec2i^ thePntMin, RDC::OCC::Graphic3d_Vec2i^ thePntMax, RDC::OCC::V3d_View^ theView)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectRectangle(*(::Graphic3d_Vec2i*)thePntMin->NativeInstance, *(::Graphic3d_Vec2i*)thePntMax->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), AIS_SelectionScheme_Replace);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::SelectPolygon(RDC::OCC::TColgp_Array1OfPnt2d^ thePolyline, RDC::OCC::V3d_View^ theView, RDC::OCC::AIS_SelectionScheme theSelScheme)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectPolygon(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), (::AIS_SelectionScheme)theSelScheme);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::SelectPolygon(RDC::OCC::TColgp_Array1OfPnt2d^ thePolyline, RDC::OCC::V3d_View^ theView)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectPolygon(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), AIS_SelectionScheme_Replace);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::SelectPoint(RDC::OCC::Graphic3d_Vec2i^ thePnt, RDC::OCC::V3d_View^ theView, RDC::OCC::AIS_SelectionScheme theSelScheme)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectPoint(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), (::AIS_SelectionScheme)theSelScheme);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::SelectPoint(RDC::OCC::Graphic3d_Vec2i^ thePnt, RDC::OCC::V3d_View^ theView)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectPoint(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), AIS_SelectionScheme_Replace);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::SelectDetected(RDC::OCC::AIS_SelectionScheme theSelScheme)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectDetected((::AIS_SelectionScheme)theSelScheme);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::SelectDetected()
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectDetected(AIS_SelectionScheme_Replace);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::Bnd_Box^ RDC::OCC::AIS_InteractiveContext::BoundingBoxOfSelection(RDC::OCC::V3d_View^ theView)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::AIS_InteractiveContext*)_NativeInstance)->BoundingBoxOfSelection(Handle(::V3d_View)(theView->NativeInstance));
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::Bnd_Box^ RDC::OCC::AIS_InteractiveContext::BoundingBoxOfSelection()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::AIS_InteractiveContext*)_NativeInstance)->BoundingBoxOfSelection();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::Select(RDC::OCC::AIS_NArray1OfEntityOwner^ theOwners, RDC::OCC::AIS_SelectionScheme theSelScheme)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->Select(*(::AIS_NArray1OfEntityOwner*)theOwners->NativeInstance, (::AIS_SelectionScheme)theSelScheme);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

void RDC::OCC::AIS_InteractiveContext::FitSelected(RDC::OCC::V3d_View^ theView, double theMargin, bool theToUpdate)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->FitSelected(Handle(::V3d_View)(theView->NativeInstance), theMargin, theToUpdate);
}

void RDC::OCC::AIS_InteractiveContext::FitSelected(RDC::OCC::V3d_View^ theView)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->FitSelected(Handle(::V3d_View)(theView->NativeInstance));
}

bool RDC::OCC::AIS_InteractiveContext::ToHilightSelected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->ToHilightSelected();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::SetToHilightSelected(bool toHilight)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetToHilightSelected(toHilight);
}

bool RDC::OCC::AIS_InteractiveContext::AutomaticHilight()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->AutomaticHilight();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::SetAutomaticHilight(bool theStatus)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetAutomaticHilight(theStatus);
}

void RDC::OCC::AIS_InteractiveContext::SetSelected(RDC::OCC::SelectMgr_EntityOwner^ theOwners, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelected(Handle(::SelectMgr_EntityOwner)(theOwners->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetSelected(RDC::OCC::AIS_InteractiveObject^ theObject, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelected(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::AddOrRemoveSelected(RDC::OCC::AIS_InteractiveObject^ theObject, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->AddOrRemoveSelected(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), theToUpdateViewer);
}

bool RDC::OCC::AIS_InteractiveContext::SetSelectedState(RDC::OCC::SelectMgr_EntityOwner^ theOwner, bool theIsSelected)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectedState(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), theIsSelected);
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::HilightSelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->HilightSelected(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::UnhilightSelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnhilightSelected(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::UpdateSelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UpdateSelected(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::ClearSelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ClearSelected(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::AddOrRemoveSelected(RDC::OCC::SelectMgr_EntityOwner^ theOwner, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->AddOrRemoveSelected(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), theToUpdateViewer);
}

bool RDC::OCC::AIS_InteractiveContext::IsSelected(RDC::OCC::SelectMgr_EntityOwner^ theOwner)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsSelected(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance));
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::IsSelected(RDC::OCC::AIS_InteractiveObject^ theObj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsSelected(Handle(::AIS_InteractiveObject)(theObj->NativeInstance));
    return _result;
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_InteractiveContext::FirstSelectedObject()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_InteractiveContext*)_NativeInstance)->FirstSelectedObject();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

int RDC::OCC::AIS_InteractiveContext::NbSelected()
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->NbSelected();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::InitSelected()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->InitSelected();
}

bool RDC::OCC::AIS_InteractiveContext::MoreSelected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->MoreSelected();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::NextSelected()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->NextSelected();
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_InteractiveContext::SelectedOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectedOwner();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_InteractiveContext::SelectedInteractive()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectedInteractive();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

bool RDC::OCC::AIS_InteractiveContext::HasSelectedShape()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasSelectedShape();
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::AIS_InteractiveContext::SelectedShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectedShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::AIS_InteractiveContext::HasApplicative()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasApplicative();
    return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::AIS_InteractiveContext::Applicative()
{
    Handle(::Standard_Transient) _result = ((::AIS_InteractiveContext*)_NativeInstance)->Applicative();
    return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

bool RDC::OCC::AIS_InteractiveContext::BeginImmediateDraw()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->BeginImmediateDraw();
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::ImmediateAdd(RDC::OCC::AIS_InteractiveObject^ theObj, int theMode)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->ImmediateAdd(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode);
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::ImmediateAdd(RDC::OCC::AIS_InteractiveObject^ theObj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->ImmediateAdd(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), 0);
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::EndImmediateDraw(RDC::OCC::V3d_View^ theView)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->EndImmediateDraw(Handle(::V3d_View)(theView->NativeInstance));
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::EndImmediateDraw()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->EndImmediateDraw();
    return _result;
}

bool RDC::OCC::AIS_InteractiveContext::IsImmediateModeOn()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsImmediateModeOn();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::RedrawImmediate(RDC::OCC::V3d_Viewer^ theViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RedrawImmediate(Handle(::V3d_Viewer)(theViewer->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::SetSelectionModeActive(RDC::OCC::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate, RDC::OCC::AIS_SelectionModesConcurrency theConcurrency, bool theIsForce)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionModeActive(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode, theToActivate, (::AIS_SelectionModesConcurrency)theConcurrency, theIsForce);
}

void RDC::OCC::AIS_InteractiveContext::SetSelectionModeActive(RDC::OCC::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate, RDC::OCC::AIS_SelectionModesConcurrency theConcurrency)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionModeActive(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode, theToActivate, (::AIS_SelectionModesConcurrency)theConcurrency, false);
}

void RDC::OCC::AIS_InteractiveContext::SetSelectionModeActive(RDC::OCC::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionModeActive(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode, theToActivate, AIS_SelectionModesConcurrency_Multiple, false);
}

void RDC::OCC::AIS_InteractiveContext::Activate(RDC::OCC::AIS_InteractiveObject^ theObj, int theMode, bool theIsForce)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Activate(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode, theIsForce);
}

void RDC::OCC::AIS_InteractiveContext::Activate(RDC::OCC::AIS_InteractiveObject^ theObj, int theMode)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Activate(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode, false);
}

void RDC::OCC::AIS_InteractiveContext::Activate(RDC::OCC::AIS_InteractiveObject^ theObj)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Activate(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), 0, false);
}

void RDC::OCC::AIS_InteractiveContext::Activate(int theMode, bool theIsForce)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Activate(theMode, theIsForce);
}

void RDC::OCC::AIS_InteractiveContext::Activate(int theMode)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Activate(theMode, false);
}

void RDC::OCC::AIS_InteractiveContext::Deactivate(RDC::OCC::AIS_InteractiveObject^ theObj)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Deactivate(Handle(::AIS_InteractiveObject)(theObj->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::Deactivate(RDC::OCC::AIS_InteractiveObject^ theObj, int theMode)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Deactivate(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode);
}

void RDC::OCC::AIS_InteractiveContext::Deactivate(int theMode)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Deactivate(theMode);
}

void RDC::OCC::AIS_InteractiveContext::Deactivate()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Deactivate();
}

void RDC::OCC::AIS_InteractiveContext::ActivatedModes(RDC::OCC::AIS_InteractiveObject^ anIobj, RDC::OCC::TColStd_ListOfInteger^ theList)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ActivatedModes(Handle(::AIS_InteractiveObject)(anIobj->NativeInstance), *(::TColStd_ListOfInteger*)theList->NativeInstance);
}

RDC::OCC::SelectMgr_FilterType RDC::OCC::AIS_InteractiveContext::FilterType()
{
    ::SelectMgr_FilterType _result = ((::AIS_InteractiveContext*)_NativeInstance)->FilterType();
    return (RDC::OCC::SelectMgr_FilterType)_result;
}

void RDC::OCC::AIS_InteractiveContext::SetFilterType(RDC::OCC::SelectMgr_FilterType theFilterType)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetFilterType((::SelectMgr_FilterType)theFilterType);
}

RDC::OCC::SelectMgr_ListOfFilter^ RDC::OCC::AIS_InteractiveContext::Filters()
{
    ::SelectMgr_ListOfFilter* _result = new ::SelectMgr_ListOfFilter();
    *_result = (::SelectMgr_ListOfFilter)((::AIS_InteractiveContext*)_NativeInstance)->Filters();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::SelectMgr_ListOfFilter(_result);
}

RDC::OCC::SelectMgr_AndOrFilter^ RDC::OCC::AIS_InteractiveContext::GlobalFilter()
{
    Handle(::SelectMgr_AndOrFilter) _result = ((::AIS_InteractiveContext*)_NativeInstance)->GlobalFilter();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_AndOrFilter::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_InteractiveContext::AddFilter(RDC::OCC::SelectMgr_Filter^ theFilter)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->AddFilter(Handle(::SelectMgr_Filter)(theFilter->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::RemoveFilter(RDC::OCC::SelectMgr_Filter^ theFilter)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RemoveFilter(Handle(::SelectMgr_Filter)(theFilter->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::RemoveFilters()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RemoveFilters();
}

RDC::OCC::SelectMgr_PickingStrategy RDC::OCC::AIS_InteractiveContext::PickingStrategy()
{
    ::SelectMgr_PickingStrategy _result = ((::AIS_InteractiveContext*)_NativeInstance)->PickingStrategy();
    return (RDC::OCC::SelectMgr_PickingStrategy)_result;
}

void RDC::OCC::AIS_InteractiveContext::SetPickingStrategy(RDC::OCC::SelectMgr_PickingStrategy theStrategy)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPickingStrategy((::SelectMgr_PickingStrategy)theStrategy);
}

RDC::OCC::Prs3d_Drawer^ RDC::OCC::AIS_InteractiveContext::DefaultDrawer()
{
    Handle(::Prs3d_Drawer) _result = ((::AIS_InteractiveContext*)_NativeInstance)->DefaultDrawer();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_InteractiveContext::SetDefaultDrawer(RDC::OCC::Prs3d_Drawer^ theDrawer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDefaultDrawer(Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

RDC::OCC::V3d_Viewer^ RDC::OCC::AIS_InteractiveContext::CurrentViewer()
{
    Handle(::V3d_Viewer) _result = ((::AIS_InteractiveContext*)_NativeInstance)->CurrentViewer();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_Viewer::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_SelectionManager^ RDC::OCC::AIS_InteractiveContext::SelectionManager()
{
    Handle(::SelectMgr_SelectionManager) _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectionManager();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_SelectionManager::CreateDowncasted(_result.get());
}

RDC::OCC::PrsMgr_PresentationManager^ RDC::OCC::AIS_InteractiveContext::MainPrsMgr()
{
    Handle(::PrsMgr_PresentationManager) _result = ((::AIS_InteractiveContext*)_NativeInstance)->MainPrsMgr();
    return _result.IsNull() ? nullptr : RDC::OCC::PrsMgr_PresentationManager::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_ViewerSelector^ RDC::OCC::AIS_InteractiveContext::MainSelector()
{
    Handle(::SelectMgr_ViewerSelector) _result = ((::AIS_InteractiveContext*)_NativeInstance)->MainSelector();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_ViewerSelector::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_InteractiveContext::UpdateCurrentViewer()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UpdateCurrentViewer();
}

void RDC::OCC::AIS_InteractiveContext::DisplayedObjects(RDC::OCC::AIS_ListOfInteractive^ aListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplayedObjects(*(::AIS_ListOfInteractive*)aListOfIO->NativeInstance);
}

void RDC::OCC::AIS_InteractiveContext::DisplayedObjects(RDC::OCC::AIS_KindOfInteractive theWhichKind, int theWhichSignature, RDC::OCC::AIS_ListOfInteractive^ theListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplayedObjects((::AIS_KindOfInteractive)theWhichKind, theWhichSignature, *(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void RDC::OCC::AIS_InteractiveContext::ErasedObjects(RDC::OCC::AIS_ListOfInteractive^ theListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ErasedObjects(*(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void RDC::OCC::AIS_InteractiveContext::ErasedObjects(RDC::OCC::AIS_KindOfInteractive theWhichKind, int theWhichSignature, RDC::OCC::AIS_ListOfInteractive^ theListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ErasedObjects((::AIS_KindOfInteractive)theWhichKind, theWhichSignature, *(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void RDC::OCC::AIS_InteractiveContext::ObjectsByDisplayStatus(RDC::OCC::PrsMgr_DisplayStatus theStatus, RDC::OCC::AIS_ListOfInteractive^ theListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsByDisplayStatus((::PrsMgr_DisplayStatus)theStatus, *(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void RDC::OCC::AIS_InteractiveContext::ObjectsByDisplayStatus(RDC::OCC::AIS_KindOfInteractive WhichKind, int WhichSignature, RDC::OCC::PrsMgr_DisplayStatus theStatus, RDC::OCC::AIS_ListOfInteractive^ theListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsByDisplayStatus((::AIS_KindOfInteractive)WhichKind, WhichSignature, (::PrsMgr_DisplayStatus)theStatus, *(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void RDC::OCC::AIS_InteractiveContext::ObjectsInside(RDC::OCC::AIS_ListOfInteractive^ aListOfIO, RDC::OCC::AIS_KindOfInteractive WhichKind, int WhichSignature)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsInside(*(::AIS_ListOfInteractive*)aListOfIO->NativeInstance, (::AIS_KindOfInteractive)WhichKind, WhichSignature);
}

void RDC::OCC::AIS_InteractiveContext::ObjectsInside(RDC::OCC::AIS_ListOfInteractive^ aListOfIO, RDC::OCC::AIS_KindOfInteractive WhichKind)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsInside(*(::AIS_ListOfInteractive*)aListOfIO->NativeInstance, (::AIS_KindOfInteractive)WhichKind, -1);
}

void RDC::OCC::AIS_InteractiveContext::ObjectsInside(RDC::OCC::AIS_ListOfInteractive^ aListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsInside(*(::AIS_ListOfInteractive*)aListOfIO->NativeInstance, AIS_KindOfInteractive_None, -1);
}

void RDC::OCC::AIS_InteractiveContext::RebuildSelectionStructs()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RebuildSelectionStructs();
}

void RDC::OCC::AIS_InteractiveContext::Disconnect(RDC::OCC::AIS_InteractiveObject^ theAssembly, RDC::OCC::AIS_InteractiveObject^ theObjToDisconnect)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Disconnect(Handle(::AIS_InteractiveObject)(theAssembly->NativeInstance), Handle(::AIS_InteractiveObject)(theObjToDisconnect->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::Disconnect(RDC::OCC::AIS_InteractiveObject^ theAssembly)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Disconnect(Handle(::AIS_InteractiveObject)(theAssembly->NativeInstance), nullptr);
}

void RDC::OCC::AIS_InteractiveContext::ObjectsForView(RDC::OCC::AIS_ListOfInteractive^ theListOfIO, RDC::OCC::V3d_View^ theView, bool theIsVisibleInView, RDC::OCC::PrsMgr_DisplayStatus theStatus)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsForView(*(::AIS_ListOfInteractive*)theListOfIO->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), theIsVisibleInView, (::PrsMgr_DisplayStatus)theStatus);
}

void RDC::OCC::AIS_InteractiveContext::ObjectsForView(RDC::OCC::AIS_ListOfInteractive^ theListOfIO, RDC::OCC::V3d_View^ theView, bool theIsVisibleInView)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsForView(*(::AIS_ListOfInteractive*)theListOfIO->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), theIsVisibleInView, PrsMgr_DisplayStatus_None);
}

RDC::OCC::Pnt RDC::OCC::AIS_InteractiveContext::GravityPoint(RDC::OCC::V3d_View^ theView)
{
    ::gp_Pnt _nativeResult = ((::AIS_InteractiveContext*)_NativeInstance)->GravityPoint(Handle(::V3d_View)(theView->NativeInstance));
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::AIS_InteractiveContext::DisplayActiveSensitive(RDC::OCC::V3d_View^ aView)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplayActiveSensitive(Handle(::V3d_View)(aView->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::ClearActiveSensitive(RDC::OCC::V3d_View^ aView)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ClearActiveSensitive(Handle(::V3d_View)(aView->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::DisplayActiveSensitive(RDC::OCC::AIS_InteractiveObject^ anObject, RDC::OCC::V3d_View^ aView)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplayActiveSensitive(Handle(::AIS_InteractiveObject)(anObject->NativeInstance), Handle(::V3d_View)(aView->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::SetLocalAttributes(RDC::OCC::AIS_InteractiveObject^ theIObj, RDC::OCC::Prs3d_Drawer^ theDrawer, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetLocalAttributes(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), Handle(::Prs3d_Drawer)(theDrawer->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::UnsetLocalAttributes(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetLocalAttributes(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetCurrentFacingModel(RDC::OCC::AIS_InteractiveObject^ aniobj, RDC::OCC::Aspect_TypeOfFacingModel aModel)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetCurrentFacingModel(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance), (::Aspect_TypeOfFacingModel)aModel);
}

void RDC::OCC::AIS_InteractiveContext::SetCurrentFacingModel(RDC::OCC::AIS_InteractiveObject^ aniobj)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetCurrentFacingModel(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance), Aspect_TOFM_BOTH_SIDE);
}

bool RDC::OCC::AIS_InteractiveContext::HasColor(RDC::OCC::AIS_InteractiveObject^ aniobj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasColor(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance));
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::Color(RDC::OCC::AIS_InteractiveObject^ aniobj, RDC::OCC::Quantity_Color^ acolor)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Color(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance), *(::Quantity_Color*)acolor->NativeInstance);
}

void RDC::OCC::AIS_InteractiveContext::SetColor(RDC::OCC::AIS_InteractiveObject^ theIObj, RDC::OCC::Quantity_Color^ theColor, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetColor(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), *(::Quantity_Color*)theColor->NativeInstance, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::UnsetColor(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetColor(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

double RDC::OCC::AIS_InteractiveContext::Width(RDC::OCC::AIS_InteractiveObject^ aniobj)
{
    double _result = ((::AIS_InteractiveContext*)_NativeInstance)->Width(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance));
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::SetWidth(RDC::OCC::AIS_InteractiveObject^ theIObj, double theValue, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetWidth(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theValue, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::UnsetWidth(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetWidth(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetMaterial(RDC::OCC::AIS_InteractiveObject^ theIObj, RDC::OCC::Graphic3d_MaterialAspect^ theMaterial, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetMaterial(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), *(::Graphic3d_MaterialAspect*)theMaterial->NativeInstance, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::UnsetMaterial(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetMaterial(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetTransparency(RDC::OCC::AIS_InteractiveObject^ theIObj, double theValue, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetTransparency(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theValue, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::UnsetTransparency(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetTransparency(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetPolygonOffsets(RDC::OCC::AIS_InteractiveObject^ theIObj, int theMode, float theFactor, float theUnits, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPolygonOffsets(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theMode, theFactor, theUnits, theToUpdateViewer);
}

bool RDC::OCC::AIS_InteractiveContext::HasPolygonOffsets(RDC::OCC::AIS_InteractiveObject^ anObj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasPolygonOffsets(Handle(::AIS_InteractiveObject)(anObj->NativeInstance));
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::PolygonOffsets(RDC::OCC::AIS_InteractiveObject^ anObj, int% aMode, float% aFactor, float% aUnits)
{
    pin_ptr<int> pp_aMode = &aMode;
    pin_ptr<float> pp_aFactor = &aFactor;
    pin_ptr<float> pp_aUnits = &aUnits;
    ((::AIS_InteractiveContext*)_NativeInstance)->PolygonOffsets(Handle(::AIS_InteractiveObject)(anObj->NativeInstance), *(int*)pp_aMode, *(float*)pp_aFactor, *(float*)pp_aUnits);
}

void RDC::OCC::AIS_InteractiveContext::SetTrihedronSize(double theSize, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetTrihedronSize(theSize, theToUpdateViewer);
}

double RDC::OCC::AIS_InteractiveContext::TrihedronSize()
{
    double _result = ((::AIS_InteractiveContext*)_NativeInstance)->TrihedronSize();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::SetPlaneSize(double theSizeX, double theSizeY, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPlaneSize(theSizeX, theSizeY, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetPlaneSize(double theSize, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPlaneSize(theSize, theToUpdateViewer);
}

bool RDC::OCC::AIS_InteractiveContext::PlaneSize(double% XSize, double% YSize)
{
    pin_ptr<double> pp_XSize = &XSize;
    pin_ptr<double> pp_YSize = &YSize;
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->PlaneSize(*(double*)pp_XSize, *(double*)pp_YSize);
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::SetDeviationCoefficient(RDC::OCC::AIS_InteractiveObject^ theIObj, double theCoefficient, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationCoefficient(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theCoefficient, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetDeviationAngle(RDC::OCC::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationAngle(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theAngle, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetAngleAndDeviation(RDC::OCC::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetAngleAndDeviation(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theAngle, theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetDeviationCoefficient(double theCoefficient)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationCoefficient(theCoefficient);
}

double RDC::OCC::AIS_InteractiveContext::DeviationCoefficient()
{
    double _result = ((::AIS_InteractiveContext*)_NativeInstance)->DeviationCoefficient();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::SetDeviationAngle(double theAngle)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationAngle(theAngle);
}

double RDC::OCC::AIS_InteractiveContext::DeviationAngle()
{
    double _result = ((::AIS_InteractiveContext*)_NativeInstance)->DeviationAngle();
    return _result;
}

RDC::OCC::Prs3d_LineAspect^ RDC::OCC::AIS_InteractiveContext::HiddenLineAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::AIS_InteractiveContext*)_NativeInstance)->HiddenLineAspect();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_InteractiveContext::SetHiddenLineAspect(RDC::OCC::Prs3d_LineAspect^ theAspect)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetHiddenLineAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

bool RDC::OCC::AIS_InteractiveContext::DrawHiddenLine()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->DrawHiddenLine();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::EnableDrawHiddenLine()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->EnableDrawHiddenLine();
}

void RDC::OCC::AIS_InteractiveContext::DisableDrawHiddenLine()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisableDrawHiddenLine();
}

void RDC::OCC::AIS_InteractiveContext::SetIsoNumber(int NbIsos, RDC::OCC::AIS_TypeOfIso WhichIsos)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetIsoNumber(NbIsos, (::AIS_TypeOfIso)WhichIsos);
}

void RDC::OCC::AIS_InteractiveContext::SetIsoNumber(int NbIsos)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetIsoNumber(NbIsos, AIS_TOI_Both);
}

int RDC::OCC::AIS_InteractiveContext::IsoNumber(RDC::OCC::AIS_TypeOfIso WhichIsos)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsoNumber((::AIS_TypeOfIso)WhichIsos);
    return _result;
}

int RDC::OCC::AIS_InteractiveContext::IsoNumber()
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsoNumber(AIS_TOI_Both);
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::IsoOnPlane(bool theToSwitchOn)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnPlane(theToSwitchOn);
}

bool RDC::OCC::AIS_InteractiveContext::IsoOnPlane()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnPlane();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::IsoOnTriangulation(bool theIsEnabled, RDC::OCC::AIS_InteractiveObject^ theObject)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnTriangulation(theIsEnabled, Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::IsoOnTriangulation(bool theToSwitchOn)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnTriangulation(theToSwitchOn);
}

bool RDC::OCC::AIS_InteractiveContext::IsoOnTriangulation()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnTriangulation();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::Display(RDC::OCC::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition, RDC::OCC::PrsMgr_DisplayStatus theDispStatus)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Display(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theDispMode, theSelectionMode, theToUpdateViewer, theToAllowDecomposition, (::PrsMgr_DisplayStatus)theDispStatus);
}

void RDC::OCC::AIS_InteractiveContext::Display(RDC::OCC::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Display(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theDispMode, theSelectionMode, theToUpdateViewer, theToAllowDecomposition, PrsMgr_DisplayStatus_None);
}

void RDC::OCC::AIS_InteractiveContext::Load(RDC::OCC::AIS_InteractiveObject^ theObj, int theSelectionMode, bool parameter1)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Load(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theSelectionMode, parameter1);
}

void RDC::OCC::AIS_InteractiveContext::Hilight(RDC::OCC::AIS_InteractiveObject^ theObj, bool theIsToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Hilight(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theIsToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SetSelectedAspect(RDC::OCC::Prs3d_BasicAspect^ theAspect, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectedAspect(Handle(::Prs3d_BasicAspect)(theAspect->NativeInstance), theToUpdateViewer);
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::Select(int theXPMin, int theYPMin, int theXPMax, int theYPMax, RDC::OCC::V3d_View^ theView, bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->Select(theXPMin, theYPMin, theXPMax, theYPMax, Handle(::V3d_View)(theView->NativeInstance), theToUpdateViewer);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::Select(RDC::OCC::TColgp_Array1OfPnt2d^ thePolyline, RDC::OCC::V3d_View^ theView, bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->Select(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), theToUpdateViewer);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::Select(bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->Select(theToUpdateViewer);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::ShiftSelect(bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->ShiftSelect(theToUpdateViewer);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::ShiftSelect(RDC::OCC::TColgp_Array1OfPnt2d^ thePolyline, RDC::OCC::V3d_View^ theView, bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->ShiftSelect(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), theToUpdateViewer);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

RDC::OCC::AIS_StatusOfPick RDC::OCC::AIS_InteractiveContext::ShiftSelect(int theXPMin, int theYPMin, int theXPMax, int theYPMax, RDC::OCC::V3d_View^ theView, bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->ShiftSelect(theXPMin, theYPMin, theXPMax, theYPMax, Handle(::V3d_View)(theView->NativeInstance), theToUpdateViewer);
    return (RDC::OCC::AIS_StatusOfPick)_result;
}

void RDC::OCC::AIS_InteractiveContext::SetCurrentObject(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetCurrentObject(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::AddOrRemoveCurrentObject(RDC::OCC::AIS_InteractiveObject^ theObj, bool theIsToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->AddOrRemoveCurrentObject(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theIsToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::UpdateCurrent()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UpdateCurrent();
}

bool RDC::OCC::AIS_InteractiveContext::IsCurrent(RDC::OCC::AIS_InteractiveObject^ theObject)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsCurrent(Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::InitCurrent()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->InitCurrent();
}

bool RDC::OCC::AIS_InteractiveContext::MoreCurrent()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->MoreCurrent();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::NextCurrent()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->NextCurrent();
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_InteractiveContext::Current()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_InteractiveContext*)_NativeInstance)->Current();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

int RDC::OCC::AIS_InteractiveContext::NbCurrents()
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->NbCurrents();
    return _result;
}

void RDC::OCC::AIS_InteractiveContext::HilightCurrents(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->HilightCurrents(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::UnhilightCurrents(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnhilightCurrents(theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::ClearCurrents(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ClearCurrents(theToUpdateViewer);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::AIS_InteractiveContext::DetectedCurrentShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::AIS_InteractiveContext*)_NativeInstance)->DetectedCurrentShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_InteractiveContext::DetectedCurrentObject()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedCurrentObject();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_InteractiveContext::SubIntensityColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::AIS_InteractiveContext*)_NativeInstance)->SubIntensityColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_InteractiveContext::SetSubIntensityColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSubIntensityColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_InteractiveContext::SubIntensityOn(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SubIntensityOn(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void RDC::OCC::AIS_InteractiveContext::SubIntensityOff(RDC::OCC::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SubIntensityOff(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

RDC::OCC::AIS_Selection^ RDC::OCC::AIS_InteractiveContext::Selection()
{
    Handle(::AIS_Selection) _result = ((::AIS_InteractiveContext*)_NativeInstance)->Selection();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_Selection::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_InteractiveContext::SetSelection(RDC::OCC::AIS_Selection^ theSelection)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelection(Handle(::AIS_Selection)(theSelection->NativeInstance));
}

void RDC::OCC::AIS_InteractiveContext::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::AIS_InteractiveContext*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::AIS_InteractiveContext::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::AIS_InteractiveContext*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::AIS_InteractiveContext^ RDC::OCC::AIS_InteractiveContext::CreateDowncasted(::AIS_InteractiveContext* instance)
{
    return gcnew RDC::OCC::AIS_InteractiveContext( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_InteractiveObject
//---------------------------------------------------------------------

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_InteractiveObject::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_InteractiveObject*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

int RDC::OCC::AIS_InteractiveObject::Signature()
{
    int _result = ((::AIS_InteractiveObject*)_NativeInstance)->Signature();
    return _result;
}

void RDC::OCC::AIS_InteractiveObject::Redisplay(bool AllModes)
{
    ((::AIS_InteractiveObject*)_NativeInstance)->Redisplay(AllModes);
}

void RDC::OCC::AIS_InteractiveObject::Redisplay()
{
    ((::AIS_InteractiveObject*)_NativeInstance)->Redisplay(false);
}

bool RDC::OCC::AIS_InteractiveObject::HasInteractiveContext()
{
    bool _result = ((::AIS_InteractiveObject*)_NativeInstance)->HasInteractiveContext();
    return _result;
}

RDC::OCC::AIS_InteractiveContext^ RDC::OCC::AIS_InteractiveObject::InteractiveContext()
{
    ::AIS_InteractiveContext* _result = ((::AIS_InteractiveObject*)_NativeInstance)->InteractiveContext();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_InteractiveContext(_result);
}

void RDC::OCC::AIS_InteractiveObject::SetContext(RDC::OCC::AIS_InteractiveContext^ aCtx)
{
    ((::AIS_InteractiveObject*)_NativeInstance)->SetContext(Handle(::AIS_InteractiveContext)(aCtx->NativeInstance));
}

bool RDC::OCC::AIS_InteractiveObject::HasOwner()
{
    bool _result = ((::AIS_InteractiveObject*)_NativeInstance)->HasOwner();
    return _result;
}

RDC::OCC::Standard_Transient^ RDC::OCC::AIS_InteractiveObject::GetOwner()
{
    Handle(::Standard_Transient) _result = ((::AIS_InteractiveObject*)_NativeInstance)->GetOwner();
    return _result.IsNull() ? nullptr : RDC::OCC::Standard_Transient::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_InteractiveObject::SetOwner(RDC::OCC::Standard_Transient^ theApplicativeEntity)
{
    ((::AIS_InteractiveObject*)_NativeInstance)->SetOwner(Handle(::Standard_Transient)(theApplicativeEntity->NativeInstance));
}

void RDC::OCC::AIS_InteractiveObject::ClearOwner()
{
    ((::AIS_InteractiveObject*)_NativeInstance)->ClearOwner();
}

bool RDC::OCC::AIS_InteractiveObject::ProcessDragging(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView, RDC::OCC::SelectMgr_EntityOwner^ theOwner, RDC::OCC::Graphic3d_Vec2i^ theDragFrom, RDC::OCC::Graphic3d_Vec2i^ theDragTo, RDC::OCC::AIS_DragAction theAction)
{
    bool _result = ((::AIS_InteractiveObject*)_NativeInstance)->ProcessDragging(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), *(::Graphic3d_Vec2i*)theDragFrom->NativeInstance, *(::Graphic3d_Vec2i*)theDragTo->NativeInstance, (::AIS_DragAction)theAction);
    return _result;
}

RDC::OCC::AIS_InteractiveContext^ RDC::OCC::AIS_InteractiveObject::GetContext()
{
    Handle(::AIS_InteractiveContext) _result = ((::AIS_InteractiveObject*)_NativeInstance)->GetContext();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveContext::CreateDowncasted(_result.get());
}

bool RDC::OCC::AIS_InteractiveObject::HasPresentation()
{
    bool _result = ((::AIS_InteractiveObject*)_NativeInstance)->HasPresentation();
    return _result;
}

RDC::OCC::Graphic3d_Structure^ RDC::OCC::AIS_InteractiveObject::Presentation()
{
    Handle(::Graphic3d_Structure) _result = ((::AIS_InteractiveObject*)_NativeInstance)->Presentation();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Structure::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_InteractiveObject::SetAspect(RDC::OCC::Prs3d_BasicAspect^ anAspect)
{
    ((::AIS_InteractiveObject*)_NativeInstance)->SetAspect(Handle(::Prs3d_BasicAspect)(anAspect->NativeInstance));
}

void RDC::OCC::AIS_InteractiveObject::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::AIS_InteractiveObject*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::AIS_InteractiveObject::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::AIS_InteractiveObject*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_InteractiveObject::CreateDowncasted(::AIS_InteractiveObject* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_Axis)))
        return RDC::OCC::AIS_Axis::CreateDowncasted((::AIS_Axis*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_CameraFrustum)))
        return RDC::OCC::AIS_CameraFrustum::CreateDowncasted((::AIS_CameraFrustum*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Circle)))
        return RDC::OCC::AIS_Circle::CreateDowncasted((::AIS_Circle*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Shape)))
        return RDC::OCC::AIS_Shape::CreateDowncasted((::AIS_Shape*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_ColorScale)))
        return RDC::OCC::AIS_ColorScale::CreateDowncasted((::AIS_ColorScale*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_ConnectedInteractive)))
        return RDC::OCC::AIS_ConnectedInteractive::CreateDowncasted((::AIS_ConnectedInteractive*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_LightSource)))
        return RDC::OCC::AIS_LightSource::CreateDowncasted((::AIS_LightSource*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Line)))
        return RDC::OCC::AIS_Line::CreateDowncasted((::AIS_Line*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Manipulator)))
        return RDC::OCC::AIS_Manipulator::CreateDowncasted((::AIS_Manipulator*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_MediaPlayer)))
        return RDC::OCC::AIS_MediaPlayer::CreateDowncasted((::AIS_MediaPlayer*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_MultipleConnectedInteractive)))
        return RDC::OCC::AIS_MultipleConnectedInteractive::CreateDowncasted((::AIS_MultipleConnectedInteractive*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Plane)))
        return RDC::OCC::AIS_Plane::CreateDowncasted((::AIS_Plane*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Point)))
        return RDC::OCC::AIS_Point::CreateDowncasted((::AIS_Point*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_PlaneTrihedron)))
        return RDC::OCC::AIS_PlaneTrihedron::CreateDowncasted((::AIS_PlaneTrihedron*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_PointCloud)))
        return RDC::OCC::AIS_PointCloud::CreateDowncasted((::AIS_PointCloud*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_RubberBand)))
        return RDC::OCC::AIS_RubberBand::CreateDowncasted((::AIS_RubberBand*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_TextLabel)))
        return RDC::OCC::AIS_TextLabel::CreateDowncasted((::AIS_TextLabel*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Triangulation)))
        return RDC::OCC::AIS_Triangulation::CreateDowncasted((::AIS_Triangulation*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Trihedron)))
        return RDC::OCC::AIS_Trihedron::CreateDowncasted((::AIS_Trihedron*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_XRTrackedDevice)))
        return RDC::OCC::AIS_XRTrackedDevice::CreateDowncasted((::AIS_XRTrackedDevice*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_ViewCube)))
        return RDC::OCC::AIS_ViewCube::CreateDowncasted((::AIS_ViewCube*)instance);
    
    return gcnew RDC::OCC::AIS_InteractiveObject( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Animation
//---------------------------------------------------------------------

RDC::OCC::AIS_Animation::AIS_Animation(RDC::OCC::TCollection_AsciiString^ theAnimationName)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Animation(*(::TCollection_AsciiString*)theAnimationName->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::AIS_Animation::Name()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::AIS_Animation*)_NativeInstance)->Name();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

double RDC::OCC::AIS_Animation::StartPts()
{
    double _result = ((::AIS_Animation*)_NativeInstance)->StartPts();
    return _result;
}

void RDC::OCC::AIS_Animation::SetStartPts(double thePtsStart)
{
    ((::AIS_Animation*)_NativeInstance)->SetStartPts(thePtsStart);
}

double RDC::OCC::AIS_Animation::Duration()
{
    double _result = ((::AIS_Animation*)_NativeInstance)->Duration();
    return _result;
}

void RDC::OCC::AIS_Animation::UpdateTotalDuration()
{
    ((::AIS_Animation*)_NativeInstance)->UpdateTotalDuration();
}

bool RDC::OCC::AIS_Animation::HasOwnDuration()
{
    bool _result = ((::AIS_Animation*)_NativeInstance)->HasOwnDuration();
    return _result;
}

double RDC::OCC::AIS_Animation::OwnDuration()
{
    double _result = ((::AIS_Animation*)_NativeInstance)->OwnDuration();
    return _result;
}

void RDC::OCC::AIS_Animation::SetOwnDuration(double theDuration)
{
    ((::AIS_Animation*)_NativeInstance)->SetOwnDuration(theDuration);
}

void RDC::OCC::AIS_Animation::Add(RDC::OCC::AIS_Animation^ theAnimation)
{
    ((::AIS_Animation*)_NativeInstance)->Add(Handle(::AIS_Animation)(theAnimation->NativeInstance));
}

void RDC::OCC::AIS_Animation::Clear()
{
    ((::AIS_Animation*)_NativeInstance)->Clear();
}

RDC::OCC::AIS_Animation^ RDC::OCC::AIS_Animation::Find(RDC::OCC::TCollection_AsciiString^ theAnimationName)
{
    Handle(::AIS_Animation) _result = ((::AIS_Animation*)_NativeInstance)->Find(*(::TCollection_AsciiString*)theAnimationName->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_Animation::CreateDowncasted(_result.get());
}

bool RDC::OCC::AIS_Animation::Remove(RDC::OCC::AIS_Animation^ theAnimation)
{
    bool _result = ((::AIS_Animation*)_NativeInstance)->Remove(Handle(::AIS_Animation)(theAnimation->NativeInstance));
    return _result;
}

bool RDC::OCC::AIS_Animation::Replace(RDC::OCC::AIS_Animation^ theAnimationOld, RDC::OCC::AIS_Animation^ theAnimationNew)
{
    bool _result = ((::AIS_Animation*)_NativeInstance)->Replace(Handle(::AIS_Animation)(theAnimationOld->NativeInstance), Handle(::AIS_Animation)(theAnimationNew->NativeInstance));
    return _result;
}

void RDC::OCC::AIS_Animation::CopyFrom(RDC::OCC::AIS_Animation^ theOther)
{
    ((::AIS_Animation*)_NativeInstance)->CopyFrom(Handle(::AIS_Animation)(theOther->NativeInstance));
}

void RDC::OCC::AIS_Animation::StartTimer(double theStartPts, double thePlaySpeed, bool theToUpdate, bool theToStopTimer)
{
    ((::AIS_Animation*)_NativeInstance)->StartTimer(theStartPts, thePlaySpeed, theToUpdate, theToStopTimer);
}

void RDC::OCC::AIS_Animation::StartTimer(double theStartPts, double thePlaySpeed, bool theToUpdate)
{
    ((::AIS_Animation*)_NativeInstance)->StartTimer(theStartPts, thePlaySpeed, theToUpdate, false);
}

double RDC::OCC::AIS_Animation::UpdateTimer()
{
    double _result = ((::AIS_Animation*)_NativeInstance)->UpdateTimer();
    return _result;
}

double RDC::OCC::AIS_Animation::ElapsedTime()
{
    double _result = ((::AIS_Animation*)_NativeInstance)->ElapsedTime();
    return _result;
}

void RDC::OCC::AIS_Animation::Start(bool theToUpdate)
{
    ((::AIS_Animation*)_NativeInstance)->Start(theToUpdate);
}

void RDC::OCC::AIS_Animation::Pause()
{
    ((::AIS_Animation*)_NativeInstance)->Pause();
}

void RDC::OCC::AIS_Animation::Stop()
{
    ((::AIS_Animation*)_NativeInstance)->Stop();
}

bool RDC::OCC::AIS_Animation::IsStopped()
{
    bool _result = ((::AIS_Animation*)_NativeInstance)->IsStopped();
    return _result;
}

bool RDC::OCC::AIS_Animation::Update(double thePts)
{
    bool _result = ((::AIS_Animation*)_NativeInstance)->Update(thePts);
    return _result;
}

RDC::OCC::AIS_Animation^ RDC::OCC::AIS_Animation::CreateDowncasted(::AIS_Animation* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_BaseAnimationObject)))
        return RDC::OCC::AIS_BaseAnimationObject::CreateDowncasted((::AIS_BaseAnimationObject*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_AnimationCamera)))
        return RDC::OCC::AIS_AnimationCamera::CreateDowncasted((::AIS_AnimationCamera*)instance);
    
    return gcnew RDC::OCC::AIS_Animation( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_GlobalStatus
//---------------------------------------------------------------------

RDC::OCC::AIS_GlobalStatus::AIS_GlobalStatus()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_GlobalStatus();
}

int RDC::OCC::AIS_GlobalStatus::DisplayMode()
{
    int _result = ((::AIS_GlobalStatus*)_NativeInstance)->DisplayMode();
    return _result;
}

void RDC::OCC::AIS_GlobalStatus::SetDisplayMode(int theMode)
{
    ((::AIS_GlobalStatus*)_NativeInstance)->SetDisplayMode(theMode);
}

bool RDC::OCC::AIS_GlobalStatus::IsHilighted()
{
    bool _result = ((::AIS_GlobalStatus*)_NativeInstance)->IsHilighted();
    return _result;
}

void RDC::OCC::AIS_GlobalStatus::SetHilightStatus(bool theStatus)
{
    ((::AIS_GlobalStatus*)_NativeInstance)->SetHilightStatus(theStatus);
}

void RDC::OCC::AIS_GlobalStatus::SetHilightStyle(RDC::OCC::Prs3d_Drawer^ theStyle)
{
    ((::AIS_GlobalStatus*)_NativeInstance)->SetHilightStyle(Handle(::Prs3d_Drawer)(theStyle->NativeInstance));
}

RDC::OCC::Prs3d_Drawer^ RDC::OCC::AIS_GlobalStatus::HilightStyle()
{
    Handle(::Prs3d_Drawer) _result = ((::AIS_GlobalStatus*)_NativeInstance)->HilightStyle();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_Drawer::CreateDowncasted(_result.get());
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::AIS_GlobalStatus::SelectionModes()
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = (::TColStd_ListOfInteger)((::AIS_GlobalStatus*)_NativeInstance)->SelectionModes();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

bool RDC::OCC::AIS_GlobalStatus::IsSModeIn(int theMode)
{
    bool _result = ((::AIS_GlobalStatus*)_NativeInstance)->IsSModeIn(theMode);
    return _result;
}

bool RDC::OCC::AIS_GlobalStatus::AddSelectionMode(int theMode)
{
    bool _result = ((::AIS_GlobalStatus*)_NativeInstance)->AddSelectionMode(theMode);
    return _result;
}

bool RDC::OCC::AIS_GlobalStatus::RemoveSelectionMode(int theMode)
{
    bool _result = ((::AIS_GlobalStatus*)_NativeInstance)->RemoveSelectionMode(theMode);
    return _result;
}

void RDC::OCC::AIS_GlobalStatus::ClearSelectionModes()
{
    ((::AIS_GlobalStatus*)_NativeInstance)->ClearSelectionModes();
}

bool RDC::OCC::AIS_GlobalStatus::IsSubIntensityOn()
{
    bool _result = ((::AIS_GlobalStatus*)_NativeInstance)->IsSubIntensityOn();
    return _result;
}

void RDC::OCC::AIS_GlobalStatus::SetSubIntensity(bool theIsOn)
{
    ((::AIS_GlobalStatus*)_NativeInstance)->SetSubIntensity(theIsOn);
}

RDC::OCC::AIS_GlobalStatus^ RDC::OCC::AIS_GlobalStatus::CreateDowncasted(::AIS_GlobalStatus* instance)
{
    return gcnew RDC::OCC::AIS_GlobalStatus( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Selection
//---------------------------------------------------------------------

RDC::OCC::AIS_Selection::AIS_Selection()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Selection();
}

void RDC::OCC::AIS_Selection::Clear()
{
    ((::AIS_Selection*)_NativeInstance)->Clear();
}

RDC::OCC::AIS_SelectStatus RDC::OCC::AIS_Selection::Select(RDC::OCC::SelectMgr_EntityOwner^ theOwner, RDC::OCC::SelectMgr_Filter^ theFilter, RDC::OCC::AIS_SelectionScheme theSelScheme, bool theIsDetected)
{
    ::AIS_SelectStatus _result = ((::AIS_Selection*)_NativeInstance)->Select(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), Handle(::SelectMgr_Filter)(theFilter->NativeInstance), (::AIS_SelectionScheme)theSelScheme, theIsDetected);
    return (RDC::OCC::AIS_SelectStatus)_result;
}

RDC::OCC::AIS_SelectStatus RDC::OCC::AIS_Selection::AddSelect(RDC::OCC::SelectMgr_EntityOwner^ theObject)
{
    ::AIS_SelectStatus _result = ((::AIS_Selection*)_NativeInstance)->AddSelect(Handle(::SelectMgr_EntityOwner)(theObject->NativeInstance));
    return (RDC::OCC::AIS_SelectStatus)_result;
}

void RDC::OCC::AIS_Selection::ClearAndSelect(RDC::OCC::SelectMgr_EntityOwner^ theObject, RDC::OCC::SelectMgr_Filter^ theFilter, bool theIsDetected)
{
    ((::AIS_Selection*)_NativeInstance)->ClearAndSelect(Handle(::SelectMgr_EntityOwner)(theObject->NativeInstance), Handle(::SelectMgr_Filter)(theFilter->NativeInstance), theIsDetected);
}

bool RDC::OCC::AIS_Selection::IsSelected(RDC::OCC::SelectMgr_EntityOwner^ theObject)
{
    bool _result = ((::AIS_Selection*)_NativeInstance)->IsSelected(Handle(::SelectMgr_EntityOwner)(theObject->NativeInstance));
    return _result;
}

RDC::OCC::AIS_NListOfEntityOwner^ RDC::OCC::AIS_Selection::Objects()
{
    ::AIS_NListOfEntityOwner* _result = new ::AIS_NListOfEntityOwner();
    *_result = (::AIS_NListOfEntityOwner)((::AIS_Selection*)_NativeInstance)->Objects();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_NListOfEntityOwner(_result);
}

int RDC::OCC::AIS_Selection::Extent()
{
    int _result = ((::AIS_Selection*)_NativeInstance)->Extent();
    return _result;
}

bool RDC::OCC::AIS_Selection::IsEmpty()
{
    bool _result = ((::AIS_Selection*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::AIS_Selection::Init()
{
    ((::AIS_Selection*)_NativeInstance)->Init();
}

bool RDC::OCC::AIS_Selection::More()
{
    bool _result = ((::AIS_Selection*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::AIS_Selection::Next()
{
    ((::AIS_Selection*)_NativeInstance)->Next();
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_Selection::Value()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_Selection*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_Selection::SelectOwners(RDC::OCC::AIS_NArray1OfEntityOwner^ thePickedOwners, RDC::OCC::AIS_SelectionScheme theSelScheme, bool theToAllowSelOverlap, RDC::OCC::SelectMgr_Filter^ theFilter)
{
    ((::AIS_Selection*)_NativeInstance)->SelectOwners(*(::AIS_NArray1OfEntityOwner*)thePickedOwners->NativeInstance, (::AIS_SelectionScheme)theSelScheme, theToAllowSelOverlap, Handle(::SelectMgr_Filter)(theFilter->NativeInstance));
}

RDC::OCC::AIS_Selection^ RDC::OCC::AIS_Selection::CreateDowncasted(::AIS_Selection* instance)
{
    return gcnew RDC::OCC::AIS_Selection( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_BaseAnimationObject
//---------------------------------------------------------------------

RDC::OCC::AIS_BaseAnimationObject^ RDC::OCC::AIS_BaseAnimationObject::CreateDowncasted(::AIS_BaseAnimationObject* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_AnimationAxisRotation)))
        return RDC::OCC::AIS_AnimationAxisRotation::CreateDowncasted((::AIS_AnimationAxisRotation*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_AnimationObject)))
        return RDC::OCC::AIS_AnimationObject::CreateDowncasted((::AIS_AnimationObject*)instance);
    
    return gcnew RDC::OCC::AIS_BaseAnimationObject( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_AnimationAxisRotation
//---------------------------------------------------------------------

RDC::OCC::AIS_AnimationAxisRotation::AIS_AnimationAxisRotation(RDC::OCC::TCollection_AsciiString^ theAnimationName, RDC::OCC::AIS_InteractiveContext^ theContext, RDC::OCC::AIS_InteractiveObject^ theObject, RDC::OCC::Ax1 theAxis, double theAngleStart, double theAngleEnd)
    : RDC::OCC::AIS_BaseAnimationObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_theAxis = &theAxis;
    NativeInstance = new ::AIS_AnimationAxisRotation(*(::TCollection_AsciiString*)theAnimationName->NativeInstance, Handle(::AIS_InteractiveContext)(theContext->NativeInstance), Handle(::AIS_InteractiveObject)(theObject->NativeInstance), *(gp_Ax1*)pp_theAxis, theAngleStart, theAngleEnd);
}

RDC::OCC::AIS_AnimationAxisRotation^ RDC::OCC::AIS_AnimationAxisRotation::CreateDowncasted(::AIS_AnimationAxisRotation* instance)
{
    return gcnew RDC::OCC::AIS_AnimationAxisRotation( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_AnimationCamera
//---------------------------------------------------------------------

RDC::OCC::AIS_AnimationCamera::AIS_AnimationCamera(RDC::OCC::TCollection_AsciiString^ theAnimationName, RDC::OCC::V3d_View^ theView)
    : RDC::OCC::AIS_Animation(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_AnimationCamera(*(::TCollection_AsciiString*)theAnimationName->NativeInstance, Handle(::V3d_View)(theView->NativeInstance));
}

RDC::OCC::V3d_View^ RDC::OCC::AIS_AnimationCamera::View()
{
    Handle(::V3d_View) _result = ((::AIS_AnimationCamera*)_NativeInstance)->View();
    return _result.IsNull() ? nullptr : RDC::OCC::V3d_View::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_AnimationCamera::SetView(RDC::OCC::V3d_View^ theView)
{
    ((::AIS_AnimationCamera*)_NativeInstance)->SetView(Handle(::V3d_View)(theView->NativeInstance));
}

RDC::OCC::Graphic3d_Camera^ RDC::OCC::AIS_AnimationCamera::CameraStart()
{
    Handle(::Graphic3d_Camera) _result = ((::AIS_AnimationCamera*)_NativeInstance)->CameraStart();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_AnimationCamera::SetCameraStart(RDC::OCC::Graphic3d_Camera^ theCameraStart)
{
    ((::AIS_AnimationCamera*)_NativeInstance)->SetCameraStart(Handle(::Graphic3d_Camera)(theCameraStart->NativeInstance));
}

RDC::OCC::Graphic3d_Camera^ RDC::OCC::AIS_AnimationCamera::CameraEnd()
{
    Handle(::Graphic3d_Camera) _result = ((::AIS_AnimationCamera*)_NativeInstance)->CameraEnd();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_AnimationCamera::SetCameraEnd(RDC::OCC::Graphic3d_Camera^ theCameraEnd)
{
    ((::AIS_AnimationCamera*)_NativeInstance)->SetCameraEnd(Handle(::Graphic3d_Camera)(theCameraEnd->NativeInstance));
}

RDC::OCC::AIS_AnimationCamera^ RDC::OCC::AIS_AnimationCamera::CreateDowncasted(::AIS_AnimationCamera* instance)
{
    return gcnew RDC::OCC::AIS_AnimationCamera( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_AnimationObject
//---------------------------------------------------------------------

RDC::OCC::AIS_AnimationObject::AIS_AnimationObject(RDC::OCC::TCollection_AsciiString^ theAnimationName, RDC::OCC::AIS_InteractiveContext^ theContext, RDC::OCC::AIS_InteractiveObject^ theObject, RDC::OCC::Trsf theTrsfStart, RDC::OCC::Trsf theTrsfEnd)
    : RDC::OCC::AIS_BaseAnimationObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsfStart = &theTrsfStart;
    pin_ptr<RDC::OCC::Trsf> pp_theTrsfEnd = &theTrsfEnd;
    NativeInstance = new ::AIS_AnimationObject(*(::TCollection_AsciiString*)theAnimationName->NativeInstance, Handle(::AIS_InteractiveContext)(theContext->NativeInstance), Handle(::AIS_InteractiveObject)(theObject->NativeInstance), *(gp_Trsf*)pp_theTrsfStart, *(gp_Trsf*)pp_theTrsfEnd);
}

RDC::OCC::AIS_AnimationObject^ RDC::OCC::AIS_AnimationObject::CreateDowncasted(::AIS_AnimationObject* instance)
{
    return gcnew RDC::OCC::AIS_AnimationObject( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_AttributeFilter
//---------------------------------------------------------------------

RDC::OCC::AIS_AttributeFilter::AIS_AttributeFilter()
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_AttributeFilter();
}

RDC::OCC::AIS_AttributeFilter::AIS_AttributeFilter(RDC::OCC::Quantity_NameOfColor aCol)
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_AttributeFilter((::Quantity_NameOfColor)aCol);
}

RDC::OCC::AIS_AttributeFilter::AIS_AttributeFilter(double aWidth)
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_AttributeFilter(aWidth);
}

bool RDC::OCC::AIS_AttributeFilter::HasColor()
{
    bool _result = ((::AIS_AttributeFilter*)_NativeInstance)->HasColor();
    return _result;
}

bool RDC::OCC::AIS_AttributeFilter::HasWidth()
{
    bool _result = ((::AIS_AttributeFilter*)_NativeInstance)->HasWidth();
    return _result;
}

void RDC::OCC::AIS_AttributeFilter::SetColor(RDC::OCC::Quantity_NameOfColor theCol)
{
    ((::AIS_AttributeFilter*)_NativeInstance)->SetColor((::Quantity_NameOfColor)theCol);
}

void RDC::OCC::AIS_AttributeFilter::SetWidth(double theWidth)
{
    ((::AIS_AttributeFilter*)_NativeInstance)->SetWidth(theWidth);
}

void RDC::OCC::AIS_AttributeFilter::UnsetColor()
{
    ((::AIS_AttributeFilter*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_AttributeFilter::UnsetWidth()
{
    ((::AIS_AttributeFilter*)_NativeInstance)->UnsetWidth();
}

bool RDC::OCC::AIS_AttributeFilter::IsOk(RDC::OCC::SelectMgr_EntityOwner^ anObj)
{
    bool _result = ((::AIS_AttributeFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anObj->NativeInstance));
    return _result;
}

RDC::OCC::AIS_AttributeFilter^ RDC::OCC::AIS_AttributeFilter::CreateDowncasted(::AIS_AttributeFilter* instance)
{
    return gcnew RDC::OCC::AIS_AttributeFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Axis
//---------------------------------------------------------------------

RDC::OCC::AIS_Axis::AIS_Axis(RDC::OCC::Geom_Line^ aComponent)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Axis(Handle(::Geom_Line)(aComponent->NativeInstance));
}

RDC::OCC::AIS_Axis::AIS_Axis(RDC::OCC::Geom_Axis2Placement^ aComponent, RDC::OCC::AIS_TypeOfAxis anAxisType)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Axis(Handle(::Geom_Axis2Placement)(aComponent->NativeInstance), (::AIS_TypeOfAxis)anAxisType);
}

RDC::OCC::AIS_Axis::AIS_Axis(RDC::OCC::Geom_Axis1Placement^ anAxis)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Axis(Handle(::Geom_Axis1Placement)(anAxis->NativeInstance));
}

RDC::OCC::AIS_Axis::AIS_Axis(RDC::OCC::Ax1 theAxis, double theLength)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_theAxis = &theAxis;
    NativeInstance = new ::AIS_Axis(*(gp_Ax1*)pp_theAxis, theLength);
}

RDC::OCC::AIS_Axis::AIS_Axis(RDC::OCC::Ax1 theAxis)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_theAxis = &theAxis;
    NativeInstance = new ::AIS_Axis(*(gp_Ax1*)pp_theAxis, -1);
}

RDC::OCC::Geom_Line^ RDC::OCC::AIS_Axis::Component()
{
    Handle(::Geom_Line) _result = ((::AIS_Axis*)_NativeInstance)->Component();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Line::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_Axis::SetComponent(RDC::OCC::Geom_Line^ aComponent)
{
    ((::AIS_Axis*)_NativeInstance)->SetComponent(Handle(::Geom_Line)(aComponent->NativeInstance));
}

RDC::OCC::Geom_Axis2Placement^ RDC::OCC::AIS_Axis::Axis2Placement()
{
    Handle(::Geom_Axis2Placement) _result = ((::AIS_Axis*)_NativeInstance)->Axis2Placement();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Axis2Placement::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_Axis::SetAxis2Placement(RDC::OCC::Geom_Axis2Placement^ aComponent, RDC::OCC::AIS_TypeOfAxis anAxisType)
{
    ((::AIS_Axis*)_NativeInstance)->SetAxis2Placement(Handle(::Geom_Axis2Placement)(aComponent->NativeInstance), (::AIS_TypeOfAxis)anAxisType);
}

void RDC::OCC::AIS_Axis::SetAxis1Placement(RDC::OCC::Geom_Axis1Placement^ anAxis)
{
    ((::AIS_Axis*)_NativeInstance)->SetAxis1Placement(Handle(::Geom_Axis1Placement)(anAxis->NativeInstance));
}

RDC::OCC::AIS_TypeOfAxis RDC::OCC::AIS_Axis::TypeOfAxis()
{
    ::AIS_TypeOfAxis _result = ((::AIS_Axis*)_NativeInstance)->TypeOfAxis();
    return (RDC::OCC::AIS_TypeOfAxis)_result;
}

void RDC::OCC::AIS_Axis::SetTypeOfAxis(RDC::OCC::AIS_TypeOfAxis theTypeAxis)
{
    ((::AIS_Axis*)_NativeInstance)->SetTypeOfAxis((::AIS_TypeOfAxis)theTypeAxis);
}

bool RDC::OCC::AIS_Axis::IsXYZAxis()
{
    bool _result = ((::AIS_Axis*)_NativeInstance)->IsXYZAxis();
    return _result;
}

bool RDC::OCC::AIS_Axis::AcceptDisplayMode(int aMode)
{
    bool _result = ((::AIS_Axis*)_NativeInstance)->AcceptDisplayMode(aMode);
    return _result;
}

int RDC::OCC::AIS_Axis::Signature()
{
    int _result = ((::AIS_Axis*)_NativeInstance)->Signature();
    return _result;
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_Axis::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Axis*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

void RDC::OCC::AIS_Axis::SetColor(RDC::OCC::Quantity_Color^ aColor)
{
    ((::AIS_Axis*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance);
}

void RDC::OCC::AIS_Axis::SetWidth(double aValue)
{
    ((::AIS_Axis*)_NativeInstance)->SetWidth(aValue);
}

void RDC::OCC::AIS_Axis::SetDisplayAspect(RDC::OCC::Prs3d_LineAspect^ theNewDatumAspect)
{
    ((::AIS_Axis*)_NativeInstance)->SetDisplayAspect(Handle(::Prs3d_LineAspect)(theNewDatumAspect->NativeInstance));
}

void RDC::OCC::AIS_Axis::UnsetColor()
{
    ((::AIS_Axis*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_Axis::UnsetWidth()
{
    ((::AIS_Axis*)_NativeInstance)->UnsetWidth();
}

RDC::OCC::AIS_Axis^ RDC::OCC::AIS_Axis::CreateDowncasted(::AIS_Axis* instance)
{
    return gcnew RDC::OCC::AIS_Axis( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_BadEdgeFilter
//---------------------------------------------------------------------

RDC::OCC::AIS_BadEdgeFilter::AIS_BadEdgeFilter()
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_BadEdgeFilter();
}

bool RDC::OCC::AIS_BadEdgeFilter::ActsOn(RDC::OCC::TopAbs_ShapeEnum aType)
{
    bool _result = ((::AIS_BadEdgeFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aType);
    return _result;
}

bool RDC::OCC::AIS_BadEdgeFilter::IsOk(RDC::OCC::SelectMgr_EntityOwner^ EO)
{
    bool _result = ((::AIS_BadEdgeFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(EO->NativeInstance));
    return _result;
}

void RDC::OCC::AIS_BadEdgeFilter::SetContour(int Index)
{
    ((::AIS_BadEdgeFilter*)_NativeInstance)->SetContour(Index);
}

void RDC::OCC::AIS_BadEdgeFilter::AddEdge(RDC::OCC::TopoDS_Edge^ anEdge, int Index)
{
    ((::AIS_BadEdgeFilter*)_NativeInstance)->AddEdge(*(::TopoDS_Edge*)anEdge->NativeInstance, Index);
}

void RDC::OCC::AIS_BadEdgeFilter::RemoveEdges(int Index)
{
    ((::AIS_BadEdgeFilter*)_NativeInstance)->RemoveEdges(Index);
}

RDC::OCC::AIS_BadEdgeFilter^ RDC::OCC::AIS_BadEdgeFilter::CreateDowncasted(::AIS_BadEdgeFilter* instance)
{
    return gcnew RDC::OCC::AIS_BadEdgeFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_C0RegularityFilter
//---------------------------------------------------------------------

RDC::OCC::AIS_C0RegularityFilter::AIS_C0RegularityFilter(RDC::OCC::TopoDS_Shape^ aShape)
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_C0RegularityFilter(*(::TopoDS_Shape*)aShape->NativeInstance);
}

bool RDC::OCC::AIS_C0RegularityFilter::ActsOn(RDC::OCC::TopAbs_ShapeEnum aType)
{
    bool _result = ((::AIS_C0RegularityFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aType);
    return _result;
}

bool RDC::OCC::AIS_C0RegularityFilter::IsOk(RDC::OCC::SelectMgr_EntityOwner^ EO)
{
    bool _result = ((::AIS_C0RegularityFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(EO->NativeInstance));
    return _result;
}

RDC::OCC::AIS_C0RegularityFilter^ RDC::OCC::AIS_C0RegularityFilter::CreateDowncasted(::AIS_C0RegularityFilter* instance)
{
    return gcnew RDC::OCC::AIS_C0RegularityFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_CameraFrustum
//---------------------------------------------------------------------

RDC::OCC::AIS_CameraFrustum::AIS_CameraFrustum()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_CameraFrustum();
}

void RDC::OCC::AIS_CameraFrustum::SetCameraFrustum(RDC::OCC::Graphic3d_Camera^ theCamera)
{
    ((::AIS_CameraFrustum*)_NativeInstance)->SetCameraFrustum(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

void RDC::OCC::AIS_CameraFrustum::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_CameraFrustum*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_CameraFrustum::UnsetColor()
{
    ((::AIS_CameraFrustum*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_CameraFrustum::UnsetTransparency()
{
    ((::AIS_CameraFrustum*)_NativeInstance)->UnsetTransparency();
}

bool RDC::OCC::AIS_CameraFrustum::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_CameraFrustum*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

RDC::OCC::AIS_CameraFrustum^ RDC::OCC::AIS_CameraFrustum::CreateDowncasted(::AIS_CameraFrustum* instance)
{
    return gcnew RDC::OCC::AIS_CameraFrustum( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Circle
//---------------------------------------------------------------------

RDC::OCC::AIS_Circle::AIS_Circle(RDC::OCC::Geom_Circle^ aCircle)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Circle(Handle(::Geom_Circle)(aCircle->NativeInstance));
}

RDC::OCC::AIS_Circle::AIS_Circle(RDC::OCC::Geom_Circle^ theCircle, double theUStart, double theUEnd, bool theIsFilledCircleSens)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Circle(Handle(::Geom_Circle)(theCircle->NativeInstance), theUStart, theUEnd, theIsFilledCircleSens);
}

RDC::OCC::AIS_Circle::AIS_Circle(RDC::OCC::Geom_Circle^ theCircle, double theUStart, double theUEnd)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Circle(Handle(::Geom_Circle)(theCircle->NativeInstance), theUStart, theUEnd, false);
}

int RDC::OCC::AIS_Circle::Signature()
{
    int _result = ((::AIS_Circle*)_NativeInstance)->Signature();
    return _result;
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_Circle::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Circle*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

RDC::OCC::Geom_Circle^ RDC::OCC::AIS_Circle::Circle()
{
    Handle(::Geom_Circle) _result = ((::AIS_Circle*)_NativeInstance)->Circle();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Circle::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_Circle::Parameters(double% theU1, double% theU2)
{
    pin_ptr<double> pp_theU1 = &theU1;
    pin_ptr<double> pp_theU2 = &theU2;
    ((::AIS_Circle*)_NativeInstance)->Parameters(*(double*)pp_theU1, *(double*)pp_theU2);
}

void RDC::OCC::AIS_Circle::SetCircle(RDC::OCC::Geom_Circle^ theCircle)
{
    ((::AIS_Circle*)_NativeInstance)->SetCircle(Handle(::Geom_Circle)(theCircle->NativeInstance));
}

void RDC::OCC::AIS_Circle::SetFirstParam(double theU)
{
    ((::AIS_Circle*)_NativeInstance)->SetFirstParam(theU);
}

void RDC::OCC::AIS_Circle::SetLastParam(double theU)
{
    ((::AIS_Circle*)_NativeInstance)->SetLastParam(theU);
}

void RDC::OCC::AIS_Circle::SetColor(RDC::OCC::Quantity_Color^ aColor)
{
    ((::AIS_Circle*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance);
}

void RDC::OCC::AIS_Circle::SetWidth(double aValue)
{
    ((::AIS_Circle*)_NativeInstance)->SetWidth(aValue);
}

void RDC::OCC::AIS_Circle::UnsetColor()
{
    ((::AIS_Circle*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_Circle::UnsetWidth()
{
    ((::AIS_Circle*)_NativeInstance)->UnsetWidth();
}

bool RDC::OCC::AIS_Circle::IsFilledCircleSens()
{
    bool _result = ((::AIS_Circle*)_NativeInstance)->IsFilledCircleSens();
    return _result;
}

void RDC::OCC::AIS_Circle::SetFilledCircleSens(bool theIsFilledCircleSens)
{
    ((::AIS_Circle*)_NativeInstance)->SetFilledCircleSens(theIsFilledCircleSens);
}

RDC::OCC::AIS_Circle^ RDC::OCC::AIS_Circle::CreateDowncasted(::AIS_Circle* instance)
{
    return gcnew RDC::OCC::AIS_Circle( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ColoredDrawer
//---------------------------------------------------------------------

RDC::OCC::AIS_ColoredDrawer::AIS_ColoredDrawer(RDC::OCC::Prs3d_Drawer^ theLink)
    : RDC::OCC::Prs3d_Drawer(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ColoredDrawer(Handle(::Prs3d_Drawer)(theLink->NativeInstance));
}

bool RDC::OCC::AIS_ColoredDrawer::IsHidden()
{
    bool _result = ((::AIS_ColoredDrawer*)_NativeInstance)->IsHidden();
    return _result;
}

void RDC::OCC::AIS_ColoredDrawer::SetHidden(bool theToHide)
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->SetHidden(theToHide);
}

bool RDC::OCC::AIS_ColoredDrawer::HasOwnMaterial()
{
    bool _result = ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnMaterial();
    return _result;
}

void RDC::OCC::AIS_ColoredDrawer::UnsetOwnMaterial()
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->UnsetOwnMaterial();
}

void RDC::OCC::AIS_ColoredDrawer::SetOwnMaterial()
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->SetOwnMaterial();
}

bool RDC::OCC::AIS_ColoredDrawer::HasOwnColor()
{
    bool _result = ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnColor();
    return _result;
}

void RDC::OCC::AIS_ColoredDrawer::UnsetOwnColor()
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->UnsetOwnColor();
}

void RDC::OCC::AIS_ColoredDrawer::SetOwnColor(RDC::OCC::Quantity_Color^ parameter1)
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->SetOwnColor(*(::Quantity_Color*)parameter1->NativeInstance);
}

bool RDC::OCC::AIS_ColoredDrawer::HasOwnTransparency()
{
    bool _result = ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnTransparency();
    return _result;
}

void RDC::OCC::AIS_ColoredDrawer::UnsetOwnTransparency()
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->UnsetOwnTransparency();
}

void RDC::OCC::AIS_ColoredDrawer::SetOwnTransparency(double parameter1)
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->SetOwnTransparency(parameter1);
}

bool RDC::OCC::AIS_ColoredDrawer::HasOwnWidth()
{
    bool _result = ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnWidth();
    return _result;
}

void RDC::OCC::AIS_ColoredDrawer::UnsetOwnWidth()
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->UnsetOwnWidth();
}

void RDC::OCC::AIS_ColoredDrawer::SetOwnWidth(double parameter1)
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->SetOwnWidth(parameter1);
}

RDC::OCC::AIS_ColoredDrawer^ RDC::OCC::AIS_ColoredDrawer::CreateDowncasted(::AIS_ColoredDrawer* instance)
{
    return gcnew RDC::OCC::AIS_ColoredDrawer( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Shape
//---------------------------------------------------------------------

RDC::OCC::AIS_Shape::AIS_Shape(RDC::OCC::TopoDS_Shape^ shap)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Shape(*(::TopoDS_Shape*)shap->NativeInstance);
}

int RDC::OCC::AIS_Shape::Signature()
{
    int _result = ((::AIS_Shape*)_NativeInstance)->Signature();
    return _result;
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_Shape::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Shape*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

bool RDC::OCC::AIS_Shape::AcceptShapeDecomposition()
{
    bool _result = ((::AIS_Shape*)_NativeInstance)->AcceptShapeDecomposition();
    return _result;
}

bool RDC::OCC::AIS_Shape::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_Shape*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::AIS_Shape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::AIS_Shape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::AIS_Shape::SetShape(RDC::OCC::TopoDS_Shape^ theShape)
{
    ((::AIS_Shape*)_NativeInstance)->SetShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void RDC::OCC::AIS_Shape::Set(RDC::OCC::TopoDS_Shape^ theShape)
{
    ((::AIS_Shape*)_NativeInstance)->Set(*(::TopoDS_Shape*)theShape->NativeInstance);
}

bool RDC::OCC::AIS_Shape::SetOwnDeviationCoefficient()
{
    bool _result = ((::AIS_Shape*)_NativeInstance)->SetOwnDeviationCoefficient();
    return _result;
}

bool RDC::OCC::AIS_Shape::SetOwnDeviationAngle()
{
    bool _result = ((::AIS_Shape*)_NativeInstance)->SetOwnDeviationAngle();
    return _result;
}

void RDC::OCC::AIS_Shape::SetOwnDeviationCoefficient(double aCoefficient)
{
    ((::AIS_Shape*)_NativeInstance)->SetOwnDeviationCoefficient(aCoefficient);
}

void RDC::OCC::AIS_Shape::SetAngleAndDeviation(double anAngle)
{
    ((::AIS_Shape*)_NativeInstance)->SetAngleAndDeviation(anAngle);
}

double RDC::OCC::AIS_Shape::UserAngle()
{
    double _result = ((::AIS_Shape*)_NativeInstance)->UserAngle();
    return _result;
}

void RDC::OCC::AIS_Shape::SetOwnDeviationAngle(double anAngle)
{
    ((::AIS_Shape*)_NativeInstance)->SetOwnDeviationAngle(anAngle);
}

bool RDC::OCC::AIS_Shape::OwnDeviationCoefficient(double% aCoefficient, double% aPreviousCoefficient)
{
    pin_ptr<double> pp_aCoefficient = &aCoefficient;
    pin_ptr<double> pp_aPreviousCoefficient = &aPreviousCoefficient;
    bool _result = ((::AIS_Shape*)_NativeInstance)->OwnDeviationCoefficient(*(double*)pp_aCoefficient, *(double*)pp_aPreviousCoefficient);
    return _result;
}

bool RDC::OCC::AIS_Shape::OwnDeviationAngle(double% anAngle, double% aPreviousAngle)
{
    pin_ptr<double> pp_anAngle = &anAngle;
    pin_ptr<double> pp_aPreviousAngle = &aPreviousAngle;
    bool _result = ((::AIS_Shape*)_NativeInstance)->OwnDeviationAngle(*(double*)pp_anAngle, *(double*)pp_aPreviousAngle);
    return _result;
}

void RDC::OCC::AIS_Shape::SetTypeOfHLR(RDC::OCC::Prs3d_TypeOfHLR theTypeOfHLR)
{
    ((::AIS_Shape*)_NativeInstance)->SetTypeOfHLR((::Prs3d_TypeOfHLR)theTypeOfHLR);
}

RDC::OCC::Prs3d_TypeOfHLR RDC::OCC::AIS_Shape::TypeOfHLR()
{
    ::Prs3d_TypeOfHLR _result = ((::AIS_Shape*)_NativeInstance)->TypeOfHLR();
    return (RDC::OCC::Prs3d_TypeOfHLR)_result;
}

void RDC::OCC::AIS_Shape::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Shape*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_Shape::UnsetColor()
{
    ((::AIS_Shape*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_Shape::SetWidth(double aValue)
{
    ((::AIS_Shape*)_NativeInstance)->SetWidth(aValue);
}

void RDC::OCC::AIS_Shape::UnsetWidth()
{
    ((::AIS_Shape*)_NativeInstance)->UnsetWidth();
}

void RDC::OCC::AIS_Shape::SetMaterial(RDC::OCC::Graphic3d_MaterialAspect^ aName)
{
    ((::AIS_Shape*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)aName->NativeInstance);
}

void RDC::OCC::AIS_Shape::UnsetMaterial()
{
    ((::AIS_Shape*)_NativeInstance)->UnsetMaterial();
}

void RDC::OCC::AIS_Shape::SetTransparency(double aValue)
{
    ((::AIS_Shape*)_NativeInstance)->SetTransparency(aValue);
}

void RDC::OCC::AIS_Shape::SetTransparency()
{
    ((::AIS_Shape*)_NativeInstance)->SetTransparency(0.59999999999999998);
}

void RDC::OCC::AIS_Shape::UnsetTransparency()
{
    ((::AIS_Shape*)_NativeInstance)->UnsetTransparency();
}

RDC::OCC::Bnd_Box^ RDC::OCC::AIS_Shape::BoundingBox()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::AIS_Shape*)_NativeInstance)->BoundingBox();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

void RDC::OCC::AIS_Shape::Color(RDC::OCC::Quantity_Color^ aColor)
{
    ((::AIS_Shape*)_NativeInstance)->Color(*(::Quantity_Color*)aColor->NativeInstance);
}

RDC::OCC::Graphic3d_NameOfMaterial RDC::OCC::AIS_Shape::Material()
{
    ::Graphic3d_NameOfMaterial _result = ((::AIS_Shape*)_NativeInstance)->Material();
    return (RDC::OCC::Graphic3d_NameOfMaterial)_result;
}

double RDC::OCC::AIS_Shape::Transparency()
{
    double _result = ((::AIS_Shape*)_NativeInstance)->Transparency();
    return _result;
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::AIS_Shape::SelectionType(int theSelMode)
{
    ::TopAbs_ShapeEnum _result = ::AIS_Shape::SelectionType(theSelMode);
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

int RDC::OCC::AIS_Shape::SelectionMode(RDC::OCC::TopAbs_ShapeEnum theShapeType)
{
    int _result = ::AIS_Shape::SelectionMode((::TopAbs_ShapeEnum)theShapeType);
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::AIS_Shape::TextureRepeatUV()
{
    ::gp_Pnt2d _nativeResult = ((::AIS_Shape*)_NativeInstance)->TextureRepeatUV();
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::AIS_Shape::SetTextureRepeatUV(RDC::OCC::Pnt2d theRepeatUV)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theRepeatUV = &theRepeatUV;
    ((::AIS_Shape*)_NativeInstance)->SetTextureRepeatUV(*(gp_Pnt2d*)pp_theRepeatUV);
}

RDC::OCC::Pnt2d RDC::OCC::AIS_Shape::TextureOriginUV()
{
    ::gp_Pnt2d _nativeResult = ((::AIS_Shape*)_NativeInstance)->TextureOriginUV();
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::AIS_Shape::SetTextureOriginUV(RDC::OCC::Pnt2d theOriginUV)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theOriginUV = &theOriginUV;
    ((::AIS_Shape*)_NativeInstance)->SetTextureOriginUV(*(gp_Pnt2d*)pp_theOriginUV);
}

RDC::OCC::Pnt2d RDC::OCC::AIS_Shape::TextureScaleUV()
{
    ::gp_Pnt2d _nativeResult = ((::AIS_Shape*)_NativeInstance)->TextureScaleUV();
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::AIS_Shape::SetTextureScaleUV(RDC::OCC::Pnt2d theScaleUV)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theScaleUV = &theScaleUV;
    ((::AIS_Shape*)_NativeInstance)->SetTextureScaleUV(*(gp_Pnt2d*)pp_theScaleUV);
}

void RDC::OCC::AIS_Shape::computeHlrPresentation(RDC::OCC::Graphic3d_Camera^ theProjector, RDC::OCC::Graphic3d_Structure^ thePrs, RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::Prs3d_Drawer^ theDrawer)
{
    ::AIS_Shape::computeHlrPresentation(Handle(::Graphic3d_Camera)(theProjector->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance), *(::TopoDS_Shape*)theShape->NativeInstance, Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

void RDC::OCC::AIS_Shape::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::AIS_Shape*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::AIS_Shape::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::AIS_Shape*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::AIS_Shape^ RDC::OCC::AIS_Shape::CreateDowncasted(::AIS_Shape* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_ColoredShape)))
        return RDC::OCC::AIS_ColoredShape::CreateDowncasted((::AIS_ColoredShape*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_TexturedShape)))
        return RDC::OCC::AIS_TexturedShape::CreateDowncasted((::AIS_TexturedShape*)instance);
    
    return gcnew RDC::OCC::AIS_Shape( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ColoredShape
//---------------------------------------------------------------------

RDC::OCC::AIS_ColoredShape::AIS_ColoredShape(RDC::OCC::TopoDS_Shape^ theShape)
    : RDC::OCC::AIS_Shape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ColoredShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

RDC::OCC::AIS_ColoredShape::AIS_ColoredShape(RDC::OCC::AIS_Shape^ theShape)
    : RDC::OCC::AIS_Shape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ColoredShape(Handle(::AIS_Shape)(theShape->NativeInstance));
}

RDC::OCC::AIS_ColoredDrawer^ RDC::OCC::AIS_ColoredShape::CustomAspects(RDC::OCC::TopoDS_Shape^ theShape)
{
    Handle(::AIS_ColoredDrawer) _result = ((::AIS_ColoredShape*)_NativeInstance)->CustomAspects(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_ColoredDrawer::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_ColoredShape::ClearCustomAspects()
{
    ((::AIS_ColoredShape*)_NativeInstance)->ClearCustomAspects();
}

void RDC::OCC::AIS_ColoredShape::UnsetCustomAspects(RDC::OCC::TopoDS_Shape^ theShape, bool theToUnregister)
{
    ((::AIS_ColoredShape*)_NativeInstance)->UnsetCustomAspects(*(::TopoDS_Shape*)theShape->NativeInstance, theToUnregister);
}

void RDC::OCC::AIS_ColoredShape::UnsetCustomAspects(RDC::OCC::TopoDS_Shape^ theShape)
{
    ((::AIS_ColoredShape*)_NativeInstance)->UnsetCustomAspects(*(::TopoDS_Shape*)theShape->NativeInstance, false);
}

void RDC::OCC::AIS_ColoredShape::SetCustomColor(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetCustomColor(*(::TopoDS_Shape*)theShape->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_ColoredShape::SetCustomTransparency(RDC::OCC::TopoDS_Shape^ theShape, double theTransparency)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetCustomTransparency(*(::TopoDS_Shape*)theShape->NativeInstance, theTransparency);
}

void RDC::OCC::AIS_ColoredShape::SetCustomWidth(RDC::OCC::TopoDS_Shape^ theShape, double theLineWidth)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetCustomWidth(*(::TopoDS_Shape*)theShape->NativeInstance, theLineWidth);
}

RDC::OCC::AIS_DataMapOfShapeDrawer^ RDC::OCC::AIS_ColoredShape::CustomAspectsMap()
{
    ::AIS_DataMapOfShapeDrawer* _result = new ::AIS_DataMapOfShapeDrawer();
    *_result = (::AIS_DataMapOfShapeDrawer)((::AIS_ColoredShape*)_NativeInstance)->CustomAspectsMap();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_DataMapOfShapeDrawer(_result);
}

RDC::OCC::AIS_DataMapOfShapeDrawer^ RDC::OCC::AIS_ColoredShape::ChangeCustomAspectsMap()
{
    ::AIS_DataMapOfShapeDrawer* _result = new ::AIS_DataMapOfShapeDrawer();
    *_result = ((::AIS_ColoredShape*)_NativeInstance)->ChangeCustomAspectsMap();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_DataMapOfShapeDrawer(_result);
}

void RDC::OCC::AIS_ColoredShape::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_ColoredShape::SetWidth(double theLineWidth)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetWidth(theLineWidth);
}

void RDC::OCC::AIS_ColoredShape::SetTransparency(double theValue)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetTransparency(theValue);
}

void RDC::OCC::AIS_ColoredShape::SetMaterial(RDC::OCC::Graphic3d_MaterialAspect^ theAspect)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)theAspect->NativeInstance);
}

void RDC::OCC::AIS_ColoredShape::UnsetTransparency()
{
    ((::AIS_ColoredShape*)_NativeInstance)->UnsetTransparency();
}

void RDC::OCC::AIS_ColoredShape::UnsetWidth()
{
    ((::AIS_ColoredShape*)_NativeInstance)->UnsetWidth();
}

RDC::OCC::AIS_ColoredShape^ RDC::OCC::AIS_ColoredShape::CreateDowncasted(::AIS_ColoredShape* instance)
{
    return gcnew RDC::OCC::AIS_ColoredShape( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ColorScale
//---------------------------------------------------------------------

RDC::OCC::AIS_ColorScale::AIS_ColorScale()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ColorScale();
}

bool RDC::OCC::AIS_ColorScale::FindColor(double theValue, double theMin, double theMax, int theColorsCount, RDC::OCC::Graphic3d_Vec3d^ theColorHlsMin, RDC::OCC::Graphic3d_Vec3d^ theColorHlsMax, RDC::OCC::Quantity_Color^ theColor)
{
    bool _result = ::AIS_ColorScale::FindColor(theValue, theMin, theMax, theColorsCount, *(::Graphic3d_Vec3d*)theColorHlsMin->NativeInstance, *(::Graphic3d_Vec3d*)theColorHlsMax->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance);
    return _result;
}

bool RDC::OCC::AIS_ColorScale::FindColor(double theValue, double theMin, double theMax, int theColorsCount, RDC::OCC::Quantity_Color^ theColor)
{
    bool _result = ::AIS_ColorScale::FindColor(theValue, theMin, theMax, theColorsCount, *(::Quantity_Color*)theColor->NativeInstance);
    return _result;
}

double RDC::OCC::AIS_ColorScale::hueToValidRange(double theHue)
{
    double _result = ::AIS_ColorScale::hueToValidRange(theHue);
    return _result;
}

bool RDC::OCC::AIS_ColorScale::FindColor(double theValue, RDC::OCC::Quantity_Color^ theColor)
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->FindColor(theValue, *(::Quantity_Color*)theColor->NativeInstance);
    return _result;
}

double RDC::OCC::AIS_ColorScale::GetMin()
{
    double _result = ((::AIS_ColorScale*)_NativeInstance)->GetMin();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetMin(double theMin)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetMin(theMin);
}

double RDC::OCC::AIS_ColorScale::GetMax()
{
    double _result = ((::AIS_ColorScale*)_NativeInstance)->GetMax();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetMax(double theMax)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetMax(theMax);
}

void RDC::OCC::AIS_ColorScale::GetRange(double% theMin, double% theMax)
{
    pin_ptr<double> pp_theMin = &theMin;
    pin_ptr<double> pp_theMax = &theMax;
    ((::AIS_ColorScale*)_NativeInstance)->GetRange(*(double*)pp_theMin, *(double*)pp_theMax);
}

void RDC::OCC::AIS_ColorScale::SetRange(double theMin, double theMax)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetRange(theMin, theMax);
}

double RDC::OCC::AIS_ColorScale::HueMin()
{
    double _result = ((::AIS_ColorScale*)_NativeInstance)->HueMin();
    return _result;
}

double RDC::OCC::AIS_ColorScale::HueMax()
{
    double _result = ((::AIS_ColorScale*)_NativeInstance)->HueMax();
    return _result;
}

void RDC::OCC::AIS_ColorScale::HueRange(double% theMinAngle, double% theMaxAngle)
{
    pin_ptr<double> pp_theMinAngle = &theMinAngle;
    pin_ptr<double> pp_theMaxAngle = &theMaxAngle;
    ((::AIS_ColorScale*)_NativeInstance)->HueRange(*(double*)pp_theMinAngle, *(double*)pp_theMaxAngle);
}

void RDC::OCC::AIS_ColorScale::SetHueRange(double theMinAngle, double theMaxAngle)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetHueRange(theMinAngle, theMaxAngle);
}

void RDC::OCC::AIS_ColorScale::ColorRange(RDC::OCC::Quantity_Color^ theMinColor, RDC::OCC::Quantity_Color^ theMaxColor)
{
    ((::AIS_ColorScale*)_NativeInstance)->ColorRange(*(::Quantity_Color*)theMinColor->NativeInstance, *(::Quantity_Color*)theMaxColor->NativeInstance);
}

void RDC::OCC::AIS_ColorScale::SetColorRange(RDC::OCC::Quantity_Color^ theMinColor, RDC::OCC::Quantity_Color^ theMaxColor)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetColorRange(*(::Quantity_Color*)theMinColor->NativeInstance, *(::Quantity_Color*)theMaxColor->NativeInstance);
}

RDC::OCC::Aspect_TypeOfColorScaleData RDC::OCC::AIS_ColorScale::GetLabelType()
{
    ::Aspect_TypeOfColorScaleData _result = ((::AIS_ColorScale*)_NativeInstance)->GetLabelType();
    return (RDC::OCC::Aspect_TypeOfColorScaleData)_result;
}

void RDC::OCC::AIS_ColorScale::SetLabelType(RDC::OCC::Aspect_TypeOfColorScaleData theType)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLabelType((::Aspect_TypeOfColorScaleData)theType);
}

RDC::OCC::Aspect_TypeOfColorScaleData RDC::OCC::AIS_ColorScale::GetColorType()
{
    ::Aspect_TypeOfColorScaleData _result = ((::AIS_ColorScale*)_NativeInstance)->GetColorType();
    return (RDC::OCC::Aspect_TypeOfColorScaleData)_result;
}

void RDC::OCC::AIS_ColorScale::SetColorType(RDC::OCC::Aspect_TypeOfColorScaleData theType)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetColorType((::Aspect_TypeOfColorScaleData)theType);
}

int RDC::OCC::AIS_ColorScale::GetNumberOfIntervals()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetNumberOfIntervals();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetNumberOfIntervals(int theNum)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetNumberOfIntervals(theNum);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::AIS_ColorScale::GetTitle()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::AIS_ColorScale*)_NativeInstance)->GetTitle();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

void RDC::OCC::AIS_ColorScale::SetTitle(RDC::OCC::TCollection_ExtendedString^ theTitle)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetTitle(*(::TCollection_ExtendedString*)theTitle->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::AIS_ColorScale::GetFormat()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::AIS_ColorScale*)_NativeInstance)->GetFormat();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::AIS_ColorScale::Format()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::AIS_ColorScale*)_NativeInstance)->Format();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::AIS_ColorScale::SetFormat(RDC::OCC::TCollection_AsciiString^ theFormat)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetFormat(*(::TCollection_AsciiString*)theFormat->NativeInstance);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::AIS_ColorScale::GetLabel(int theIndex)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::AIS_ColorScale*)_NativeInstance)->GetLabel(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_ColorScale::GetIntervalColor(int theIndex)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_ColorScale*)_NativeInstance)->GetIntervalColor(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_ColorScale::SetIntervalColor(RDC::OCC::Quantity_Color^ theColor, int theIndex)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetIntervalColor(*(::Quantity_Color*)theColor->NativeInstance, theIndex);
}

void RDC::OCC::AIS_ColorScale::GetLabels(RDC::OCC::TColStd_SequenceOfExtendedString^ theLabels)
{
    ((::AIS_ColorScale*)_NativeInstance)->GetLabels(*(::TColStd_SequenceOfExtendedString*)theLabels->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfExtendedString^ RDC::OCC::AIS_ColorScale::Labels()
{
    ::TColStd_SequenceOfExtendedString* _result = new ::TColStd_SequenceOfExtendedString();
    *_result = (::TColStd_SequenceOfExtendedString)((::AIS_ColorScale*)_NativeInstance)->Labels();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfExtendedString(_result);
}

void RDC::OCC::AIS_ColorScale::SetLabels(RDC::OCC::TColStd_SequenceOfExtendedString^ theSeq)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLabels(*(::TColStd_SequenceOfExtendedString*)theSeq->NativeInstance);
}

void RDC::OCC::AIS_ColorScale::GetColors(RDC::OCC::Aspect_SequenceOfColor^ theColors)
{
    ((::AIS_ColorScale*)_NativeInstance)->GetColors(*(::Aspect_SequenceOfColor*)theColors->NativeInstance);
}

RDC::OCC::Aspect_SequenceOfColor^ RDC::OCC::AIS_ColorScale::GetColors()
{
    ::Aspect_SequenceOfColor* _result = new ::Aspect_SequenceOfColor();
    *_result = (::Aspect_SequenceOfColor)((::AIS_ColorScale*)_NativeInstance)->GetColors();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_SequenceOfColor(_result);
}

void RDC::OCC::AIS_ColorScale::SetColors(RDC::OCC::Aspect_SequenceOfColor^ theSeq)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetColors(*(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void RDC::OCC::AIS_ColorScale::SetUniformColors(double theLightness, double theHueFrom, double theHueTo)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetUniformColors(theLightness, theHueFrom, theHueTo);
}

RDC::OCC::Aspect_SequenceOfColor^ RDC::OCC::AIS_ColorScale::MakeUniformColors(int theNbColors, double theLightness, double theHueFrom, double theHueTo)
{
    ::Aspect_SequenceOfColor* _result = new ::Aspect_SequenceOfColor();
    *_result = ::AIS_ColorScale::MakeUniformColors(theNbColors, theLightness, theHueFrom, theHueTo);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_SequenceOfColor(_result);
}

RDC::OCC::Aspect_TypeOfColorScalePosition RDC::OCC::AIS_ColorScale::GetLabelPosition()
{
    ::Aspect_TypeOfColorScalePosition _result = ((::AIS_ColorScale*)_NativeInstance)->GetLabelPosition();
    return (RDC::OCC::Aspect_TypeOfColorScalePosition)_result;
}

void RDC::OCC::AIS_ColorScale::SetLabelPosition(RDC::OCC::Aspect_TypeOfColorScalePosition thePos)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLabelPosition((::Aspect_TypeOfColorScalePosition)thePos);
}

RDC::OCC::Aspect_TypeOfColorScalePosition RDC::OCC::AIS_ColorScale::GetTitlePosition()
{
    ::Aspect_TypeOfColorScalePosition _result = ((::AIS_ColorScale*)_NativeInstance)->GetTitlePosition();
    return (RDC::OCC::Aspect_TypeOfColorScalePosition)_result;
}

void RDC::OCC::AIS_ColorScale::SetTitlePosition(RDC::OCC::Aspect_TypeOfColorScalePosition thePos)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetTitlePosition((::Aspect_TypeOfColorScalePosition)thePos);
}

bool RDC::OCC::AIS_ColorScale::IsReversed()
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->IsReversed();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetReversed(bool theReverse)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetReversed(theReverse);
}

bool RDC::OCC::AIS_ColorScale::IsSmoothTransition()
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->IsSmoothTransition();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetSmoothTransition(bool theIsSmooth)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetSmoothTransition(theIsSmooth);
}

bool RDC::OCC::AIS_ColorScale::IsLabelAtBorder()
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->IsLabelAtBorder();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetLabelAtBorder(bool theOn)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLabelAtBorder(theOn);
}

bool RDC::OCC::AIS_ColorScale::IsLogarithmic()
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->IsLogarithmic();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetLogarithmic(bool isLogarithmic)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLogarithmic(isLogarithmic);
}

void RDC::OCC::AIS_ColorScale::SetLabel(RDC::OCC::TCollection_ExtendedString^ theLabel, int theIndex)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLabel(*(::TCollection_ExtendedString*)theLabel->NativeInstance, theIndex);
}

void RDC::OCC::AIS_ColorScale::GetSize(int% theBreadth, int% theHeight)
{
    pin_ptr<int> pp_theBreadth = &theBreadth;
    pin_ptr<int> pp_theHeight = &theHeight;
    ((::AIS_ColorScale*)_NativeInstance)->GetSize(*(int*)pp_theBreadth, *(int*)pp_theHeight);
}

void RDC::OCC::AIS_ColorScale::SetSize(int theBreadth, int theHeight)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetSize(theBreadth, theHeight);
}

int RDC::OCC::AIS_ColorScale::GetBreadth()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetBreadth();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetBreadth(int theBreadth)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetBreadth(theBreadth);
}

int RDC::OCC::AIS_ColorScale::GetHeight()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetHeight();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetHeight(int theHeight)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetHeight(theHeight);
}

void RDC::OCC::AIS_ColorScale::GetPosition(double% theX, double% theY)
{
    pin_ptr<double> pp_theX = &theX;
    pin_ptr<double> pp_theY = &theY;
    ((::AIS_ColorScale*)_NativeInstance)->GetPosition(*(double*)pp_theX, *(double*)pp_theY);
}

void RDC::OCC::AIS_ColorScale::SetPosition(int theX, int theY)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetPosition(theX, theY);
}

int RDC::OCC::AIS_ColorScale::GetXPosition()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetXPosition();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetXPosition(int theX)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetXPosition(theX);
}

int RDC::OCC::AIS_ColorScale::GetYPosition()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetYPosition();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetYPosition(int theY)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetYPosition(theY);
}

int RDC::OCC::AIS_ColorScale::GetTextHeight()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetTextHeight();
    return _result;
}

void RDC::OCC::AIS_ColorScale::SetTextHeight(int theHeight)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetTextHeight(theHeight);
}

int RDC::OCC::AIS_ColorScale::TextWidth(RDC::OCC::TCollection_ExtendedString^ theText)
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->TextWidth(*(::TCollection_ExtendedString*)theText->NativeInstance);
    return _result;
}

int RDC::OCC::AIS_ColorScale::TextHeight(RDC::OCC::TCollection_ExtendedString^ theText)
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->TextHeight(*(::TCollection_ExtendedString*)theText->NativeInstance);
    return _result;
}

void RDC::OCC::AIS_ColorScale::TextSize(RDC::OCC::TCollection_ExtendedString^ theText, int theHeight, int% theWidth, int% theAscent, int% theDescent)
{
    pin_ptr<int> pp_theWidth = &theWidth;
    pin_ptr<int> pp_theAscent = &theAscent;
    pin_ptr<int> pp_theDescent = &theDescent;
    ((::AIS_ColorScale*)_NativeInstance)->TextSize(*(::TCollection_ExtendedString*)theText->NativeInstance, theHeight, *(int*)pp_theWidth, *(int*)pp_theAscent, *(int*)pp_theDescent);
}

bool RDC::OCC::AIS_ColorScale::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

void RDC::OCC::AIS_ColorScale::Compute(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::Graphic3d_Structure^ thePresentation, int theMode)
{
    ((::AIS_ColorScale*)_NativeInstance)->Compute(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Graphic3d_Structure)(thePresentation->NativeInstance), theMode);
}

void RDC::OCC::AIS_ColorScale::ComputeSelection(RDC::OCC::SelectMgr_Selection^ parameter1, int parameter2)
{
    ((::AIS_ColorScale*)_NativeInstance)->ComputeSelection(Handle(::SelectMgr_Selection)(parameter1->NativeInstance), parameter2);
}

RDC::OCC::AIS_ColorScale^ RDC::OCC::AIS_ColorScale::CreateDowncasted(::AIS_ColorScale* instance)
{
    return gcnew RDC::OCC::AIS_ColorScale( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ConnectedInteractive
//---------------------------------------------------------------------

RDC::OCC::AIS_ConnectedInteractive::AIS_ConnectedInteractive(RDC::OCC::PrsMgr_TypeOfPresentation3d aTypeOfPresentation3d)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ConnectedInteractive((::PrsMgr_TypeOfPresentation3d)aTypeOfPresentation3d);
}

RDC::OCC::AIS_ConnectedInteractive::AIS_ConnectedInteractive()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ConnectedInteractive(PrsMgr_TOP_AllView);
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_ConnectedInteractive::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

int RDC::OCC::AIS_ConnectedInteractive::Signature()
{
    int _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->Signature();
    return _result;
}

void RDC::OCC::AIS_ConnectedInteractive::Connect(RDC::OCC::AIS_InteractiveObject^ theAnotherObj)
{
    ((::AIS_ConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance));
}

void RDC::OCC::AIS_ConnectedInteractive::Connect(RDC::OCC::AIS_InteractiveObject^ theAnotherObj, RDC::OCC::Trsf theLocation)
{
    pin_ptr<RDC::OCC::Trsf> pp_theLocation = &theLocation;
    ((::AIS_ConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance), *(gp_Trsf*)pp_theLocation);
}

void RDC::OCC::AIS_ConnectedInteractive::Connect(RDC::OCC::AIS_InteractiveObject^ theAnotherObj, RDC::OCC::TopLoc_Datum3D^ theLocation)
{
    ((::AIS_ConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance), Handle(::TopLoc_Datum3D)(theLocation->NativeInstance));
}

bool RDC::OCC::AIS_ConnectedInteractive::HasConnection()
{
    bool _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->HasConnection();
    return _result;
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ConnectedInteractive::ConnectedTo()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->ConnectedTo();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_ConnectedInteractive::Disconnect()
{
    ((::AIS_ConnectedInteractive*)_NativeInstance)->Disconnect();
}

bool RDC::OCC::AIS_ConnectedInteractive::AcceptShapeDecomposition()
{
    bool _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->AcceptShapeDecomposition();
    return _result;
}

bool RDC::OCC::AIS_ConnectedInteractive::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

RDC::OCC::AIS_ConnectedInteractive^ RDC::OCC::AIS_ConnectedInteractive::CreateDowncasted(::AIS_ConnectedInteractive* instance)
{
    return gcnew RDC::OCC::AIS_ConnectedInteractive( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ExclusionFilter
//---------------------------------------------------------------------

RDC::OCC::AIS_ExclusionFilter::AIS_ExclusionFilter(bool ExclusionFlagOn)
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter(ExclusionFlagOn);
}

RDC::OCC::AIS_ExclusionFilter::AIS_ExclusionFilter()
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter(true);
}

RDC::OCC::AIS_ExclusionFilter::AIS_ExclusionFilter(RDC::OCC::AIS_KindOfInteractive TypeToExclude, bool ExclusionFlagOn)
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter((::AIS_KindOfInteractive)TypeToExclude, ExclusionFlagOn);
}

RDC::OCC::AIS_ExclusionFilter::AIS_ExclusionFilter(RDC::OCC::AIS_KindOfInteractive TypeToExclude)
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter((::AIS_KindOfInteractive)TypeToExclude, true);
}

RDC::OCC::AIS_ExclusionFilter::AIS_ExclusionFilter(RDC::OCC::AIS_KindOfInteractive TypeToExclude, int SignatureInType, bool ExclusionFlagOn)
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter((::AIS_KindOfInteractive)TypeToExclude, SignatureInType, ExclusionFlagOn);
}

RDC::OCC::AIS_ExclusionFilter::AIS_ExclusionFilter(RDC::OCC::AIS_KindOfInteractive TypeToExclude, int SignatureInType)
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter((::AIS_KindOfInteractive)TypeToExclude, SignatureInType, true);
}

bool RDC::OCC::AIS_ExclusionFilter::IsOk(RDC::OCC::SelectMgr_EntityOwner^ anObj)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anObj->NativeInstance));
    return _result;
}

bool RDC::OCC::AIS_ExclusionFilter::Add(RDC::OCC::AIS_KindOfInteractive TypeToExclude)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->Add((::AIS_KindOfInteractive)TypeToExclude);
    return _result;
}

bool RDC::OCC::AIS_ExclusionFilter::Add(RDC::OCC::AIS_KindOfInteractive TypeToExclude, int SignatureInType)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->Add((::AIS_KindOfInteractive)TypeToExclude, SignatureInType);
    return _result;
}

bool RDC::OCC::AIS_ExclusionFilter::Remove(RDC::OCC::AIS_KindOfInteractive TypeToExclude)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->Remove((::AIS_KindOfInteractive)TypeToExclude);
    return _result;
}

bool RDC::OCC::AIS_ExclusionFilter::Remove(RDC::OCC::AIS_KindOfInteractive TypeToExclude, int SignatureInType)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->Remove((::AIS_KindOfInteractive)TypeToExclude, SignatureInType);
    return _result;
}

void RDC::OCC::AIS_ExclusionFilter::Clear()
{
    ((::AIS_ExclusionFilter*)_NativeInstance)->Clear();
}

bool RDC::OCC::AIS_ExclusionFilter::IsExclusionFlagOn()
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->IsExclusionFlagOn();
    return _result;
}

void RDC::OCC::AIS_ExclusionFilter::SetExclusionFlag(bool theStatus)
{
    ((::AIS_ExclusionFilter*)_NativeInstance)->SetExclusionFlag(theStatus);
}

bool RDC::OCC::AIS_ExclusionFilter::IsStored(RDC::OCC::AIS_KindOfInteractive aType)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->IsStored((::AIS_KindOfInteractive)aType);
    return _result;
}

void RDC::OCC::AIS_ExclusionFilter::ListOfStoredTypes(RDC::OCC::TColStd_ListOfInteger^ TheList)
{
    ((::AIS_ExclusionFilter*)_NativeInstance)->ListOfStoredTypes(*(::TColStd_ListOfInteger*)TheList->NativeInstance);
}

void RDC::OCC::AIS_ExclusionFilter::ListOfSignature(RDC::OCC::AIS_KindOfInteractive aType, RDC::OCC::TColStd_ListOfInteger^ TheStoredList)
{
    ((::AIS_ExclusionFilter*)_NativeInstance)->ListOfSignature((::AIS_KindOfInteractive)aType, *(::TColStd_ListOfInteger*)TheStoredList->NativeInstance);
}

RDC::OCC::AIS_ExclusionFilter^ RDC::OCC::AIS_ExclusionFilter::CreateDowncasted(::AIS_ExclusionFilter* instance)
{
    return gcnew RDC::OCC::AIS_ExclusionFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_GraphicTool
//---------------------------------------------------------------------

RDC::OCC::AIS_GraphicTool::AIS_GraphicTool()
    : RDC::OCC::BaseClass<::AIS_GraphicTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_GraphicTool();
}

RDC::OCC::Quantity_NameOfColor RDC::OCC::AIS_GraphicTool::GetLineColor(RDC::OCC::Prs3d_Drawer^ aDrawer, RDC::OCC::AIS_TypeOfAttribute TheTypeOfAttributes)
{
    ::Quantity_NameOfColor _result = ::AIS_GraphicTool::GetLineColor(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), (::AIS_TypeOfAttribute)TheTypeOfAttributes);
    return (RDC::OCC::Quantity_NameOfColor)_result;
}

void RDC::OCC::AIS_GraphicTool::GetLineColor(RDC::OCC::Prs3d_Drawer^ aDrawer, RDC::OCC::AIS_TypeOfAttribute TheTypeOfAttributes, RDC::OCC::Quantity_Color^ TheLineColor)
{
    ::AIS_GraphicTool::GetLineColor(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), (::AIS_TypeOfAttribute)TheTypeOfAttributes, *(::Quantity_Color*)TheLineColor->NativeInstance);
}

double RDC::OCC::AIS_GraphicTool::GetLineWidth(RDC::OCC::Prs3d_Drawer^ aDrawer, RDC::OCC::AIS_TypeOfAttribute TheTypeOfAttributes)
{
    double _result = ::AIS_GraphicTool::GetLineWidth(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), (::AIS_TypeOfAttribute)TheTypeOfAttributes);
    return _result;
}

RDC::OCC::Aspect_TypeOfLine RDC::OCC::AIS_GraphicTool::GetLineType(RDC::OCC::Prs3d_Drawer^ aDrawer, RDC::OCC::AIS_TypeOfAttribute TheTypeOfAttributes)
{
    ::Aspect_TypeOfLine _result = ::AIS_GraphicTool::GetLineType(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), (::AIS_TypeOfAttribute)TheTypeOfAttributes);
    return (RDC::OCC::Aspect_TypeOfLine)_result;
}

void RDC::OCC::AIS_GraphicTool::GetLineAtt(RDC::OCC::Prs3d_Drawer^ aDrawer, RDC::OCC::AIS_TypeOfAttribute TheTypeOfAttributes, RDC::OCC::Quantity_NameOfColor% aCol, double% aWidth, RDC::OCC::Aspect_TypeOfLine% aTyp)
{
    pin_ptr<RDC::OCC::Quantity_NameOfColor> pp_aCol = &aCol;
    pin_ptr<double> pp_aWidth = &aWidth;
    pin_ptr<RDC::OCC::Aspect_TypeOfLine> pp_aTyp = &aTyp;
    ::AIS_GraphicTool::GetLineAtt(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), (::AIS_TypeOfAttribute)TheTypeOfAttributes, *(::Quantity_NameOfColor*)pp_aCol, *(double*)pp_aWidth, *(::Aspect_TypeOfLine*)pp_aTyp);
}

RDC::OCC::Quantity_NameOfColor RDC::OCC::AIS_GraphicTool::GetInteriorColor(RDC::OCC::Prs3d_Drawer^ aDrawer)
{
    ::Quantity_NameOfColor _result = ::AIS_GraphicTool::GetInteriorColor(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance));
    return (RDC::OCC::Quantity_NameOfColor)_result;
}

void RDC::OCC::AIS_GraphicTool::GetInteriorColor(RDC::OCC::Prs3d_Drawer^ aDrawer, RDC::OCC::Quantity_Color^ aColor)
{
    ::AIS_GraphicTool::GetInteriorColor(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), *(::Quantity_Color*)aColor->NativeInstance);
}

RDC::OCC::Graphic3d_MaterialAspect^ RDC::OCC::AIS_GraphicTool::GetMaterial(RDC::OCC::Prs3d_Drawer^ aDrawer)
{
    ::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
    *_result = ::AIS_GraphicTool::GetMaterial(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance));
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_MaterialAspect(_result);
}



//---------------------------------------------------------------------
//  Class  AIS_LightSource
//---------------------------------------------------------------------

RDC::OCC::AIS_LightSource::AIS_LightSource(RDC::OCC::Graphic3d_CLight^ theLightSource)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_LightSource(Handle(::Graphic3d_CLight)(theLightSource->NativeInstance));
}

RDC::OCC::Graphic3d_CLight^ RDC::OCC::AIS_LightSource::Light()
{
    Handle(::Graphic3d_CLight) _result = ((::AIS_LightSource*)_NativeInstance)->Light();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_CLight::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_LightSource::SetLight(RDC::OCC::Graphic3d_CLight^ theLight)
{
    ((::AIS_LightSource*)_NativeInstance)->SetLight(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
}

bool RDC::OCC::AIS_LightSource::ToDisplayName()
{
    bool _result = ((::AIS_LightSource*)_NativeInstance)->ToDisplayName();
    return _result;
}

void RDC::OCC::AIS_LightSource::SetDisplayName(bool theToDisplay)
{
    ((::AIS_LightSource*)_NativeInstance)->SetDisplayName(theToDisplay);
}

bool RDC::OCC::AIS_LightSource::ToDisplayRange()
{
    bool _result = ((::AIS_LightSource*)_NativeInstance)->ToDisplayRange();
    return _result;
}

void RDC::OCC::AIS_LightSource::SetDisplayRange(bool theToDisplay)
{
    ((::AIS_LightSource*)_NativeInstance)->SetDisplayRange(theToDisplay);
}

double RDC::OCC::AIS_LightSource::Size()
{
    double _result = ((::AIS_LightSource*)_NativeInstance)->Size();
    return _result;
}

void RDC::OCC::AIS_LightSource::SetSize(double theSize)
{
    ((::AIS_LightSource*)_NativeInstance)->SetSize(theSize);
}

int RDC::OCC::AIS_LightSource::ArcSize()
{
    int _result = ((::AIS_LightSource*)_NativeInstance)->ArcSize();
    return _result;
}

void RDC::OCC::AIS_LightSource::SetArcSize(int theSize)
{
    ((::AIS_LightSource*)_NativeInstance)->SetArcSize(theSize);
}

bool RDC::OCC::AIS_LightSource::IsZoomable()
{
    bool _result = ((::AIS_LightSource*)_NativeInstance)->IsZoomable();
    return _result;
}

void RDC::OCC::AIS_LightSource::SetZoomable(bool theIsZoomable)
{
    ((::AIS_LightSource*)_NativeInstance)->SetZoomable(theIsZoomable);
}

void RDC::OCC::AIS_LightSource::SetDraggable(bool theIsDraggable)
{
    ((::AIS_LightSource*)_NativeInstance)->SetDraggable(theIsDraggable);
}

bool RDC::OCC::AIS_LightSource::ToSwitchOnClick()
{
    bool _result = ((::AIS_LightSource*)_NativeInstance)->ToSwitchOnClick();
    return _result;
}

void RDC::OCC::AIS_LightSource::SetSwitchOnClick(bool theToHandle)
{
    ((::AIS_LightSource*)_NativeInstance)->SetSwitchOnClick(theToHandle);
}

int RDC::OCC::AIS_LightSource::NbArrows()
{
    int _result = ((::AIS_LightSource*)_NativeInstance)->NbArrows();
    return _result;
}

void RDC::OCC::AIS_LightSource::SetNbArrows(int theNbArrows)
{
    ((::AIS_LightSource*)_NativeInstance)->SetNbArrows(theNbArrows);
}

RDC::OCC::Graphic3d_MarkerImage^ RDC::OCC::AIS_LightSource::MarkerImage(bool theIsEnabled)
{
    Handle(::Graphic3d_MarkerImage) _result = ((::AIS_LightSource*)_NativeInstance)->MarkerImage(theIsEnabled);
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_MarkerImage::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_TypeOfMarker RDC::OCC::AIS_LightSource::MarkerType(bool theIsEnabled)
{
    ::Aspect_TypeOfMarker _result = ((::AIS_LightSource*)_NativeInstance)->MarkerType(theIsEnabled);
    return (RDC::OCC::Aspect_TypeOfMarker)_result;
}

void RDC::OCC::AIS_LightSource::SetMarkerImage(RDC::OCC::Graphic3d_MarkerImage^ theImage, bool theIsEnabled)
{
    ((::AIS_LightSource*)_NativeInstance)->SetMarkerImage(Handle(::Graphic3d_MarkerImage)(theImage->NativeInstance), theIsEnabled);
}

void RDC::OCC::AIS_LightSource::SetMarkerType(RDC::OCC::Aspect_TypeOfMarker theType, bool theIsEnabled)
{
    ((::AIS_LightSource*)_NativeInstance)->SetMarkerType((::Aspect_TypeOfMarker)theType, theIsEnabled);
}

int RDC::OCC::AIS_LightSource::NbSplitsQuadric()
{
    int _result = ((::AIS_LightSource*)_NativeInstance)->NbSplitsQuadric();
    return _result;
}

void RDC::OCC::AIS_LightSource::SetNbSplitsQuadric(int theNbSplits)
{
    ((::AIS_LightSource*)_NativeInstance)->SetNbSplitsQuadric(theNbSplits);
}

int RDC::OCC::AIS_LightSource::NbSplitsArrow()
{
    int _result = ((::AIS_LightSource*)_NativeInstance)->NbSplitsArrow();
    return _result;
}

void RDC::OCC::AIS_LightSource::SetNbSplitsArrow(int theNbSplits)
{
    ((::AIS_LightSource*)_NativeInstance)->SetNbSplitsArrow(theNbSplits);
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_LightSource::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_LightSource*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

RDC::OCC::AIS_LightSource^ RDC::OCC::AIS_LightSource::CreateDowncasted(::AIS_LightSource* instance)
{
    return gcnew RDC::OCC::AIS_LightSource( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_LightSourceOwner
//---------------------------------------------------------------------

RDC::OCC::AIS_LightSourceOwner::AIS_LightSourceOwner(RDC::OCC::AIS_LightSource^ theObject, int thePriority)
    : RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_LightSourceOwner(Handle(::AIS_LightSource)(theObject->NativeInstance), thePriority);
}

RDC::OCC::AIS_LightSourceOwner::AIS_LightSourceOwner(RDC::OCC::AIS_LightSource^ theObject)
    : RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_LightSourceOwner(Handle(::AIS_LightSource)(theObject->NativeInstance), 5);
}

bool RDC::OCC::AIS_LightSourceOwner::HandleMouseClick(RDC::OCC::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
    bool _result = ((::AIS_LightSourceOwner*)_NativeInstance)->HandleMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
    return _result;
}

void RDC::OCC::AIS_LightSourceOwner::HilightWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::AIS_LightSourceOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

bool RDC::OCC::AIS_LightSourceOwner::IsForcedHilight()
{
    bool _result = ((::AIS_LightSourceOwner*)_NativeInstance)->IsForcedHilight();
    return _result;
}

RDC::OCC::AIS_LightSourceOwner^ RDC::OCC::AIS_LightSourceOwner::CreateDowncasted(::AIS_LightSourceOwner* instance)
{
    return gcnew RDC::OCC::AIS_LightSourceOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Line
//---------------------------------------------------------------------

RDC::OCC::AIS_Line::AIS_Line(RDC::OCC::Geom_Line^ aLine)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Line(Handle(::Geom_Line)(aLine->NativeInstance));
}

RDC::OCC::AIS_Line::AIS_Line(RDC::OCC::Geom_Point^ aStartPoint, RDC::OCC::Geom_Point^ aEndPoint)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Line(Handle(::Geom_Point)(aStartPoint->NativeInstance), Handle(::Geom_Point)(aEndPoint->NativeInstance));
}

int RDC::OCC::AIS_Line::Signature()
{
    int _result = ((::AIS_Line*)_NativeInstance)->Signature();
    return _result;
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_Line::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Line*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

RDC::OCC::Geom_Line^ RDC::OCC::AIS_Line::Line()
{
    Handle(::Geom_Line) _result = ((::AIS_Line*)_NativeInstance)->Line();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Line::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_Line::Points(RDC::OCC::Geom_Point^ thePStart, RDC::OCC::Geom_Point^ thePEnd)
{
    Handle(::Geom_Point) h_thePStart = thePStart->NativeInstance;
    Handle(::Geom_Point) h_thePEnd = thePEnd->NativeInstance;
    ((::AIS_Line*)_NativeInstance)->Points(h_thePStart, h_thePEnd);
    thePStart->NativeInstance = h_thePStart.get();
    thePEnd->NativeInstance = h_thePEnd.get();
}

void RDC::OCC::AIS_Line::SetLine(RDC::OCC::Geom_Line^ theLine)
{
    ((::AIS_Line*)_NativeInstance)->SetLine(Handle(::Geom_Line)(theLine->NativeInstance));
}

void RDC::OCC::AIS_Line::SetPoints(RDC::OCC::Geom_Point^ thePStart, RDC::OCC::Geom_Point^ thePEnd)
{
    ((::AIS_Line*)_NativeInstance)->SetPoints(Handle(::Geom_Point)(thePStart->NativeInstance), Handle(::Geom_Point)(thePEnd->NativeInstance));
}

void RDC::OCC::AIS_Line::SetColor(RDC::OCC::Quantity_Color^ aColor)
{
    ((::AIS_Line*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance);
}

void RDC::OCC::AIS_Line::SetWidth(double aValue)
{
    ((::AIS_Line*)_NativeInstance)->SetWidth(aValue);
}

void RDC::OCC::AIS_Line::UnsetColor()
{
    ((::AIS_Line*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_Line::UnsetWidth()
{
    ((::AIS_Line*)_NativeInstance)->UnsetWidth();
}

RDC::OCC::AIS_Line^ RDC::OCC::AIS_Line::CreateDowncasted(::AIS_Line* instance)
{
    return gcnew RDC::OCC::AIS_Line( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ManipulatorObjectSequence
//---------------------------------------------------------------------

RDC::OCC::AIS_ManipulatorObjectSequence::AIS_ManipulatorObjectSequence()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ManipulatorObjectSequence();
}

void RDC::OCC::AIS_ManipulatorObjectSequence::Append(RDC::OCC::AIS_InteractiveObject^ theItem)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Append(Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
}

int RDC::OCC::AIS_ManipulatorObjectSequence::Size()
{
    int _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::AIS_ManipulatorObjectSequence::Length()
{
    int _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::AIS_ManipulatorObjectSequence::Lower()
{
    int _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::AIS_ManipulatorObjectSequence::Upper()
{
    int _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::AIS_ManipulatorObjectSequence::IsEmpty()
{
    bool _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::AIS_ManipulatorObjectSequence::Reverse()
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Reverse();
}

void RDC::OCC::AIS_ManipulatorObjectSequence::Exchange(int I, int J)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::AIS_ManipulatorObjectSequence::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::AIS_ManipulatorObjectSequence::Clear()
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Clear(0L);
}

RDC::OCC::AIS_ManipulatorObjectSequence^ RDC::OCC::AIS_ManipulatorObjectSequence::Assign(RDC::OCC::AIS_ManipulatorObjectSequence^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::AIS_ManipulatorObjectSequence::Remove(RDC::OCC::AIS_ManipulatorObjectSequence::Iterator^ thePosition)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Remove(*(::AIS_ManipulatorObjectSequence::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::AIS_ManipulatorObjectSequence::Prepend(RDC::OCC::AIS_InteractiveObject^ theItem)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Prepend(Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
}

void RDC::OCC::AIS_ManipulatorObjectSequence::InsertBefore(int theIndex, RDC::OCC::AIS_InteractiveObject^ theItem)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->InsertBefore(theIndex, Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
}

void RDC::OCC::AIS_ManipulatorObjectSequence::InsertAfter(RDC::OCC::AIS_ManipulatorObjectSequence::Iterator^ thePosition, RDC::OCC::AIS_InteractiveObject^ theItem)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->InsertAfter(*(::AIS_ManipulatorObjectSequence::Iterator*)thePosition->NativeInstance, Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
}

void RDC::OCC::AIS_ManipulatorObjectSequence::Split(int theIndex, RDC::OCC::AIS_ManipulatorObjectSequence^ theSeq)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Split(theIndex, *(::AIS_ManipulatorObjectSequence*)theSeq->NativeInstance);
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ManipulatorObjectSequence::First()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ManipulatorObjectSequence::ChangeFirst()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ManipulatorObjectSequence::Last()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ManipulatorObjectSequence::ChangeLast()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ManipulatorObjectSequence::Value(int theIndex)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ManipulatorObjectSequence::ChangeValue(int theIndex)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_ManipulatorObjectSequence::SetValue(int theIndex, RDC::OCC::AIS_InteractiveObject^ theItem)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->SetValue(theIndex, Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
}

RDC::OCC::AIS_ManipulatorObjectSequence^ RDC::OCC::AIS_ManipulatorObjectSequence::CreateDowncasted(::AIS_ManipulatorObjectSequence* instance)
{
    return gcnew RDC::OCC::AIS_ManipulatorObjectSequence( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::AIS_InteractiveObject^>^ RDC::OCC::AIS_ManipulatorObjectSequence::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::AIS_InteractiveObject^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::AIS_ManipulatorObjectSequence::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::AIS_InteractiveObject^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  AIS_ManipulatorObjectSequence::Iterator
//---------------------------------------------------------------------

RDC::OCC::AIS_ManipulatorObjectSequence::Iterator::Iterator()
    : RDC::OCC::BaseClass<::AIS_ManipulatorObjectSequence::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ManipulatorObjectSequence::Iterator();
}

bool RDC::OCC::AIS_ManipulatorObjectSequence::Iterator::More()
{
    bool _result = ((::AIS_ManipulatorObjectSequence::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::AIS_ManipulatorObjectSequence::Iterator::Next()
{
    ((::AIS_ManipulatorObjectSequence::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ManipulatorObjectSequence::Iterator::Value()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_ManipulatorObjectSequence::Iterator::ChangeValue()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

bool RDC::OCC::AIS_ManipulatorObjectSequence::Iterator::IsEqual(RDC::OCC::AIS_ManipulatorObjectSequence::Iterator^ theOther)
{
    bool _result = ((::AIS_ManipulatorObjectSequence::Iterator*)_NativeInstance)->IsEqual(*(::AIS_ManipulatorObjectSequence::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::AIS_ManipulatorObjectSequence::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::AIS_ManipulatorObjectSequence::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  AIS_Manipulator
//---------------------------------------------------------------------

RDC::OCC::AIS_Manipulator::AIS_Manipulator()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Manipulator();
}

RDC::OCC::AIS_Manipulator::AIS_Manipulator(RDC::OCC::Ax2 thePosition)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_thePosition = &thePosition;
    NativeInstance = new ::AIS_Manipulator(*(gp_Ax2*)pp_thePosition);
}

void RDC::OCC::AIS_Manipulator::SetPart(int theAxisIndex, RDC::OCC::AIS_ManipulatorMode theMode, bool theIsEnabled)
{
    ((::AIS_Manipulator*)_NativeInstance)->SetPart(theAxisIndex, (::AIS_ManipulatorMode)theMode, theIsEnabled);
}

void RDC::OCC::AIS_Manipulator::SetPart(RDC::OCC::AIS_ManipulatorMode theMode, bool theIsEnabled)
{
    ((::AIS_Manipulator*)_NativeInstance)->SetPart((::AIS_ManipulatorMode)theMode, theIsEnabled);
}

void RDC::OCC::AIS_Manipulator::Attach(RDC::OCC::AIS_InteractiveObject^ theObject)
{
    ((::AIS_Manipulator*)_NativeInstance)->Attach(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), ::AIS_Manipulator::OptionsForAttach());
}

void RDC::OCC::AIS_Manipulator::Attach(RDC::OCC::AIS_ManipulatorObjectSequence^ theObject)
{
    ((::AIS_Manipulator*)_NativeInstance)->Attach(Handle(::AIS_ManipulatorObjectSequence)(theObject->NativeInstance), ::AIS_Manipulator::OptionsForAttach());
}

void RDC::OCC::AIS_Manipulator::EnableMode(RDC::OCC::AIS_ManipulatorMode theMode)
{
    ((::AIS_Manipulator*)_NativeInstance)->EnableMode((::AIS_ManipulatorMode)theMode);
}

void RDC::OCC::AIS_Manipulator::SetModeActivationOnDetection(bool theToEnable)
{
    ((::AIS_Manipulator*)_NativeInstance)->SetModeActivationOnDetection(theToEnable);
}

bool RDC::OCC::AIS_Manipulator::IsModeActivationOnDetection()
{
    bool _result = ((::AIS_Manipulator*)_NativeInstance)->IsModeActivationOnDetection();
    return _result;
}

bool RDC::OCC::AIS_Manipulator::ProcessDragging(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView, RDC::OCC::SelectMgr_EntityOwner^ theOwner, RDC::OCC::Graphic3d_Vec2i^ theDragFrom, RDC::OCC::Graphic3d_Vec2i^ theDragTo, RDC::OCC::AIS_DragAction theAction)
{
    bool _result = ((::AIS_Manipulator*)_NativeInstance)->ProcessDragging(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), *(::Graphic3d_Vec2i*)theDragFrom->NativeInstance, *(::Graphic3d_Vec2i*)theDragTo->NativeInstance, (::AIS_DragAction)theAction);
    return _result;
}

void RDC::OCC::AIS_Manipulator::StartTransform(int theX, int theY, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_Manipulator*)_NativeInstance)->StartTransform(theX, theY, Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::AIS_Manipulator::Transform(RDC::OCC::Trsf aTrsf)
{
    pin_ptr<RDC::OCC::Trsf> pp_aTrsf = &aTrsf;
    ((::AIS_Manipulator*)_NativeInstance)->Transform(*(gp_Trsf*)pp_aTrsf);
}

void RDC::OCC::AIS_Manipulator::StopTransform(bool theToApply)
{
    ((::AIS_Manipulator*)_NativeInstance)->StopTransform(theToApply);
}

void RDC::OCC::AIS_Manipulator::StopTransform()
{
    ((::AIS_Manipulator*)_NativeInstance)->StopTransform(true);
}

RDC::OCC::Trsf RDC::OCC::AIS_Manipulator::Transform(int theX, int theY, RDC::OCC::V3d_View^ theView)
{
    ::gp_Trsf _nativeResult = ((::AIS_Manipulator*)_NativeInstance)->Transform(theX, theY, Handle(::V3d_View)(theView->NativeInstance));
    return RDC::OCC::Trsf(_nativeResult);
}

bool RDC::OCC::AIS_Manipulator::ObjectTransformation(int theX, int theY, RDC::OCC::V3d_View^ theView, RDC::OCC::Trsf% theTrsf)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::AIS_Manipulator*)_NativeInstance)->ObjectTransformation(theX, theY, Handle(::V3d_View)(theView->NativeInstance), *(gp_Trsf*)pp_theTrsf);
    return _result;
}

void RDC::OCC::AIS_Manipulator::DeactivateCurrentMode()
{
    ((::AIS_Manipulator*)_NativeInstance)->DeactivateCurrentMode();
}

void RDC::OCC::AIS_Manipulator::Detach()
{
    ((::AIS_Manipulator*)_NativeInstance)->Detach();
}

RDC::OCC::AIS_ManipulatorObjectSequence^ RDC::OCC::AIS_Manipulator::Objects()
{
    Handle(::AIS_ManipulatorObjectSequence) _result = ((::AIS_Manipulator*)_NativeInstance)->Objects();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_ManipulatorObjectSequence::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_Manipulator::Object()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_Manipulator*)_NativeInstance)->Object();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_Manipulator::Object(int theIndex)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_Manipulator*)_NativeInstance)->Object(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

bool RDC::OCC::AIS_Manipulator::IsAttached()
{
    bool _result = ((::AIS_Manipulator*)_NativeInstance)->IsAttached();
    return _result;
}

bool RDC::OCC::AIS_Manipulator::HasActiveMode()
{
    bool _result = ((::AIS_Manipulator*)_NativeInstance)->HasActiveMode();
    return _result;
}

bool RDC::OCC::AIS_Manipulator::HasActiveTransformation()
{
    bool _result = ((::AIS_Manipulator*)_NativeInstance)->HasActiveTransformation();
    return _result;
}

RDC::OCC::Trsf RDC::OCC::AIS_Manipulator::StartTransformation()
{
    ::gp_Trsf _nativeResult = ((::AIS_Manipulator*)_NativeInstance)->StartTransformation();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::Trsf RDC::OCC::AIS_Manipulator::StartTransformation(int theIndex)
{
    ::gp_Trsf _nativeResult = ((::AIS_Manipulator*)_NativeInstance)->StartTransformation(theIndex);
    return RDC::OCC::Trsf(_nativeResult);
}

void RDC::OCC::AIS_Manipulator::SetZoomPersistence(bool theToEnable)
{
    ((::AIS_Manipulator*)_NativeInstance)->SetZoomPersistence(theToEnable);
}

bool RDC::OCC::AIS_Manipulator::ZoomPersistence()
{
    bool _result = ((::AIS_Manipulator*)_NativeInstance)->ZoomPersistence();
    return _result;
}

void RDC::OCC::AIS_Manipulator::SetTransformPersistence(RDC::OCC::Graphic3d_TransformPers^ theTrsfPers)
{
    ((::AIS_Manipulator*)_NativeInstance)->SetTransformPersistence(Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
}

RDC::OCC::AIS_ManipulatorMode RDC::OCC::AIS_Manipulator::ActiveMode()
{
    ::AIS_ManipulatorMode _result = ((::AIS_Manipulator*)_NativeInstance)->ActiveMode();
    return (RDC::OCC::AIS_ManipulatorMode)_result;
}

int RDC::OCC::AIS_Manipulator::ActiveAxisIndex()
{
    int _result = ((::AIS_Manipulator*)_NativeInstance)->ActiveAxisIndex();
    return _result;
}

RDC::OCC::Ax2 RDC::OCC::AIS_Manipulator::Position()
{
    ::gp_Ax2 _nativeResult = ((::AIS_Manipulator*)_NativeInstance)->Position();
    return RDC::OCC::Ax2(_nativeResult);
}

void RDC::OCC::AIS_Manipulator::SetPosition(RDC::OCC::Ax2 thePosition)
{
    pin_ptr<RDC::OCC::Ax2> pp_thePosition = &thePosition;
    ((::AIS_Manipulator*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_thePosition);
}

float RDC::OCC::AIS_Manipulator::Size()
{
    float _result = ((::AIS_Manipulator*)_NativeInstance)->Size();
    return _result;
}

void RDC::OCC::AIS_Manipulator::SetSize(float theSideLength)
{
    ((::AIS_Manipulator*)_NativeInstance)->SetSize(theSideLength);
}

void RDC::OCC::AIS_Manipulator::SetGap(float theValue)
{
    ((::AIS_Manipulator*)_NativeInstance)->SetGap(theValue);
}

void RDC::OCC::AIS_Manipulator::Compute(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::Graphic3d_Structure^ thePrs, int theMode)
{
    ((::AIS_Manipulator*)_NativeInstance)->Compute(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance), theMode);
}

void RDC::OCC::AIS_Manipulator::Compute(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::Graphic3d_Structure^ thePrs)
{
    ((::AIS_Manipulator*)_NativeInstance)->Compute(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance), 0);
}

void RDC::OCC::AIS_Manipulator::ComputeSelection(RDC::OCC::SelectMgr_Selection^ theSelection, int theMode)
{
    ((::AIS_Manipulator*)_NativeInstance)->ComputeSelection(Handle(::SelectMgr_Selection)(theSelection->NativeInstance), theMode);
}

bool RDC::OCC::AIS_Manipulator::IsAutoHilight()
{
    bool _result = ((::AIS_Manipulator*)_NativeInstance)->IsAutoHilight();
    return _result;
}

void RDC::OCC::AIS_Manipulator::ClearSelected()
{
    ((::AIS_Manipulator*)_NativeInstance)->ClearSelected();
}

void RDC::OCC::AIS_Manipulator::HilightSelected(RDC::OCC::PrsMgr_PresentationManager^ thePM, RDC::OCC::SelectMgr_SequenceOfOwner^ theSeq)
{
    ((::AIS_Manipulator*)_NativeInstance)->HilightSelected(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void RDC::OCC::AIS_Manipulator::HilightOwnerWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePM, RDC::OCC::Prs3d_Drawer^ theStyle, RDC::OCC::SelectMgr_EntityOwner^ theOwner)
{
    ((::AIS_Manipulator*)_NativeInstance)->HilightOwnerWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance));
}

RDC::OCC::AIS_Manipulator^ RDC::OCC::AIS_Manipulator::CreateDowncasted(::AIS_Manipulator* instance)
{
    return gcnew RDC::OCC::AIS_Manipulator( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ManipulatorOwner
//---------------------------------------------------------------------

RDC::OCC::AIS_ManipulatorOwner::AIS_ManipulatorOwner(RDC::OCC::SelectMgr_SelectableObject^ theSelObject, int theIndex, RDC::OCC::AIS_ManipulatorMode theMode, int thePriority)
    : RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ManipulatorOwner(Handle(::SelectMgr_SelectableObject)(theSelObject->NativeInstance), theIndex, (::AIS_ManipulatorMode)theMode, thePriority);
}

RDC::OCC::AIS_ManipulatorOwner::AIS_ManipulatorOwner(RDC::OCC::SelectMgr_SelectableObject^ theSelObject, int theIndex, RDC::OCC::AIS_ManipulatorMode theMode)
    : RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ManipulatorOwner(Handle(::SelectMgr_SelectableObject)(theSelObject->NativeInstance), theIndex, (::AIS_ManipulatorMode)theMode, 0);
}

void RDC::OCC::AIS_ManipulatorOwner::HilightWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePM, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::AIS_ManipulatorOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

bool RDC::OCC::AIS_ManipulatorOwner::IsHilighted(RDC::OCC::PrsMgr_PresentationManager^ thePM, int theMode)
{
    bool _result = ((::AIS_ManipulatorOwner*)_NativeInstance)->IsHilighted(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), theMode);
    return _result;
}

void RDC::OCC::AIS_ManipulatorOwner::Unhilight(RDC::OCC::PrsMgr_PresentationManager^ thePM, int theMode)
{
    ((::AIS_ManipulatorOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), theMode);
}

RDC::OCC::AIS_ManipulatorMode RDC::OCC::AIS_ManipulatorOwner::Mode()
{
    ::AIS_ManipulatorMode _result = ((::AIS_ManipulatorOwner*)_NativeInstance)->Mode();
    return (RDC::OCC::AIS_ManipulatorMode)_result;
}

int RDC::OCC::AIS_ManipulatorOwner::Index()
{
    int _result = ((::AIS_ManipulatorOwner*)_NativeInstance)->Index();
    return _result;
}

RDC::OCC::AIS_ManipulatorOwner^ RDC::OCC::AIS_ManipulatorOwner::CreateDowncasted(::AIS_ManipulatorOwner* instance)
{
    return gcnew RDC::OCC::AIS_ManipulatorOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_MediaPlayer
//---------------------------------------------------------------------

RDC::OCC::AIS_MediaPlayer::AIS_MediaPlayer()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_MediaPlayer();
}

void RDC::OCC::AIS_MediaPlayer::OpenInput(RDC::OCC::TCollection_AsciiString^ thePath, bool theToWait)
{
    ((::AIS_MediaPlayer*)_NativeInstance)->OpenInput(*(::TCollection_AsciiString*)thePath->NativeInstance, theToWait);
}

bool RDC::OCC::AIS_MediaPlayer::PresentFrame(RDC::OCC::Graphic3d_Vec2i^ theLeftCorner, RDC::OCC::Graphic3d_Vec2i^ theMaxSize)
{
    bool _result = ((::AIS_MediaPlayer*)_NativeInstance)->PresentFrame(*(::Graphic3d_Vec2i*)theLeftCorner->NativeInstance, *(::Graphic3d_Vec2i*)theMaxSize->NativeInstance);
    return _result;
}

void RDC::OCC::AIS_MediaPlayer::PlayPause()
{
    ((::AIS_MediaPlayer*)_NativeInstance)->PlayPause();
}

void RDC::OCC::AIS_MediaPlayer::SetClosePlayer()
{
    ((::AIS_MediaPlayer*)_NativeInstance)->SetClosePlayer();
}

double RDC::OCC::AIS_MediaPlayer::Duration()
{
    double _result = ((::AIS_MediaPlayer*)_NativeInstance)->Duration();
    return _result;
}

RDC::OCC::AIS_MediaPlayer^ RDC::OCC::AIS_MediaPlayer::CreateDowncasted(::AIS_MediaPlayer* instance)
{
    return gcnew RDC::OCC::AIS_MediaPlayer( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_MultipleConnectedInteractive
//---------------------------------------------------------------------

RDC::OCC::AIS_MultipleConnectedInteractive::AIS_MultipleConnectedInteractive()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_MultipleConnectedInteractive();
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_MultipleConnectedInteractive::Connect(RDC::OCC::AIS_InteractiveObject^ theAnotherObj, RDC::OCC::TopLoc_Datum3D^ theLocation, RDC::OCC::Graphic3d_TransformPers^ theTrsfPers)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance), Handle(::TopLoc_Datum3D)(theLocation->NativeInstance), Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_MultipleConnectedInteractive::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

int RDC::OCC::AIS_MultipleConnectedInteractive::Signature()
{
    int _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Signature();
    return _result;
}

bool RDC::OCC::AIS_MultipleConnectedInteractive::HasConnection()
{
    bool _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->HasConnection();
    return _result;
}

void RDC::OCC::AIS_MultipleConnectedInteractive::Disconnect(RDC::OCC::AIS_InteractiveObject^ theInteractive)
{
    ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Disconnect(Handle(::AIS_InteractiveObject)(theInteractive->NativeInstance));
}

void RDC::OCC::AIS_MultipleConnectedInteractive::DisconnectAll()
{
    ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->DisconnectAll();
}

bool RDC::OCC::AIS_MultipleConnectedInteractive::AcceptShapeDecomposition()
{
    bool _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->AcceptShapeDecomposition();
    return _result;
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_MultipleConnectedInteractive::GetAssemblyOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->GetAssemblyOwner();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_MultipleConnectedInteractive::GlobalSelOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->GlobalSelOwner();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_MultipleConnectedInteractive::SetContext(RDC::OCC::AIS_InteractiveContext^ theCtx)
{
    ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->SetContext(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance));
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_MultipleConnectedInteractive::Connect(RDC::OCC::AIS_InteractiveObject^ theAnotherObj)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_MultipleConnectedInteractive::Connect(RDC::OCC::AIS_InteractiveObject^ theAnotherObj, RDC::OCC::Trsf theLocation)
{
    pin_ptr<RDC::OCC::Trsf> pp_theLocation = &theLocation;
    Handle(::AIS_InteractiveObject) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance), *(gp_Trsf*)pp_theLocation);
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_InteractiveObject^ RDC::OCC::AIS_MultipleConnectedInteractive::Connect(RDC::OCC::AIS_InteractiveObject^ theAnotherObj, RDC::OCC::Trsf theLocation, RDC::OCC::Graphic3d_TransformPers^ theTrsfPers)
{
    pin_ptr<RDC::OCC::Trsf> pp_theLocation = &theLocation;
    Handle(::AIS_InteractiveObject) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance), *(gp_Trsf*)pp_theLocation, Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_MultipleConnectedInteractive^ RDC::OCC::AIS_MultipleConnectedInteractive::CreateDowncasted(::AIS_MultipleConnectedInteractive* instance)
{
    return gcnew RDC::OCC::AIS_MultipleConnectedInteractive( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Plane
//---------------------------------------------------------------------

RDC::OCC::AIS_Plane::AIS_Plane(RDC::OCC::Geom_Plane^ aComponent, bool aCurrentMode)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), aCurrentMode);
}

RDC::OCC::AIS_Plane::AIS_Plane(RDC::OCC::Geom_Plane^ aComponent)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), false);
}

RDC::OCC::AIS_Plane::AIS_Plane(RDC::OCC::Geom_Plane^ aComponent, RDC::OCC::Pnt aCenter, bool aCurrentMode)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_aCenter = &aCenter;
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), *(gp_Pnt*)pp_aCenter, aCurrentMode);
}

RDC::OCC::AIS_Plane::AIS_Plane(RDC::OCC::Geom_Plane^ aComponent, RDC::OCC::Pnt aCenter)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_aCenter = &aCenter;
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), *(gp_Pnt*)pp_aCenter, false);
}

RDC::OCC::AIS_Plane::AIS_Plane(RDC::OCC::Geom_Plane^ aComponent, RDC::OCC::Pnt aCenter, RDC::OCC::Pnt aPmin, RDC::OCC::Pnt aPmax, bool aCurrentMode)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_aCenter = &aCenter;
    pin_ptr<RDC::OCC::Pnt> pp_aPmin = &aPmin;
    pin_ptr<RDC::OCC::Pnt> pp_aPmax = &aPmax;
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax, aCurrentMode);
}

RDC::OCC::AIS_Plane::AIS_Plane(RDC::OCC::Geom_Plane^ aComponent, RDC::OCC::Pnt aCenter, RDC::OCC::Pnt aPmin, RDC::OCC::Pnt aPmax)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_aCenter = &aCenter;
    pin_ptr<RDC::OCC::Pnt> pp_aPmin = &aPmin;
    pin_ptr<RDC::OCC::Pnt> pp_aPmax = &aPmax;
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax, false);
}

RDC::OCC::AIS_Plane::AIS_Plane(RDC::OCC::Geom_Axis2Placement^ aComponent, RDC::OCC::AIS_TypeOfPlane aPlaneType, bool aCurrentMode)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Axis2Placement)(aComponent->NativeInstance), (::AIS_TypeOfPlane)aPlaneType, aCurrentMode);
}

RDC::OCC::AIS_Plane::AIS_Plane(RDC::OCC::Geom_Axis2Placement^ aComponent, RDC::OCC::AIS_TypeOfPlane aPlaneType)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Axis2Placement)(aComponent->NativeInstance), (::AIS_TypeOfPlane)aPlaneType, false);
}

void RDC::OCC::AIS_Plane::SetSize(double aValue)
{
    ((::AIS_Plane*)_NativeInstance)->SetSize(aValue);
}

void RDC::OCC::AIS_Plane::SetSize(double Xval, double YVal)
{
    ((::AIS_Plane*)_NativeInstance)->SetSize(Xval, YVal);
}

void RDC::OCC::AIS_Plane::UnsetSize()
{
    ((::AIS_Plane*)_NativeInstance)->UnsetSize();
}

bool RDC::OCC::AIS_Plane::Size(double% X, double% Y)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    bool _result = ((::AIS_Plane*)_NativeInstance)->Size(*(double*)pp_X, *(double*)pp_Y);
    return _result;
}

bool RDC::OCC::AIS_Plane::HasOwnSize()
{
    bool _result = ((::AIS_Plane*)_NativeInstance)->HasOwnSize();
    return _result;
}

void RDC::OCC::AIS_Plane::SetMinimumSize(double theValue)
{
    ((::AIS_Plane*)_NativeInstance)->SetMinimumSize(theValue);
}

void RDC::OCC::AIS_Plane::UnsetMinimumSize()
{
    ((::AIS_Plane*)_NativeInstance)->UnsetMinimumSize();
}

bool RDC::OCC::AIS_Plane::HasMinimumSize()
{
    bool _result = ((::AIS_Plane*)_NativeInstance)->HasMinimumSize();
    return _result;
}

int RDC::OCC::AIS_Plane::Signature()
{
    int _result = ((::AIS_Plane*)_NativeInstance)->Signature();
    return _result;
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_Plane::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Plane*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

RDC::OCC::Geom_Plane^ RDC::OCC::AIS_Plane::Component()
{
    Handle(::Geom_Plane) _result = ((::AIS_Plane*)_NativeInstance)->Component();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Plane::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_Plane::SetComponent(RDC::OCC::Geom_Plane^ aComponent)
{
    ((::AIS_Plane*)_NativeInstance)->SetComponent(Handle(::Geom_Plane)(aComponent->NativeInstance));
}

bool RDC::OCC::AIS_Plane::PlaneAttributes(RDC::OCC::Geom_Plane^ aComponent, RDC::OCC::Pnt% aCenter, RDC::OCC::Pnt% aPmin, RDC::OCC::Pnt% aPmax)
{
    Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
    pin_ptr<RDC::OCC::Pnt> pp_aCenter = &aCenter;
    pin_ptr<RDC::OCC::Pnt> pp_aPmin = &aPmin;
    pin_ptr<RDC::OCC::Pnt> pp_aPmax = &aPmax;
    bool _result = ((::AIS_Plane*)_NativeInstance)->PlaneAttributes(h_aComponent, *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax);
    aComponent->NativeInstance = h_aComponent.get();
    return _result;
}

void RDC::OCC::AIS_Plane::SetPlaneAttributes(RDC::OCC::Geom_Plane^ aComponent, RDC::OCC::Pnt aCenter, RDC::OCC::Pnt aPmin, RDC::OCC::Pnt aPmax)
{
    pin_ptr<RDC::OCC::Pnt> pp_aCenter = &aCenter;
    pin_ptr<RDC::OCC::Pnt> pp_aPmin = &aPmin;
    pin_ptr<RDC::OCC::Pnt> pp_aPmax = &aPmax;
    ((::AIS_Plane*)_NativeInstance)->SetPlaneAttributes(Handle(::Geom_Plane)(aComponent->NativeInstance), *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax);
}

RDC::OCC::Pnt RDC::OCC::AIS_Plane::Center()
{
    ::gp_Pnt _nativeResult = ((::AIS_Plane*)_NativeInstance)->Center();
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::AIS_Plane::SetCenter(RDC::OCC::Pnt theCenter)
{
    pin_ptr<RDC::OCC::Pnt> pp_theCenter = &theCenter;
    ((::AIS_Plane*)_NativeInstance)->SetCenter(*(gp_Pnt*)pp_theCenter);
}

void RDC::OCC::AIS_Plane::SetAxis2Placement(RDC::OCC::Geom_Axis2Placement^ aComponent, RDC::OCC::AIS_TypeOfPlane aPlaneType)
{
    ((::AIS_Plane*)_NativeInstance)->SetAxis2Placement(Handle(::Geom_Axis2Placement)(aComponent->NativeInstance), (::AIS_TypeOfPlane)aPlaneType);
}

RDC::OCC::Geom_Axis2Placement^ RDC::OCC::AIS_Plane::Axis2Placement()
{
    Handle(::Geom_Axis2Placement) _result = ((::AIS_Plane*)_NativeInstance)->Axis2Placement();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Axis2Placement::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_TypeOfPlane RDC::OCC::AIS_Plane::TypeOfPlane()
{
    ::AIS_TypeOfPlane _result = ((::AIS_Plane*)_NativeInstance)->TypeOfPlane();
    return (RDC::OCC::AIS_TypeOfPlane)_result;
}

bool RDC::OCC::AIS_Plane::IsXYZPlane()
{
    bool _result = ((::AIS_Plane*)_NativeInstance)->IsXYZPlane();
    return _result;
}

bool RDC::OCC::AIS_Plane::CurrentMode()
{
    bool _result = ((::AIS_Plane*)_NativeInstance)->CurrentMode();
    return _result;
}

void RDC::OCC::AIS_Plane::SetCurrentMode(bool theCurrentMode)
{
    ((::AIS_Plane*)_NativeInstance)->SetCurrentMode(theCurrentMode);
}

bool RDC::OCC::AIS_Plane::AcceptDisplayMode(int aMode)
{
    bool _result = ((::AIS_Plane*)_NativeInstance)->AcceptDisplayMode(aMode);
    return _result;
}

void RDC::OCC::AIS_Plane::SetContext(RDC::OCC::AIS_InteractiveContext^ aCtx)
{
    ((::AIS_Plane*)_NativeInstance)->SetContext(Handle(::AIS_InteractiveContext)(aCtx->NativeInstance));
}

void RDC::OCC::AIS_Plane::ComputeSelection(RDC::OCC::SelectMgr_Selection^ theSelection, int theMode)
{
    ((::AIS_Plane*)_NativeInstance)->ComputeSelection(Handle(::SelectMgr_Selection)(theSelection->NativeInstance), theMode);
}

void RDC::OCC::AIS_Plane::SetColor(RDC::OCC::Quantity_Color^ aColor)
{
    ((::AIS_Plane*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance);
}

void RDC::OCC::AIS_Plane::UnsetColor()
{
    ((::AIS_Plane*)_NativeInstance)->UnsetColor();
}

RDC::OCC::AIS_Plane^ RDC::OCC::AIS_Plane::CreateDowncasted(::AIS_Plane* instance)
{
    return gcnew RDC::OCC::AIS_Plane( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Point
//---------------------------------------------------------------------

RDC::OCC::AIS_Point::AIS_Point(RDC::OCC::Geom_Point^ aComponent)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Point(Handle(::Geom_Point)(aComponent->NativeInstance));
}

int RDC::OCC::AIS_Point::Signature()
{
    int _result = ((::AIS_Point*)_NativeInstance)->Signature();
    return _result;
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_Point::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Point*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

RDC::OCC::Geom_Point^ RDC::OCC::AIS_Point::Component()
{
    Handle(::Geom_Point) _result = ((::AIS_Point*)_NativeInstance)->Component();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Point::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_Point::SetComponent(RDC::OCC::Geom_Point^ aComponent)
{
    ((::AIS_Point*)_NativeInstance)->SetComponent(Handle(::Geom_Point)(aComponent->NativeInstance));
}

bool RDC::OCC::AIS_Point::AcceptDisplayMode(int aMode)
{
    bool _result = ((::AIS_Point*)_NativeInstance)->AcceptDisplayMode(aMode);
    return _result;
}

void RDC::OCC::AIS_Point::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Point*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_Point::UnsetColor()
{
    ((::AIS_Point*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_Point::SetMarker(RDC::OCC::Aspect_TypeOfMarker aType)
{
    ((::AIS_Point*)_NativeInstance)->SetMarker((::Aspect_TypeOfMarker)aType);
}

void RDC::OCC::AIS_Point::UnsetMarker()
{
    ((::AIS_Point*)_NativeInstance)->UnsetMarker();
}

bool RDC::OCC::AIS_Point::HasMarker()
{
    bool _result = ((::AIS_Point*)_NativeInstance)->HasMarker();
    return _result;
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::AIS_Point::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::AIS_Point*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::AIS_Point^ RDC::OCC::AIS_Point::CreateDowncasted(::AIS_Point* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    
    return gcnew RDC::OCC::AIS_Point( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_PlaneTrihedron
//---------------------------------------------------------------------

RDC::OCC::AIS_PlaneTrihedron::AIS_PlaneTrihedron(RDC::OCC::Geom_Plane^ aPlane)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_PlaneTrihedron(Handle(::Geom_Plane)(aPlane->NativeInstance));
}

RDC::OCC::Geom_Plane^ RDC::OCC::AIS_PlaneTrihedron::Component()
{
    Handle(::Geom_Plane) _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->Component();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Plane::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_PlaneTrihedron::SetComponent(RDC::OCC::Geom_Plane^ aPlane)
{
    ((::AIS_PlaneTrihedron*)_NativeInstance)->SetComponent(Handle(::Geom_Plane)(aPlane->NativeInstance));
}

RDC::OCC::AIS_Line^ RDC::OCC::AIS_PlaneTrihedron::XAxis()
{
    Handle(::AIS_Line) _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->XAxis();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_Line::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_Line^ RDC::OCC::AIS_PlaneTrihedron::YAxis()
{
    Handle(::AIS_Line) _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->YAxis();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_Line::CreateDowncasted(_result.get());
}

RDC::OCC::AIS_Point^ RDC::OCC::AIS_PlaneTrihedron::Position()
{
    Handle(::AIS_Point) _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->Position();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_Point::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_PlaneTrihedron::SetLength(double theLength)
{
    ((::AIS_PlaneTrihedron*)_NativeInstance)->SetLength(theLength);
}

double RDC::OCC::AIS_PlaneTrihedron::GetLength()
{
    double _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->GetLength();
    return _result;
}

bool RDC::OCC::AIS_PlaneTrihedron::AcceptDisplayMode(int aMode)
{
    bool _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->AcceptDisplayMode(aMode);
    return _result;
}

int RDC::OCC::AIS_PlaneTrihedron::Signature()
{
    int _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->Signature();
    return _result;
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_PlaneTrihedron::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

void RDC::OCC::AIS_PlaneTrihedron::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_PlaneTrihedron*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_PlaneTrihedron::SetXLabel(RDC::OCC::TCollection_AsciiString^ theLabel)
{
    ((::AIS_PlaneTrihedron*)_NativeInstance)->SetXLabel(*(::TCollection_AsciiString*)theLabel->NativeInstance);
}

void RDC::OCC::AIS_PlaneTrihedron::SetYLabel(RDC::OCC::TCollection_AsciiString^ theLabel)
{
    ((::AIS_PlaneTrihedron*)_NativeInstance)->SetYLabel(*(::TCollection_AsciiString*)theLabel->NativeInstance);
}

RDC::OCC::AIS_PlaneTrihedron^ RDC::OCC::AIS_PlaneTrihedron::CreateDowncasted(::AIS_PlaneTrihedron* instance)
{
    return gcnew RDC::OCC::AIS_PlaneTrihedron( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_PointCloud
//---------------------------------------------------------------------

RDC::OCC::AIS_PointCloud::AIS_PointCloud()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_PointCloud();
}

void RDC::OCC::AIS_PointCloud::SetPoints(RDC::OCC::Graphic3d_ArrayOfPoints^ thePoints)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetPoints(Handle(::Graphic3d_ArrayOfPoints)(thePoints->NativeInstance));
}

void RDC::OCC::AIS_PointCloud::SetPoints(RDC::OCC::TColgp_HArray1OfPnt^ theCoords, RDC::OCC::Quantity_HArray1OfColor^ theColors, RDC::OCC::TColgp_HArray1OfDir^ theNormals)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetPoints(Handle(::TColgp_HArray1OfPnt)(theCoords->NativeInstance), Handle(::Quantity_HArray1OfColor)(theColors->NativeInstance), Handle(::TColgp_HArray1OfDir)(theNormals->NativeInstance));
}

void RDC::OCC::AIS_PointCloud::SetPoints(RDC::OCC::TColgp_HArray1OfPnt^ theCoords, RDC::OCC::Quantity_HArray1OfColor^ theColors)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetPoints(Handle(::TColgp_HArray1OfPnt)(theCoords->NativeInstance), Handle(::Quantity_HArray1OfColor)(theColors->NativeInstance), nullptr);
}

void RDC::OCC::AIS_PointCloud::SetPoints(RDC::OCC::TColgp_HArray1OfPnt^ theCoords)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetPoints(Handle(::TColgp_HArray1OfPnt)(theCoords->NativeInstance), nullptr, nullptr);
}

RDC::OCC::Graphic3d_ArrayOfPoints^ RDC::OCC::AIS_PointCloud::GetPoints()
{
    Handle(::Graphic3d_ArrayOfPoints) _result = ((::AIS_PointCloud*)_NativeInstance)->GetPoints();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_ArrayOfPoints::CreateDowncasted(_result.get());
}

RDC::OCC::Bnd_Box^ RDC::OCC::AIS_PointCloud::GetBoundingBox()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::AIS_PointCloud*)_NativeInstance)->GetBoundingBox();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

void RDC::OCC::AIS_PointCloud::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_PointCloud::UnsetColor()
{
    ((::AIS_PointCloud*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_PointCloud::SetMaterial(RDC::OCC::Graphic3d_MaterialAspect^ theMat)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)theMat->NativeInstance);
}

void RDC::OCC::AIS_PointCloud::UnsetMaterial()
{
    ((::AIS_PointCloud*)_NativeInstance)->UnsetMaterial();
}

RDC::OCC::AIS_PointCloud^ RDC::OCC::AIS_PointCloud::CreateDowncasted(::AIS_PointCloud* instance)
{
    return gcnew RDC::OCC::AIS_PointCloud( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_PointCloudOwner
//---------------------------------------------------------------------

RDC::OCC::AIS_PointCloudOwner::AIS_PointCloudOwner(RDC::OCC::AIS_PointCloud^ theOrigin)
    : RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_PointCloudOwner(Handle(::AIS_PointCloud)(theOrigin->NativeInstance));
}

RDC::OCC::TColStd_HPackedMapOfInteger^ RDC::OCC::AIS_PointCloudOwner::SelectedPoints()
{
    Handle(::TColStd_HPackedMapOfInteger) _result = ((::AIS_PointCloudOwner*)_NativeInstance)->SelectedPoints();
    return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HPackedMapOfInteger::CreateDowncasted(_result.get());
}

RDC::OCC::TColStd_HPackedMapOfInteger^ RDC::OCC::AIS_PointCloudOwner::DetectedPoints()
{
    Handle(::TColStd_HPackedMapOfInteger) _result = ((::AIS_PointCloudOwner*)_NativeInstance)->DetectedPoints();
    return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HPackedMapOfInteger::CreateDowncasted(_result.get());
}

bool RDC::OCC::AIS_PointCloudOwner::IsForcedHilight()
{
    bool _result = ((::AIS_PointCloudOwner*)_NativeInstance)->IsForcedHilight();
    return _result;
}

void RDC::OCC::AIS_PointCloudOwner::HilightWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::AIS_PointCloudOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

void RDC::OCC::AIS_PointCloudOwner::Unhilight(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, int theMode)
{
    ((::AIS_PointCloudOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), theMode);
}

void RDC::OCC::AIS_PointCloudOwner::Clear(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, int theMode)
{
    ((::AIS_PointCloudOwner*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), theMode);
}

RDC::OCC::AIS_PointCloudOwner^ RDC::OCC::AIS_PointCloudOwner::CreateDowncasted(::AIS_PointCloudOwner* instance)
{
    return gcnew RDC::OCC::AIS_PointCloudOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_RubberBand
//---------------------------------------------------------------------

RDC::OCC::AIS_RubberBand::AIS_RubberBand()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand();
}

RDC::OCC::AIS_RubberBand::AIS_RubberBand(RDC::OCC::Quantity_Color^ theLineColor, RDC::OCC::Aspect_TypeOfLine theType, double theLineWidth, bool theIsPolygonClosed)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, theLineWidth, theIsPolygonClosed);
}

RDC::OCC::AIS_RubberBand::AIS_RubberBand(RDC::OCC::Quantity_Color^ theLineColor, RDC::OCC::Aspect_TypeOfLine theType, double theLineWidth)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, theLineWidth, true);
}

RDC::OCC::AIS_RubberBand::AIS_RubberBand(RDC::OCC::Quantity_Color^ theLineColor, RDC::OCC::Aspect_TypeOfLine theType)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, 1., true);
}

RDC::OCC::AIS_RubberBand::AIS_RubberBand(RDC::OCC::Quantity_Color^ theLineColor, RDC::OCC::Aspect_TypeOfLine theType, RDC::OCC::Quantity_Color^ theFillColor, double theTransparency, double theLineWidth, bool theIsPolygonClosed)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, *(::Quantity_Color*)theFillColor->NativeInstance, theTransparency, theLineWidth, theIsPolygonClosed);
}

RDC::OCC::AIS_RubberBand::AIS_RubberBand(RDC::OCC::Quantity_Color^ theLineColor, RDC::OCC::Aspect_TypeOfLine theType, RDC::OCC::Quantity_Color^ theFillColor, double theTransparency, double theLineWidth)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, *(::Quantity_Color*)theFillColor->NativeInstance, theTransparency, theLineWidth, true);
}

RDC::OCC::AIS_RubberBand::AIS_RubberBand(RDC::OCC::Quantity_Color^ theLineColor, RDC::OCC::Aspect_TypeOfLine theType, RDC::OCC::Quantity_Color^ theFillColor, double theTransparency)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, *(::Quantity_Color*)theFillColor->NativeInstance, theTransparency, 1., true);
}

RDC::OCC::AIS_RubberBand::AIS_RubberBand(RDC::OCC::Quantity_Color^ theLineColor, RDC::OCC::Aspect_TypeOfLine theType, RDC::OCC::Quantity_Color^ theFillColor)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, *(::Quantity_Color*)theFillColor->NativeInstance, 1., 1., true);
}

void RDC::OCC::AIS_RubberBand::SetRectangle(int theMinX, int theMinY, int theMaxX, int theMaxY)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetRectangle(theMinX, theMinY, theMaxX, theMaxY);
}

void RDC::OCC::AIS_RubberBand::AddPoint(RDC::OCC::Graphic3d_Vec2i^ thePoint)
{
    ((::AIS_RubberBand*)_NativeInstance)->AddPoint(*(::Graphic3d_Vec2i*)thePoint->NativeInstance);
}

void RDC::OCC::AIS_RubberBand::RemoveLastPoint()
{
    ((::AIS_RubberBand*)_NativeInstance)->RemoveLastPoint();
}

void RDC::OCC::AIS_RubberBand::ClearPoints()
{
    ((::AIS_RubberBand*)_NativeInstance)->ClearPoints();
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_RubberBand::LineColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_RubberBand*)_NativeInstance)->LineColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_RubberBand::SetLineColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetLineColor(*(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_RubberBand::FillColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_RubberBand*)_NativeInstance)->FillColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_RubberBand::SetFillColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetFillColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_RubberBand::SetLineWidth(double theWidth)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetLineWidth(theWidth);
}

double RDC::OCC::AIS_RubberBand::LineWidth()
{
    double _result = ((::AIS_RubberBand*)_NativeInstance)->LineWidth();
    return _result;
}

void RDC::OCC::AIS_RubberBand::SetLineType(RDC::OCC::Aspect_TypeOfLine theType)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetLineType((::Aspect_TypeOfLine)theType);
}

RDC::OCC::Aspect_TypeOfLine RDC::OCC::AIS_RubberBand::LineType()
{
    ::Aspect_TypeOfLine _result = ((::AIS_RubberBand*)_NativeInstance)->LineType();
    return (RDC::OCC::Aspect_TypeOfLine)_result;
}

void RDC::OCC::AIS_RubberBand::SetFillTransparency(double theValue)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetFillTransparency(theValue);
}

double RDC::OCC::AIS_RubberBand::FillTransparency()
{
    double _result = ((::AIS_RubberBand*)_NativeInstance)->FillTransparency();
    return _result;
}

void RDC::OCC::AIS_RubberBand::SetFilling(bool theIsFilling)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetFilling(theIsFilling);
}

void RDC::OCC::AIS_RubberBand::SetFilling(RDC::OCC::Quantity_Color^ theColor, double theTransparency)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetFilling(*(::Quantity_Color*)theColor->NativeInstance, theTransparency);
}

bool RDC::OCC::AIS_RubberBand::IsFilling()
{
    bool _result = ((::AIS_RubberBand*)_NativeInstance)->IsFilling();
    return _result;
}

bool RDC::OCC::AIS_RubberBand::IsPolygonClosed()
{
    bool _result = ((::AIS_RubberBand*)_NativeInstance)->IsPolygonClosed();
    return _result;
}

void RDC::OCC::AIS_RubberBand::SetPolygonClosed(bool theIsPolygonClosed)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetPolygonClosed(theIsPolygonClosed);
}

RDC::OCC::AIS_RubberBand^ RDC::OCC::AIS_RubberBand::CreateDowncasted(::AIS_RubberBand* instance)
{
    return gcnew RDC::OCC::AIS_RubberBand( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_TypeFilter
//---------------------------------------------------------------------

RDC::OCC::AIS_TypeFilter::AIS_TypeFilter(RDC::OCC::AIS_KindOfInteractive aGivenKind)
    : RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_TypeFilter((::AIS_KindOfInteractive)aGivenKind);
}

bool RDC::OCC::AIS_TypeFilter::IsOk(RDC::OCC::SelectMgr_EntityOwner^ anobj)
{
    bool _result = ((::AIS_TypeFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
    return _result;
}

RDC::OCC::AIS_TypeFilter^ RDC::OCC::AIS_TypeFilter::CreateDowncasted(::AIS_TypeFilter* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_SignatureFilter)))
        return RDC::OCC::AIS_SignatureFilter::CreateDowncasted((::AIS_SignatureFilter*)instance);
    
    return gcnew RDC::OCC::AIS_TypeFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_SignatureFilter
//---------------------------------------------------------------------

RDC::OCC::AIS_SignatureFilter::AIS_SignatureFilter(RDC::OCC::AIS_KindOfInteractive aGivenKind, int aGivenSignature)
    : RDC::OCC::AIS_TypeFilter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_SignatureFilter((::AIS_KindOfInteractive)aGivenKind, aGivenSignature);
}

bool RDC::OCC::AIS_SignatureFilter::IsOk(RDC::OCC::SelectMgr_EntityOwner^ anobj)
{
    bool _result = ((::AIS_SignatureFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
    return _result;
}

RDC::OCC::AIS_SignatureFilter^ RDC::OCC::AIS_SignatureFilter::CreateDowncasted(::AIS_SignatureFilter* instance)
{
    return gcnew RDC::OCC::AIS_SignatureFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_TextLabel
//---------------------------------------------------------------------

RDC::OCC::AIS_TextLabel::AIS_TextLabel()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_TextLabel();
}

bool RDC::OCC::AIS_TextLabel::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_TextLabel*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

void RDC::OCC::AIS_TextLabel::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_TextLabel::SetTransparency(double theValue)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetTransparency(theValue);
}

void RDC::OCC::AIS_TextLabel::UnsetTransparency()
{
    ((::AIS_TextLabel*)_NativeInstance)->UnsetTransparency();
}

void RDC::OCC::AIS_TextLabel::SetMaterial(RDC::OCC::Graphic3d_MaterialAspect^ parameter1)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)parameter1->NativeInstance);
}

void RDC::OCC::AIS_TextLabel::SetText(RDC::OCC::TCollection_ExtendedString^ theText)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetText(*(::TCollection_ExtendedString*)theText->NativeInstance);
}

void RDC::OCC::AIS_TextLabel::SetPosition(RDC::OCC::Pnt thePosition)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePosition = &thePosition;
    ((::AIS_TextLabel*)_NativeInstance)->SetPosition(*(gp_Pnt*)pp_thePosition);
}

void RDC::OCC::AIS_TextLabel::SetHJustification(RDC::OCC::Graphic3d_HorizontalTextAlignment theHJust)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetHJustification((::Graphic3d_HorizontalTextAlignment)theHJust);
}

void RDC::OCC::AIS_TextLabel::SetVJustification(RDC::OCC::Graphic3d_VerticalTextAlignment theVJust)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetVJustification((::Graphic3d_VerticalTextAlignment)theVJust);
}

void RDC::OCC::AIS_TextLabel::SetAngle(double theAngle)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetAngle(theAngle);
}

void RDC::OCC::AIS_TextLabel::SetZoomable(bool theIsZoomable)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetZoomable(theIsZoomable);
}

void RDC::OCC::AIS_TextLabel::SetHeight(double theHeight)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetHeight(theHeight);
}

void RDC::OCC::AIS_TextLabel::SetFont(System::String^ theFont)
{
    const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
    ((::AIS_TextLabel*)_NativeInstance)->SetFont(sz_theFont);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

void RDC::OCC::AIS_TextLabel::SetOrientation3D(RDC::OCC::Ax2 theOrientation)
{
    pin_ptr<RDC::OCC::Ax2> pp_theOrientation = &theOrientation;
    ((::AIS_TextLabel*)_NativeInstance)->SetOrientation3D(*(gp_Ax2*)pp_theOrientation);
}

void RDC::OCC::AIS_TextLabel::UnsetOrientation3D()
{
    ((::AIS_TextLabel*)_NativeInstance)->UnsetOrientation3D();
}

RDC::OCC::Pnt RDC::OCC::AIS_TextLabel::Position()
{
    ::gp_Pnt _nativeResult = ((::AIS_TextLabel*)_NativeInstance)->Position();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::AIS_TextLabel::Text()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::AIS_TextLabel*)_NativeInstance)->Text();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::AIS_TextLabel::FontName()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::AIS_TextLabel*)_NativeInstance)->FontName();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::Ax2 RDC::OCC::AIS_TextLabel::Orientation3D()
{
    ::gp_Ax2 _nativeResult = ((::AIS_TextLabel*)_NativeInstance)->Orientation3D();
    return RDC::OCC::Ax2(_nativeResult);
}

bool RDC::OCC::AIS_TextLabel::HasOrientation3D()
{
    bool _result = ((::AIS_TextLabel*)_NativeInstance)->HasOrientation3D();
    return _result;
}

void RDC::OCC::AIS_TextLabel::SetFlipping(bool theIsFlipping)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetFlipping(theIsFlipping);
}

bool RDC::OCC::AIS_TextLabel::HasFlipping()
{
    bool _result = ((::AIS_TextLabel*)_NativeInstance)->HasFlipping();
    return _result;
}

bool RDC::OCC::AIS_TextLabel::HasOwnAnchorPoint()
{
    bool _result = ((::AIS_TextLabel*)_NativeInstance)->HasOwnAnchorPoint();
    return _result;
}

void RDC::OCC::AIS_TextLabel::SetOwnAnchorPoint(bool theOwnAnchorPoint)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetOwnAnchorPoint(theOwnAnchorPoint);
}

void RDC::OCC::AIS_TextLabel::SetDisplayType(RDC::OCC::Aspect_TypeOfDisplayText theDisplayType)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetDisplayType((::Aspect_TypeOfDisplayText)theDisplayType);
}

void RDC::OCC::AIS_TextLabel::SetColorSubTitle(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetColorSubTitle(*(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::AIS_TextLabel^ RDC::OCC::AIS_TextLabel::CreateDowncasted(::AIS_TextLabel* instance)
{
    return gcnew RDC::OCC::AIS_TextLabel( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_TexturedShape
//---------------------------------------------------------------------

RDC::OCC::AIS_TexturedShape::AIS_TexturedShape(RDC::OCC::TopoDS_Shape^ theShape)
    : RDC::OCC::AIS_Shape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_TexturedShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void RDC::OCC::AIS_TexturedShape::SetTextureFileName(RDC::OCC::TCollection_AsciiString^ theTextureFileName)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureFileName(*(::TCollection_AsciiString*)theTextureFileName->NativeInstance);
}

void RDC::OCC::AIS_TexturedShape::SetTexturePixMap(RDC::OCC::Image_PixMap^ theTexturePixMap)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTexturePixMap(Handle(::Image_PixMap)(theTexturePixMap->NativeInstance));
}

bool RDC::OCC::AIS_TexturedShape::TextureMapState()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureMapState();
    return _result;
}

void RDC::OCC::AIS_TexturedShape::SetTextureMapOn()
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureMapOn();
}

void RDC::OCC::AIS_TexturedShape::SetTextureMapOff()
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureMapOff();
}

System::String^ RDC::OCC::AIS_TexturedShape::TextureFile()
{
    Standard_CString _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureFile();
    return gcnew System::String(_result);
}

RDC::OCC::Image_PixMap^ RDC::OCC::AIS_TexturedShape::TexturePixMap()
{
    Handle(::Image_PixMap) _result = ((::AIS_TexturedShape*)_NativeInstance)->TexturePixMap();
    return _result.IsNull() ? nullptr : RDC::OCC::Image_PixMap::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_TexturedShape::UpdateAttributes()
{
    ((::AIS_TexturedShape*)_NativeInstance)->UpdateAttributes();
}

void RDC::OCC::AIS_TexturedShape::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_TexturedShape::UnsetColor()
{
    ((::AIS_TexturedShape*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_TexturedShape::SetMaterial(RDC::OCC::Graphic3d_MaterialAspect^ theAspect)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)theAspect->NativeInstance);
}

void RDC::OCC::AIS_TexturedShape::UnsetMaterial()
{
    ((::AIS_TexturedShape*)_NativeInstance)->UnsetMaterial();
}

void RDC::OCC::AIS_TexturedShape::EnableTextureModulate()
{
    ((::AIS_TexturedShape*)_NativeInstance)->EnableTextureModulate();
}

void RDC::OCC::AIS_TexturedShape::DisableTextureModulate()
{
    ((::AIS_TexturedShape*)_NativeInstance)->DisableTextureModulate();
}

bool RDC::OCC::AIS_TexturedShape::TextureRepeat()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureRepeat();
    return _result;
}

double RDC::OCC::AIS_TexturedShape::URepeat()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->URepeat();
    return _result;
}

double RDC::OCC::AIS_TexturedShape::VRepeat()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->VRepeat();
    return _result;
}

void RDC::OCC::AIS_TexturedShape::SetTextureRepeat(bool theToRepeat, double theURepeat, double theVRepeat)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureRepeat(theToRepeat, theURepeat, theVRepeat);
}

void RDC::OCC::AIS_TexturedShape::SetTextureRepeat(bool theToRepeat, double theURepeat)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureRepeat(theToRepeat, theURepeat, 1.);
}

void RDC::OCC::AIS_TexturedShape::SetTextureRepeat(bool theToRepeat)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureRepeat(theToRepeat, 1., 1.);
}

bool RDC::OCC::AIS_TexturedShape::TextureOrigin()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureOrigin();
    return _result;
}

double RDC::OCC::AIS_TexturedShape::TextureUOrigin()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureUOrigin();
    return _result;
}

double RDC::OCC::AIS_TexturedShape::TextureVOrigin()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureVOrigin();
    return _result;
}

void RDC::OCC::AIS_TexturedShape::SetTextureOrigin(bool theToSetTextureOrigin, double theUOrigin, double theVOrigin)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureOrigin(theToSetTextureOrigin, theUOrigin, theVOrigin);
}

void RDC::OCC::AIS_TexturedShape::SetTextureOrigin(bool theToSetTextureOrigin, double theUOrigin)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureOrigin(theToSetTextureOrigin, theUOrigin, 0.);
}

void RDC::OCC::AIS_TexturedShape::SetTextureOrigin(bool theToSetTextureOrigin)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureOrigin(theToSetTextureOrigin, 0., 0.);
}

bool RDC::OCC::AIS_TexturedShape::TextureScale()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureScale();
    return _result;
}

double RDC::OCC::AIS_TexturedShape::TextureScaleU()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureScaleU();
    return _result;
}

double RDC::OCC::AIS_TexturedShape::TextureScaleV()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureScaleV();
    return _result;
}

void RDC::OCC::AIS_TexturedShape::SetTextureScale(bool theToSetTextureScale, double theScaleU, double theScaleV)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureScale(theToSetTextureScale, theScaleU, theScaleV);
}

void RDC::OCC::AIS_TexturedShape::SetTextureScale(bool theToSetTextureScale, double theScaleU)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureScale(theToSetTextureScale, theScaleU, 1.);
}

void RDC::OCC::AIS_TexturedShape::SetTextureScale(bool theToSetTextureScale)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureScale(theToSetTextureScale, 1., 1.);
}

bool RDC::OCC::AIS_TexturedShape::ShowTriangles()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->ShowTriangles();
    return _result;
}

void RDC::OCC::AIS_TexturedShape::ShowTriangles(bool theToShowTriangles)
{
    ((::AIS_TexturedShape*)_NativeInstance)->ShowTriangles(theToShowTriangles);
}

bool RDC::OCC::AIS_TexturedShape::TextureModulate()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureModulate();
    return _result;
}

bool RDC::OCC::AIS_TexturedShape::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

RDC::OCC::AIS_TexturedShape^ RDC::OCC::AIS_TexturedShape::CreateDowncasted(::AIS_TexturedShape* instance)
{
    return gcnew RDC::OCC::AIS_TexturedShape( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Triangulation
//---------------------------------------------------------------------

void RDC::OCC::AIS_Triangulation::SetColors(RDC::OCC::TColStd_HArray1OfInteger^ aColor)
{
    ((::AIS_Triangulation*)_NativeInstance)->SetColors(Handle(::TColStd_HArray1OfInteger)(aColor->NativeInstance));
}

RDC::OCC::TColStd_HArray1OfInteger^ RDC::OCC::AIS_Triangulation::GetColors()
{
    Handle(::TColStd_HArray1OfInteger) _result = ((::AIS_Triangulation*)_NativeInstance)->GetColors();
    return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HArray1OfInteger::CreateDowncasted(_result.get());
}

bool RDC::OCC::AIS_Triangulation::HasVertexColors()
{
    bool _result = ((::AIS_Triangulation*)_NativeInstance)->HasVertexColors();
    return _result;
}

void RDC::OCC::AIS_Triangulation::SetTransparency(double aValue)
{
    ((::AIS_Triangulation*)_NativeInstance)->SetTransparency(aValue);
}

void RDC::OCC::AIS_Triangulation::SetTransparency()
{
    ((::AIS_Triangulation*)_NativeInstance)->SetTransparency(0.59999999999999998);
}

void RDC::OCC::AIS_Triangulation::UnsetTransparency()
{
    ((::AIS_Triangulation*)_NativeInstance)->UnsetTransparency();
}

RDC::OCC::AIS_Triangulation^ RDC::OCC::AIS_Triangulation::CreateDowncasted(::AIS_Triangulation* instance)
{
    return gcnew RDC::OCC::AIS_Triangulation( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Trihedron
//---------------------------------------------------------------------

RDC::OCC::AIS_Trihedron::AIS_Trihedron(RDC::OCC::Geom_Axis2Placement^ theComponent)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Trihedron(Handle(::Geom_Axis2Placement)(theComponent->NativeInstance));
}

RDC::OCC::Prs3d_DatumMode RDC::OCC::AIS_Trihedron::DatumDisplayMode()
{
    ::Prs3d_DatumMode _result = ((::AIS_Trihedron*)_NativeInstance)->DatumDisplayMode();
    return (RDC::OCC::Prs3d_DatumMode)_result;
}

void RDC::OCC::AIS_Trihedron::SetDatumDisplayMode(RDC::OCC::Prs3d_DatumMode theMode)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetDatumDisplayMode((::Prs3d_DatumMode)theMode);
}

RDC::OCC::Geom_Axis2Placement^ RDC::OCC::AIS_Trihedron::Component()
{
    Handle(::Geom_Axis2Placement) _result = ((::AIS_Trihedron*)_NativeInstance)->Component();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Axis2Placement::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_Trihedron::SetComponent(RDC::OCC::Geom_Axis2Placement^ theComponent)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetComponent(Handle(::Geom_Axis2Placement)(theComponent->NativeInstance));
}

bool RDC::OCC::AIS_Trihedron::HasOwnSize()
{
    bool _result = ((::AIS_Trihedron*)_NativeInstance)->HasOwnSize();
    return _result;
}

double RDC::OCC::AIS_Trihedron::Size()
{
    double _result = ((::AIS_Trihedron*)_NativeInstance)->Size();
    return _result;
}

void RDC::OCC::AIS_Trihedron::SetSize(double theValue)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetSize(theValue);
}

void RDC::OCC::AIS_Trihedron::UnsetSize()
{
    ((::AIS_Trihedron*)_NativeInstance)->UnsetSize();
}

bool RDC::OCC::AIS_Trihedron::HasTextColor()
{
    bool _result = ((::AIS_Trihedron*)_NativeInstance)->HasTextColor();
    return _result;
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_Trihedron::TextColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_Trihedron*)_NativeInstance)->TextColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_Trihedron::SetTextColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetTextColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_Trihedron::SetTextColor(RDC::OCC::Prs3d_DatumParts thePart, RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetTextColor((::Prs3d_DatumParts)thePart, *(::Quantity_Color*)theColor->NativeInstance);
}

bool RDC::OCC::AIS_Trihedron::HasArrowColor()
{
    bool _result = ((::AIS_Trihedron*)_NativeInstance)->HasArrowColor();
    return _result;
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_Trihedron::ArrowColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_Trihedron*)_NativeInstance)->ArrowColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_Trihedron::SetArrowColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetArrowColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_Trihedron::SetArrowColor(RDC::OCC::Prs3d_DatumParts thePart, RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetArrowColor((::Prs3d_DatumParts)thePart, *(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_Trihedron::DatumPartColor(RDC::OCC::Prs3d_DatumParts thePart)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_Trihedron*)_NativeInstance)->DatumPartColor((::Prs3d_DatumParts)thePart);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_Trihedron::SetDatumPartColor(RDC::OCC::Prs3d_DatumParts thePart, RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetDatumPartColor((::Prs3d_DatumParts)thePart, *(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_Trihedron::SetOriginColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetOriginColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_Trihedron::SetXAxisColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetXAxisColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_Trihedron::SetYAxisColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetYAxisColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_Trihedron::SetAxisColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetAxisColor(*(::Quantity_Color*)theColor->NativeInstance);
}

bool RDC::OCC::AIS_Trihedron::ToDrawArrows()
{
    bool _result = ((::AIS_Trihedron*)_NativeInstance)->ToDrawArrows();
    return _result;
}

void RDC::OCC::AIS_Trihedron::SetDrawArrows(bool theToDraw)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetDrawArrows(theToDraw);
}

int RDC::OCC::AIS_Trihedron::SelectionPriority(RDC::OCC::Prs3d_DatumParts thePart)
{
    int _result = ((::AIS_Trihedron*)_NativeInstance)->SelectionPriority((::Prs3d_DatumParts)thePart);
    return _result;
}

void RDC::OCC::AIS_Trihedron::SetSelectionPriority(RDC::OCC::Prs3d_DatumParts thePart, int thePriority)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetSelectionPriority((::Prs3d_DatumParts)thePart, thePriority);
}

RDC::OCC::TCollection_ExtendedString^ RDC::OCC::AIS_Trihedron::Label(RDC::OCC::Prs3d_DatumParts thePart)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::AIS_Trihedron*)_NativeInstance)->Label((::Prs3d_DatumParts)thePart);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_ExtendedString(_result);
}

void RDC::OCC::AIS_Trihedron::SetLabel(RDC::OCC::Prs3d_DatumParts thePart, RDC::OCC::TCollection_ExtendedString^ theName)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetLabel((::Prs3d_DatumParts)thePart, *(::TCollection_ExtendedString*)theName->NativeInstance);
}

void RDC::OCC::AIS_Trihedron::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

bool RDC::OCC::AIS_Trihedron::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_Trihedron*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

int RDC::OCC::AIS_Trihedron::Signature()
{
    int _result = ((::AIS_Trihedron*)_NativeInstance)->Signature();
    return _result;
}

RDC::OCC::AIS_KindOfInteractive RDC::OCC::AIS_Trihedron::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Trihedron*)_NativeInstance)->Type();
    return (RDC::OCC::AIS_KindOfInteractive)_result;
}

void RDC::OCC::AIS_Trihedron::UnsetColor()
{
    ((::AIS_Trihedron*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_Trihedron::ClearSelected()
{
    ((::AIS_Trihedron*)_NativeInstance)->ClearSelected();
}

void RDC::OCC::AIS_Trihedron::HilightSelected(RDC::OCC::PrsMgr_PresentationManager^ thePM, RDC::OCC::SelectMgr_SequenceOfOwner^ theOwners)
{
    ((::AIS_Trihedron*)_NativeInstance)->HilightSelected(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), *(::SelectMgr_SequenceOfOwner*)theOwners->NativeInstance);
}

void RDC::OCC::AIS_Trihedron::HilightOwnerWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePM, RDC::OCC::Prs3d_Drawer^ theStyle, RDC::OCC::SelectMgr_EntityOwner^ theOwner)
{
    ((::AIS_Trihedron*)_NativeInstance)->HilightOwnerWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance));
}

RDC::OCC::AIS_Trihedron^ RDC::OCC::AIS_Trihedron::CreateDowncasted(::AIS_Trihedron* instance)
{
    return gcnew RDC::OCC::AIS_Trihedron( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_TrihedronOwner
//---------------------------------------------------------------------

RDC::OCC::AIS_TrihedronOwner::AIS_TrihedronOwner(RDC::OCC::SelectMgr_SelectableObject^ theSelObject, RDC::OCC::Prs3d_DatumParts theDatumPart, int thePriority)
    : RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_TrihedronOwner(Handle(::SelectMgr_SelectableObject)(theSelObject->NativeInstance), (::Prs3d_DatumParts)theDatumPart, thePriority);
}

RDC::OCC::Prs3d_DatumParts RDC::OCC::AIS_TrihedronOwner::DatumPart()
{
    ::Prs3d_DatumParts _result = ((::AIS_TrihedronOwner*)_NativeInstance)->DatumPart();
    return (RDC::OCC::Prs3d_DatumParts)_result;
}

void RDC::OCC::AIS_TrihedronOwner::HilightWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePM, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::AIS_TrihedronOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

bool RDC::OCC::AIS_TrihedronOwner::IsHilighted(RDC::OCC::PrsMgr_PresentationManager^ thePM, int theMode)
{
    bool _result = ((::AIS_TrihedronOwner*)_NativeInstance)->IsHilighted(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), theMode);
    return _result;
}

void RDC::OCC::AIS_TrihedronOwner::Unhilight(RDC::OCC::PrsMgr_PresentationManager^ thePM, int theMode)
{
    ((::AIS_TrihedronOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), theMode);
}

RDC::OCC::AIS_TrihedronOwner^ RDC::OCC::AIS_TrihedronOwner::CreateDowncasted(::AIS_TrihedronOwner* instance)
{
    return gcnew RDC::OCC::AIS_TrihedronOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ViewInputBuffer
//---------------------------------------------------------------------

RDC::OCC::AIS_ViewInputBuffer::AIS_ViewInputBuffer()
    : RDC::OCC::BaseClass<::AIS_ViewInputBuffer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ViewInputBuffer();
}

void RDC::OCC::AIS_ViewInputBuffer::Reset()
{
    ((::AIS_ViewInputBuffer*)_NativeInstance)->Reset();
}



//---------------------------------------------------------------------
//  Class  AIS_XRTrackedDevice
//---------------------------------------------------------------------

RDC::OCC::AIS_XRTrackedDevice::AIS_XRTrackedDevice(RDC::OCC::Graphic3d_ArrayOfTriangles^ theTris, RDC::OCC::Image_Texture^ theTexture)
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_XRTrackedDevice(Handle(::Graphic3d_ArrayOfTriangles)(theTris->NativeInstance), Handle(::Image_Texture)(theTexture->NativeInstance));
}

RDC::OCC::AIS_XRTrackedDevice::AIS_XRTrackedDevice()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_XRTrackedDevice();
}

RDC::OCC::Aspect_XRTrackedDeviceRole RDC::OCC::AIS_XRTrackedDevice::Role()
{
    ::Aspect_XRTrackedDeviceRole _result = ((::AIS_XRTrackedDevice*)_NativeInstance)->Role();
    return (RDC::OCC::Aspect_XRTrackedDeviceRole)_result;
}

void RDC::OCC::AIS_XRTrackedDevice::SetRole(RDC::OCC::Aspect_XRTrackedDeviceRole theRole)
{
    ((::AIS_XRTrackedDevice*)_NativeInstance)->SetRole((::Aspect_XRTrackedDeviceRole)theRole);
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_XRTrackedDevice::LaserColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::AIS_XRTrackedDevice*)_NativeInstance)->LaserColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_XRTrackedDevice::SetLaserColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_XRTrackedDevice*)_NativeInstance)->SetLaserColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float RDC::OCC::AIS_XRTrackedDevice::LaserLength()
{
    float _result = ((::AIS_XRTrackedDevice*)_NativeInstance)->LaserLength();
    return _result;
}

void RDC::OCC::AIS_XRTrackedDevice::SetLaserLength(float theLength)
{
    ((::AIS_XRTrackedDevice*)_NativeInstance)->SetLaserLength(theLength);
}

float RDC::OCC::AIS_XRTrackedDevice::UnitFactor()
{
    float _result = ((::AIS_XRTrackedDevice*)_NativeInstance)->UnitFactor();
    return _result;
}

void RDC::OCC::AIS_XRTrackedDevice::SetUnitFactor(float theFactor)
{
    ((::AIS_XRTrackedDevice*)_NativeInstance)->SetUnitFactor(theFactor);
}

RDC::OCC::AIS_XRTrackedDevice^ RDC::OCC::AIS_XRTrackedDevice::CreateDowncasted(::AIS_XRTrackedDevice* instance)
{
    return gcnew RDC::OCC::AIS_XRTrackedDevice( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ViewController
//---------------------------------------------------------------------

RDC::OCC::AIS_ViewController::AIS_ViewController()
    : RDC::OCC::Aspect_WindowInputListener(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ViewController();
}

RDC::OCC::AIS_ViewInputBuffer^ RDC::OCC::AIS_ViewController::InputBuffer(RDC::OCC::AIS_ViewInputBufferType theType)
{
    ::AIS_ViewInputBuffer* _result = new ::AIS_ViewInputBuffer();
    *_result = (::AIS_ViewInputBuffer)((::AIS_ViewController*)_NativeInstance)->InputBuffer((::AIS_ViewInputBufferType)theType);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_ViewInputBuffer(_result);
}

RDC::OCC::AIS_ViewInputBuffer^ RDC::OCC::AIS_ViewController::ChangeInputBuffer(RDC::OCC::AIS_ViewInputBufferType theType)
{
    ::AIS_ViewInputBuffer* _result = new ::AIS_ViewInputBuffer();
    *_result = ((::AIS_ViewController*)_NativeInstance)->ChangeInputBuffer((::AIS_ViewInputBufferType)theType);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_ViewInputBuffer(_result);
}

RDC::OCC::AIS_AnimationCamera^ RDC::OCC::AIS_ViewController::ViewAnimation()
{
    Handle(::AIS_AnimationCamera) _result = ((::AIS_ViewController*)_NativeInstance)->ViewAnimation();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_AnimationCamera::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_ViewController::SetViewAnimation(RDC::OCC::AIS_AnimationCamera^ theAnimation)
{
    ((::AIS_ViewController*)_NativeInstance)->SetViewAnimation(Handle(::AIS_AnimationCamera)(theAnimation->NativeInstance));
}

void RDC::OCC::AIS_ViewController::AbortViewAnimation()
{
    ((::AIS_ViewController*)_NativeInstance)->AbortViewAnimation();
}

RDC::OCC::AIS_Animation^ RDC::OCC::AIS_ViewController::ObjectsAnimation()
{
    Handle(::AIS_Animation) _result = ((::AIS_ViewController*)_NativeInstance)->ObjectsAnimation();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_Animation::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_ViewController::SetObjectsAnimation(RDC::OCC::AIS_Animation^ theAnimation)
{
    ((::AIS_ViewController*)_NativeInstance)->SetObjectsAnimation(Handle(::AIS_Animation)(theAnimation->NativeInstance));
}

bool RDC::OCC::AIS_ViewController::ToPauseObjectsAnimation()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToPauseObjectsAnimation();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetPauseObjectsAnimation(bool theToPause)
{
    ((::AIS_ViewController*)_NativeInstance)->SetPauseObjectsAnimation(theToPause);
}

bool RDC::OCC::AIS_ViewController::IsContinuousRedraw()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->IsContinuousRedraw();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetContinuousRedraw(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetContinuousRedraw(theToEnable);
}

RDC::OCC::AIS_RotationMode RDC::OCC::AIS_ViewController::RotationMode()
{
    ::AIS_RotationMode _result = ((::AIS_ViewController*)_NativeInstance)->RotationMode();
    return (RDC::OCC::AIS_RotationMode)_result;
}

void RDC::OCC::AIS_ViewController::SetRotationMode(RDC::OCC::AIS_RotationMode theMode)
{
    ((::AIS_ViewController*)_NativeInstance)->SetRotationMode((::AIS_RotationMode)theMode);
}

RDC::OCC::AIS_NavigationMode RDC::OCC::AIS_ViewController::NavigationMode()
{
    ::AIS_NavigationMode _result = ((::AIS_ViewController*)_NativeInstance)->NavigationMode();
    return (RDC::OCC::AIS_NavigationMode)_result;
}

void RDC::OCC::AIS_ViewController::SetNavigationMode(RDC::OCC::AIS_NavigationMode theMode)
{
    ((::AIS_ViewController*)_NativeInstance)->SetNavigationMode((::AIS_NavigationMode)theMode);
}

float RDC::OCC::AIS_ViewController::MouseAcceleration()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->MouseAcceleration();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetMouseAcceleration(float theRatio)
{
    ((::AIS_ViewController*)_NativeInstance)->SetMouseAcceleration(theRatio);
}

float RDC::OCC::AIS_ViewController::OrbitAcceleration()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->OrbitAcceleration();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetOrbitAcceleration(float theRatio)
{
    ((::AIS_ViewController*)_NativeInstance)->SetOrbitAcceleration(theRatio);
}

bool RDC::OCC::AIS_ViewController::ToShowPanAnchorPoint()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToShowPanAnchorPoint();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetShowPanAnchorPoint(bool theToShow)
{
    ((::AIS_ViewController*)_NativeInstance)->SetShowPanAnchorPoint(theToShow);
}

bool RDC::OCC::AIS_ViewController::ToShowRotateCenter()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToShowRotateCenter();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetShowRotateCenter(bool theToShow)
{
    ((::AIS_ViewController*)_NativeInstance)->SetShowRotateCenter(theToShow);
}

bool RDC::OCC::AIS_ViewController::ToLockOrbitZUp()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToLockOrbitZUp();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetLockOrbitZUp(bool theToForceUp)
{
    ((::AIS_ViewController*)_NativeInstance)->SetLockOrbitZUp(theToForceUp);
}

bool RDC::OCC::AIS_ViewController::ToAllowTouchZRotation()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowTouchZRotation();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetAllowTouchZRotation(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowTouchZRotation(theToEnable);
}

bool RDC::OCC::AIS_ViewController::ToAllowRotation()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowRotation();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetAllowRotation(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowRotation(theToEnable);
}

bool RDC::OCC::AIS_ViewController::ToAllowPanning()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowPanning();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetAllowPanning(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowPanning(theToEnable);
}

bool RDC::OCC::AIS_ViewController::ToAllowZooming()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowZooming();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetAllowZooming(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowZooming(theToEnable);
}

bool RDC::OCC::AIS_ViewController::ToAllowZFocus()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowZFocus();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetAllowZFocus(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowZFocus(theToEnable);
}

bool RDC::OCC::AIS_ViewController::ToAllowHighlight()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowHighlight();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetAllowHighlight(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowHighlight(theToEnable);
}

bool RDC::OCC::AIS_ViewController::ToAllowDragging()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowDragging();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetAllowDragging(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowDragging(theToEnable);
}

bool RDC::OCC::AIS_ViewController::ToStickToRayOnZoom()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToStickToRayOnZoom();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetStickToRayOnZoom(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetStickToRayOnZoom(theToEnable);
}

bool RDC::OCC::AIS_ViewController::ToStickToRayOnRotation()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToStickToRayOnRotation();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetStickToRayOnRotation(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetStickToRayOnRotation(theToEnable);
}

bool RDC::OCC::AIS_ViewController::ToInvertPitch()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToInvertPitch();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetInvertPitch(bool theToInvert)
{
    ((::AIS_ViewController*)_NativeInstance)->SetInvertPitch(theToInvert);
}

float RDC::OCC::AIS_ViewController::WalkSpeedAbsolute()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->WalkSpeedAbsolute();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetWalkSpeedAbsolute(float theSpeed)
{
    ((::AIS_ViewController*)_NativeInstance)->SetWalkSpeedAbsolute(theSpeed);
}

float RDC::OCC::AIS_ViewController::WalkSpeedRelative()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->WalkSpeedRelative();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetWalkSpeedRelative(float theFactor)
{
    ((::AIS_ViewController*)_NativeInstance)->SetWalkSpeedRelative(theFactor);
}

float RDC::OCC::AIS_ViewController::ThrustSpeed()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->ThrustSpeed();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetThrustSpeed(float theSpeed)
{
    ((::AIS_ViewController*)_NativeInstance)->SetThrustSpeed(theSpeed);
}

bool RDC::OCC::AIS_ViewController::HasPreviousMoveTo()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->HasPreviousMoveTo();
    return _result;
}

RDC::OCC::Graphic3d_Vec2i^ RDC::OCC::AIS_ViewController::PreviousMoveTo()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::AIS_ViewController*)_NativeInstance)->PreviousMoveTo();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec2i(_result);
}

void RDC::OCC::AIS_ViewController::ResetPreviousMoveTo()
{
    ((::AIS_ViewController*)_NativeInstance)->ResetPreviousMoveTo();
}

bool RDC::OCC::AIS_ViewController::ToDisplayXRAuxDevices()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToDisplayXRAuxDevices();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetDisplayXRAuxDevices(bool theToDisplay)
{
    ((::AIS_ViewController*)_NativeInstance)->SetDisplayXRAuxDevices(theToDisplay);
}

bool RDC::OCC::AIS_ViewController::ToDisplayXRHands()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToDisplayXRHands();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetDisplayXRHands(bool theToDisplay)
{
    ((::AIS_ViewController*)_NativeInstance)->SetDisplayXRHands(theToDisplay);
}

void RDC::OCC::AIS_ViewController::KeyDown(unsigned int theKey, double theTime, double thePressure)
{
    ((::AIS_ViewController*)_NativeInstance)->KeyDown(theKey, theTime, thePressure);
}

void RDC::OCC::AIS_ViewController::KeyDown(unsigned int theKey, double theTime)
{
    ((::AIS_ViewController*)_NativeInstance)->KeyDown(theKey, theTime, 1.);
}

void RDC::OCC::AIS_ViewController::KeyUp(unsigned int theKey, double theTime)
{
    ((::AIS_ViewController*)_NativeInstance)->KeyUp(theKey, theTime);
}

void RDC::OCC::AIS_ViewController::KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure)
{
    ((::AIS_ViewController*)_NativeInstance)->KeyFromAxis(theNegative, thePositive, theTime, thePressure);
}

RDC::OCC::AIS_WalkDelta^ RDC::OCC::AIS_ViewController::FetchNavigationKeys(double theCrouchRatio, double theRunRatio)
{
    ::AIS_WalkDelta* _result = new ::AIS_WalkDelta();
    *_result = ((::AIS_ViewController*)_NativeInstance)->FetchNavigationKeys(theCrouchRatio, theRunRatio);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_WalkDelta(_result);
}

RDC::OCC::AIS_MouseGestureMap^ RDC::OCC::AIS_ViewController::MouseGestureMap()
{
    ::AIS_MouseGestureMap* _result = new ::AIS_MouseGestureMap();
    *_result = (::AIS_MouseGestureMap)((::AIS_ViewController*)_NativeInstance)->MouseGestureMap();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_MouseGestureMap(_result);
}

RDC::OCC::AIS_MouseGestureMap^ RDC::OCC::AIS_ViewController::ChangeMouseGestureMap()
{
    ::AIS_MouseGestureMap* _result = new ::AIS_MouseGestureMap();
    *_result = ((::AIS_ViewController*)_NativeInstance)->ChangeMouseGestureMap();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_MouseGestureMap(_result);
}

RDC::OCC::AIS_MouseSelectionSchemeMap^ RDC::OCC::AIS_ViewController::MouseSelectionSchemes()
{
    ::AIS_MouseSelectionSchemeMap* _result = new ::AIS_MouseSelectionSchemeMap();
    *_result = (::AIS_MouseSelectionSchemeMap)((::AIS_ViewController*)_NativeInstance)->MouseSelectionSchemes();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_MouseSelectionSchemeMap(_result);
}

RDC::OCC::AIS_MouseSelectionSchemeMap^ RDC::OCC::AIS_ViewController::ChangeMouseSelectionSchemes()
{
    ::AIS_MouseSelectionSchemeMap* _result = new ::AIS_MouseSelectionSchemeMap();
    *_result = ((::AIS_ViewController*)_NativeInstance)->ChangeMouseSelectionSchemes();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_MouseSelectionSchemeMap(_result);
}

double RDC::OCC::AIS_ViewController::MouseDoubleClickInterval()
{
    double _result = ((::AIS_ViewController*)_NativeInstance)->MouseDoubleClickInterval();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetMouseDoubleClickInterval(double theSeconds)
{
    ((::AIS_ViewController*)_NativeInstance)->SetMouseDoubleClickInterval(theSeconds);
}

void RDC::OCC::AIS_ViewController::SelectInViewer(RDC::OCC::Graphic3d_Vec2i^ thePnt, RDC::OCC::AIS_SelectionScheme theScheme)
{
    ((::AIS_ViewController*)_NativeInstance)->SelectInViewer(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, (::AIS_SelectionScheme)theScheme);
}

void RDC::OCC::AIS_ViewController::SelectInViewer(RDC::OCC::Graphic3d_Vec2i^ thePnt)
{
    ((::AIS_ViewController*)_NativeInstance)->SelectInViewer(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, AIS_SelectionScheme_Replace);
}

void RDC::OCC::AIS_ViewController::UpdateRubberBand(RDC::OCC::Graphic3d_Vec2i^ thePntFrom, RDC::OCC::Graphic3d_Vec2i^ thePntTo)
{
    ((::AIS_ViewController*)_NativeInstance)->UpdateRubberBand(*(::Graphic3d_Vec2i*)thePntFrom->NativeInstance, *(::Graphic3d_Vec2i*)thePntTo->NativeInstance);
}

void RDC::OCC::AIS_ViewController::UpdatePolySelection(RDC::OCC::Graphic3d_Vec2i^ thePnt, bool theToAppend)
{
    ((::AIS_ViewController*)_NativeInstance)->UpdatePolySelection(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, theToAppend);
}

bool RDC::OCC::AIS_ViewController::UpdateZoom(RDC::OCC::Aspect_ScrollDelta^ theDelta)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateZoom(*(::Aspect_ScrollDelta*)theDelta->NativeInstance);
    return _result;
}

bool RDC::OCC::AIS_ViewController::UpdateZRotation(double theAngle)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateZRotation(theAngle);
    return _result;
}

bool RDC::OCC::AIS_ViewController::UpdateMouseScroll(RDC::OCC::Aspect_ScrollDelta^ theDelta)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateMouseScroll(*(::Aspect_ScrollDelta*)theDelta->NativeInstance);
    return _result;
}

bool RDC::OCC::AIS_ViewController::UpdateMouseButtons(RDC::OCC::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateMouseButtons(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
    return _result;
}

bool RDC::OCC::AIS_ViewController::UpdateMousePosition(RDC::OCC::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateMousePosition(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
    return _result;
}

bool RDC::OCC::AIS_ViewController::UpdateMouseClick(RDC::OCC::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
    return _result;
}

float RDC::OCC::AIS_ViewController::TouchToleranceScale()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->TouchToleranceScale();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetTouchToleranceScale(float theTolerance)
{
    ((::AIS_ViewController*)_NativeInstance)->SetTouchToleranceScale(theTolerance);
}

void RDC::OCC::AIS_ViewController::AddTouchPoint(long long unsigned int theId, RDC::OCC::Graphic3d_Vec2d^ thePnt, bool theClearBefore)
{
    ((::AIS_ViewController*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, theClearBefore);
}

void RDC::OCC::AIS_ViewController::AddTouchPoint(long long unsigned int theId, RDC::OCC::Graphic3d_Vec2d^ thePnt)
{
    ((::AIS_ViewController*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, false);
}

bool RDC::OCC::AIS_ViewController::RemoveTouchPoint(long long unsigned int theId, bool theClearSelectPnts)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->RemoveTouchPoint(theId, theClearSelectPnts);
    return _result;
}

bool RDC::OCC::AIS_ViewController::RemoveTouchPoint(long long unsigned int theId)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->RemoveTouchPoint(theId, false);
    return _result;
}

void RDC::OCC::AIS_ViewController::UpdateTouchPoint(long long unsigned int theId, RDC::OCC::Graphic3d_Vec2d^ thePnt)
{
    ((::AIS_ViewController*)_NativeInstance)->UpdateTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance);
}

void RDC::OCC::AIS_ViewController::ProcessExpose()
{
    ((::AIS_ViewController*)_NativeInstance)->ProcessExpose();
}

void RDC::OCC::AIS_ViewController::ProcessConfigure(bool theIsResized)
{
    ((::AIS_ViewController*)_NativeInstance)->ProcessConfigure(theIsResized);
}

void RDC::OCC::AIS_ViewController::ProcessInput()
{
    ((::AIS_ViewController*)_NativeInstance)->ProcessInput();
}

void RDC::OCC::AIS_ViewController::ProcessFocus(bool theIsActivated)
{
    ((::AIS_ViewController*)_NativeInstance)->ProcessFocus(theIsActivated);
}

void RDC::OCC::AIS_ViewController::ProcessClose()
{
    ((::AIS_ViewController*)_NativeInstance)->ProcessClose();
}

void RDC::OCC::AIS_ViewController::ResetViewInput()
{
    ((::AIS_ViewController*)_NativeInstance)->ResetViewInput();
}

void RDC::OCC::AIS_ViewController::UpdateViewOrientation(RDC::OCC::V3d_TypeOfOrientation theOrientation, bool theToFitAll)
{
    ((::AIS_ViewController*)_NativeInstance)->UpdateViewOrientation((::V3d_TypeOfOrientation)theOrientation, theToFitAll);
}

void RDC::OCC::AIS_ViewController::FlushViewEvents(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView, bool theToHandle)
{
    ((::AIS_ViewController*)_NativeInstance)->FlushViewEvents(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), theToHandle);
}

void RDC::OCC::AIS_ViewController::FlushViewEvents(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->FlushViewEvents(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), false);
}

void RDC::OCC::AIS_ViewController::HandleViewEvents(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->HandleViewEvents(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::AIS_ViewController::OnSelectionChanged(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->OnSelectionChanged(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::AIS_ViewController::OnObjectDragged(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView, RDC::OCC::AIS_DragAction theAction)
{
    ((::AIS_ViewController*)_NativeInstance)->OnObjectDragged(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), (::AIS_DragAction)theAction);
}

void RDC::OCC::AIS_ViewController::OnSubviewChanged(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theOldView, RDC::OCC::V3d_View^ theNewView)
{
    ((::AIS_ViewController*)_NativeInstance)->OnSubviewChanged(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theOldView->NativeInstance), Handle(::V3d_View)(theNewView->NativeInstance));
}

bool RDC::OCC::AIS_ViewController::PickPoint(RDC::OCC::Pnt% thePnt, RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView, RDC::OCC::Graphic3d_Vec2i^ theCursor, bool theToStickToPickRay)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::AIS_ViewController*)_NativeInstance)->PickPoint(*(gp_Pnt*)pp_thePnt, Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), *(::Graphic3d_Vec2i*)theCursor->NativeInstance, theToStickToPickRay);
    return _result;
}

bool RDC::OCC::AIS_ViewController::PickAxis(RDC::OCC::Pnt% theTopPnt, RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView, RDC::OCC::Ax1 theAxis)
{
    pin_ptr<RDC::OCC::Pnt> pp_theTopPnt = &theTopPnt;
    pin_ptr<RDC::OCC::Ax1> pp_theAxis = &theAxis;
    bool _result = ((::AIS_ViewController*)_NativeInstance)->PickAxis(*(gp_Pnt*)pp_theTopPnt, Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), *(gp_Ax1*)pp_theAxis);
    return _result;
}

RDC::OCC::Pnt RDC::OCC::AIS_ViewController::GravityPoint(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ::gp_Pnt _nativeResult = ((::AIS_ViewController*)_NativeInstance)->GravityPoint(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::AIS_ViewController::FitAllAuto(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->FitAllAuto(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::AIS_ViewController::handleViewOrientationKeys(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleViewOrientationKeys(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

RDC::OCC::AIS_WalkDelta^ RDC::OCC::AIS_ViewController::handleNavigationKeys(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ::AIS_WalkDelta* _result = new ::AIS_WalkDelta();
    *_result = ((::AIS_ViewController*)_NativeInstance)->handleNavigationKeys(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
    return _result==nullptr ? nullptr : gcnew RDC::OCC::AIS_WalkDelta(_result);
}

void RDC::OCC::AIS_ViewController::handleCameraActions(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView, RDC::OCC::AIS_WalkDelta^ theWalk)
{
    ((::AIS_ViewController*)_NativeInstance)->handleCameraActions(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), *(::AIS_WalkDelta*)theWalk->NativeInstance);
}

void RDC::OCC::AIS_ViewController::handleMoveTo(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleMoveTo(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

bool RDC::OCC::AIS_ViewController::toAskNextFrame()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->toAskNextFrame();
    return _result;
}

void RDC::OCC::AIS_ViewController::setAskNextFrame(bool theToDraw)
{
    ((::AIS_ViewController*)_NativeInstance)->setAskNextFrame(theToDraw);
}

void RDC::OCC::AIS_ViewController::setAskNextFrame()
{
    ((::AIS_ViewController*)_NativeInstance)->setAskNextFrame(true);
}

bool RDC::OCC::AIS_ViewController::hasPanningAnchorPoint()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->hasPanningAnchorPoint();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::AIS_ViewController::panningAnchorPoint()
{
    ::gp_Pnt _nativeResult = ((::AIS_ViewController*)_NativeInstance)->panningAnchorPoint();
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::AIS_ViewController::setPanningAnchorPoint(RDC::OCC::Pnt thePnt)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
    ((::AIS_ViewController*)_NativeInstance)->setPanningAnchorPoint(*(gp_Pnt*)pp_thePnt);
}

void RDC::OCC::AIS_ViewController::handlePanning(RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handlePanning(Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::AIS_ViewController::handleZRotate(RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleZRotate(Handle(::V3d_View)(theView->NativeInstance));
}

double RDC::OCC::AIS_ViewController::MinZoomDistance()
{
    double _result = ((::AIS_ViewController*)_NativeInstance)->MinZoomDistance();
    return _result;
}

void RDC::OCC::AIS_ViewController::SetMinZoomDistance(double theDist)
{
    ((::AIS_ViewController*)_NativeInstance)->SetMinZoomDistance(theDist);
}

void RDC::OCC::AIS_ViewController::handleZoom(RDC::OCC::V3d_View^ theView, RDC::OCC::Aspect_ScrollDelta^ theParams, RDC::OCC::Pnt thePnt)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
    ((::AIS_ViewController*)_NativeInstance)->handleZoom(Handle(::V3d_View)(theView->NativeInstance), *(::Aspect_ScrollDelta*)theParams->NativeInstance, (gp_Pnt*)pp_thePnt);
}

void RDC::OCC::AIS_ViewController::handleZFocusScroll(RDC::OCC::V3d_View^ theView, RDC::OCC::Aspect_ScrollDelta^ theParams)
{
    ((::AIS_ViewController*)_NativeInstance)->handleZFocusScroll(Handle(::V3d_View)(theView->NativeInstance), *(::Aspect_ScrollDelta*)theParams->NativeInstance);
}

void RDC::OCC::AIS_ViewController::handleOrbitRotation(RDC::OCC::V3d_View^ theView, RDC::OCC::Pnt thePnt, bool theToLockZUp)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
    ((::AIS_ViewController*)_NativeInstance)->handleOrbitRotation(Handle(::V3d_View)(theView->NativeInstance), *(gp_Pnt*)pp_thePnt, theToLockZUp);
}

void RDC::OCC::AIS_ViewController::handleViewRotation(RDC::OCC::V3d_View^ theView, double theYawExtra, double thePitchExtra, double theRoll, bool theToRestartOnIncrement)
{
    ((::AIS_ViewController*)_NativeInstance)->handleViewRotation(Handle(::V3d_View)(theView->NativeInstance), theYawExtra, thePitchExtra, theRoll, theToRestartOnIncrement);
}

void RDC::OCC::AIS_ViewController::handleViewRedraw(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleViewRedraw(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::AIS_ViewController::handleXRInput(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView, RDC::OCC::AIS_WalkDelta^ theWalk)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRInput(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), *(::AIS_WalkDelta*)theWalk->NativeInstance);
}

void RDC::OCC::AIS_ViewController::handleXRTurnPad(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRTurnPad(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::AIS_ViewController::handleXRTeleport(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRTeleport(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::AIS_ViewController::handleXRPicking(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRPicking(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::AIS_ViewController::handleXRHighlight(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRHighlight(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void RDC::OCC::AIS_ViewController::handleXRPresentations(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRPresentations(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

int RDC::OCC::AIS_ViewController::handleXRMoveTo(RDC::OCC::AIS_InteractiveContext^ theCtx, RDC::OCC::V3d_View^ theView, RDC::OCC::Trsf thePose, bool theToHighlight)
{
    pin_ptr<RDC::OCC::Trsf> pp_thePose = &thePose;
    int _result = ((::AIS_ViewController*)_NativeInstance)->handleXRMoveTo(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), *(gp_Trsf*)pp_thePose, theToHighlight);
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_ViewCubeOwner
//---------------------------------------------------------------------

RDC::OCC::AIS_ViewCubeOwner::AIS_ViewCubeOwner(RDC::OCC::AIS_ViewCube^ theObject, RDC::OCC::V3d_TypeOfOrientation theOrient, int thePriority)
    : RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ViewCubeOwner(Handle(::AIS_ViewCube)(theObject->NativeInstance), (::V3d_TypeOfOrientation)theOrient, thePriority);
}

RDC::OCC::AIS_ViewCubeOwner::AIS_ViewCubeOwner(RDC::OCC::AIS_ViewCube^ theObject, RDC::OCC::V3d_TypeOfOrientation theOrient)
    : RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ViewCubeOwner(Handle(::AIS_ViewCube)(theObject->NativeInstance), (::V3d_TypeOfOrientation)theOrient, 5);
}

bool RDC::OCC::AIS_ViewCubeOwner::IsForcedHilight()
{
    bool _result = ((::AIS_ViewCubeOwner*)_NativeInstance)->IsForcedHilight();
    return _result;
}

RDC::OCC::V3d_TypeOfOrientation RDC::OCC::AIS_ViewCubeOwner::MainOrientation()
{
    ::V3d_TypeOfOrientation _result = ((::AIS_ViewCubeOwner*)_NativeInstance)->MainOrientation();
    return (RDC::OCC::V3d_TypeOfOrientation)_result;
}

bool RDC::OCC::AIS_ViewCubeOwner::HandleMouseClick(RDC::OCC::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
    bool _result = ((::AIS_ViewCubeOwner*)_NativeInstance)->HandleMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
    return _result;
}

RDC::OCC::AIS_ViewCubeOwner^ RDC::OCC::AIS_ViewCubeOwner::CreateDowncasted(::AIS_ViewCubeOwner* instance)
{
    return gcnew RDC::OCC::AIS_ViewCubeOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ViewCube
//---------------------------------------------------------------------

RDC::OCC::AIS_ViewCube::AIS_ViewCube()
    : RDC::OCC::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ViewCube();
}

bool RDC::OCC::AIS_ViewCube::IsBoxSide(RDC::OCC::V3d_TypeOfOrientation theOrient)
{
    bool _result = ::AIS_ViewCube::IsBoxSide((::V3d_TypeOfOrientation)theOrient);
    return _result;
}

bool RDC::OCC::AIS_ViewCube::IsBoxEdge(RDC::OCC::V3d_TypeOfOrientation theOrient)
{
    bool _result = ::AIS_ViewCube::IsBoxEdge((::V3d_TypeOfOrientation)theOrient);
    return _result;
}

bool RDC::OCC::AIS_ViewCube::IsBoxCorner(RDC::OCC::V3d_TypeOfOrientation theOrient)
{
    bool _result = ::AIS_ViewCube::IsBoxCorner((::V3d_TypeOfOrientation)theOrient);
    return _result;
}

RDC::OCC::AIS_AnimationCamera^ RDC::OCC::AIS_ViewCube::ViewAnimation()
{
    Handle(::AIS_AnimationCamera) _result = ((::AIS_ViewCube*)_NativeInstance)->ViewAnimation();
    return _result.IsNull() ? nullptr : RDC::OCC::AIS_AnimationCamera::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_ViewCube::SetViewAnimation(RDC::OCC::AIS_AnimationCamera^ theAnimation)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetViewAnimation(Handle(::AIS_AnimationCamera)(theAnimation->NativeInstance));
}

bool RDC::OCC::AIS_ViewCube::ToAutoStartAnimation()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToAutoStartAnimation();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetAutoStartAnimation(bool theToEnable)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAutoStartAnimation(theToEnable);
}

bool RDC::OCC::AIS_ViewCube::IsFixedAnimationLoop()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->IsFixedAnimationLoop();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetFixedAnimationLoop(bool theToEnable)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetFixedAnimationLoop(theToEnable);
}

void RDC::OCC::AIS_ViewCube::ResetStyles()
{
    ((::AIS_ViewCube*)_NativeInstance)->ResetStyles();
}

double RDC::OCC::AIS_ViewCube::Size()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->Size();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetSize(double theValue, bool theToAdaptAnother)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetSize(theValue, theToAdaptAnother);
}

void RDC::OCC::AIS_ViewCube::SetSize(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetSize(theValue, true);
}

double RDC::OCC::AIS_ViewCube::BoxFacetExtension()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->BoxFacetExtension();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetBoxFacetExtension(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxFacetExtension(theValue);
}

double RDC::OCC::AIS_ViewCube::AxesPadding()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->AxesPadding();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetAxesPadding(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAxesPadding(theValue);
}

double RDC::OCC::AIS_ViewCube::BoxEdgeGap()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->BoxEdgeGap();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetBoxEdgeGap(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxEdgeGap(theValue);
}

double RDC::OCC::AIS_ViewCube::BoxEdgeMinSize()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->BoxEdgeMinSize();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetBoxEdgeMinSize(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxEdgeMinSize(theValue);
}

double RDC::OCC::AIS_ViewCube::BoxCornerMinSize()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->BoxCornerMinSize();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetBoxCornerMinSize(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxCornerMinSize(theValue);
}

double RDC::OCC::AIS_ViewCube::RoundRadius()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->RoundRadius();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetRoundRadius(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetRoundRadius(theValue);
}

double RDC::OCC::AIS_ViewCube::AxesRadius()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->AxesRadius();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetAxesRadius(double theRadius)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAxesRadius(theRadius);
}

double RDC::OCC::AIS_ViewCube::AxesConeRadius()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->AxesConeRadius();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetAxesConeRadius(double theRadius)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAxesConeRadius(theRadius);
}

double RDC::OCC::AIS_ViewCube::AxesSphereRadius()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->AxesSphereRadius();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetAxesSphereRadius(double theRadius)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAxesSphereRadius(theRadius);
}

bool RDC::OCC::AIS_ViewCube::ToDrawAxes()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToDrawAxes();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetDrawAxes(bool theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetDrawAxes(theValue);
}

bool RDC::OCC::AIS_ViewCube::ToDrawEdges()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToDrawEdges();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetDrawEdges(bool theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetDrawEdges(theValue);
}

bool RDC::OCC::AIS_ViewCube::ToDrawVertices()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToDrawVertices();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetDrawVertices(bool theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetDrawVertices(theValue);
}

bool RDC::OCC::AIS_ViewCube::IsYup()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->IsYup();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetYup(bool theIsYup, bool theToUpdateLabels)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetYup(theIsYup, theToUpdateLabels);
}

void RDC::OCC::AIS_ViewCube::SetYup(bool theIsYup)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetYup(theIsYup, true);
}

RDC::OCC::Prs3d_ShadingAspect^ RDC::OCC::AIS_ViewCube::BoxSideStyle()
{
    Handle(::Prs3d_ShadingAspect) _result = ((::AIS_ViewCube*)_NativeInstance)->BoxSideStyle();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_ShadingAspect::CreateDowncasted(_result.get());
}

RDC::OCC::Prs3d_ShadingAspect^ RDC::OCC::AIS_ViewCube::BoxEdgeStyle()
{
    Handle(::Prs3d_ShadingAspect) _result = ((::AIS_ViewCube*)_NativeInstance)->BoxEdgeStyle();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_ShadingAspect::CreateDowncasted(_result.get());
}

RDC::OCC::Prs3d_ShadingAspect^ RDC::OCC::AIS_ViewCube::BoxCornerStyle()
{
    Handle(::Prs3d_ShadingAspect) _result = ((::AIS_ViewCube*)_NativeInstance)->BoxCornerStyle();
    return _result.IsNull() ? nullptr : RDC::OCC::Prs3d_ShadingAspect::CreateDowncasted(_result.get());
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_ViewCube::BoxColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::AIS_ViewCube*)_NativeInstance)->BoxColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_ViewCube::SetBoxColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxColor(*(::Quantity_Color*)theColor->NativeInstance);
}

double RDC::OCC::AIS_ViewCube::BoxTransparency()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->BoxTransparency();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetBoxTransparency(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxTransparency(theValue);
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_ViewCube::InnerColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::AIS_ViewCube*)_NativeInstance)->InnerColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_ViewCube::SetInnerColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetInnerColor(*(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::AIS_ViewCube::BoxSideLabel(RDC::OCC::V3d_TypeOfOrientation theSide)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::AIS_ViewCube*)_NativeInstance)->BoxSideLabel((::V3d_TypeOfOrientation)theSide);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::AIS_ViewCube::SetBoxSideLabel(RDC::OCC::V3d_TypeOfOrientation theSide, RDC::OCC::TCollection_AsciiString^ theLabel)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxSideLabel((::V3d_TypeOfOrientation)theSide, *(::TCollection_AsciiString*)theLabel->NativeInstance);
}

RDC::OCC::Quantity_Color^ RDC::OCC::AIS_ViewCube::TextColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::AIS_ViewCube*)_NativeInstance)->TextColor();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::AIS_ViewCube::SetTextColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetTextColor(*(::Quantity_Color*)theColor->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::AIS_ViewCube::Font()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::AIS_ViewCube*)_NativeInstance)->Font();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::AIS_ViewCube::SetFont(RDC::OCC::TCollection_AsciiString^ theFont)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetFont(*(::TCollection_AsciiString*)theFont->NativeInstance);
}

double RDC::OCC::AIS_ViewCube::FontHeight()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->FontHeight();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetFontHeight(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetFontHeight(theValue);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::AIS_ViewCube::AxisLabel(RDC::OCC::Prs3d_DatumParts theAxis)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::AIS_ViewCube*)_NativeInstance)->AxisLabel((::Prs3d_DatumParts)theAxis);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::AIS_ViewCube::SetAxesLabels(RDC::OCC::TCollection_AsciiString^ theX, RDC::OCC::TCollection_AsciiString^ theY, RDC::OCC::TCollection_AsciiString^ theZ)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAxesLabels(*(::TCollection_AsciiString*)theX->NativeInstance, *(::TCollection_AsciiString*)theY->NativeInstance, *(::TCollection_AsciiString*)theZ->NativeInstance);
}

void RDC::OCC::AIS_ViewCube::SetColor(RDC::OCC::Quantity_Color^ theColor)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::AIS_ViewCube::UnsetColor()
{
    ((::AIS_ViewCube*)_NativeInstance)->UnsetColor();
}

void RDC::OCC::AIS_ViewCube::SetTransparency(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetTransparency(theValue);
}

void RDC::OCC::AIS_ViewCube::UnsetTransparency()
{
    ((::AIS_ViewCube*)_NativeInstance)->UnsetTransparency();
}

void RDC::OCC::AIS_ViewCube::SetMaterial(RDC::OCC::Graphic3d_MaterialAspect^ theMat)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)theMat->NativeInstance);
}

void RDC::OCC::AIS_ViewCube::UnsetMaterial()
{
    ((::AIS_ViewCube*)_NativeInstance)->UnsetMaterial();
}

double RDC::OCC::AIS_ViewCube::Duration()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->Duration();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetDuration(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetDuration(theValue);
}

bool RDC::OCC::AIS_ViewCube::ToResetCameraUp()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToResetCameraUp();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetResetCamera(bool theToReset)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetResetCamera(theToReset);
}

bool RDC::OCC::AIS_ViewCube::ToFitSelected()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToFitSelected();
    return _result;
}

void RDC::OCC::AIS_ViewCube::SetFitSelected(bool theToFitSelected)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetFitSelected(theToFitSelected);
}

bool RDC::OCC::AIS_ViewCube::HasAnimation()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->HasAnimation();
    return _result;
}

void RDC::OCC::AIS_ViewCube::StartAnimation(RDC::OCC::AIS_ViewCubeOwner^ theOwner)
{
    ((::AIS_ViewCube*)_NativeInstance)->StartAnimation(Handle(::AIS_ViewCubeOwner)(theOwner->NativeInstance));
}

bool RDC::OCC::AIS_ViewCube::UpdateAnimation(bool theToUpdate)
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->UpdateAnimation(theToUpdate);
    return _result;
}

void RDC::OCC::AIS_ViewCube::HandleClick(RDC::OCC::AIS_ViewCubeOwner^ theOwner)
{
    ((::AIS_ViewCube*)_NativeInstance)->HandleClick(Handle(::AIS_ViewCubeOwner)(theOwner->NativeInstance));
}

bool RDC::OCC::AIS_ViewCube::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

RDC::OCC::SelectMgr_EntityOwner^ RDC::OCC::AIS_ViewCube::GlobalSelOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_ViewCube*)_NativeInstance)->GlobalSelOwner();
    return _result.IsNull() ? nullptr : RDC::OCC::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void RDC::OCC::AIS_ViewCube::Compute(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::Graphic3d_Structure^ thePrs, int theMode)
{
    ((::AIS_ViewCube*)_NativeInstance)->Compute(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance), theMode);
}

void RDC::OCC::AIS_ViewCube::Compute(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::Graphic3d_Structure^ thePrs)
{
    ((::AIS_ViewCube*)_NativeInstance)->Compute(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance), 0);
}

void RDC::OCC::AIS_ViewCube::ComputeSelection(RDC::OCC::SelectMgr_Selection^ theSelection, int theMode)
{
    ((::AIS_ViewCube*)_NativeInstance)->ComputeSelection(Handle(::SelectMgr_Selection)(theSelection->NativeInstance), theMode);
}

bool RDC::OCC::AIS_ViewCube::IsAutoHilight()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->IsAutoHilight();
    return _result;
}

void RDC::OCC::AIS_ViewCube::ClearSelected()
{
    ((::AIS_ViewCube*)_NativeInstance)->ClearSelected();
}

void RDC::OCC::AIS_ViewCube::HilightOwnerWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePM, RDC::OCC::Prs3d_Drawer^ theStyle, RDC::OCC::SelectMgr_EntityOwner^ theOwner)
{
    ((::AIS_ViewCube*)_NativeInstance)->HilightOwnerWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance));
}

void RDC::OCC::AIS_ViewCube::HilightSelected(RDC::OCC::PrsMgr_PresentationManager^ thePM, RDC::OCC::SelectMgr_SequenceOfOwner^ theSeq)
{
    ((::AIS_ViewCube*)_NativeInstance)->HilightSelected(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void RDC::OCC::AIS_ViewCube::UnsetAttributes()
{
    ((::AIS_ViewCube*)_NativeInstance)->UnsetAttributes();
}

void RDC::OCC::AIS_ViewCube::UnsetHilightAttributes()
{
    ((::AIS_ViewCube*)_NativeInstance)->UnsetHilightAttributes();
}

RDC::OCC::AIS_ViewCube^ RDC::OCC::AIS_ViewCube::CreateDowncasted(::AIS_ViewCube* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    
    return gcnew RDC::OCC::AIS_ViewCube( instance );
}


