// Generated wrapper code for package TopLoc

#include "OcctPCH.h"
#include "TopLoc.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  TopLoc_IndexedMapOfLocation
//---------------------------------------------------------------------

RDC::OCC::TopLoc_IndexedMapOfLocation::TopLoc_IndexedMapOfLocation()
    : RDC::OCC::BaseClass<::TopLoc_IndexedMapOfLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_IndexedMapOfLocation();
}

RDC::OCC::TopLoc_IndexedMapOfLocation::TopLoc_IndexedMapOfLocation(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TopLoc_IndexedMapOfLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_IndexedMapOfLocation(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TopLoc_IndexedMapOfLocation::TopLoc_IndexedMapOfLocation(int theNbBuckets)
    : RDC::OCC::BaseClass<::TopLoc_IndexedMapOfLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_IndexedMapOfLocation(theNbBuckets, 0L);
}

void RDC::OCC::TopLoc_IndexedMapOfLocation::Exchange(RDC::OCC::TopLoc_IndexedMapOfLocation^ theOther)
{
    ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Exchange(*(::TopLoc_IndexedMapOfLocation*)theOther->NativeInstance);
}

RDC::OCC::TopLoc_IndexedMapOfLocation^ RDC::OCC::TopLoc_IndexedMapOfLocation::Assign(RDC::OCC::TopLoc_IndexedMapOfLocation^ theOther)
{
    ::TopLoc_IndexedMapOfLocation* _result = new ::TopLoc_IndexedMapOfLocation();
    *_result = ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Assign(*(::TopLoc_IndexedMapOfLocation*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_IndexedMapOfLocation(_result);
}

void RDC::OCC::TopLoc_IndexedMapOfLocation::ReSize(int theExtent)
{
    ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->ReSize(theExtent);
}

int RDC::OCC::TopLoc_IndexedMapOfLocation::Add(RDC::OCC::TopLoc_Location^ theKey1)
{
    int _result = ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Add(*(::TopLoc_Location*)theKey1->NativeInstance);
    return _result;
}

bool RDC::OCC::TopLoc_IndexedMapOfLocation::Contains(RDC::OCC::TopLoc_Location^ theKey1)
{
    bool _result = ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Contains(*(::TopLoc_Location*)theKey1->NativeInstance);
    return _result;
}

void RDC::OCC::TopLoc_IndexedMapOfLocation::Substitute(int theIndex, RDC::OCC::TopLoc_Location^ theKey1)
{
    ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Substitute(theIndex, *(::TopLoc_Location*)theKey1->NativeInstance);
}

void RDC::OCC::TopLoc_IndexedMapOfLocation::Swap(int theIndex1, int theIndex2)
{
    ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void RDC::OCC::TopLoc_IndexedMapOfLocation::RemoveLast()
{
    ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::TopLoc_IndexedMapOfLocation::RemoveFromIndex(int theIndex)
{
    ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool RDC::OCC::TopLoc_IndexedMapOfLocation::RemoveKey(RDC::OCC::TopLoc_Location^ theKey1)
{
    bool _result = ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->RemoveKey(*(::TopLoc_Location*)theKey1->NativeInstance);
    return _result;
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_IndexedMapOfLocation::FindKey(int theIndex)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

int RDC::OCC::TopLoc_IndexedMapOfLocation::FindIndex(RDC::OCC::TopLoc_Location^ theKey1)
{
    int _result = ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->FindIndex(*(::TopLoc_Location*)theKey1->NativeInstance);
    return _result;
}

void RDC::OCC::TopLoc_IndexedMapOfLocation::Clear(bool doReleaseMemory)
{
    ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TopLoc_IndexedMapOfLocation::Clear()
{
    ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TopLoc_IndexedMapOfLocation::Size()
{
    int _result = ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopLoc_IndexedMapOfLocation::Iterator
//---------------------------------------------------------------------

RDC::OCC::TopLoc_IndexedMapOfLocation::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TopLoc_IndexedMapOfLocation::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_IndexedMapOfLocation::Iterator();
}

bool RDC::OCC::TopLoc_IndexedMapOfLocation::Iterator::More()
{
    bool _result = ((::TopLoc_IndexedMapOfLocation::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TopLoc_IndexedMapOfLocation::Iterator::Next()
{
    ((::TopLoc_IndexedMapOfLocation::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_IndexedMapOfLocation::Iterator::Value()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopLoc_IndexedMapOfLocation::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

bool RDC::OCC::TopLoc_IndexedMapOfLocation::Iterator::IsEqual(RDC::OCC::TopLoc_IndexedMapOfLocation::Iterator^ theOther)
{
    bool _result = ((::TopLoc_IndexedMapOfLocation::Iterator*)_NativeInstance)->IsEqual(*(::TopLoc_IndexedMapOfLocation::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TopLoc_IndexedMapOfLocation::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TopLoc_IndexedMapOfLocation::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TopLoc_MapOfLocation
//---------------------------------------------------------------------

RDC::OCC::TopLoc_MapOfLocation::TopLoc_MapOfLocation()
    : RDC::OCC::BaseClass<::TopLoc_MapOfLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_MapOfLocation();
}

RDC::OCC::TopLoc_MapOfLocation::TopLoc_MapOfLocation(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::TopLoc_MapOfLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_MapOfLocation(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::TopLoc_MapOfLocation::TopLoc_MapOfLocation(int theNbBuckets)
    : RDC::OCC::BaseClass<::TopLoc_MapOfLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_MapOfLocation(theNbBuckets, 0L);
}

void RDC::OCC::TopLoc_MapOfLocation::Exchange(RDC::OCC::TopLoc_MapOfLocation^ theOther)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Exchange(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
}

RDC::OCC::TopLoc_MapOfLocation^ RDC::OCC::TopLoc_MapOfLocation::Assign(RDC::OCC::TopLoc_MapOfLocation^ theOther)
{
    ::TopLoc_MapOfLocation* _result = new ::TopLoc_MapOfLocation();
    *_result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Assign(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_MapOfLocation(_result);
}

void RDC::OCC::TopLoc_MapOfLocation::ReSize(int N)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::TopLoc_MapOfLocation::Add(RDC::OCC::TopLoc_Location^ theKey)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Add(*(::TopLoc_Location*)theKey->NativeInstance);
    return _result;
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_MapOfLocation::Added(RDC::OCC::TopLoc_Location^ theKey)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopLoc_MapOfLocation*)_NativeInstance)->Added(*(::TopLoc_Location*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

bool RDC::OCC::TopLoc_MapOfLocation::Contains(RDC::OCC::TopLoc_Location^ theKey)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Contains(*(::TopLoc_Location*)theKey->NativeInstance);
    return _result;
}

bool RDC::OCC::TopLoc_MapOfLocation::Remove(RDC::OCC::TopLoc_Location^ K)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Remove(*(::TopLoc_Location*)K->NativeInstance);
    return _result;
}

void RDC::OCC::TopLoc_MapOfLocation::Clear(bool doReleaseMemory)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::TopLoc_MapOfLocation::Clear()
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Clear(false);
}

int RDC::OCC::TopLoc_MapOfLocation::Size()
{
    int _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Size();
    return _result;
}

bool RDC::OCC::TopLoc_MapOfLocation::IsEqual(RDC::OCC::TopLoc_MapOfLocation^ theOther)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->IsEqual(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result;
}

void RDC::OCC::TopLoc_MapOfLocation::Union(RDC::OCC::TopLoc_MapOfLocation^ theLeft, RDC::OCC::TopLoc_MapOfLocation^ theRight)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Union(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool RDC::OCC::TopLoc_MapOfLocation::Unite(RDC::OCC::TopLoc_MapOfLocation^ theOther)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Unite(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TopLoc_MapOfLocation::HasIntersection(RDC::OCC::TopLoc_MapOfLocation^ theMap)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->HasIntersection(*(::TopLoc_MapOfLocation*)theMap->NativeInstance);
    return _result;
}

void RDC::OCC::TopLoc_MapOfLocation::Intersection(RDC::OCC::TopLoc_MapOfLocation^ theLeft, RDC::OCC::TopLoc_MapOfLocation^ theRight)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Intersection(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool RDC::OCC::TopLoc_MapOfLocation::Intersect(RDC::OCC::TopLoc_MapOfLocation^ theOther)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Intersect(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result;
}

void RDC::OCC::TopLoc_MapOfLocation::Subtraction(RDC::OCC::TopLoc_MapOfLocation^ theLeft, RDC::OCC::TopLoc_MapOfLocation^ theRight)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Subtraction(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool RDC::OCC::TopLoc_MapOfLocation::Subtract(RDC::OCC::TopLoc_MapOfLocation^ theOther)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Subtract(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result;
}

void RDC::OCC::TopLoc_MapOfLocation::Difference(RDC::OCC::TopLoc_MapOfLocation^ theLeft, RDC::OCC::TopLoc_MapOfLocation^ theRight)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Difference(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool RDC::OCC::TopLoc_MapOfLocation::Differ(RDC::OCC::TopLoc_MapOfLocation^ theOther)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Differ(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TopLoc_MapOfLocation::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TopLoc_MapOfLocation::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TopLoc_MapOfLocation^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TopLoc_MapOfLocation::Iterator
//---------------------------------------------------------------------

RDC::OCC::TopLoc_MapOfLocation::Iterator::Iterator()
    : RDC::OCC::BaseClass<::TopLoc_MapOfLocation::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_MapOfLocation::Iterator();
}

bool RDC::OCC::TopLoc_MapOfLocation::Iterator::More()
{
    bool _result = ((::TopLoc_MapOfLocation::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TopLoc_MapOfLocation::Iterator::Next()
{
    ((::TopLoc_MapOfLocation::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_MapOfLocation::Iterator::Value()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopLoc_MapOfLocation::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_MapOfLocation::Iterator::Key()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopLoc_MapOfLocation::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}



//---------------------------------------------------------------------
//  Class  TopLoc_Datum3D
//---------------------------------------------------------------------

RDC::OCC::TopLoc_Datum3D::TopLoc_Datum3D()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopLoc_Datum3D();
}

RDC::OCC::TopLoc_Datum3D::TopLoc_Datum3D(RDC::OCC::Trsf T)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf> pp_T = &T;
    NativeInstance = new ::TopLoc_Datum3D(*(gp_Trsf*)pp_T);
}

RDC::OCC::Trsf RDC::OCC::TopLoc_Datum3D::Transformation()
{
    ::gp_Trsf _nativeResult = ((::TopLoc_Datum3D*)_NativeInstance)->Transformation();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::Trsf RDC::OCC::TopLoc_Datum3D::Trsf()
{
    ::gp_Trsf _nativeResult = ((::TopLoc_Datum3D*)_NativeInstance)->Trsf();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::TrsfForm RDC::OCC::TopLoc_Datum3D::Form()
{
    ::gp_TrsfForm _result = ((::TopLoc_Datum3D*)_NativeInstance)->Form();
    return (RDC::OCC::TrsfForm)_result;
}

void RDC::OCC::TopLoc_Datum3D::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_Datum3D*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::TopLoc_Datum3D::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_Datum3D*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::TopLoc_Datum3D::ShallowDump(System::IO::TextWriter^ S)
{
    std::ostringstream oss_S;
    ((::TopLoc_Datum3D*)_NativeInstance)->ShallowDump(oss_S);
    S->Write(gcnew System::String(oss_S.str().c_str()));
}

RDC::OCC::TopLoc_Datum3D^ RDC::OCC::TopLoc_Datum3D::CreateDowncasted(::TopLoc_Datum3D* instance)
{
    return gcnew RDC::OCC::TopLoc_Datum3D( instance );
}



//---------------------------------------------------------------------
//  Class  TopLoc_SListNodeOfItemLocation
//---------------------------------------------------------------------

RDC::OCC::TopLoc_SListNodeOfItemLocation::TopLoc_SListNodeOfItemLocation(RDC::OCC::TopLoc_ItemLocation^ I, RDC::OCC::TopLoc_SListOfItemLocation^ aTail)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopLoc_SListNodeOfItemLocation(*(::TopLoc_ItemLocation*)I->NativeInstance, *(::TopLoc_SListOfItemLocation*)aTail->NativeInstance);
}

RDC::OCC::TopLoc_SListOfItemLocation^ RDC::OCC::TopLoc_SListNodeOfItemLocation::Tail()
{
    ::TopLoc_SListOfItemLocation* _result = new ::TopLoc_SListOfItemLocation();
    *_result = ((::TopLoc_SListNodeOfItemLocation*)_NativeInstance)->Tail();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_SListOfItemLocation(_result);
}

RDC::OCC::TopLoc_ItemLocation^ RDC::OCC::TopLoc_SListNodeOfItemLocation::Value()
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TopLoc_SListNodeOfItemLocation^ RDC::OCC::TopLoc_SListNodeOfItemLocation::CreateDowncasted(::TopLoc_SListNodeOfItemLocation* instance)
{
    return gcnew RDC::OCC::TopLoc_SListNodeOfItemLocation( instance );
}



//---------------------------------------------------------------------
//  Class  TopLoc_ItemLocation
//---------------------------------------------------------------------

RDC::OCC::TopLoc_ItemLocation::TopLoc_ItemLocation(RDC::OCC::TopLoc_Datum3D^ D, int P)
    : RDC::OCC::BaseClass<::TopLoc_ItemLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_ItemLocation(Handle(::TopLoc_Datum3D)(D->NativeInstance), P);
}

void RDC::OCC::TopLoc_ItemLocation::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_ItemLocation*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::TopLoc_ItemLocation::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_ItemLocation*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  TopLoc_SListOfItemLocation
//---------------------------------------------------------------------

RDC::OCC::TopLoc_SListOfItemLocation::TopLoc_SListOfItemLocation()
    : RDC::OCC::BaseClass<::TopLoc_SListOfItemLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_SListOfItemLocation();
}

RDC::OCC::TopLoc_SListOfItemLocation::TopLoc_SListOfItemLocation(RDC::OCC::TopLoc_ItemLocation^ anItem, RDC::OCC::TopLoc_SListOfItemLocation^ aTail)
    : RDC::OCC::BaseClass<::TopLoc_SListOfItemLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_SListOfItemLocation(*(::TopLoc_ItemLocation*)anItem->NativeInstance, *(::TopLoc_SListOfItemLocation*)aTail->NativeInstance);
}

RDC::OCC::TopLoc_SListOfItemLocation^ RDC::OCC::TopLoc_SListOfItemLocation::Assign(RDC::OCC::TopLoc_SListOfItemLocation^ Other)
{
    ::TopLoc_SListOfItemLocation* _result = new ::TopLoc_SListOfItemLocation();
    *_result = ((::TopLoc_SListOfItemLocation*)_NativeInstance)->Assign(*(::TopLoc_SListOfItemLocation*)Other->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_SListOfItemLocation(_result);
}

bool RDC::OCC::TopLoc_SListOfItemLocation::IsEmpty()
{
    bool _result = ((::TopLoc_SListOfItemLocation*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::TopLoc_SListOfItemLocation::Clear()
{
    ((::TopLoc_SListOfItemLocation*)_NativeInstance)->Clear();
}

RDC::OCC::TopLoc_ItemLocation^ RDC::OCC::TopLoc_SListOfItemLocation::Value()
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::TopLoc_SListOfItemLocation^ RDC::OCC::TopLoc_SListOfItemLocation::Tail()
{
    ::TopLoc_SListOfItemLocation* _result = new ::TopLoc_SListOfItemLocation();
    *_result = (::TopLoc_SListOfItemLocation)((::TopLoc_SListOfItemLocation*)_NativeInstance)->Tail();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_SListOfItemLocation(_result);
}

void RDC::OCC::TopLoc_SListOfItemLocation::Construct(RDC::OCC::TopLoc_ItemLocation^ anItem)
{
    ((::TopLoc_SListOfItemLocation*)_NativeInstance)->Construct(*(::TopLoc_ItemLocation*)anItem->NativeInstance);
}

void RDC::OCC::TopLoc_SListOfItemLocation::ToTail()
{
    ((::TopLoc_SListOfItemLocation*)_NativeInstance)->ToTail();
}

bool RDC::OCC::TopLoc_SListOfItemLocation::More()
{
    bool _result = ((::TopLoc_SListOfItemLocation*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TopLoc_SListOfItemLocation::Next()
{
    ((::TopLoc_SListOfItemLocation*)_NativeInstance)->Next();
}



//---------------------------------------------------------------------
//  Class  TopLoc_Location
//---------------------------------------------------------------------

RDC::OCC::TopLoc_Location::TopLoc_Location()
    : RDC::OCC::BaseClass<::TopLoc_Location>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_Location();
}

RDC::OCC::TopLoc_Location::TopLoc_Location(RDC::OCC::Trsf T)
    : RDC::OCC::BaseClass<::TopLoc_Location>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf> pp_T = &T;
    _NativeInstance = new ::TopLoc_Location(*(gp_Trsf*)pp_T);
}

RDC::OCC::TopLoc_Location::TopLoc_Location(RDC::OCC::TopLoc_Datum3D^ D)
    : RDC::OCC::BaseClass<::TopLoc_Location>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_Location(Handle(::TopLoc_Datum3D)(D->NativeInstance));
}

bool RDC::OCC::TopLoc_Location::IsIdentity()
{
    bool _result = ((::TopLoc_Location*)_NativeInstance)->IsIdentity();
    return _result;
}

void RDC::OCC::TopLoc_Location::Identity()
{
    ((::TopLoc_Location*)_NativeInstance)->Identity();
}

RDC::OCC::TopLoc_Datum3D^ RDC::OCC::TopLoc_Location::FirstDatum()
{
    Handle(::TopLoc_Datum3D) _result = ((::TopLoc_Location*)_NativeInstance)->FirstDatum();
    return _result.IsNull() ? nullptr : RDC::OCC::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

int RDC::OCC::TopLoc_Location::FirstPower()
{
    int _result = ((::TopLoc_Location*)_NativeInstance)->FirstPower();
    return _result;
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_Location::NextLocation()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopLoc_Location*)_NativeInstance)->NextLocation();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

RDC::OCC::Trsf RDC::OCC::TopLoc_Location::Transformation()
{
    ::gp_Trsf _nativeResult = ((::TopLoc_Location*)_NativeInstance)->Transformation();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_Location::Inverted()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::TopLoc_Location*)_NativeInstance)->Inverted();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_Location::Multiplied(RDC::OCC::TopLoc_Location^ Other)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::TopLoc_Location*)_NativeInstance)->Multiplied(*(::TopLoc_Location*)Other->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_Location::Divided(RDC::OCC::TopLoc_Location^ Other)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::TopLoc_Location*)_NativeInstance)->Divided(*(::TopLoc_Location*)Other->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_Location::Predivided(RDC::OCC::TopLoc_Location^ Other)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::TopLoc_Location*)_NativeInstance)->Predivided(*(::TopLoc_Location*)Other->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopLoc_Location::Powered(int pwr)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::TopLoc_Location*)_NativeInstance)->Powered(pwr);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

long long unsigned int RDC::OCC::TopLoc_Location::HashCode()
{
    long long unsigned int _result = ((::TopLoc_Location*)_NativeInstance)->HashCode();
    return _result;
}

bool RDC::OCC::TopLoc_Location::IsEqual(RDC::OCC::TopLoc_Location^ Other)
{
    bool _result = ((::TopLoc_Location*)_NativeInstance)->IsEqual(*(::TopLoc_Location*)Other->NativeInstance);
    return _result;
}

bool RDC::OCC::TopLoc_Location::IsDifferent(RDC::OCC::TopLoc_Location^ Other)
{
    bool _result = ((::TopLoc_Location*)_NativeInstance)->IsDifferent(*(::TopLoc_Location*)Other->NativeInstance);
    return _result;
}

void RDC::OCC::TopLoc_Location::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_Location*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::TopLoc_Location::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_Location*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::TopLoc_Location::ShallowDump(System::IO::TextWriter^ S)
{
    std::ostringstream oss_S;
    ((::TopLoc_Location*)_NativeInstance)->ShallowDump(oss_S);
    S->Write(gcnew System::String(oss_S.str().c_str()));
}

void RDC::OCC::TopLoc_Location::Clear()
{
    ((::TopLoc_Location*)_NativeInstance)->Clear();
}

double RDC::OCC::TopLoc_Location::ScalePrec()
{
    double _result = ::TopLoc_Location::ScalePrec();
    return _result;
}

bool RDC::OCC::TopLoc_Location::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TopLoc_Location::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TopLoc_Location^)obj)->NativeInstance);
    }
    return false;
}


