// Generated wrapper code for package BRepCheck

#include "OcctPCH.h"
#include "BRepCheck.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopoDS.h"
#include "Adaptor3d.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  BRepCheck_ListOfStatus
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_ListOfStatus::BRepCheck_ListOfStatus()
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_ListOfStatus();
}

RDC::OCC::BRepCheck_ListOfStatus::BRepCheck_ListOfStatus(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_ListOfStatus(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::BRepCheck_ListOfStatus::Size()
{
    int _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Size();
    return _result;
}

RDC::OCC::BRepCheck_ListOfStatus^ RDC::OCC::BRepCheck_ListOfStatus::Assign(RDC::OCC::BRepCheck_ListOfStatus^ theOther)
{
    ::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
    *_result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Assign(*(::BRepCheck_ListOfStatus*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepCheck_ListOfStatus(_result);
}

void RDC::OCC::BRepCheck_ListOfStatus::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRepCheck_ListOfStatus*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::BRepCheck_ListOfStatus::Clear()
{
    ((::BRepCheck_ListOfStatus*)_NativeInstance)->Clear(0L);
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_ListOfStatus::First()
{
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->First();
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_ListOfStatus::Last()
{
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Last();
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_ListOfStatus::Append(RDC::OCC::BRepCheck_Status theItem)
{
    pin_ptr<RDC::OCC::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Append(*(::BRepCheck_Status*)pp_theItem);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_ListOfStatus::Prepend(RDC::OCC::BRepCheck_Status theItem)
{
    pin_ptr<RDC::OCC::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Prepend(*(::BRepCheck_Status*)pp_theItem);
    return (RDC::OCC::BRepCheck_Status)_result;
}

void RDC::OCC::BRepCheck_ListOfStatus::RemoveFirst()
{
    ((::BRepCheck_ListOfStatus*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::BRepCheck_ListOfStatus::Remove(RDC::OCC::BRepCheck_ListOfStatus::Iterator^ theIter)
{
    ((::BRepCheck_ListOfStatus*)_NativeInstance)->Remove(*(::BRepCheck_ListOfStatus::Iterator*)theIter->NativeInstance);
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_ListOfStatus::InsertBefore(RDC::OCC::BRepCheck_Status theItem, RDC::OCC::BRepCheck_ListOfStatus::Iterator^ theIter)
{
    pin_ptr<RDC::OCC::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->InsertBefore(*(::BRepCheck_Status*)pp_theItem, *(::BRepCheck_ListOfStatus::Iterator*)theIter->NativeInstance);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_ListOfStatus::InsertAfter(RDC::OCC::BRepCheck_Status theItem, RDC::OCC::BRepCheck_ListOfStatus::Iterator^ theIter)
{
    pin_ptr<RDC::OCC::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->InsertAfter(*(::BRepCheck_Status*)pp_theItem, *(::BRepCheck_ListOfStatus::Iterator*)theIter->NativeInstance);
    return (RDC::OCC::BRepCheck_Status)_result;
}

void RDC::OCC::BRepCheck_ListOfStatus::Reverse()
{
    ((::BRepCheck_ListOfStatus*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<RDC::OCC::BRepCheck_Status>^ RDC::OCC::BRepCheck_ListOfStatus::GetEnumerator()
{
    return gcnew RDC::OCC::BRepCheck_ListOfStatus::Iterator(new ::BRepCheck_ListOfStatus::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ RDC::OCC::BRepCheck_ListOfStatus::GetEnumerator2()
{
    return gcnew RDC::OCC::BRepCheck_ListOfStatus::Iterator(new ::BRepCheck_ListOfStatus::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  BRepCheck_ListOfStatus::Iterator
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_ListOfStatus::Iterator::Iterator()
    : RDC::OCC::IteratorEnumerator<RDC::OCC::BRepCheck_Status, ::BRepCheck_ListOfStatus::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_ListOfStatus::Iterator();
}

bool RDC::OCC::BRepCheck_ListOfStatus::Iterator::More()
{
    bool _result = ((::BRepCheck_ListOfStatus::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::BRepCheck_ListOfStatus::Iterator::Next()
{
    ((::BRepCheck_ListOfStatus::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_ListOfStatus::Iterator::Value()
{
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus::Iterator*)_NativeInstance)->Value();
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_ListOfStatus::Iterator::ChangeValue()
{
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus::Iterator*)_NativeInstance)->ChangeValue();
    return (RDC::OCC::BRepCheck_Status)_result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_ListIteratorOfListOfStatus
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_ListIteratorOfListOfStatus::BRepCheck_ListIteratorOfListOfStatus()
    : RDC::OCC::BaseClass<::BRepCheck_ListIteratorOfListOfStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_ListIteratorOfListOfStatus();
}

RDC::OCC::BRepCheck_ListIteratorOfListOfStatus::BRepCheck_ListIteratorOfListOfStatus(RDC::OCC::NCollection_BaseList^ theList)
    : RDC::OCC::BaseClass<::BRepCheck_ListIteratorOfListOfStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_ListIteratorOfListOfStatus(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::BRepCheck_ListIteratorOfListOfStatus::More()
{
    bool _result = ((::BRepCheck_ListIteratorOfListOfStatus*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::BRepCheck_ListIteratorOfListOfStatus::Next()
{
    ((::BRepCheck_ListIteratorOfListOfStatus*)_NativeInstance)->Next();
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_ListIteratorOfListOfStatus::Value()
{
    ::BRepCheck_Status _result = ((::BRepCheck_ListIteratorOfListOfStatus*)_NativeInstance)->Value();
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_ListIteratorOfListOfStatus::ChangeValue()
{
    ::BRepCheck_Status _result = ((::BRepCheck_ListIteratorOfListOfStatus*)_NativeInstance)->ChangeValue();
    return (RDC::OCC::BRepCheck_Status)_result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_HListOfStatus
//---------------------------------------------------------------------

int RDC::OCC::BRepCheck_HListOfStatus::Size()
{
    int _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->Size();
    return _result;
}

RDC::OCC::BRepCheck_ListOfStatus^ RDC::OCC::BRepCheck_HListOfStatus::Assign(RDC::OCC::BRepCheck_ListOfStatus^ theOther)
{
    ::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
    *_result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->Assign(*(::BRepCheck_ListOfStatus*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepCheck_ListOfStatus(_result);
}

void RDC::OCC::BRepCheck_HListOfStatus::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRepCheck_HListOfStatus*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::BRepCheck_HListOfStatus::Clear()
{
    ((::BRepCheck_HListOfStatus*)_NativeInstance)->Clear(0L);
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_HListOfStatus::First()
{
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->First();
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_HListOfStatus::Last()
{
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->Last();
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_HListOfStatus::Append(RDC::OCC::BRepCheck_Status theItem)
{
    pin_ptr<RDC::OCC::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->Append(*(::BRepCheck_Status*)pp_theItem);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_HListOfStatus::Prepend(RDC::OCC::BRepCheck_Status theItem)
{
    pin_ptr<RDC::OCC::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->Prepend(*(::BRepCheck_Status*)pp_theItem);
    return (RDC::OCC::BRepCheck_Status)_result;
}

void RDC::OCC::BRepCheck_HListOfStatus::RemoveFirst()
{
    ((::BRepCheck_HListOfStatus*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::BRepCheck_HListOfStatus::Remove(RDC::OCC::BRepCheck_HListOfStatus::Iterator^ theIter)
{
    ((::BRepCheck_HListOfStatus*)_NativeInstance)->Remove(*(::BRepCheck_HListOfStatus::Iterator*)theIter->NativeInstance);
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_HListOfStatus::InsertBefore(RDC::OCC::BRepCheck_Status theItem, RDC::OCC::BRepCheck_HListOfStatus::Iterator^ theIter)
{
    pin_ptr<RDC::OCC::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->InsertBefore(*(::BRepCheck_Status*)pp_theItem, *(::BRepCheck_HListOfStatus::Iterator*)theIter->NativeInstance);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_HListOfStatus::InsertAfter(RDC::OCC::BRepCheck_Status theItem, RDC::OCC::BRepCheck_HListOfStatus::Iterator^ theIter)
{
    pin_ptr<RDC::OCC::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->InsertAfter(*(::BRepCheck_Status*)pp_theItem, *(::BRepCheck_HListOfStatus::Iterator*)theIter->NativeInstance);
    return (RDC::OCC::BRepCheck_Status)_result;
}

void RDC::OCC::BRepCheck_HListOfStatus::Reverse()
{
    ((::BRepCheck_HListOfStatus*)_NativeInstance)->Reverse();
}

RDC::OCC::BRepCheck_HListOfStatus::BRepCheck_HListOfStatus()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_HListOfStatus();
}

RDC::OCC::BRepCheck_HListOfStatus^ RDC::OCC::BRepCheck_HListOfStatus::CreateDowncasted(::BRepCheck_HListOfStatus* instance)
{
    return gcnew RDC::OCC::BRepCheck_HListOfStatus( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_HListOfStatus::Iterator
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_HListOfStatus::Iterator::Iterator()
    : RDC::OCC::BaseClass<::BRepCheck_HListOfStatus::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_HListOfStatus::Iterator();
}

bool RDC::OCC::BRepCheck_HListOfStatus::Iterator::More()
{
    bool _result = ((::BRepCheck_HListOfStatus::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::BRepCheck_HListOfStatus::Iterator::Next()
{
    ((::BRepCheck_HListOfStatus::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_HListOfStatus::Iterator::Value()
{
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus::Iterator*)_NativeInstance)->Value();
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_HListOfStatus::Iterator::ChangeValue()
{
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus::Iterator*)_NativeInstance)->ChangeValue();
    return (RDC::OCC::BRepCheck_Status)_result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_DataMapOfShapeListOfStatus
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::BRepCheck_DataMapOfShapeListOfStatus()
    : RDC::OCC::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus();
}

RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::BRepCheck_DataMapOfShapeListOfStatus(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::BRepCheck_DataMapOfShapeListOfStatus(int theNbBuckets)
    : RDC::OCC::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus(theNbBuckets, 0L);
}

void RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::Exchange(RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus^ theOther)
{
    ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Exchange(*(::BRepCheck_DataMapOfShapeListOfStatus*)theOther->NativeInstance);
}

RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus^ RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::Assign(RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus^ theOther)
{
    ::BRepCheck_DataMapOfShapeListOfStatus* _result = new ::BRepCheck_DataMapOfShapeListOfStatus();
    *_result = ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Assign(*(::BRepCheck_DataMapOfShapeListOfStatus*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus(_result);
}

void RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::ReSize(int N)
{
    ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::IsBound(RDC::OCC::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::UnBind(RDC::OCC::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

void RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::Clear(bool doReleaseMemory)
{
    ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::Clear()
{
    ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Clear(false);
}

int RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::Size()
{
    int _result = ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_DataMapOfShapeListOfStatus::Iterator
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::Iterator::Iterator()
    : RDC::OCC::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus::Iterator();
}

bool RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::Iterator::More()
{
    bool _result = ((::BRepCheck_DataMapOfShapeListOfStatus::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::Iterator::Next()
{
    ((::BRepCheck_DataMapOfShapeListOfStatus::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepCheck_DataMapOfShapeListOfStatus::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepCheck_DataMapOfShapeListOfStatus::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepCheck_IndexedDataMapOfShapeResult
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::BRepCheck_IndexedDataMapOfShapeResult()
    : RDC::OCC::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_IndexedDataMapOfShapeResult();
}

RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::BRepCheck_IndexedDataMapOfShapeResult(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_IndexedDataMapOfShapeResult(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::BRepCheck_IndexedDataMapOfShapeResult(int theNbBuckets)
    : RDC::OCC::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_IndexedDataMapOfShapeResult(theNbBuckets, 0L);
}

void RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Exchange(RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult^ theOther)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Exchange(*(::BRepCheck_IndexedDataMapOfShapeResult*)theOther->NativeInstance);
}

RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Assign(RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult^ theOther)
{
    ::BRepCheck_IndexedDataMapOfShapeResult* _result = new ::BRepCheck_IndexedDataMapOfShapeResult();
    *_result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Assign(*(::BRepCheck_IndexedDataMapOfShapeResult*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult(_result);
}

void RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::ReSize(int N)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->ReSize(N);
}

int RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Add(RDC::OCC::TopoDS_Shape^ theKey1, RDC::OCC::BRepCheck_Result^ theItem)
{
    int _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance, Handle(::BRepCheck_Result)(theItem->NativeInstance));
    return _result;
}

bool RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Contains(RDC::OCC::TopoDS_Shape^ theKey1)
{
    bool _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

void RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Substitute(int theIndex, RDC::OCC::TopoDS_Shape^ theKey1, RDC::OCC::BRepCheck_Result^ theItem)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Substitute(theIndex, *(::TopoDS_Shape*)theKey1->NativeInstance, Handle(::BRepCheck_Result)(theItem->NativeInstance));
}

void RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Swap(int theIndex1, int theIndex2)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::RemoveLast()
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::RemoveFromIndex(int theIndex)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::RemoveKey(RDC::OCC::TopoDS_Shape^ theKey1)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->RemoveKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::FindKey(int theIndex)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::BRepCheck_Result^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::FindFromIndex(int theIndex)
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->FindFromIndex(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::BRepCheck_Result::CreateDowncasted(_result.get());
}

RDC::OCC::BRepCheck_Result^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::ChangeFromIndex(int theIndex)
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::BRepCheck_Result::CreateDowncasted(_result.get());
}

int RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::FindIndex(RDC::OCC::TopoDS_Shape^ theKey1)
{
    int _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

RDC::OCC::BRepCheck_Result^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::FindFromKey(RDC::OCC::TopoDS_Shape^ theKey1)
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::BRepCheck_Result::CreateDowncasted(_result.get());
}

RDC::OCC::BRepCheck_Result^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::ChangeFromKey(RDC::OCC::TopoDS_Shape^ theKey1)
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->ChangeFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::BRepCheck_Result::CreateDowncasted(_result.get());
}

RDC::OCC::BRepCheck_Result^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Seek(RDC::OCC::TopoDS_Shape^ theKey1)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::BRepCheck_Result^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey1)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Clear(bool doReleaseMemory)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Clear()
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Clear(false);
}

int RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Size()
{
    int _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_IndexedDataMapOfShapeResult::Iterator
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Iterator::Iterator()
    : RDC::OCC::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_IndexedDataMapOfShapeResult::Iterator();
}

bool RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Iterator::More()
{
    bool _result = ((::BRepCheck_IndexedDataMapOfShapeResult::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Iterator::Next()
{
    ((::BRepCheck_IndexedDataMapOfShapeResult::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::BRepCheck_Result^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Iterator::Value()
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_IndexedDataMapOfShapeResult::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::BRepCheck_Result::CreateDowncasted(_result.get());
}

RDC::OCC::BRepCheck_Result^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Iterator::ChangeValue()
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_IndexedDataMapOfShapeResult::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::BRepCheck_Result::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepCheck_IndexedDataMapOfShapeResult::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Iterator::IsEqual(RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Iterator^ theOther)
{
    bool _result = ((::BRepCheck_IndexedDataMapOfShapeResult::Iterator*)_NativeInstance)->IsEqual(*(::BRepCheck_IndexedDataMapOfShapeResult::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::BRepCheck_IndexedDataMapOfShapeResult::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  BRepCheck
//---------------------------------------------------------------------

RDC::OCC::BRepCheck::BRepCheck()
    : RDC::OCC::BaseClass<::BRepCheck>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck();
}

void RDC::OCC::BRepCheck::Add(RDC::OCC::BRepCheck_ListOfStatus^ List, RDC::OCC::BRepCheck_Status Stat)
{
    ::BRepCheck::Add(*(::BRepCheck_ListOfStatus*)List->NativeInstance, (::BRepCheck_Status)Stat);
}

void RDC::OCC::BRepCheck::Print(RDC::OCC::BRepCheck_Status Stat, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ::BRepCheck::Print((::BRepCheck_Status)Stat, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

bool RDC::OCC::BRepCheck::SelfIntersection(RDC::OCC::TopoDS_Wire^ W, RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2)
{
    bool _result = ::BRepCheck::SelfIntersection(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
    return _result;
}

double RDC::OCC::BRepCheck::PrecCurve(RDC::OCC::Adaptor3d_Curve^ aAC3D)
{
    double _result = ::BRepCheck::PrecCurve(*(::Adaptor3d_Curve*)aAC3D->NativeInstance);
    return _result;
}

double RDC::OCC::BRepCheck::PrecSurface(RDC::OCC::Adaptor3d_Surface^ aAHSurf)
{
    double _result = ::BRepCheck::PrecSurface(Handle(::Adaptor3d_Surface)(aAHSurf->NativeInstance));
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Result
//---------------------------------------------------------------------

void RDC::OCC::BRepCheck_Result::Init(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepCheck_Result*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepCheck_Result::InContext(RDC::OCC::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Result*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void RDC::OCC::BRepCheck_Result::Minimum()
{
    ((::BRepCheck_Result*)_NativeInstance)->Minimum();
}

void RDC::OCC::BRepCheck_Result::Blind()
{
    ((::BRepCheck_Result*)_NativeInstance)->Blind();
}

void RDC::OCC::BRepCheck_Result::SetFailStatus(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepCheck_Result*)_NativeInstance)->SetFailStatus(*(::TopoDS_Shape*)S->NativeInstance);
}

RDC::OCC::BRepCheck_ListOfStatus^ RDC::OCC::BRepCheck_Result::Status()
{
    ::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
    *_result = (::BRepCheck_ListOfStatus)((::BRepCheck_Result*)_NativeInstance)->Status();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepCheck_ListOfStatus(_result);
}

bool RDC::OCC::BRepCheck_Result::IsMinimum()
{
    bool _result = ((::BRepCheck_Result*)_NativeInstance)->IsMinimum();
    return _result;
}

bool RDC::OCC::BRepCheck_Result::IsBlind()
{
    bool _result = ((::BRepCheck_Result*)_NativeInstance)->IsBlind();
    return _result;
}

void RDC::OCC::BRepCheck_Result::InitContextIterator()
{
    ((::BRepCheck_Result*)_NativeInstance)->InitContextIterator();
}

bool RDC::OCC::BRepCheck_Result::MoreShapeInContext()
{
    bool _result = ((::BRepCheck_Result*)_NativeInstance)->MoreShapeInContext();
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepCheck_Result::ContextualShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepCheck_Result*)_NativeInstance)->ContextualShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::BRepCheck_ListOfStatus^ RDC::OCC::BRepCheck_Result::StatusOnShape()
{
    ::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
    *_result = (::BRepCheck_ListOfStatus)((::BRepCheck_Result*)_NativeInstance)->StatusOnShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepCheck_ListOfStatus(_result);
}

void RDC::OCC::BRepCheck_Result::NextShapeInContext()
{
    ((::BRepCheck_Result*)_NativeInstance)->NextShapeInContext();
}

void RDC::OCC::BRepCheck_Result::SetParallel(bool theIsParallel)
{
    ((::BRepCheck_Result*)_NativeInstance)->SetParallel(theIsParallel);
}

bool RDC::OCC::BRepCheck_Result::IsStatusOnShape(RDC::OCC::TopoDS_Shape^ theShape)
{
    bool _result = ((::BRepCheck_Result*)_NativeInstance)->IsStatusOnShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

RDC::OCC::BRepCheck_ListOfStatus^ RDC::OCC::BRepCheck_Result::StatusOnShape(RDC::OCC::TopoDS_Shape^ theShape)
{
    ::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
    *_result = (::BRepCheck_ListOfStatus)((::BRepCheck_Result*)_NativeInstance)->StatusOnShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepCheck_ListOfStatus(_result);
}

RDC::OCC::BRepCheck_Result^ RDC::OCC::BRepCheck_Result::CreateDowncasted(::BRepCheck_Result* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Edge)))
        return RDC::OCC::BRepCheck_Edge::CreateDowncasted((::BRepCheck_Edge*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Face)))
        return RDC::OCC::BRepCheck_Face::CreateDowncasted((::BRepCheck_Face*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Shell)))
        return RDC::OCC::BRepCheck_Shell::CreateDowncasted((::BRepCheck_Shell*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Solid)))
        return RDC::OCC::BRepCheck_Solid::CreateDowncasted((::BRepCheck_Solid*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Vertex)))
        return RDC::OCC::BRepCheck_Vertex::CreateDowncasted((::BRepCheck_Vertex*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Wire)))
        return RDC::OCC::BRepCheck_Wire::CreateDowncasted((::BRepCheck_Wire*)instance);
    
    return gcnew RDC::OCC::BRepCheck_Result( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Analyzer
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_Analyzer::BRepCheck_Analyzer(RDC::OCC::TopoDS_Shape^ S, bool GeomControls, bool theIsParallel, bool theIsExact)
    : RDC::OCC::BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_Analyzer(*(::TopoDS_Shape*)S->NativeInstance, GeomControls, theIsParallel, theIsExact);
}

RDC::OCC::BRepCheck_Analyzer::BRepCheck_Analyzer(RDC::OCC::TopoDS_Shape^ S, bool GeomControls, bool theIsParallel)
    : RDC::OCC::BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_Analyzer(*(::TopoDS_Shape*)S->NativeInstance, GeomControls, theIsParallel, false);
}

RDC::OCC::BRepCheck_Analyzer::BRepCheck_Analyzer(RDC::OCC::TopoDS_Shape^ S, bool GeomControls)
    : RDC::OCC::BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_Analyzer(*(::TopoDS_Shape*)S->NativeInstance, GeomControls, false, false);
}

RDC::OCC::BRepCheck_Analyzer::BRepCheck_Analyzer(RDC::OCC::TopoDS_Shape^ S)
    : RDC::OCC::BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_Analyzer(*(::TopoDS_Shape*)S->NativeInstance, true, false, false);
}

void RDC::OCC::BRepCheck_Analyzer::Init(RDC::OCC::TopoDS_Shape^ S, bool GeomControls)
{
    ((::BRepCheck_Analyzer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, GeomControls);
}

void RDC::OCC::BRepCheck_Analyzer::Init(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepCheck_Analyzer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, true);
}

void RDC::OCC::BRepCheck_Analyzer::SetExactMethod(bool theIsExact)
{
    ((::BRepCheck_Analyzer*)_NativeInstance)->SetExactMethod(theIsExact);
}

bool RDC::OCC::BRepCheck_Analyzer::IsExactMethod()
{
    bool _result = ((::BRepCheck_Analyzer*)_NativeInstance)->IsExactMethod();
    return _result;
}

void RDC::OCC::BRepCheck_Analyzer::SetParallel(bool theIsParallel)
{
    ((::BRepCheck_Analyzer*)_NativeInstance)->SetParallel(theIsParallel);
}

bool RDC::OCC::BRepCheck_Analyzer::IsParallel()
{
    bool _result = ((::BRepCheck_Analyzer*)_NativeInstance)->IsParallel();
    return _result;
}

bool RDC::OCC::BRepCheck_Analyzer::IsValid(RDC::OCC::TopoDS_Shape^ S)
{
    bool _result = ((::BRepCheck_Analyzer*)_NativeInstance)->IsValid(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepCheck_Analyzer::IsValid()
{
    bool _result = ((::BRepCheck_Analyzer*)_NativeInstance)->IsValid();
    return _result;
}

RDC::OCC::BRepCheck_Result^ RDC::OCC::BRepCheck_Analyzer::Result(RDC::OCC::TopoDS_Shape^ theSubS)
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_Analyzer*)_NativeInstance)->Result(*(::TopoDS_Shape*)theSubS->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::BRepCheck_Result::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Edge
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_Edge::BRepCheck_Edge(RDC::OCC::TopoDS_Edge^ E)
    : RDC::OCC::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Edge(*(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::BRepCheck_Edge::InContext(RDC::OCC::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Edge*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void RDC::OCC::BRepCheck_Edge::Minimum()
{
    ((::BRepCheck_Edge*)_NativeInstance)->Minimum();
}

void RDC::OCC::BRepCheck_Edge::Blind()
{
    ((::BRepCheck_Edge*)_NativeInstance)->Blind();
}

bool RDC::OCC::BRepCheck_Edge::GeometricControls()
{
    bool _result = ((::BRepCheck_Edge*)_NativeInstance)->GeometricControls();
    return _result;
}

void RDC::OCC::BRepCheck_Edge::GeometricControls(bool B)
{
    ((::BRepCheck_Edge*)_NativeInstance)->GeometricControls(B);
}

double RDC::OCC::BRepCheck_Edge::Tolerance()
{
    double _result = ((::BRepCheck_Edge*)_NativeInstance)->Tolerance();
    return _result;
}

void RDC::OCC::BRepCheck_Edge::SetStatus(RDC::OCC::BRepCheck_Status theStatus)
{
    ((::BRepCheck_Edge*)_NativeInstance)->SetStatus((::BRepCheck_Status)theStatus);
}

void RDC::OCC::BRepCheck_Edge::SetExactMethod(bool theIsExact)
{
    ((::BRepCheck_Edge*)_NativeInstance)->SetExactMethod(theIsExact);
}

bool RDC::OCC::BRepCheck_Edge::IsExactMethod()
{
    bool _result = ((::BRepCheck_Edge*)_NativeInstance)->IsExactMethod();
    return _result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Edge::CheckPolygonOnTriangulation(RDC::OCC::TopoDS_Edge^ theEdge)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Edge*)_NativeInstance)->CheckPolygonOnTriangulation(*(::TopoDS_Edge*)theEdge->NativeInstance);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Edge^ RDC::OCC::BRepCheck_Edge::CreateDowncasted(::BRepCheck_Edge* instance)
{
    return gcnew RDC::OCC::BRepCheck_Edge( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Face
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_Face::BRepCheck_Face(RDC::OCC::TopoDS_Face^ F)
    : RDC::OCC::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Face(*(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepCheck_Face::InContext(RDC::OCC::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Face*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void RDC::OCC::BRepCheck_Face::Minimum()
{
    ((::BRepCheck_Face*)_NativeInstance)->Minimum();
}

void RDC::OCC::BRepCheck_Face::Blind()
{
    ((::BRepCheck_Face*)_NativeInstance)->Blind();
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Face::IntersectWires(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->IntersectWires(Update);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Face::IntersectWires()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->IntersectWires(false);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Face::ClassifyWires(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->ClassifyWires(Update);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Face::ClassifyWires()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->ClassifyWires(false);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Face::OrientationOfWires(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->OrientationOfWires(Update);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Face::OrientationOfWires()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->OrientationOfWires(false);
    return (RDC::OCC::BRepCheck_Status)_result;
}

void RDC::OCC::BRepCheck_Face::SetUnorientable()
{
    ((::BRepCheck_Face*)_NativeInstance)->SetUnorientable();
}

void RDC::OCC::BRepCheck_Face::SetStatus(RDC::OCC::BRepCheck_Status theStatus)
{
    ((::BRepCheck_Face*)_NativeInstance)->SetStatus((::BRepCheck_Status)theStatus);
}

bool RDC::OCC::BRepCheck_Face::IsUnorientable()
{
    bool _result = ((::BRepCheck_Face*)_NativeInstance)->IsUnorientable();
    return _result;
}

bool RDC::OCC::BRepCheck_Face::GeometricControls()
{
    bool _result = ((::BRepCheck_Face*)_NativeInstance)->GeometricControls();
    return _result;
}

void RDC::OCC::BRepCheck_Face::GeometricControls(bool B)
{
    ((::BRepCheck_Face*)_NativeInstance)->GeometricControls(B);
}

RDC::OCC::BRepCheck_Face^ RDC::OCC::BRepCheck_Face::CreateDowncasted(::BRepCheck_Face* instance)
{
    return gcnew RDC::OCC::BRepCheck_Face( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Shell
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_Shell::BRepCheck_Shell(RDC::OCC::TopoDS_Shell^ S)
    : RDC::OCC::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Shell(*(::TopoDS_Shell*)S->NativeInstance);
}

void RDC::OCC::BRepCheck_Shell::InContext(RDC::OCC::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Shell*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void RDC::OCC::BRepCheck_Shell::Minimum()
{
    ((::BRepCheck_Shell*)_NativeInstance)->Minimum();
}

void RDC::OCC::BRepCheck_Shell::Blind()
{
    ((::BRepCheck_Shell*)_NativeInstance)->Blind();
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Shell::Closed(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Shell*)_NativeInstance)->Closed(Update);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Shell::Closed()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Shell*)_NativeInstance)->Closed(false);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Shell::Orientation(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Shell*)_NativeInstance)->Orientation(Update);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Shell::Orientation()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Shell*)_NativeInstance)->Orientation(false);
    return (RDC::OCC::BRepCheck_Status)_result;
}

void RDC::OCC::BRepCheck_Shell::SetUnorientable()
{
    ((::BRepCheck_Shell*)_NativeInstance)->SetUnorientable();
}

bool RDC::OCC::BRepCheck_Shell::IsUnorientable()
{
    bool _result = ((::BRepCheck_Shell*)_NativeInstance)->IsUnorientable();
    return _result;
}

int RDC::OCC::BRepCheck_Shell::NbConnectedSet(RDC::OCC::TopTools_ListOfShape^ theSets)
{
    int _result = ((::BRepCheck_Shell*)_NativeInstance)->NbConnectedSet(*(::TopTools_ListOfShape*)theSets->NativeInstance);
    return _result;
}

RDC::OCC::BRepCheck_Shell^ RDC::OCC::BRepCheck_Shell::CreateDowncasted(::BRepCheck_Shell* instance)
{
    return gcnew RDC::OCC::BRepCheck_Shell( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Solid
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_Solid::BRepCheck_Solid(RDC::OCC::TopoDS_Solid^ theS)
    : RDC::OCC::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Solid(*(::TopoDS_Solid*)theS->NativeInstance);
}

void RDC::OCC::BRepCheck_Solid::InContext(RDC::OCC::TopoDS_Shape^ theContextShape)
{
    ((::BRepCheck_Solid*)_NativeInstance)->InContext(*(::TopoDS_Shape*)theContextShape->NativeInstance);
}

void RDC::OCC::BRepCheck_Solid::Minimum()
{
    ((::BRepCheck_Solid*)_NativeInstance)->Minimum();
}

void RDC::OCC::BRepCheck_Solid::Blind()
{
    ((::BRepCheck_Solid*)_NativeInstance)->Blind();
}

RDC::OCC::BRepCheck_Solid^ RDC::OCC::BRepCheck_Solid::CreateDowncasted(::BRepCheck_Solid* instance)
{
    return gcnew RDC::OCC::BRepCheck_Solid( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Vertex
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_Vertex::BRepCheck_Vertex(RDC::OCC::TopoDS_Vertex^ V)
    : RDC::OCC::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Vertex(*(::TopoDS_Vertex*)V->NativeInstance);
}

void RDC::OCC::BRepCheck_Vertex::InContext(RDC::OCC::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Vertex*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void RDC::OCC::BRepCheck_Vertex::Minimum()
{
    ((::BRepCheck_Vertex*)_NativeInstance)->Minimum();
}

void RDC::OCC::BRepCheck_Vertex::Blind()
{
    ((::BRepCheck_Vertex*)_NativeInstance)->Blind();
}

double RDC::OCC::BRepCheck_Vertex::Tolerance()
{
    double _result = ((::BRepCheck_Vertex*)_NativeInstance)->Tolerance();
    return _result;
}

RDC::OCC::BRepCheck_Vertex^ RDC::OCC::BRepCheck_Vertex::CreateDowncasted(::BRepCheck_Vertex* instance)
{
    return gcnew RDC::OCC::BRepCheck_Vertex( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Wire
//---------------------------------------------------------------------

RDC::OCC::BRepCheck_Wire::BRepCheck_Wire(RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Wire(*(::TopoDS_Wire*)W->NativeInstance);
}

void RDC::OCC::BRepCheck_Wire::InContext(RDC::OCC::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Wire*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void RDC::OCC::BRepCheck_Wire::Minimum()
{
    ((::BRepCheck_Wire*)_NativeInstance)->Minimum();
}

void RDC::OCC::BRepCheck_Wire::Blind()
{
    ((::BRepCheck_Wire*)_NativeInstance)->Blind();
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Wire::Closed(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Closed(Update);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Wire::Closed()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Closed(false);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Wire::Closed2d(RDC::OCC::TopoDS_Face^ F, bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Closed2d(*(::TopoDS_Face*)F->NativeInstance, Update);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Wire::Closed2d(RDC::OCC::TopoDS_Face^ F)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Closed2d(*(::TopoDS_Face*)F->NativeInstance, false);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Wire::Orientation(RDC::OCC::TopoDS_Face^ F, bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Orientation(*(::TopoDS_Face*)F->NativeInstance, Update);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Wire::Orientation(RDC::OCC::TopoDS_Face^ F)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Orientation(*(::TopoDS_Face*)F->NativeInstance, false);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Wire::SelfIntersect(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2, bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->SelfIntersect(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, Update);
    return (RDC::OCC::BRepCheck_Status)_result;
}

RDC::OCC::BRepCheck_Status RDC::OCC::BRepCheck_Wire::SelfIntersect(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->SelfIntersect(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, false);
    return (RDC::OCC::BRepCheck_Status)_result;
}

bool RDC::OCC::BRepCheck_Wire::GeometricControls()
{
    bool _result = ((::BRepCheck_Wire*)_NativeInstance)->GeometricControls();
    return _result;
}

void RDC::OCC::BRepCheck_Wire::GeometricControls(bool B)
{
    ((::BRepCheck_Wire*)_NativeInstance)->GeometricControls(B);
}

void RDC::OCC::BRepCheck_Wire::SetStatus(RDC::OCC::BRepCheck_Status theStatus)
{
    ((::BRepCheck_Wire*)_NativeInstance)->SetStatus((::BRepCheck_Status)theStatus);
}

RDC::OCC::BRepCheck_Wire^ RDC::OCC::BRepCheck_Wire::CreateDowncasted(::BRepCheck_Wire* instance)
{
    return gcnew RDC::OCC::BRepCheck_Wire( instance );
}


