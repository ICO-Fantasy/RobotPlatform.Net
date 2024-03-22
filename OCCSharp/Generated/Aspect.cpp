// Generated wrapper code for package Aspect

#include "OcctPCH.h"
#include "Aspect.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TCollection.h"
#include "Quantity.h"
#include "Graphic3d.h"
#include "V3d.h"
#include "WNT.h"
#include "gp.h"
#include "Image.h"
#include "AIS.h"


//---------------------------------------------------------------------
//  Class  Aspect_XRActionMap
//---------------------------------------------------------------------

RDC::OCC::Aspect_XRActionMap::Aspect_XRActionMap()
    : RDC::OCC::BaseClass<::Aspect_XRActionMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRActionMap();
}

RDC::OCC::Aspect_XRActionMap::Aspect_XRActionMap(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::Aspect_XRActionMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRActionMap(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::Aspect_XRActionMap::Aspect_XRActionMap(int theNbBuckets)
    : RDC::OCC::BaseClass<::Aspect_XRActionMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRActionMap(theNbBuckets, 0L);
}

void RDC::OCC::Aspect_XRActionMap::Exchange(RDC::OCC::Aspect_XRActionMap^ theOther)
{
    ((::Aspect_XRActionMap*)_NativeInstance)->Exchange(*(::Aspect_XRActionMap*)theOther->NativeInstance);
}

RDC::OCC::Aspect_XRActionMap^ RDC::OCC::Aspect_XRActionMap::Assign(RDC::OCC::Aspect_XRActionMap^ theOther)
{
    ::Aspect_XRActionMap* _result = new ::Aspect_XRActionMap();
    *_result = ((::Aspect_XRActionMap*)_NativeInstance)->Assign(*(::Aspect_XRActionMap*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_XRActionMap(_result);
}

void RDC::OCC::Aspect_XRActionMap::ReSize(int N)
{
    ((::Aspect_XRActionMap*)_NativeInstance)->ReSize(N);
}

int RDC::OCC::Aspect_XRActionMap::Add(RDC::OCC::TCollection_AsciiString^ theKey1, RDC::OCC::Aspect_XRAction^ theItem)
{
    int _result = ((::Aspect_XRActionMap*)_NativeInstance)->Add(*(::TCollection_AsciiString*)theKey1->NativeInstance, Handle(::Aspect_XRAction)(theItem->NativeInstance));
    return _result;
}

bool RDC::OCC::Aspect_XRActionMap::Contains(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    bool _result = ((::Aspect_XRActionMap*)_NativeInstance)->Contains(*(::TCollection_AsciiString*)theKey1->NativeInstance);
    return _result;
}

void RDC::OCC::Aspect_XRActionMap::Substitute(int theIndex, RDC::OCC::TCollection_AsciiString^ theKey1, RDC::OCC::Aspect_XRAction^ theItem)
{
    ((::Aspect_XRActionMap*)_NativeInstance)->Substitute(theIndex, *(::TCollection_AsciiString*)theKey1->NativeInstance, Handle(::Aspect_XRAction)(theItem->NativeInstance));
}

void RDC::OCC::Aspect_XRActionMap::Swap(int theIndex1, int theIndex2)
{
    ((::Aspect_XRActionMap*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void RDC::OCC::Aspect_XRActionMap::RemoveLast()
{
    ((::Aspect_XRActionMap*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::Aspect_XRActionMap::RemoveFromIndex(int theIndex)
{
    ((::Aspect_XRActionMap*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void RDC::OCC::Aspect_XRActionMap::RemoveKey(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    ((::Aspect_XRActionMap*)_NativeInstance)->RemoveKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Aspect_XRActionMap::FindKey(int theIndex)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Aspect_XRActionMap*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::Aspect_XRAction^ RDC::OCC::Aspect_XRActionMap::FindFromIndex(int theIndex)
{
    Handle(::Aspect_XRAction) _result = ((::Aspect_XRActionMap*)_NativeInstance)->FindFromIndex(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRAction::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_XRAction^ RDC::OCC::Aspect_XRActionMap::ChangeFromIndex(int theIndex)
{
    Handle(::Aspect_XRAction) _result = ((::Aspect_XRActionMap*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRAction::CreateDowncasted(_result.get());
}

int RDC::OCC::Aspect_XRActionMap::FindIndex(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    int _result = ((::Aspect_XRActionMap*)_NativeInstance)->FindIndex(*(::TCollection_AsciiString*)theKey1->NativeInstance);
    return _result;
}

RDC::OCC::Aspect_XRAction^ RDC::OCC::Aspect_XRActionMap::FindFromKey(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    Handle(::Aspect_XRAction) _result = ((::Aspect_XRActionMap*)_NativeInstance)->FindFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRAction::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_XRAction^ RDC::OCC::Aspect_XRActionMap::ChangeFromKey(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    Handle(::Aspect_XRAction) _result = ((::Aspect_XRActionMap*)_NativeInstance)->ChangeFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRAction::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_XRAction^ RDC::OCC::Aspect_XRActionMap::Seek(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Aspect_XRAction^ RDC::OCC::Aspect_XRActionMap::ChangeSeek(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::Aspect_XRActionMap::Clear(bool doReleaseMemory)
{
    ((::Aspect_XRActionMap*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::Aspect_XRActionMap::Clear()
{
    ((::Aspect_XRActionMap*)_NativeInstance)->Clear(false);
}

int RDC::OCC::Aspect_XRActionMap::Size()
{
    int _result = ((::Aspect_XRActionMap*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Aspect_XRActionMap::Iterator
//---------------------------------------------------------------------

RDC::OCC::Aspect_XRActionMap::Iterator::Iterator()
    : RDC::OCC::BaseClass<::Aspect_XRActionMap::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRActionMap::Iterator();
}

bool RDC::OCC::Aspect_XRActionMap::Iterator::More()
{
    bool _result = ((::Aspect_XRActionMap::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::Aspect_XRActionMap::Iterator::Next()
{
    ((::Aspect_XRActionMap::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Aspect_XRAction^ RDC::OCC::Aspect_XRActionMap::Iterator::Value()
{
    Handle(::Aspect_XRAction) _result = ((::Aspect_XRActionMap::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRAction::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_XRAction^ RDC::OCC::Aspect_XRActionMap::Iterator::ChangeValue()
{
    Handle(::Aspect_XRAction) _result = ((::Aspect_XRActionMap::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRAction::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Aspect_XRActionMap::Iterator::Key()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Aspect_XRActionMap::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

bool RDC::OCC::Aspect_XRActionMap::Iterator::IsEqual(RDC::OCC::Aspect_XRActionMap::Iterator^ theOther)
{
    bool _result = ((::Aspect_XRActionMap::Iterator*)_NativeInstance)->IsEqual(*(::Aspect_XRActionMap::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::Aspect_XRActionMap::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::Aspect_XRActionMap::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Aspect_XRActionSetMap
//---------------------------------------------------------------------

RDC::OCC::Aspect_XRActionSetMap::Aspect_XRActionSetMap()
    : RDC::OCC::BaseClass<::Aspect_XRActionSetMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRActionSetMap();
}

RDC::OCC::Aspect_XRActionSetMap::Aspect_XRActionSetMap(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::Aspect_XRActionSetMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRActionSetMap(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::Aspect_XRActionSetMap::Aspect_XRActionSetMap(int theNbBuckets)
    : RDC::OCC::BaseClass<::Aspect_XRActionSetMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRActionSetMap(theNbBuckets, 0L);
}

void RDC::OCC::Aspect_XRActionSetMap::Exchange(RDC::OCC::Aspect_XRActionSetMap^ theOther)
{
    ((::Aspect_XRActionSetMap*)_NativeInstance)->Exchange(*(::Aspect_XRActionSetMap*)theOther->NativeInstance);
}

RDC::OCC::Aspect_XRActionSetMap^ RDC::OCC::Aspect_XRActionSetMap::Assign(RDC::OCC::Aspect_XRActionSetMap^ theOther)
{
    ::Aspect_XRActionSetMap* _result = new ::Aspect_XRActionSetMap();
    *_result = ((::Aspect_XRActionSetMap*)_NativeInstance)->Assign(*(::Aspect_XRActionSetMap*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_XRActionSetMap(_result);
}

void RDC::OCC::Aspect_XRActionSetMap::ReSize(int N)
{
    ((::Aspect_XRActionSetMap*)_NativeInstance)->ReSize(N);
}

int RDC::OCC::Aspect_XRActionSetMap::Add(RDC::OCC::TCollection_AsciiString^ theKey1, RDC::OCC::Aspect_XRActionSet^ theItem)
{
    int _result = ((::Aspect_XRActionSetMap*)_NativeInstance)->Add(*(::TCollection_AsciiString*)theKey1->NativeInstance, Handle(::Aspect_XRActionSet)(theItem->NativeInstance));
    return _result;
}

bool RDC::OCC::Aspect_XRActionSetMap::Contains(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    bool _result = ((::Aspect_XRActionSetMap*)_NativeInstance)->Contains(*(::TCollection_AsciiString*)theKey1->NativeInstance);
    return _result;
}

void RDC::OCC::Aspect_XRActionSetMap::Substitute(int theIndex, RDC::OCC::TCollection_AsciiString^ theKey1, RDC::OCC::Aspect_XRActionSet^ theItem)
{
    ((::Aspect_XRActionSetMap*)_NativeInstance)->Substitute(theIndex, *(::TCollection_AsciiString*)theKey1->NativeInstance, Handle(::Aspect_XRActionSet)(theItem->NativeInstance));
}

void RDC::OCC::Aspect_XRActionSetMap::Swap(int theIndex1, int theIndex2)
{
    ((::Aspect_XRActionSetMap*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void RDC::OCC::Aspect_XRActionSetMap::RemoveLast()
{
    ((::Aspect_XRActionSetMap*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::Aspect_XRActionSetMap::RemoveFromIndex(int theIndex)
{
    ((::Aspect_XRActionSetMap*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void RDC::OCC::Aspect_XRActionSetMap::RemoveKey(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    ((::Aspect_XRActionSetMap*)_NativeInstance)->RemoveKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Aspect_XRActionSetMap::FindKey(int theIndex)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Aspect_XRActionSetMap*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::Aspect_XRActionSet^ RDC::OCC::Aspect_XRActionSetMap::FindFromIndex(int theIndex)
{
    Handle(::Aspect_XRActionSet) _result = ((::Aspect_XRActionSetMap*)_NativeInstance)->FindFromIndex(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRActionSet::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_XRActionSet^ RDC::OCC::Aspect_XRActionSetMap::ChangeFromIndex(int theIndex)
{
    Handle(::Aspect_XRActionSet) _result = ((::Aspect_XRActionSetMap*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRActionSet::CreateDowncasted(_result.get());
}

int RDC::OCC::Aspect_XRActionSetMap::FindIndex(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    int _result = ((::Aspect_XRActionSetMap*)_NativeInstance)->FindIndex(*(::TCollection_AsciiString*)theKey1->NativeInstance);
    return _result;
}

RDC::OCC::Aspect_XRActionSet^ RDC::OCC::Aspect_XRActionSetMap::FindFromKey(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    Handle(::Aspect_XRActionSet) _result = ((::Aspect_XRActionSetMap*)_NativeInstance)->FindFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRActionSet::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_XRActionSet^ RDC::OCC::Aspect_XRActionSetMap::ChangeFromKey(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    Handle(::Aspect_XRActionSet) _result = ((::Aspect_XRActionSetMap*)_NativeInstance)->ChangeFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRActionSet::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_XRActionSet^ RDC::OCC::Aspect_XRActionSetMap::Seek(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::Aspect_XRActionSet^ RDC::OCC::Aspect_XRActionSetMap::ChangeSeek(RDC::OCC::TCollection_AsciiString^ theKey1)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::Aspect_XRActionSetMap::Clear(bool doReleaseMemory)
{
    ((::Aspect_XRActionSetMap*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::Aspect_XRActionSetMap::Clear()
{
    ((::Aspect_XRActionSetMap*)_NativeInstance)->Clear(false);
}

int RDC::OCC::Aspect_XRActionSetMap::Size()
{
    int _result = ((::Aspect_XRActionSetMap*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Aspect_XRActionSetMap::Iterator
//---------------------------------------------------------------------

RDC::OCC::Aspect_XRActionSetMap::Iterator::Iterator()
    : RDC::OCC::BaseClass<::Aspect_XRActionSetMap::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRActionSetMap::Iterator();
}

bool RDC::OCC::Aspect_XRActionSetMap::Iterator::More()
{
    bool _result = ((::Aspect_XRActionSetMap::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::Aspect_XRActionSetMap::Iterator::Next()
{
    ((::Aspect_XRActionSetMap::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Aspect_XRActionSet^ RDC::OCC::Aspect_XRActionSetMap::Iterator::Value()
{
    Handle(::Aspect_XRActionSet) _result = ((::Aspect_XRActionSetMap::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRActionSet::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_XRActionSet^ RDC::OCC::Aspect_XRActionSetMap::Iterator::ChangeValue()
{
    Handle(::Aspect_XRActionSet) _result = ((::Aspect_XRActionSetMap::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRActionSet::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Aspect_XRActionSetMap::Iterator::Key()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Aspect_XRActionSetMap::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

bool RDC::OCC::Aspect_XRActionSetMap::Iterator::IsEqual(RDC::OCC::Aspect_XRActionSetMap::Iterator^ theOther)
{
    bool _result = ((::Aspect_XRActionSetMap::Iterator*)_NativeInstance)->IsEqual(*(::Aspect_XRActionSetMap::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::Aspect_XRActionSetMap::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::Aspect_XRActionSetMap::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Aspect_TrackedDevicePoseArray
//---------------------------------------------------------------------

RDC::OCC::Aspect_TrackedDevicePoseArray::Aspect_TrackedDevicePoseArray()
    : RDC::OCC::BaseClass<::Aspect_TrackedDevicePoseArray>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TrackedDevicePoseArray();
}

RDC::OCC::Aspect_TrackedDevicePoseArray::Aspect_TrackedDevicePoseArray(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::Aspect_TrackedDevicePoseArray>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TrackedDevicePoseArray(theLower, theUpper);
}

RDC::OCC::Aspect_TrackedDevicePoseArray::Aspect_TrackedDevicePoseArray(RDC::OCC::Aspect_TrackedDevicePose^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::Aspect_TrackedDevicePoseArray>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TrackedDevicePoseArray(*(::Aspect_TrackedDevicePose*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

RDC::OCC::Aspect_TrackedDevicePoseArray::Aspect_TrackedDevicePoseArray(RDC::OCC::Aspect_TrackedDevicePose^ theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::Aspect_TrackedDevicePoseArray>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TrackedDevicePoseArray(*(::Aspect_TrackedDevicePose*)theBegin->NativeInstance, theLower, theUpper, true);
}

void RDC::OCC::Aspect_TrackedDevicePoseArray::Init(RDC::OCC::Aspect_TrackedDevicePose^ theValue)
{
    ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Init(*(::Aspect_TrackedDevicePose*)theValue->NativeInstance);
}

int RDC::OCC::Aspect_TrackedDevicePoseArray::Size()
{
    int _result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::Aspect_TrackedDevicePoseArray::Length()
{
    int _result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::Aspect_TrackedDevicePoseArray::IsEmpty()
{
    bool _result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::Aspect_TrackedDevicePoseArray::Lower()
{
    int _result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::Aspect_TrackedDevicePoseArray::Upper()
{
    int _result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::Aspect_TrackedDevicePoseArray^ RDC::OCC::Aspect_TrackedDevicePoseArray::Assign(RDC::OCC::Aspect_TrackedDevicePoseArray^ theOther)
{
    ::Aspect_TrackedDevicePoseArray* _result = new ::Aspect_TrackedDevicePoseArray();
    *_result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Assign(*(::Aspect_TrackedDevicePoseArray*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TrackedDevicePoseArray(_result);
}

RDC::OCC::Aspect_TrackedDevicePoseArray^ RDC::OCC::Aspect_TrackedDevicePoseArray::Move(RDC::OCC::Aspect_TrackedDevicePoseArray^ theOther)
{
    ::Aspect_TrackedDevicePoseArray* _result = new ::Aspect_TrackedDevicePoseArray();
    *_result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Move(*(::Aspect_TrackedDevicePoseArray*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TrackedDevicePoseArray(_result);
}

RDC::OCC::Aspect_TrackedDevicePose^ RDC::OCC::Aspect_TrackedDevicePoseArray::First()
{
    ::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
    *_result = (::Aspect_TrackedDevicePose)((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TrackedDevicePose(_result);
}

RDC::OCC::Aspect_TrackedDevicePose^ RDC::OCC::Aspect_TrackedDevicePoseArray::ChangeFirst()
{
    ::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
    *_result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TrackedDevicePose(_result);
}

RDC::OCC::Aspect_TrackedDevicePose^ RDC::OCC::Aspect_TrackedDevicePoseArray::Last()
{
    ::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
    *_result = (::Aspect_TrackedDevicePose)((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TrackedDevicePose(_result);
}

RDC::OCC::Aspect_TrackedDevicePose^ RDC::OCC::Aspect_TrackedDevicePoseArray::ChangeLast()
{
    ::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
    *_result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TrackedDevicePose(_result);
}

RDC::OCC::Aspect_TrackedDevicePose^ RDC::OCC::Aspect_TrackedDevicePoseArray::Value(int theIndex)
{
    ::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
    *_result = (::Aspect_TrackedDevicePose)((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TrackedDevicePose(_result);
}

RDC::OCC::Aspect_TrackedDevicePose^ RDC::OCC::Aspect_TrackedDevicePoseArray::ChangeValue(int theIndex)
{
    ::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
    *_result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TrackedDevicePose(_result);
}

void RDC::OCC::Aspect_TrackedDevicePoseArray::SetValue(int theIndex, RDC::OCC::Aspect_TrackedDevicePose^ theItem)
{
    ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->SetValue(theIndex, *(::Aspect_TrackedDevicePose*)theItem->NativeInstance);
}

void RDC::OCC::Aspect_TrackedDevicePoseArray::UpdateLowerBound(int theLower)
{
    ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::Aspect_TrackedDevicePoseArray::UpdateUpperBound(int theUpper)
{
    ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::Aspect_TrackedDevicePoseArray::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::Aspect_TrackedDevicePoseArray::IsDeletable()
{
    bool _result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::Aspect_TrackedDevicePose^>^ RDC::OCC::Aspect_TrackedDevicePoseArray::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Aspect_TrackedDevicePose^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Aspect_TrackedDevicePoseArray::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Aspect_TrackedDevicePose^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Aspect_TrackedDevicePoseArray::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Aspect_SequenceOfColor
//---------------------------------------------------------------------

RDC::OCC::Aspect_SequenceOfColor::Aspect_SequenceOfColor()
    : RDC::OCC::BaseClass<::Aspect_SequenceOfColor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_SequenceOfColor();
}

RDC::OCC::Aspect_SequenceOfColor::Aspect_SequenceOfColor(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::Aspect_SequenceOfColor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_SequenceOfColor(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::Aspect_SequenceOfColor::Size()
{
    int _result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::Aspect_SequenceOfColor::Length()
{
    int _result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::Aspect_SequenceOfColor::Lower()
{
    int _result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::Aspect_SequenceOfColor::Upper()
{
    int _result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::Aspect_SequenceOfColor::IsEmpty()
{
    bool _result = ((::Aspect_SequenceOfColor*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::Aspect_SequenceOfColor::Reverse()
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Reverse();
}

void RDC::OCC::Aspect_SequenceOfColor::Exchange(int I, int J)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::Aspect_SequenceOfColor::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::Aspect_SequenceOfColor::Clear()
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Clear(0L);
}

RDC::OCC::Aspect_SequenceOfColor^ RDC::OCC::Aspect_SequenceOfColor::Assign(RDC::OCC::Aspect_SequenceOfColor^ theOther)
{
    ::Aspect_SequenceOfColor* _result = new ::Aspect_SequenceOfColor();
    *_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Assign(*(::Aspect_SequenceOfColor*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_SequenceOfColor(_result);
}

void RDC::OCC::Aspect_SequenceOfColor::Remove(RDC::OCC::Aspect_SequenceOfColor::Iterator^ thePosition)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Remove(*(::Aspect_SequenceOfColor::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::Aspect_SequenceOfColor::Append(RDC::OCC::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Append(*(::Quantity_Color*)theItem->NativeInstance);
}

void RDC::OCC::Aspect_SequenceOfColor::Prepend(RDC::OCC::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Prepend(*(::Quantity_Color*)theItem->NativeInstance);
}

void RDC::OCC::Aspect_SequenceOfColor::InsertBefore(int theIndex, RDC::OCC::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertBefore(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void RDC::OCC::Aspect_SequenceOfColor::InsertAfter(RDC::OCC::Aspect_SequenceOfColor::Iterator^ thePosition, RDC::OCC::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->InsertAfter(*(::Aspect_SequenceOfColor::Iterator*)thePosition->NativeInstance, *(::Quantity_Color*)theItem->NativeInstance);
}

void RDC::OCC::Aspect_SequenceOfColor::Split(int theIndex, RDC::OCC::Aspect_SequenceOfColor^ theSeq)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->Split(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Aspect_SequenceOfColor::First()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Aspect_SequenceOfColor::ChangeFirst()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Aspect_SequenceOfColor::Last()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Aspect_SequenceOfColor::ChangeLast()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Aspect_SequenceOfColor::Value(int theIndex)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Aspect_SequenceOfColor::ChangeValue(int theIndex)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::Aspect_SequenceOfColor::SetValue(int theIndex, RDC::OCC::Quantity_Color^ theItem)
{
    ((::Aspect_SequenceOfColor*)_NativeInstance)->SetValue(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Quantity_Color^>^ RDC::OCC::Aspect_SequenceOfColor::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::Quantity_Color^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Aspect_SequenceOfColor::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::Quantity_Color^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Aspect_SequenceOfColor::Iterator
//---------------------------------------------------------------------

RDC::OCC::Aspect_SequenceOfColor::Iterator::Iterator()
    : RDC::OCC::BaseClass<::Aspect_SequenceOfColor::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_SequenceOfColor::Iterator();
}

bool RDC::OCC::Aspect_SequenceOfColor::Iterator::More()
{
    bool _result = ((::Aspect_SequenceOfColor::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::Aspect_SequenceOfColor::Iterator::Next()
{
    ((::Aspect_SequenceOfColor::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Quantity_Color^ RDC::OCC::Aspect_SequenceOfColor::Iterator::Value()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Aspect_SequenceOfColor::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Aspect_SequenceOfColor::Iterator::ChangeValue()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_SequenceOfColor::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

bool RDC::OCC::Aspect_SequenceOfColor::Iterator::IsEqual(RDC::OCC::Aspect_SequenceOfColor::Iterator^ theOther)
{
    bool _result = ((::Aspect_SequenceOfColor::Iterator*)_NativeInstance)->IsEqual(*(::Aspect_SequenceOfColor::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::Aspect_SequenceOfColor::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::Aspect_SequenceOfColor::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Aspect_TouchMap
//---------------------------------------------------------------------

RDC::OCC::Aspect_TouchMap::Aspect_TouchMap()
    : RDC::OCC::BaseClass<::Aspect_TouchMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TouchMap();
}

RDC::OCC::Aspect_TouchMap::Aspect_TouchMap(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::Aspect_TouchMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TouchMap(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::Aspect_TouchMap::Aspect_TouchMap(int theNbBuckets)
    : RDC::OCC::BaseClass<::Aspect_TouchMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TouchMap(theNbBuckets, 0L);
}

void RDC::OCC::Aspect_TouchMap::Exchange(RDC::OCC::Aspect_TouchMap^ theOther)
{
    ((::Aspect_TouchMap*)_NativeInstance)->Exchange(*(::Aspect_TouchMap*)theOther->NativeInstance);
}

RDC::OCC::Aspect_TouchMap^ RDC::OCC::Aspect_TouchMap::Assign(RDC::OCC::Aspect_TouchMap^ theOther)
{
    ::Aspect_TouchMap* _result = new ::Aspect_TouchMap();
    *_result = ((::Aspect_TouchMap*)_NativeInstance)->Assign(*(::Aspect_TouchMap*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TouchMap(_result);
}

void RDC::OCC::Aspect_TouchMap::ReSize(int N)
{
    ((::Aspect_TouchMap*)_NativeInstance)->ReSize(N);
}

int RDC::OCC::Aspect_TouchMap::Add(long long unsigned int theKey1, RDC::OCC::Aspect_Touch^ theItem)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    int _result = ((::Aspect_TouchMap*)_NativeInstance)->Add(*(long long unsigned int*)pp_theKey1, *(::Aspect_Touch*)theItem->NativeInstance);
    return _result;
}

bool RDC::OCC::Aspect_TouchMap::Contains(long long unsigned int theKey1)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    bool _result = ((::Aspect_TouchMap*)_NativeInstance)->Contains(*(long long unsigned int*)pp_theKey1);
    return _result;
}

void RDC::OCC::Aspect_TouchMap::Substitute(int theIndex, long long unsigned int theKey1, RDC::OCC::Aspect_Touch^ theItem)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    ((::Aspect_TouchMap*)_NativeInstance)->Substitute(theIndex, *(long long unsigned int*)pp_theKey1, *(::Aspect_Touch*)theItem->NativeInstance);
}

void RDC::OCC::Aspect_TouchMap::Swap(int theIndex1, int theIndex2)
{
    ((::Aspect_TouchMap*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void RDC::OCC::Aspect_TouchMap::RemoveLast()
{
    ((::Aspect_TouchMap*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::Aspect_TouchMap::RemoveFromIndex(int theIndex)
{
    ((::Aspect_TouchMap*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void RDC::OCC::Aspect_TouchMap::RemoveKey(long long unsigned int theKey1)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    ((::Aspect_TouchMap*)_NativeInstance)->RemoveKey(*(long long unsigned int*)pp_theKey1);
}

long long unsigned int RDC::OCC::Aspect_TouchMap::FindKey(int theIndex)
{
    long long unsigned int _result = ((::Aspect_TouchMap*)_NativeInstance)->FindKey(theIndex);
    return _result;
}

RDC::OCC::Aspect_Touch^ RDC::OCC::Aspect_TouchMap::FindFromIndex(int theIndex)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    *_result = (::Aspect_Touch)((::Aspect_TouchMap*)_NativeInstance)->FindFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_Touch(_result);
}

RDC::OCC::Aspect_Touch^ RDC::OCC::Aspect_TouchMap::ChangeFromIndex(int theIndex)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    *_result = ((::Aspect_TouchMap*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_Touch(_result);
}

int RDC::OCC::Aspect_TouchMap::FindIndex(long long unsigned int theKey1)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    int _result = ((::Aspect_TouchMap*)_NativeInstance)->FindIndex(*(long long unsigned int*)pp_theKey1);
    return _result;
}

RDC::OCC::Aspect_Touch^ RDC::OCC::Aspect_TouchMap::FindFromKey(long long unsigned int theKey1)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    *_result = (::Aspect_Touch)((::Aspect_TouchMap*)_NativeInstance)->FindFromKey(*(long long unsigned int*)pp_theKey1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_Touch(_result);
}

RDC::OCC::Aspect_Touch^ RDC::OCC::Aspect_TouchMap::ChangeFromKey(long long unsigned int theKey1)
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    *_result = ((::Aspect_TouchMap*)_NativeInstance)->ChangeFromKey(*(long long unsigned int*)pp_theKey1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_Touch(_result);
}

RDC::OCC::Aspect_Touch^ RDC::OCC::Aspect_TouchMap::Seek(long long unsigned int theKey1)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    const ::Aspect_Touch* _result = ((::Aspect_TouchMap*)_NativeInstance)->Seek(*(long long unsigned int*)pp_theKey1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_Touch((::Aspect_Touch*)_result);
}

RDC::OCC::Aspect_Touch^ RDC::OCC::Aspect_TouchMap::ChangeSeek(long long unsigned int theKey1)
{
    pin_ptr<long long unsigned int> pp_theKey1 = &theKey1;
    ::Aspect_Touch* _result = ((::Aspect_TouchMap*)_NativeInstance)->ChangeSeek(*(long long unsigned int*)pp_theKey1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_Touch(_result);
}

void RDC::OCC::Aspect_TouchMap::Clear(bool doReleaseMemory)
{
    ((::Aspect_TouchMap*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::Aspect_TouchMap::Clear()
{
    ((::Aspect_TouchMap*)_NativeInstance)->Clear(false);
}

int RDC::OCC::Aspect_TouchMap::Size()
{
    int _result = ((::Aspect_TouchMap*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Aspect_TouchMap::Iterator
//---------------------------------------------------------------------

RDC::OCC::Aspect_TouchMap::Iterator::Iterator()
    : RDC::OCC::BaseClass<::Aspect_TouchMap::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TouchMap::Iterator();
}

bool RDC::OCC::Aspect_TouchMap::Iterator::More()
{
    bool _result = ((::Aspect_TouchMap::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::Aspect_TouchMap::Iterator::Next()
{
    ((::Aspect_TouchMap::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Aspect_Touch^ RDC::OCC::Aspect_TouchMap::Iterator::Value()
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    *_result = (::Aspect_Touch)((::Aspect_TouchMap::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_Touch(_result);
}

RDC::OCC::Aspect_Touch^ RDC::OCC::Aspect_TouchMap::Iterator::ChangeValue()
{
    ::Aspect_Touch* _result = new ::Aspect_Touch();
    *_result = ((::Aspect_TouchMap::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_Touch(_result);
}

bool RDC::OCC::Aspect_TouchMap::Iterator::IsEqual(RDC::OCC::Aspect_TouchMap::Iterator^ theOther)
{
    bool _result = ((::Aspect_TouchMap::Iterator*)_NativeInstance)->IsEqual(*(::Aspect_TouchMap::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::Aspect_TouchMap::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::Aspect_TouchMap::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Aspect_XRAnalogActionData
//---------------------------------------------------------------------

RDC::OCC::Aspect_XRAnalogActionData::Aspect_XRAnalogActionData()
    : RDC::OCC::BaseClass<::Aspect_XRAnalogActionData>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRAnalogActionData();
}

bool RDC::OCC::Aspect_XRAnalogActionData::IsChanged()
{
    bool _result = ((::Aspect_XRAnalogActionData*)_NativeInstance)->IsChanged();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Aspect_XRDigitalActionData
//---------------------------------------------------------------------

RDC::OCC::Aspect_XRDigitalActionData::Aspect_XRDigitalActionData()
    : RDC::OCC::BaseClass<::Aspect_XRDigitalActionData>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRDigitalActionData();
}



//---------------------------------------------------------------------
//  Class  Aspect_XRHapticActionData
//---------------------------------------------------------------------

RDC::OCC::Aspect_XRHapticActionData::Aspect_XRHapticActionData()
    : RDC::OCC::BaseClass<::Aspect_XRHapticActionData>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRHapticActionData();
}

bool RDC::OCC::Aspect_XRHapticActionData::IsValid()
{
    bool _result = ((::Aspect_XRHapticActionData*)_NativeInstance)->IsValid();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Aspect_TrackedDevicePose
//---------------------------------------------------------------------

RDC::OCC::Aspect_TrackedDevicePose::Aspect_TrackedDevicePose()
    : RDC::OCC::BaseClass<::Aspect_TrackedDevicePose>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_TrackedDevicePose();
}



//---------------------------------------------------------------------
//  Class  Aspect_XRPoseActionData
//---------------------------------------------------------------------

RDC::OCC::Aspect_XRPoseActionData::Aspect_XRPoseActionData()
    : RDC::OCC::BaseClass<::Aspect_XRPoseActionData>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_XRPoseActionData();
}



//---------------------------------------------------------------------
//  Class  Aspect_ScrollDelta
//---------------------------------------------------------------------

RDC::OCC::Aspect_ScrollDelta::Aspect_ScrollDelta()
    : RDC::OCC::BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_ScrollDelta();
}

RDC::OCC::Aspect_ScrollDelta::Aspect_ScrollDelta(RDC::OCC::Graphic3d_Vec2i^ thePnt, double theValue, unsigned int theFlags)
    : RDC::OCC::BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_ScrollDelta(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, theValue, theFlags);
}

RDC::OCC::Aspect_ScrollDelta::Aspect_ScrollDelta(RDC::OCC::Graphic3d_Vec2i^ thePnt, double theValue)
    : RDC::OCC::BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_ScrollDelta(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, theValue, Aspect_VKeyFlags_NONE);
}

RDC::OCC::Aspect_ScrollDelta::Aspect_ScrollDelta(double theValue, unsigned int theFlags)
    : RDC::OCC::BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_ScrollDelta(theValue, theFlags);
}

RDC::OCC::Aspect_ScrollDelta::Aspect_ScrollDelta(double theValue)
    : RDC::OCC::BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_ScrollDelta(theValue, Aspect_VKeyFlags_NONE);
}

bool RDC::OCC::Aspect_ScrollDelta::HasPoint()
{
    bool _result = ((::Aspect_ScrollDelta*)_NativeInstance)->HasPoint();
    return _result;
}

void RDC::OCC::Aspect_ScrollDelta::ResetPoint()
{
    ((::Aspect_ScrollDelta*)_NativeInstance)->ResetPoint();
}



//---------------------------------------------------------------------
//  Class  Aspect_AspectFillAreaDefinitionError
//---------------------------------------------------------------------

RDC::OCC::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError()
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_AspectFillAreaDefinitionError();
}

RDC::OCC::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError(System::String^ theMessage)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Aspect_AspectFillAreaDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Aspect_AspectFillAreaDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Aspect_AspectFillAreaDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Aspect_AspectFillAreaDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Aspect_AspectFillAreaDefinitionError::Raise()
{
    ::Aspect_AspectFillAreaDefinitionError::Raise("");
}

RDC::OCC::Aspect_AspectFillAreaDefinitionError^ RDC::OCC::Aspect_AspectFillAreaDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Aspect_AspectFillAreaDefinitionError) _result = ::Aspect_AspectFillAreaDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_AspectFillAreaDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_AspectFillAreaDefinitionError^ RDC::OCC::Aspect_AspectFillAreaDefinitionError::NewInstance()
{
    Handle(::Aspect_AspectFillAreaDefinitionError) _result = ::Aspect_AspectFillAreaDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_AspectFillAreaDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_AspectFillAreaDefinitionError^ RDC::OCC::Aspect_AspectFillAreaDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Aspect_AspectFillAreaDefinitionError) _result = ::Aspect_AspectFillAreaDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_AspectFillAreaDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_AspectFillAreaDefinitionError^ RDC::OCC::Aspect_AspectFillAreaDefinitionError::CreateDowncasted(::Aspect_AspectFillAreaDefinitionError* instance)
{
    return gcnew RDC::OCC::Aspect_AspectFillAreaDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_AspectLineDefinitionError
//---------------------------------------------------------------------

RDC::OCC::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError()
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_AspectLineDefinitionError();
}

RDC::OCC::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError(System::String^ theMessage)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Aspect_AspectLineDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Aspect_AspectLineDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Aspect_AspectLineDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Aspect_AspectLineDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Aspect_AspectLineDefinitionError::Raise()
{
    ::Aspect_AspectLineDefinitionError::Raise("");
}

RDC::OCC::Aspect_AspectLineDefinitionError^ RDC::OCC::Aspect_AspectLineDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Aspect_AspectLineDefinitionError) _result = ::Aspect_AspectLineDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_AspectLineDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_AspectLineDefinitionError^ RDC::OCC::Aspect_AspectLineDefinitionError::NewInstance()
{
    Handle(::Aspect_AspectLineDefinitionError) _result = ::Aspect_AspectLineDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_AspectLineDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_AspectLineDefinitionError^ RDC::OCC::Aspect_AspectLineDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Aspect_AspectLineDefinitionError) _result = ::Aspect_AspectLineDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_AspectLineDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_AspectLineDefinitionError^ RDC::OCC::Aspect_AspectLineDefinitionError::CreateDowncasted(::Aspect_AspectLineDefinitionError* instance)
{
    return gcnew RDC::OCC::Aspect_AspectLineDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_AspectMarkerDefinitionError
//---------------------------------------------------------------------

RDC::OCC::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError()
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_AspectMarkerDefinitionError();
}

RDC::OCC::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError(System::String^ theMessage)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Aspect_AspectMarkerDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Aspect_AspectMarkerDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Aspect_AspectMarkerDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Aspect_AspectMarkerDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Aspect_AspectMarkerDefinitionError::Raise()
{
    ::Aspect_AspectMarkerDefinitionError::Raise("");
}

RDC::OCC::Aspect_AspectMarkerDefinitionError^ RDC::OCC::Aspect_AspectMarkerDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Aspect_AspectMarkerDefinitionError) _result = ::Aspect_AspectMarkerDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_AspectMarkerDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_AspectMarkerDefinitionError^ RDC::OCC::Aspect_AspectMarkerDefinitionError::NewInstance()
{
    Handle(::Aspect_AspectMarkerDefinitionError) _result = ::Aspect_AspectMarkerDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_AspectMarkerDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_AspectMarkerDefinitionError^ RDC::OCC::Aspect_AspectMarkerDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Aspect_AspectMarkerDefinitionError) _result = ::Aspect_AspectMarkerDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_AspectMarkerDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_AspectMarkerDefinitionError^ RDC::OCC::Aspect_AspectMarkerDefinitionError::CreateDowncasted(::Aspect_AspectMarkerDefinitionError* instance)
{
    return gcnew RDC::OCC::Aspect_AspectMarkerDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_Background
//---------------------------------------------------------------------

RDC::OCC::Aspect_Background::Aspect_Background()
    : RDC::OCC::BaseClass<::Aspect_Background>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_Background();
}

RDC::OCC::Aspect_Background::Aspect_Background(RDC::OCC::Quantity_Color^ AColor)
    : RDC::OCC::BaseClass<::Aspect_Background>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_Background(*(::Quantity_Color*)AColor->NativeInstance);
}

void RDC::OCC::Aspect_Background::SetColor(RDC::OCC::Quantity_Color^ AColor)
{
    ((::Aspect_Background*)_NativeInstance)->SetColor(*(::Quantity_Color*)AColor->NativeInstance);
}

RDC::OCC::Quantity_Color^ RDC::OCC::Aspect_Background::Color()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Aspect_Background*)_NativeInstance)->Color();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Quantity_Color(_result);
}

void RDC::OCC::Aspect_Background::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Background*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Aspect_Background::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Background*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Aspect_Grid
//---------------------------------------------------------------------

void RDC::OCC::Aspect_Grid::SetXOrigin(double anOrigin)
{
    ((::Aspect_Grid*)_NativeInstance)->SetXOrigin(anOrigin);
}

void RDC::OCC::Aspect_Grid::SetYOrigin(double anOrigin)
{
    ((::Aspect_Grid*)_NativeInstance)->SetYOrigin(anOrigin);
}

void RDC::OCC::Aspect_Grid::SetRotationAngle(double anAngle)
{
    ((::Aspect_Grid*)_NativeInstance)->SetRotationAngle(anAngle);
}

void RDC::OCC::Aspect_Grid::Rotate(double anAngle)
{
    ((::Aspect_Grid*)_NativeInstance)->Rotate(anAngle);
}

void RDC::OCC::Aspect_Grid::Translate(double aDx, double aDy)
{
    ((::Aspect_Grid*)_NativeInstance)->Translate(aDx, aDy);
}

void RDC::OCC::Aspect_Grid::SetColors(RDC::OCC::Quantity_Color^ aColor, RDC::OCC::Quantity_Color^ aTenthColor)
{
    ((::Aspect_Grid*)_NativeInstance)->SetColors(*(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void RDC::OCC::Aspect_Grid::Hit(double X, double Y, double% gridX, double% gridY)
{
    pin_ptr<double> pp_gridX = &gridX;
    pin_ptr<double> pp_gridY = &gridY;
    ((::Aspect_Grid*)_NativeInstance)->Hit(X, Y, *(double*)pp_gridX, *(double*)pp_gridY);
}

void RDC::OCC::Aspect_Grid::Compute(double X, double Y, double% gridX, double% gridY)
{
    pin_ptr<double> pp_gridX = &gridX;
    pin_ptr<double> pp_gridY = &gridY;
    ((::Aspect_Grid*)_NativeInstance)->Compute(X, Y, *(double*)pp_gridX, *(double*)pp_gridY);
}

void RDC::OCC::Aspect_Grid::Activate()
{
    ((::Aspect_Grid*)_NativeInstance)->Activate();
}

void RDC::OCC::Aspect_Grid::Deactivate()
{
    ((::Aspect_Grid*)_NativeInstance)->Deactivate();
}

double RDC::OCC::Aspect_Grid::XOrigin()
{
    double _result = ((::Aspect_Grid*)_NativeInstance)->XOrigin();
    return _result;
}

double RDC::OCC::Aspect_Grid::YOrigin()
{
    double _result = ((::Aspect_Grid*)_NativeInstance)->YOrigin();
    return _result;
}

double RDC::OCC::Aspect_Grid::RotationAngle()
{
    double _result = ((::Aspect_Grid*)_NativeInstance)->RotationAngle();
    return _result;
}

bool RDC::OCC::Aspect_Grid::IsActive()
{
    bool _result = ((::Aspect_Grid*)_NativeInstance)->IsActive();
    return _result;
}

void RDC::OCC::Aspect_Grid::Colors(RDC::OCC::Quantity_Color^ aColor, RDC::OCC::Quantity_Color^ aTenthColor)
{
    ((::Aspect_Grid*)_NativeInstance)->Colors(*(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void RDC::OCC::Aspect_Grid::SetDrawMode(RDC::OCC::Aspect_GridDrawMode aDrawMode)
{
    ((::Aspect_Grid*)_NativeInstance)->SetDrawMode((::Aspect_GridDrawMode)aDrawMode);
}

RDC::OCC::Aspect_GridDrawMode RDC::OCC::Aspect_Grid::DrawMode()
{
    ::Aspect_GridDrawMode _result = ((::Aspect_Grid*)_NativeInstance)->DrawMode();
    return (RDC::OCC::Aspect_GridDrawMode)_result;
}

void RDC::OCC::Aspect_Grid::Display()
{
    ((::Aspect_Grid*)_NativeInstance)->Display();
}

void RDC::OCC::Aspect_Grid::Erase()
{
    ((::Aspect_Grid*)_NativeInstance)->Erase();
}

bool RDC::OCC::Aspect_Grid::IsDisplayed()
{
    bool _result = ((::Aspect_Grid*)_NativeInstance)->IsDisplayed();
    return _result;
}

void RDC::OCC::Aspect_Grid::Init()
{
    ((::Aspect_Grid*)_NativeInstance)->Init();
}

void RDC::OCC::Aspect_Grid::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Grid*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Aspect_Grid::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Grid*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Aspect_Grid^ RDC::OCC::Aspect_Grid::CreateDowncasted(::Aspect_Grid* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Aspect_CircularGrid)))
        return RDC::OCC::Aspect_CircularGrid::CreateDowncasted((::Aspect_CircularGrid*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Aspect_RectangularGrid)))
        return RDC::OCC::Aspect_RectangularGrid::CreateDowncasted((::Aspect_RectangularGrid*)instance);
    
    return gcnew RDC::OCC::Aspect_Grid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_CircularGrid
//---------------------------------------------------------------------

RDC::OCC::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin, double aRotationAngle)
    : RDC::OCC::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin)
    : RDC::OCC::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin)
    : RDC::OCC::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber)
    : RDC::OCC::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Aspect_CircularGrid::SetRadiusStep(double aStep)
{
    ((::Aspect_CircularGrid*)_NativeInstance)->SetRadiusStep(aStep);
}

void RDC::OCC::Aspect_CircularGrid::SetDivisionNumber(int aNumber)
{
    ((::Aspect_CircularGrid*)_NativeInstance)->SetDivisionNumber(aNumber);
}

void RDC::OCC::Aspect_CircularGrid::SetGridValues(double XOrigin, double YOrigin, double RadiusStep, int DivisionNumber, double RotationAngle)
{
    ((::Aspect_CircularGrid*)_NativeInstance)->SetGridValues(XOrigin, YOrigin, RadiusStep, DivisionNumber, RotationAngle);
}

void RDC::OCC::Aspect_CircularGrid::Compute(double X, double Y, double% gridX, double% gridY)
{
    pin_ptr<double> pp_gridX = &gridX;
    pin_ptr<double> pp_gridY = &gridY;
    ((::Aspect_CircularGrid*)_NativeInstance)->Compute(X, Y, *(double*)pp_gridX, *(double*)pp_gridY);
}

double RDC::OCC::Aspect_CircularGrid::RadiusStep()
{
    double _result = ((::Aspect_CircularGrid*)_NativeInstance)->RadiusStep();
    return _result;
}

int RDC::OCC::Aspect_CircularGrid::DivisionNumber()
{
    int _result = ((::Aspect_CircularGrid*)_NativeInstance)->DivisionNumber();
    return _result;
}

void RDC::OCC::Aspect_CircularGrid::Init()
{
    ((::Aspect_CircularGrid*)_NativeInstance)->Init();
}

void RDC::OCC::Aspect_CircularGrid::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_CircularGrid*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Aspect_CircularGrid::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_CircularGrid*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Aspect_CircularGrid^ RDC::OCC::Aspect_CircularGrid::CreateDowncasted(::Aspect_CircularGrid* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::V3d_CircularGrid)))
        return RDC::OCC::V3d_CircularGrid::CreateDowncasted((::V3d_CircularGrid*)instance);
    
    return gcnew RDC::OCC::Aspect_CircularGrid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_DisplayConnectionDefinitionError
//---------------------------------------------------------------------

RDC::OCC::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError()
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_DisplayConnectionDefinitionError();
}

RDC::OCC::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError(System::String^ theMessage)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Aspect_DisplayConnectionDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Aspect_DisplayConnectionDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Aspect_DisplayConnectionDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Aspect_DisplayConnectionDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Aspect_DisplayConnectionDefinitionError::Raise()
{
    ::Aspect_DisplayConnectionDefinitionError::Raise("");
}

RDC::OCC::Aspect_DisplayConnectionDefinitionError^ RDC::OCC::Aspect_DisplayConnectionDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Aspect_DisplayConnectionDefinitionError) _result = ::Aspect_DisplayConnectionDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_DisplayConnectionDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_DisplayConnectionDefinitionError^ RDC::OCC::Aspect_DisplayConnectionDefinitionError::NewInstance()
{
    Handle(::Aspect_DisplayConnectionDefinitionError) _result = ::Aspect_DisplayConnectionDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_DisplayConnectionDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_DisplayConnectionDefinitionError^ RDC::OCC::Aspect_DisplayConnectionDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Aspect_DisplayConnectionDefinitionError) _result = ::Aspect_DisplayConnectionDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_DisplayConnectionDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_DisplayConnectionDefinitionError^ RDC::OCC::Aspect_DisplayConnectionDefinitionError::CreateDowncasted(::Aspect_DisplayConnectionDefinitionError* instance)
{
    return gcnew RDC::OCC::Aspect_DisplayConnectionDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_GenId
//---------------------------------------------------------------------

RDC::OCC::Aspect_GenId::Aspect_GenId()
    : RDC::OCC::BaseClass<::Aspect_GenId>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GenId();
}

RDC::OCC::Aspect_GenId::Aspect_GenId(int theLow, int theUpper)
    : RDC::OCC::BaseClass<::Aspect_GenId>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GenId(theLow, theUpper);
}

void RDC::OCC::Aspect_GenId::Free()
{
    ((::Aspect_GenId*)_NativeInstance)->Free();
}

void RDC::OCC::Aspect_GenId::Free(int theId)
{
    ((::Aspect_GenId*)_NativeInstance)->Free(theId);
}

bool RDC::OCC::Aspect_GenId::HasFree()
{
    bool _result = ((::Aspect_GenId*)_NativeInstance)->HasFree();
    return _result;
}

int RDC::OCC::Aspect_GenId::Available()
{
    int _result = ((::Aspect_GenId*)_NativeInstance)->Available();
    return _result;
}

int RDC::OCC::Aspect_GenId::Lower()
{
    int _result = ((::Aspect_GenId*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::Aspect_GenId::Next()
{
    int _result = ((::Aspect_GenId*)_NativeInstance)->Next();
    return _result;
}

bool RDC::OCC::Aspect_GenId::Next(int% theId)
{
    pin_ptr<int> pp_theId = &theId;
    bool _result = ((::Aspect_GenId*)_NativeInstance)->Next(*(int*)pp_theId);
    return _result;
}

int RDC::OCC::Aspect_GenId::Upper()
{
    int _result = ((::Aspect_GenId*)_NativeInstance)->Upper();
    return _result;
}

void RDC::OCC::Aspect_GenId::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_GenId*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Aspect_GenId::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_GenId*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Aspect_GradientBackground
//---------------------------------------------------------------------

RDC::OCC::Aspect_GradientBackground::Aspect_GradientBackground()
    : RDC::OCC::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GradientBackground();
}

RDC::OCC::Aspect_GradientBackground::Aspect_GradientBackground(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2, RDC::OCC::Aspect_GradientFillMethod theMethod)
    : RDC::OCC::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GradientBackground(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, (::Aspect_GradientFillMethod)theMethod);
}

RDC::OCC::Aspect_GradientBackground::Aspect_GradientBackground(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2)
    : RDC::OCC::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_GradientBackground(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, Aspect_GradientFillMethod_Horizontal);
}

void RDC::OCC::Aspect_GradientBackground::SetColors(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2, RDC::OCC::Aspect_GradientFillMethod theMethod)
{
    ((::Aspect_GradientBackground*)_NativeInstance)->SetColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, (::Aspect_GradientFillMethod)theMethod);
}

void RDC::OCC::Aspect_GradientBackground::SetColors(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2)
{
    ((::Aspect_GradientBackground*)_NativeInstance)->SetColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, Aspect_GradientFillMethod_Horizontal);
}

void RDC::OCC::Aspect_GradientBackground::Colors(RDC::OCC::Quantity_Color^ theColor1, RDC::OCC::Quantity_Color^ theColor2)
{
    ((::Aspect_GradientBackground*)_NativeInstance)->Colors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance);
}

RDC::OCC::Aspect_GradientFillMethod RDC::OCC::Aspect_GradientBackground::BgGradientFillMethod()
{
    ::Aspect_GradientFillMethod _result = ((::Aspect_GradientBackground*)_NativeInstance)->BgGradientFillMethod();
    return (RDC::OCC::Aspect_GradientFillMethod)_result;
}

void RDC::OCC::Aspect_GradientBackground::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_GradientBackground*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Aspect_GradientBackground::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_GradientBackground*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Aspect_GraphicDeviceDefinitionError
//---------------------------------------------------------------------

RDC::OCC::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError()
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_GraphicDeviceDefinitionError();
}

RDC::OCC::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError(System::String^ theMessage)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Aspect_GraphicDeviceDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Aspect_GraphicDeviceDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Aspect_GraphicDeviceDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Aspect_GraphicDeviceDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Aspect_GraphicDeviceDefinitionError::Raise()
{
    ::Aspect_GraphicDeviceDefinitionError::Raise("");
}

RDC::OCC::Aspect_GraphicDeviceDefinitionError^ RDC::OCC::Aspect_GraphicDeviceDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Aspect_GraphicDeviceDefinitionError) _result = ::Aspect_GraphicDeviceDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_GraphicDeviceDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_GraphicDeviceDefinitionError^ RDC::OCC::Aspect_GraphicDeviceDefinitionError::NewInstance()
{
    Handle(::Aspect_GraphicDeviceDefinitionError) _result = ::Aspect_GraphicDeviceDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_GraphicDeviceDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_GraphicDeviceDefinitionError^ RDC::OCC::Aspect_GraphicDeviceDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Aspect_GraphicDeviceDefinitionError) _result = ::Aspect_GraphicDeviceDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_GraphicDeviceDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_GraphicDeviceDefinitionError^ RDC::OCC::Aspect_GraphicDeviceDefinitionError::CreateDowncasted(::Aspect_GraphicDeviceDefinitionError* instance)
{
    return gcnew RDC::OCC::Aspect_GraphicDeviceDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_IdentDefinitionError
//---------------------------------------------------------------------

RDC::OCC::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError()
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_IdentDefinitionError();
}

RDC::OCC::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError(System::String^ theMessage)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Aspect_IdentDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Aspect_IdentDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Aspect_IdentDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Aspect_IdentDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Aspect_IdentDefinitionError::Raise()
{
    ::Aspect_IdentDefinitionError::Raise("");
}

RDC::OCC::Aspect_IdentDefinitionError^ RDC::OCC::Aspect_IdentDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Aspect_IdentDefinitionError) _result = ::Aspect_IdentDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_IdentDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_IdentDefinitionError^ RDC::OCC::Aspect_IdentDefinitionError::NewInstance()
{
    Handle(::Aspect_IdentDefinitionError) _result = ::Aspect_IdentDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_IdentDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_IdentDefinitionError^ RDC::OCC::Aspect_IdentDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Aspect_IdentDefinitionError) _result = ::Aspect_IdentDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_IdentDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_IdentDefinitionError^ RDC::OCC::Aspect_IdentDefinitionError::CreateDowncasted(::Aspect_IdentDefinitionError* instance)
{
    return gcnew RDC::OCC::Aspect_IdentDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_Window
//---------------------------------------------------------------------

bool RDC::OCC::Aspect_Window::IsVirtual()
{
    bool _result = ((::Aspect_Window*)_NativeInstance)->IsVirtual();
    return _result;
}

void RDC::OCC::Aspect_Window::SetVirtual(bool theVirtual)
{
    ((::Aspect_Window*)_NativeInstance)->SetVirtual(theVirtual);
}

RDC::OCC::Graphic3d_Vec2i^ RDC::OCC::Aspect_Window::TopLeft()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ((::Aspect_Window*)_NativeInstance)->TopLeft();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec2i(_result);
}

RDC::OCC::Graphic3d_Vec2i^ RDC::OCC::Aspect_Window::Dimensions()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ((::Aspect_Window*)_NativeInstance)->Dimensions();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec2i(_result);
}

RDC::OCC::Aspect_Background^ RDC::OCC::Aspect_Window::Background()
{
    ::Aspect_Background* _result = new ::Aspect_Background();
    *_result = ((::Aspect_Window*)_NativeInstance)->Background();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_Background(_result);
}

RDC::OCC::Aspect_FillMethod RDC::OCC::Aspect_Window::BackgroundFillMethod()
{
    ::Aspect_FillMethod _result = ((::Aspect_Window*)_NativeInstance)->BackgroundFillMethod();
    return (RDC::OCC::Aspect_FillMethod)_result;
}

RDC::OCC::Aspect_GradientBackground^ RDC::OCC::Aspect_Window::GradientBackground()
{
    ::Aspect_GradientBackground* _result = new ::Aspect_GradientBackground();
    *_result = ((::Aspect_Window*)_NativeInstance)->GradientBackground();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_GradientBackground(_result);
}

void RDC::OCC::Aspect_Window::SetBackground(RDC::OCC::Aspect_Background^ theBack)
{
    ((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Aspect_Background*)theBack->NativeInstance);
}

void RDC::OCC::Aspect_Window::SetBackground(RDC::OCC::Quantity_Color^ theColor)
{
    ((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Quantity_Color*)theColor->NativeInstance);
}

void RDC::OCC::Aspect_Window::SetBackground(RDC::OCC::Aspect_GradientBackground^ theBackground)
{
    ((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Aspect_GradientBackground*)theBackground->NativeInstance);
}

void RDC::OCC::Aspect_Window::SetBackground(RDC::OCC::Quantity_Color^ theFirstColor, RDC::OCC::Quantity_Color^ theSecondColor, RDC::OCC::Aspect_GradientFillMethod theFillMethod)
{
    ((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Quantity_Color*)theFirstColor->NativeInstance, *(::Quantity_Color*)theSecondColor->NativeInstance, (::Aspect_GradientFillMethod)theFillMethod);
}

bool RDC::OCC::Aspect_Window::IsMapped()
{
    bool _result = ((::Aspect_Window*)_NativeInstance)->IsMapped();
    return _result;
}

void RDC::OCC::Aspect_Window::Map()
{
    ((::Aspect_Window*)_NativeInstance)->Map();
}

void RDC::OCC::Aspect_Window::Unmap()
{
    ((::Aspect_Window*)_NativeInstance)->Unmap();
}

RDC::OCC::Aspect_TypeOfResize RDC::OCC::Aspect_Window::DoResize()
{
    ::Aspect_TypeOfResize _result = ((::Aspect_Window*)_NativeInstance)->DoResize();
    return (RDC::OCC::Aspect_TypeOfResize)_result;
}

bool RDC::OCC::Aspect_Window::DoMapping()
{
    bool _result = ((::Aspect_Window*)_NativeInstance)->DoMapping();
    return _result;
}

double RDC::OCC::Aspect_Window::Ratio()
{
    double _result = ((::Aspect_Window*)_NativeInstance)->Ratio();
    return _result;
}

void RDC::OCC::Aspect_Window::Position(int% X1, int% Y1, int% X2, int% Y2)
{
    pin_ptr<int> pp_X1 = &X1;
    pin_ptr<int> pp_Y1 = &Y1;
    pin_ptr<int> pp_X2 = &X2;
    pin_ptr<int> pp_Y2 = &Y2;
    ((::Aspect_Window*)_NativeInstance)->Position(*(int*)pp_X1, *(int*)pp_Y1, *(int*)pp_X2, *(int*)pp_Y2);
}

void RDC::OCC::Aspect_Window::Size(int% Width, int% Height)
{
    pin_ptr<int> pp_Width = &Width;
    pin_ptr<int> pp_Height = &Height;
    ((::Aspect_Window*)_NativeInstance)->Size(*(int*)pp_Width, *(int*)pp_Height);
}

System::IntPtr RDC::OCC::Aspect_Window::NativeHandle()
{
    void* _result = ((::Aspect_Window*)_NativeInstance)->NativeHandle();
    return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::Aspect_Window::NativeParentHandle()
{
    void* _result = ((::Aspect_Window*)_NativeInstance)->NativeParentHandle();
    return System::IntPtr(_result);
}

void RDC::OCC::Aspect_Window::SetTitle(RDC::OCC::TCollection_AsciiString^ theTitle)
{
    ((::Aspect_Window*)_NativeInstance)->SetTitle(*(::TCollection_AsciiString*)theTitle->NativeInstance);
}

double RDC::OCC::Aspect_Window::DevicePixelRatio()
{
    double _result = ((::Aspect_Window*)_NativeInstance)->DevicePixelRatio();
    return _result;
}

RDC::OCC::Graphic3d_Vec2d^ RDC::OCC::Aspect_Window::ConvertPointToBacking(RDC::OCC::Graphic3d_Vec2d^ thePnt)
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = ((::Aspect_Window*)_NativeInstance)->ConvertPointToBacking(*(::Graphic3d_Vec2d*)thePnt->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec2d(_result);
}

RDC::OCC::Graphic3d_Vec2d^ RDC::OCC::Aspect_Window::ConvertPointFromBacking(RDC::OCC::Graphic3d_Vec2d^ thePnt)
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = ((::Aspect_Window*)_NativeInstance)->ConvertPointFromBacking(*(::Graphic3d_Vec2d*)thePnt->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec2d(_result);
}

void RDC::OCC::Aspect_Window::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Window*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Aspect_Window::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_Window*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Aspect_Window^ RDC::OCC::Aspect_Window::CreateDowncasted(::Aspect_Window* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::WNT_Window)))
        return RDC::OCC::WNT_Window::CreateDowncasted((::WNT_Window*)instance);
    
    return gcnew RDC::OCC::Aspect_Window( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_XRAction
//---------------------------------------------------------------------

RDC::OCC::Aspect_XRAction::Aspect_XRAction(RDC::OCC::TCollection_AsciiString^ theId, RDC::OCC::Aspect_XRActionType theType)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_XRAction(*(::TCollection_AsciiString*)theId->NativeInstance, (::Aspect_XRActionType)theType);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Aspect_XRAction::Id()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Aspect_XRAction*)_NativeInstance)->Id();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::Aspect_XRActionType RDC::OCC::Aspect_XRAction::Type()
{
    ::Aspect_XRActionType _result = ((::Aspect_XRAction*)_NativeInstance)->Type();
    return (RDC::OCC::Aspect_XRActionType)_result;
}

bool RDC::OCC::Aspect_XRAction::IsValid()
{
    bool _result = ((::Aspect_XRAction*)_NativeInstance)->IsValid();
    return _result;
}

long long unsigned int RDC::OCC::Aspect_XRAction::RawHandle()
{
    long long unsigned int _result = ((::Aspect_XRAction*)_NativeInstance)->RawHandle();
    return _result;
}

void RDC::OCC::Aspect_XRAction::SetRawHandle(long long unsigned int theHande)
{
    ((::Aspect_XRAction*)_NativeInstance)->SetRawHandle(theHande);
}

RDC::OCC::Aspect_XRAction^ RDC::OCC::Aspect_XRAction::CreateDowncasted(::Aspect_XRAction* instance)
{
    return gcnew RDC::OCC::Aspect_XRAction( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_XRActionSet
//---------------------------------------------------------------------

RDC::OCC::Aspect_XRActionSet::Aspect_XRActionSet(RDC::OCC::TCollection_AsciiString^ theId)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_XRActionSet(*(::TCollection_AsciiString*)theId->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Aspect_XRActionSet::Id()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Aspect_XRActionSet*)_NativeInstance)->Id();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

long long unsigned int RDC::OCC::Aspect_XRActionSet::RawHandle()
{
    long long unsigned int _result = ((::Aspect_XRActionSet*)_NativeInstance)->RawHandle();
    return _result;
}

void RDC::OCC::Aspect_XRActionSet::SetRawHandle(long long unsigned int theHande)
{
    ((::Aspect_XRActionSet*)_NativeInstance)->SetRawHandle(theHande);
}

void RDC::OCC::Aspect_XRActionSet::AddAction(RDC::OCC::Aspect_XRAction^ theAction)
{
    ((::Aspect_XRActionSet*)_NativeInstance)->AddAction(Handle(::Aspect_XRAction)(theAction->NativeInstance));
}

RDC::OCC::Aspect_XRActionMap^ RDC::OCC::Aspect_XRActionSet::Actions()
{
    ::Aspect_XRActionMap* _result = new ::Aspect_XRActionMap();
    *_result = (::Aspect_XRActionMap)((::Aspect_XRActionSet*)_NativeInstance)->Actions();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_XRActionMap(_result);
}

RDC::OCC::Aspect_XRActionSet^ RDC::OCC::Aspect_XRActionSet::CreateDowncasted(::Aspect_XRActionSet* instance)
{
    return gcnew RDC::OCC::Aspect_XRActionSet( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_XRSession
//---------------------------------------------------------------------

bool RDC::OCC::Aspect_XRSession::IsOpen()
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->IsOpen();
    return _result;
}

bool RDC::OCC::Aspect_XRSession::Open()
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->Open();
    return _result;
}

void RDC::OCC::Aspect_XRSession::Close()
{
    ((::Aspect_XRSession*)_NativeInstance)->Close();
}

bool RDC::OCC::Aspect_XRSession::WaitPoses()
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->WaitPoses();
    return _result;
}

RDC::OCC::Graphic3d_Vec2i^ RDC::OCC::Aspect_XRSession::RecommendedViewport()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->RecommendedViewport();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec2i(_result);
}

RDC::OCC::Graphic3d_Mat4d^ RDC::OCC::Aspect_XRSession::EyeToHeadTransform(RDC::OCC::Aspect_Eye theEye)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->EyeToHeadTransform((::Aspect_Eye)theEye);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Mat4d(_result);
}

RDC::OCC::Graphic3d_Mat4d^ RDC::OCC::Aspect_XRSession::HeadToEyeTransform(RDC::OCC::Aspect_Eye theEye)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->HeadToEyeTransform((::Aspect_Eye)theEye);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Mat4d(_result);
}

RDC::OCC::Graphic3d_Mat4d^ RDC::OCC::Aspect_XRSession::ProjectionMatrix(RDC::OCC::Aspect_Eye theEye, double theZNear, double theZFar)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->ProjectionMatrix((::Aspect_Eye)theEye, theZNear, theZFar);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Mat4d(_result);
}

bool RDC::OCC::Aspect_XRSession::HasProjectionFrustums()
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->HasProjectionFrustums();
    return _result;
}

void RDC::OCC::Aspect_XRSession::ProcessEvents()
{
    ((::Aspect_XRSession*)_NativeInstance)->ProcessEvents();
}

bool RDC::OCC::Aspect_XRSession::SubmitEye(System::IntPtr theTexture, RDC::OCC::Aspect_GraphicsLibrary theGraphicsLib, RDC::OCC::Aspect_ColorSpace theColorSpace, RDC::OCC::Aspect_Eye theEye)
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->SubmitEye(theTexture.ToPointer(), (::Aspect_GraphicsLibrary)theGraphicsLib, (::Aspect_ColorSpace)theColorSpace, (::Aspect_Eye)theEye);
    return _result;
}

double RDC::OCC::Aspect_XRSession::UnitFactor()
{
    double _result = ((::Aspect_XRSession*)_NativeInstance)->UnitFactor();
    return _result;
}

void RDC::OCC::Aspect_XRSession::SetUnitFactor(double theFactor)
{
    ((::Aspect_XRSession*)_NativeInstance)->SetUnitFactor(theFactor);
}

double RDC::OCC::Aspect_XRSession::Aspect()
{
    double _result = ((::Aspect_XRSession*)_NativeInstance)->Aspect();
    return _result;
}

double RDC::OCC::Aspect_XRSession::FieldOfView()
{
    double _result = ((::Aspect_XRSession*)_NativeInstance)->FieldOfView();
    return _result;
}

double RDC::OCC::Aspect_XRSession::IOD()
{
    double _result = ((::Aspect_XRSession*)_NativeInstance)->IOD();
    return _result;
}

float RDC::OCC::Aspect_XRSession::DisplayFrequency()
{
    float _result = ((::Aspect_XRSession*)_NativeInstance)->DisplayFrequency();
    return _result;
}

RDC::OCC::Trsf RDC::OCC::Aspect_XRSession::HeadPose()
{
    ::gp_Trsf _nativeResult = ((::Aspect_XRSession*)_NativeInstance)->HeadPose();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::Trsf RDC::OCC::Aspect_XRSession::LeftHandPose()
{
    ::gp_Trsf _nativeResult = ((::Aspect_XRSession*)_NativeInstance)->LeftHandPose();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::Trsf RDC::OCC::Aspect_XRSession::RightHandPose()
{
    ::gp_Trsf _nativeResult = ((::Aspect_XRSession*)_NativeInstance)->RightHandPose();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::Aspect_TrackedDevicePoseArray^ RDC::OCC::Aspect_XRSession::TrackedPoses()
{
    ::Aspect_TrackedDevicePoseArray* _result = new ::Aspect_TrackedDevicePoseArray();
    *_result = (::Aspect_TrackedDevicePoseArray)((::Aspect_XRSession*)_NativeInstance)->TrackedPoses();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TrackedDevicePoseArray(_result);
}

bool RDC::OCC::Aspect_XRSession::HasTrackedPose(int theDevice)
{
    bool _result = ((::Aspect_XRSession*)_NativeInstance)->HasTrackedPose(theDevice);
    return _result;
}

int RDC::OCC::Aspect_XRSession::NamedTrackedDevice(RDC::OCC::Aspect_XRTrackedDeviceRole theDevice)
{
    int _result = ((::Aspect_XRSession*)_NativeInstance)->NamedTrackedDevice((::Aspect_XRTrackedDeviceRole)theDevice);
    return _result;
}

RDC::OCC::Graphic3d_ArrayOfTriangles^ RDC::OCC::Aspect_XRSession::LoadRenderModel(int theDevice, RDC::OCC::Image_Texture^ theTexture)
{
    Handle(::Image_Texture) h_theTexture = theTexture->NativeInstance;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ((::Aspect_XRSession*)_NativeInstance)->LoadRenderModel(theDevice, h_theTexture);
    theTexture->NativeInstance = h_theTexture.get();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}

RDC::OCC::Graphic3d_ArrayOfTriangles^ RDC::OCC::Aspect_XRSession::LoadRenderModel(int theDevice, bool theToApplyUnitFactor, RDC::OCC::Image_Texture^ theTexture)
{
    Handle(::Image_Texture) h_theTexture = theTexture->NativeInstance;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ((::Aspect_XRSession*)_NativeInstance)->LoadRenderModel(theDevice, theToApplyUnitFactor, h_theTexture);
    theTexture->NativeInstance = h_theTexture.get();
    return _result.IsNull() ? nullptr : RDC::OCC::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_XRDigitalActionData^ RDC::OCC::Aspect_XRSession::GetDigitalActionData(RDC::OCC::Aspect_XRAction^ theAction)
{
    ::Aspect_XRDigitalActionData* _result = new ::Aspect_XRDigitalActionData();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->GetDigitalActionData(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_XRDigitalActionData(_result);
}

RDC::OCC::Aspect_XRAnalogActionData^ RDC::OCC::Aspect_XRSession::GetAnalogActionData(RDC::OCC::Aspect_XRAction^ theAction)
{
    ::Aspect_XRAnalogActionData* _result = new ::Aspect_XRAnalogActionData();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->GetAnalogActionData(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_XRAnalogActionData(_result);
}

RDC::OCC::Aspect_XRPoseActionData^ RDC::OCC::Aspect_XRSession::GetPoseActionDataForNextFrame(RDC::OCC::Aspect_XRAction^ theAction)
{
    ::Aspect_XRPoseActionData* _result = new ::Aspect_XRPoseActionData();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->GetPoseActionDataForNextFrame(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_XRPoseActionData(_result);
}

void RDC::OCC::Aspect_XRSession::TriggerHapticVibrationAction(RDC::OCC::Aspect_XRAction^ theAction, RDC::OCC::Aspect_XRHapticActionData^ theParams)
{
    ((::Aspect_XRSession*)_NativeInstance)->TriggerHapticVibrationAction(Handle(::Aspect_XRAction)(theAction->NativeInstance), *(::Aspect_XRHapticActionData*)theParams->NativeInstance);
}

void RDC::OCC::Aspect_XRSession::AbortHapticVibrationAction(RDC::OCC::Aspect_XRAction^ theAction)
{
    ((::Aspect_XRSession*)_NativeInstance)->AbortHapticVibrationAction(Handle(::Aspect_XRAction)(theAction->NativeInstance));
}

RDC::OCC::Aspect_XRSession::TrackingUniverseOrigin RDC::OCC::Aspect_XRSession::TrackingOrigin()
{
    ::Aspect_XRSession::TrackingUniverseOrigin _result = ((::Aspect_XRSession*)_NativeInstance)->TrackingOrigin();
    return (RDC::OCC::Aspect_XRSession::TrackingUniverseOrigin)_result;
}

void RDC::OCC::Aspect_XRSession::SetTrackingOrigin(RDC::OCC::Aspect_XRSession::TrackingUniverseOrigin theOrigin)
{
    ((::Aspect_XRSession*)_NativeInstance)->SetTrackingOrigin((::Aspect_XRSession::TrackingUniverseOrigin)theOrigin);
}

RDC::OCC::Aspect_XRAction^ RDC::OCC::Aspect_XRSession::GenericAction(RDC::OCC::Aspect_XRTrackedDeviceRole theDevice, RDC::OCC::Aspect_XRGenericAction theAction)
{
    Handle(::Aspect_XRAction) _result = ((::Aspect_XRSession*)_NativeInstance)->GenericAction((::Aspect_XRTrackedDeviceRole)theDevice, (::Aspect_XRGenericAction)theAction);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_XRAction::CreateDowncasted(_result.get());
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Aspect_XRSession::GetString(RDC::OCC::Aspect_XRSession::InfoString theInfo)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::Aspect_XRSession*)_NativeInstance)->GetString((::Aspect_XRSession::InfoString)theInfo);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::Aspect_XRSession^ RDC::OCC::Aspect_XRSession::CreateDowncasted(::Aspect_XRSession* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Aspect_OpenVRSession)))
        return RDC::OCC::Aspect_OpenVRSession::CreateDowncasted((::Aspect_OpenVRSession*)instance);
    
    return gcnew RDC::OCC::Aspect_XRSession( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_OpenVRSession
//---------------------------------------------------------------------

RDC::OCC::Aspect_OpenVRSession::Aspect_OpenVRSession()
    : RDC::OCC::Aspect_XRSession(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_OpenVRSession();
}

bool RDC::OCC::Aspect_OpenVRSession::IsHmdPresent()
{
    bool _result = ::Aspect_OpenVRSession::IsHmdPresent();
    return _result;
}

bool RDC::OCC::Aspect_OpenVRSession::IsOpen()
{
    bool _result = ((::Aspect_OpenVRSession*)_NativeInstance)->IsOpen();
    return _result;
}

bool RDC::OCC::Aspect_OpenVRSession::Open()
{
    bool _result = ((::Aspect_OpenVRSession*)_NativeInstance)->Open();
    return _result;
}

void RDC::OCC::Aspect_OpenVRSession::Close()
{
    ((::Aspect_OpenVRSession*)_NativeInstance)->Close();
}

bool RDC::OCC::Aspect_OpenVRSession::WaitPoses()
{
    bool _result = ((::Aspect_OpenVRSession*)_NativeInstance)->WaitPoses();
    return _result;
}

RDC::OCC::Graphic3d_Vec2i^ RDC::OCC::Aspect_OpenVRSession::RecommendedViewport()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->RecommendedViewport();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec2i(_result);
}

RDC::OCC::Graphic3d_Mat4d^ RDC::OCC::Aspect_OpenVRSession::EyeToHeadTransform(RDC::OCC::Aspect_Eye theEye)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->EyeToHeadTransform((::Aspect_Eye)theEye);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Mat4d(_result);
}

RDC::OCC::Graphic3d_Mat4d^ RDC::OCC::Aspect_OpenVRSession::ProjectionMatrix(RDC::OCC::Aspect_Eye theEye, double theZNear, double theZFar)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->ProjectionMatrix((::Aspect_Eye)theEye, theZNear, theZFar);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Mat4d(_result);
}

bool RDC::OCC::Aspect_OpenVRSession::HasProjectionFrustums()
{
    bool _result = ((::Aspect_OpenVRSession*)_NativeInstance)->HasProjectionFrustums();
    return _result;
}

void RDC::OCC::Aspect_OpenVRSession::ProcessEvents()
{
    ((::Aspect_OpenVRSession*)_NativeInstance)->ProcessEvents();
}

bool RDC::OCC::Aspect_OpenVRSession::SubmitEye(System::IntPtr theTexture, RDC::OCC::Aspect_GraphicsLibrary theGraphicsLib, RDC::OCC::Aspect_ColorSpace theColorSpace, RDC::OCC::Aspect_Eye theEye)
{
    bool _result = ((::Aspect_OpenVRSession*)_NativeInstance)->SubmitEye(theTexture.ToPointer(), (::Aspect_GraphicsLibrary)theGraphicsLib, (::Aspect_ColorSpace)theColorSpace, (::Aspect_Eye)theEye);
    return _result;
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Aspect_OpenVRSession::GetString(RDC::OCC::Aspect_XRSession::InfoString theInfo)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetString((::Aspect_XRSession::InfoString)theInfo);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

int RDC::OCC::Aspect_OpenVRSession::NamedTrackedDevice(RDC::OCC::Aspect_XRTrackedDeviceRole theDevice)
{
    int _result = ((::Aspect_OpenVRSession*)_NativeInstance)->NamedTrackedDevice((::Aspect_XRTrackedDeviceRole)theDevice);
    return _result;
}

RDC::OCC::Aspect_XRDigitalActionData^ RDC::OCC::Aspect_OpenVRSession::GetDigitalActionData(RDC::OCC::Aspect_XRAction^ theAction)
{
    ::Aspect_XRDigitalActionData* _result = new ::Aspect_XRDigitalActionData();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetDigitalActionData(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_XRDigitalActionData(_result);
}

RDC::OCC::Aspect_XRAnalogActionData^ RDC::OCC::Aspect_OpenVRSession::GetAnalogActionData(RDC::OCC::Aspect_XRAction^ theAction)
{
    ::Aspect_XRAnalogActionData* _result = new ::Aspect_XRAnalogActionData();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetAnalogActionData(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_XRAnalogActionData(_result);
}

RDC::OCC::Aspect_XRPoseActionData^ RDC::OCC::Aspect_OpenVRSession::GetPoseActionDataForNextFrame(RDC::OCC::Aspect_XRAction^ theAction)
{
    ::Aspect_XRPoseActionData* _result = new ::Aspect_XRPoseActionData();
    *_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetPoseActionDataForNextFrame(Handle(::Aspect_XRAction)(theAction->NativeInstance));
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_XRPoseActionData(_result);
}

void RDC::OCC::Aspect_OpenVRSession::SetTrackingOrigin(RDC::OCC::Aspect_XRSession::TrackingUniverseOrigin theOrigin)
{
    ((::Aspect_OpenVRSession*)_NativeInstance)->SetTrackingOrigin((::Aspect_XRSession::TrackingUniverseOrigin)theOrigin);
}

RDC::OCC::Aspect_OpenVRSession^ RDC::OCC::Aspect_OpenVRSession::CreateDowncasted(::Aspect_OpenVRSession* instance)
{
    return gcnew RDC::OCC::Aspect_OpenVRSession( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_RectangularGrid
//---------------------------------------------------------------------

RDC::OCC::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle, double aRotationAngle)
    : RDC::OCC::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle)
    : RDC::OCC::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle)
    : RDC::OCC::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin)
    : RDC::OCC::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin)
    : RDC::OCC::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep)
    : RDC::OCC::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Aspect_RectangularGrid::SetXStep(double aStep)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetXStep(aStep);
}

void RDC::OCC::Aspect_RectangularGrid::SetYStep(double aStep)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetYStep(aStep);
}

void RDC::OCC::Aspect_RectangularGrid::SetAngle(double anAngle1, double anAngle2)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetAngle(anAngle1, anAngle2);
}

void RDC::OCC::Aspect_RectangularGrid::SetGridValues(double XOrigin, double YOrigin, double XStep, double YStep, double RotationAngle)
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->SetGridValues(XOrigin, YOrigin, XStep, YStep, RotationAngle);
}

void RDC::OCC::Aspect_RectangularGrid::Compute(double X, double Y, double% gridX, double% gridY)
{
    pin_ptr<double> pp_gridX = &gridX;
    pin_ptr<double> pp_gridY = &gridY;
    ((::Aspect_RectangularGrid*)_NativeInstance)->Compute(X, Y, *(double*)pp_gridX, *(double*)pp_gridY);
}

double RDC::OCC::Aspect_RectangularGrid::XStep()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->XStep();
    return _result;
}

double RDC::OCC::Aspect_RectangularGrid::YStep()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->YStep();
    return _result;
}

double RDC::OCC::Aspect_RectangularGrid::FirstAngle()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->FirstAngle();
    return _result;
}

double RDC::OCC::Aspect_RectangularGrid::SecondAngle()
{
    double _result = ((::Aspect_RectangularGrid*)_NativeInstance)->SecondAngle();
    return _result;
}

void RDC::OCC::Aspect_RectangularGrid::Init()
{
    ((::Aspect_RectangularGrid*)_NativeInstance)->Init();
}

void RDC::OCC::Aspect_RectangularGrid::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_RectangularGrid*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Aspect_RectangularGrid::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_RectangularGrid*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Aspect_RectangularGrid^ RDC::OCC::Aspect_RectangularGrid::CreateDowncasted(::Aspect_RectangularGrid* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::V3d_RectangularGrid)))
        return RDC::OCC::V3d_RectangularGrid::CreateDowncasted((::V3d_RectangularGrid*)instance);
    
    return gcnew RDC::OCC::Aspect_RectangularGrid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_SkydomeBackground
//---------------------------------------------------------------------

RDC::OCC::Aspect_SkydomeBackground::Aspect_SkydomeBackground()
    : RDC::OCC::BaseClass<::Aspect_SkydomeBackground>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_SkydomeBackground();
}

RDC::OCC::Aspect_SkydomeBackground::Aspect_SkydomeBackground(RDC::OCC::Dir theSunDirection, float theCloudiness, float theTime, float theFogginess, int theSize)
    : RDC::OCC::BaseClass<::Aspect_SkydomeBackground>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_theSunDirection = &theSunDirection;
    _NativeInstance = new ::Aspect_SkydomeBackground(*(gp_Dir*)pp_theSunDirection, theCloudiness, theTime, theFogginess, theSize);
}

RDC::OCC::Dir RDC::OCC::Aspect_SkydomeBackground::SunDirection()
{
    ::gp_Dir _nativeResult = ((::Aspect_SkydomeBackground*)_NativeInstance)->SunDirection();
    return RDC::OCC::Dir(_nativeResult);
}

float RDC::OCC::Aspect_SkydomeBackground::Cloudiness()
{
    float _result = ((::Aspect_SkydomeBackground*)_NativeInstance)->Cloudiness();
    return _result;
}

float RDC::OCC::Aspect_SkydomeBackground::TimeParameter()
{
    float _result = ((::Aspect_SkydomeBackground*)_NativeInstance)->TimeParameter();
    return _result;
}

float RDC::OCC::Aspect_SkydomeBackground::Fogginess()
{
    float _result = ((::Aspect_SkydomeBackground*)_NativeInstance)->Fogginess();
    return _result;
}

int RDC::OCC::Aspect_SkydomeBackground::Size()
{
    int _result = ((::Aspect_SkydomeBackground*)_NativeInstance)->Size();
    return _result;
}

void RDC::OCC::Aspect_SkydomeBackground::SetSunDirection(RDC::OCC::Dir theSunDirection)
{
    pin_ptr<RDC::OCC::Dir> pp_theSunDirection = &theSunDirection;
    ((::Aspect_SkydomeBackground*)_NativeInstance)->SetSunDirection(*(gp_Dir*)pp_theSunDirection);
}

void RDC::OCC::Aspect_SkydomeBackground::SetCloudiness(float theCloudiness)
{
    ((::Aspect_SkydomeBackground*)_NativeInstance)->SetCloudiness(theCloudiness);
}

void RDC::OCC::Aspect_SkydomeBackground::SetTimeParameter(float theTime)
{
    ((::Aspect_SkydomeBackground*)_NativeInstance)->SetTimeParameter(theTime);
}

void RDC::OCC::Aspect_SkydomeBackground::SetFogginess(float theFogginess)
{
    ((::Aspect_SkydomeBackground*)_NativeInstance)->SetFogginess(theFogginess);
}

void RDC::OCC::Aspect_SkydomeBackground::SetSize(int theSize)
{
    ((::Aspect_SkydomeBackground*)_NativeInstance)->SetSize(theSize);
}

void RDC::OCC::Aspect_SkydomeBackground::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_SkydomeBackground*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Aspect_SkydomeBackground::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Aspect_SkydomeBackground*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Aspect_Touch
//---------------------------------------------------------------------

RDC::OCC::Aspect_Touch::Aspect_Touch()
    : RDC::OCC::BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_Touch();
}

RDC::OCC::Aspect_Touch::Aspect_Touch(RDC::OCC::Graphic3d_Vec2d^ thePnt, bool theIsPreciseDevice)
    : RDC::OCC::BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_Touch(*(::Graphic3d_Vec2d*)thePnt->NativeInstance, theIsPreciseDevice);
}

RDC::OCC::Aspect_Touch::Aspect_Touch(double theX, double theY, bool theIsPreciseDevice)
    : RDC::OCC::BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Aspect_Touch(theX, theY, theIsPreciseDevice);
}

RDC::OCC::Graphic3d_Vec2d^ RDC::OCC::Aspect_Touch::Delta()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = ((::Aspect_Touch*)_NativeInstance)->Delta();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec2d(_result);
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowDefinitionError
//---------------------------------------------------------------------

RDC::OCC::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError()
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_WindowDefinitionError();
}

RDC::OCC::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError(System::String^ theMessage)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Aspect_WindowDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Aspect_WindowDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Aspect_WindowDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Aspect_WindowDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Aspect_WindowDefinitionError::Raise()
{
    ::Aspect_WindowDefinitionError::Raise("");
}

RDC::OCC::Aspect_WindowDefinitionError^ RDC::OCC::Aspect_WindowDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Aspect_WindowDefinitionError) _result = ::Aspect_WindowDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_WindowDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_WindowDefinitionError^ RDC::OCC::Aspect_WindowDefinitionError::NewInstance()
{
    Handle(::Aspect_WindowDefinitionError) _result = ::Aspect_WindowDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_WindowDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_WindowDefinitionError^ RDC::OCC::Aspect_WindowDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Aspect_WindowDefinitionError) _result = ::Aspect_WindowDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_WindowDefinitionError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_WindowDefinitionError^ RDC::OCC::Aspect_WindowDefinitionError::CreateDowncasted(::Aspect_WindowDefinitionError* instance)
{
    return gcnew RDC::OCC::Aspect_WindowDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowError
//---------------------------------------------------------------------

RDC::OCC::Aspect_WindowError::Aspect_WindowError()
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Aspect_WindowError();
}

RDC::OCC::Aspect_WindowError::Aspect_WindowError(System::String^ theMessage)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Aspect_WindowError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Aspect_WindowError::Aspect_WindowError(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Aspect_WindowError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Aspect_WindowError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Aspect_WindowError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Aspect_WindowError::Raise()
{
    ::Aspect_WindowError::Raise("");
}

RDC::OCC::Aspect_WindowError^ RDC::OCC::Aspect_WindowError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Aspect_WindowError) _result = ::Aspect_WindowError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_WindowError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_WindowError^ RDC::OCC::Aspect_WindowError::NewInstance()
{
    Handle(::Aspect_WindowError) _result = ::Aspect_WindowError::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_WindowError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_WindowError^ RDC::OCC::Aspect_WindowError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Aspect_WindowError) _result = ::Aspect_WindowError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::Aspect_WindowError::CreateDowncasted(_result.get());
}

RDC::OCC::Aspect_WindowError^ RDC::OCC::Aspect_WindowError::CreateDowncasted(::Aspect_WindowError* instance)
{
    return gcnew RDC::OCC::Aspect_WindowError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowInputListener
//---------------------------------------------------------------------

double RDC::OCC::Aspect_WindowInputListener::EventTime()
{
    double _result = ((::Aspect_WindowInputListener*)_NativeInstance)->EventTime();
    return _result;
}

void RDC::OCC::Aspect_WindowInputListener::ProcessExpose()
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->ProcessExpose();
}

void RDC::OCC::Aspect_WindowInputListener::ProcessConfigure(bool theIsResized)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->ProcessConfigure(theIsResized);
}

void RDC::OCC::Aspect_WindowInputListener::ProcessInput()
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->ProcessInput();
}

void RDC::OCC::Aspect_WindowInputListener::ProcessFocus(bool theIsActivated)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->ProcessFocus(theIsActivated);
}

void RDC::OCC::Aspect_WindowInputListener::ProcessClose()
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->ProcessClose();
}

void RDC::OCC::Aspect_WindowInputListener::KeyDown(unsigned int theKey, double theTime, double thePressure)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->KeyDown(theKey, theTime, thePressure);
}

void RDC::OCC::Aspect_WindowInputListener::KeyDown(unsigned int theKey, double theTime)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->KeyDown(theKey, theTime, 1.);
}

void RDC::OCC::Aspect_WindowInputListener::KeyUp(unsigned int theKey, double theTime)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->KeyUp(theKey, theTime);
}

void RDC::OCC::Aspect_WindowInputListener::KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->KeyFromAxis(theNegative, thePositive, theTime, thePressure);
}

bool RDC::OCC::Aspect_WindowInputListener::UpdateMouseScroll(RDC::OCC::Aspect_ScrollDelta^ theDelta)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateMouseScroll(*(::Aspect_ScrollDelta*)theDelta->NativeInstance);
    return _result;
}

bool RDC::OCC::Aspect_WindowInputListener::UpdateMouseButtons(RDC::OCC::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateMouseButtons(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
    return _result;
}

bool RDC::OCC::Aspect_WindowInputListener::UpdateMousePosition(RDC::OCC::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateMousePosition(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
    return _result;
}

bool RDC::OCC::Aspect_WindowInputListener::PressMouseButton(RDC::OCC::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->PressMouseButton(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsEmulated);
    return _result;
}

bool RDC::OCC::Aspect_WindowInputListener::ReleaseMouseButton(RDC::OCC::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->ReleaseMouseButton(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsEmulated);
    return _result;
}

unsigned int RDC::OCC::Aspect_WindowInputListener::PressedMouseButtons()
{
    unsigned int _result = ((::Aspect_WindowInputListener*)_NativeInstance)->PressedMouseButtons();
    return _result;
}

unsigned int RDC::OCC::Aspect_WindowInputListener::LastMouseFlags()
{
    unsigned int _result = ((::Aspect_WindowInputListener*)_NativeInstance)->LastMouseFlags();
    return _result;
}

RDC::OCC::Graphic3d_Vec2i^ RDC::OCC::Aspect_WindowInputListener::LastMousePosition()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Aspect_WindowInputListener*)_NativeInstance)->LastMousePosition();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Graphic3d_Vec2i(_result);
}

bool RDC::OCC::Aspect_WindowInputListener::HasTouchPoints()
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->HasTouchPoints();
    return _result;
}

RDC::OCC::Aspect_TouchMap^ RDC::OCC::Aspect_WindowInputListener::TouchPoints()
{
    ::Aspect_TouchMap* _result = new ::Aspect_TouchMap();
    *_result = (::Aspect_TouchMap)((::Aspect_WindowInputListener*)_NativeInstance)->TouchPoints();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Aspect_TouchMap(_result);
}

void RDC::OCC::Aspect_WindowInputListener::AddTouchPoint(long long unsigned int theId, RDC::OCC::Graphic3d_Vec2d^ thePnt, bool theClearBefore)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, theClearBefore);
}

void RDC::OCC::Aspect_WindowInputListener::AddTouchPoint(long long unsigned int theId, RDC::OCC::Graphic3d_Vec2d^ thePnt)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, false);
}

bool RDC::OCC::Aspect_WindowInputListener::RemoveTouchPoint(long long unsigned int theId, bool theClearSelectPnts)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->RemoveTouchPoint(theId, theClearSelectPnts);
    return _result;
}

bool RDC::OCC::Aspect_WindowInputListener::RemoveTouchPoint(long long unsigned int theId)
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->RemoveTouchPoint(theId, false);
    return _result;
}

void RDC::OCC::Aspect_WindowInputListener::UpdateTouchPoint(long long unsigned int theId, RDC::OCC::Graphic3d_Vec2d^ thePnt)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance);
}

float RDC::OCC::Aspect_WindowInputListener::Get3dMouseTranslationScale()
{
    float _result = ((::Aspect_WindowInputListener*)_NativeInstance)->Get3dMouseTranslationScale();
    return _result;
}

void RDC::OCC::Aspect_WindowInputListener::Set3dMouseTranslationScale(float theScale)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->Set3dMouseTranslationScale(theScale);
}

float RDC::OCC::Aspect_WindowInputListener::Get3dMouseRotationScale()
{
    float _result = ((::Aspect_WindowInputListener*)_NativeInstance)->Get3dMouseRotationScale();
    return _result;
}

void RDC::OCC::Aspect_WindowInputListener::Set3dMouseRotationScale(float theScale)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->Set3dMouseRotationScale(theScale);
}

bool RDC::OCC::Aspect_WindowInputListener::To3dMousePreciseInput()
{
    bool _result = ((::Aspect_WindowInputListener*)_NativeInstance)->To3dMousePreciseInput();
    return _result;
}

void RDC::OCC::Aspect_WindowInputListener::Set3dMousePreciseInput(bool theIsQuadric)
{
    ((::Aspect_WindowInputListener*)_NativeInstance)->Set3dMousePreciseInput(theIsQuadric);
}


