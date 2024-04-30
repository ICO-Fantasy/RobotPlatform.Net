// Generated wrapper code for package NCollection

#include "OcctPCH.h"
#include "NCollection.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "TColStd.h"
#include "Message.h"
#include "IntAna.h"
#include "TopoDS.h"
#include "BRep.h"
#include "TopTools.h"
#include "BRepCheck.h"
#include "Graphic3d.h"
#include "PrsMgr.h"
#include "SelectMgr.h"
#include "Prs3d.h"
#include "AIS.h"
#include "V3d.h"
#include "Image.h"


//---------------------------------------------------------------------
//  Class  NCollection_CellFilter_InspectorXYZ
//---------------------------------------------------------------------

RDC::OCC::NCollection_CellFilter_InspectorXYZ::NCollection_CellFilter_InspectorXYZ()
	: RDC::OCC::BaseClass<::NCollection_CellFilter_InspectorXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::NCollection_CellFilter_InspectorXYZ();
}

double RDC::OCC::NCollection_CellFilter_InspectorXYZ::Coord(int i, RDC::OCC::XYZ thePnt)
{
	pin_ptr<RDC::OCC::XYZ> pp_thePnt = &thePnt;
	double _result = ::NCollection_CellFilter_InspectorXYZ::Coord(i, *(gp_XYZ*)pp_thePnt);
	return _result;
}

RDC::OCC::XYZ RDC::OCC::NCollection_CellFilter_InspectorXYZ::Shift(RDC::OCC::XYZ thePnt, double theTol)
{
	pin_ptr<RDC::OCC::XYZ> pp_thePnt = &thePnt;
	::gp_XYZ _nativeResult = ((::NCollection_CellFilter_InspectorXYZ*)_NativeInstance)->Shift(*(gp_XYZ*)pp_thePnt, theTol);
	return RDC::OCC::XYZ(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  NCollection_CellFilter_InspectorXY
//---------------------------------------------------------------------

RDC::OCC::NCollection_CellFilter_InspectorXY::NCollection_CellFilter_InspectorXY()
	: RDC::OCC::BaseClass<::NCollection_CellFilter_InspectorXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::NCollection_CellFilter_InspectorXY();
}

double RDC::OCC::NCollection_CellFilter_InspectorXY::Coord(int i, RDC::OCC::XY thePnt)
{
	pin_ptr<RDC::OCC::XY> pp_thePnt = &thePnt;
	double _result = ::NCollection_CellFilter_InspectorXY::Coord(i, *(gp_XY*)pp_thePnt);
	return _result;
}

RDC::OCC::XY RDC::OCC::NCollection_CellFilter_InspectorXY::Shift(RDC::OCC::XY thePnt, double theTol)
{
	pin_ptr<RDC::OCC::XY> pp_thePnt = &thePnt;
	::gp_XY _nativeResult = ((::NCollection_CellFilter_InspectorXY*)_NativeInstance)->Shift(*(gp_XY*)pp_thePnt, theTol);
	return RDC::OCC::XY(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  NCollection_BaseAllocator
//---------------------------------------------------------------------

System::IntPtr RDC::OCC::NCollection_BaseAllocator::Allocate(long long unsigned int theSize)
{
	void* _result = ((::NCollection_BaseAllocator*)_NativeInstance)->Allocate(theSize);
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::NCollection_BaseAllocator::AllocateOptimal(long long unsigned int theSize)
{
	void* _result = ((::NCollection_BaseAllocator*)_NativeInstance)->AllocateOptimal(theSize);
	return System::IntPtr(_result);
}

void RDC::OCC::NCollection_BaseAllocator::Free(System::IntPtr theAddress)
{
	((::NCollection_BaseAllocator*)_NativeInstance)->Free(theAddress.ToPointer());
}

RDC::OCC::NCollection_BaseAllocator^ RDC::OCC::NCollection_BaseAllocator::CommonBaseAllocator()
{
	Handle(::NCollection_BaseAllocator) _result = ::NCollection_BaseAllocator::CommonBaseAllocator();
	return _result.IsNull() ? nullptr : RDC::OCC::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}

RDC::OCC::NCollection_BaseAllocator^ RDC::OCC::NCollection_BaseAllocator::CreateDowncasted(::NCollection_BaseAllocator* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::NCollection_AccAllocator)))
		return RDC::OCC::NCollection_AccAllocator::CreateDowncasted((::NCollection_AccAllocator*)instance);
	if (instance->IsKind(STANDARD_TYPE(::NCollection_AlignedAllocator)))
		return RDC::OCC::NCollection_AlignedAllocator::CreateDowncasted((::NCollection_AlignedAllocator*)instance);
	if (instance->IsKind(STANDARD_TYPE(::NCollection_IncAllocator)))
		return RDC::OCC::NCollection_IncAllocator::CreateDowncasted((::NCollection_IncAllocator*)instance);
	if (instance->IsKind(STANDARD_TYPE(::NCollection_HeapAllocator)))
		return RDC::OCC::NCollection_HeapAllocator::CreateDowncasted((::NCollection_HeapAllocator*)instance);
	if (instance->IsKind(STANDARD_TYPE(::NCollection_WinHeapAllocator)))
		return RDC::OCC::NCollection_WinHeapAllocator::CreateDowncasted((::NCollection_WinHeapAllocator*)instance);

	return gcnew RDC::OCC::NCollection_BaseAllocator(instance);
}



//---------------------------------------------------------------------
//  Class  NCollection_BaseList
//---------------------------------------------------------------------

int RDC::OCC::NCollection_BaseList::Extent()
{
	int _result = ((::NCollection_BaseList*)_NativeInstance)->Extent();
	return _result;
}

bool RDC::OCC::NCollection_BaseList::IsEmpty()
{
	bool _result = ((::NCollection_BaseList*)_NativeInstance)->IsEmpty();
	return _result;
}

RDC::OCC::NCollection_BaseAllocator^ RDC::OCC::NCollection_BaseList::Allocator()
{
	Handle(::NCollection_BaseAllocator) _result = ((::NCollection_BaseList*)_NativeInstance)->Allocator();
	return _result.IsNull() ? nullptr : RDC::OCC::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  NCollection_BaseList::Iterator
//---------------------------------------------------------------------

RDC::OCC::NCollection_BaseList::Iterator::Iterator()
	: RDC::OCC::BaseClass<::NCollection_BaseList::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::NCollection_BaseList::Iterator();
}

RDC::OCC::NCollection_BaseList::Iterator::Iterator(RDC::OCC::NCollection_BaseList^ theList)
	: RDC::OCC::BaseClass<::NCollection_BaseList::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::NCollection_BaseList::Iterator(*(::NCollection_BaseList*)theList->NativeInstance);
}

void RDC::OCC::NCollection_BaseList::Iterator::Init(RDC::OCC::NCollection_BaseList^ theList)
{
	((::NCollection_BaseList::Iterator*)_NativeInstance)->Init(*(::NCollection_BaseList*)theList->NativeInstance);
}

void RDC::OCC::NCollection_BaseList::Iterator::Initialize(RDC::OCC::NCollection_BaseList^ theList)
{
	((::NCollection_BaseList::Iterator*)_NativeInstance)->Initialize(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::NCollection_BaseList::Iterator::More()
{
	bool _result = ((::NCollection_BaseList::Iterator*)_NativeInstance)->More();
	return _result;
}

bool RDC::OCC::NCollection_BaseList::Iterator::IsEqual(RDC::OCC::NCollection_BaseList::Iterator^ theOther)
{
	bool _result = ((::NCollection_BaseList::Iterator*)_NativeInstance)->IsEqual(*(::NCollection_BaseList::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::NCollection_BaseList::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::NCollection_BaseList::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  NCollection_BasePointerVector
//---------------------------------------------------------------------

RDC::OCC::NCollection_BasePointerVector::NCollection_BasePointerVector()
	: RDC::OCC::BaseClass<::NCollection_BasePointerVector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::NCollection_BasePointerVector();
}

bool RDC::OCC::NCollection_BasePointerVector::IsEmpty()
{
	bool _result = ((::NCollection_BasePointerVector*)_NativeInstance)->IsEmpty();
	return _result;
}

long long unsigned int RDC::OCC::NCollection_BasePointerVector::Size()
{
	long long unsigned int _result = ((::NCollection_BasePointerVector*)_NativeInstance)->Size();
	return _result;
}

long long unsigned int RDC::OCC::NCollection_BasePointerVector::Capacity()
{
	long long unsigned int _result = ((::NCollection_BasePointerVector*)_NativeInstance)->Capacity();
	return _result;
}

void RDC::OCC::NCollection_BasePointerVector::RemoveLast()
{
	((::NCollection_BasePointerVector*)_NativeInstance)->RemoveLast();
}

void RDC::OCC::NCollection_BasePointerVector::Clear(bool theReleaseMemory)
{
	((::NCollection_BasePointerVector*)_NativeInstance)->Clear(theReleaseMemory);
}

void RDC::OCC::NCollection_BasePointerVector::Clear()
{
	((::NCollection_BasePointerVector*)_NativeInstance)->Clear(false);
}

System::IntPtr RDC::OCC::NCollection_BasePointerVector::GetArray()
{
	void* _result = ((::NCollection_BasePointerVector*)_NativeInstance)->GetArray();
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::NCollection_BasePointerVector::Value(long long unsigned int theInd)
{
	void* _result = ((::NCollection_BasePointerVector*)_NativeInstance)->Value(theInd);
	return System::IntPtr(_result);
}

void RDC::OCC::NCollection_BasePointerVector::Append(System::IntPtr thePnt)
{
	((::NCollection_BasePointerVector*)_NativeInstance)->Append(thePnt.ToPointer());
}

void RDC::OCC::NCollection_BasePointerVector::SetValue(long long unsigned int theInd, System::IntPtr thePnt)
{
	((::NCollection_BasePointerVector*)_NativeInstance)->SetValue(theInd, thePnt.ToPointer());
}



//---------------------------------------------------------------------
//  Class  NCollection_AccAllocator
//---------------------------------------------------------------------

RDC::OCC::NCollection_AccAllocator::NCollection_AccAllocator(long long unsigned int theBlockSize)
	: RDC::OCC::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_AccAllocator(theBlockSize);
}

RDC::OCC::NCollection_AccAllocator::NCollection_AccAllocator()
	: RDC::OCC::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_AccAllocator(::NCollection_AccAllocator::DefaultBlockSize);
}

System::IntPtr RDC::OCC::NCollection_AccAllocator::Allocate(long long unsigned int theSize)
{
	void* _result = ((::NCollection_AccAllocator*)_NativeInstance)->Allocate(theSize);
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::NCollection_AccAllocator::AllocateOptimal(long long unsigned int theSize)
{
	void* _result = ((::NCollection_AccAllocator*)_NativeInstance)->AllocateOptimal(theSize);
	return System::IntPtr(_result);
}

void RDC::OCC::NCollection_AccAllocator::Free(System::IntPtr theAddress)
{
	((::NCollection_AccAllocator*)_NativeInstance)->Free(theAddress.ToPointer());
}

RDC::OCC::NCollection_AccAllocator^ RDC::OCC::NCollection_AccAllocator::CreateDowncasted(::NCollection_AccAllocator* instance)
{
	return gcnew RDC::OCC::NCollection_AccAllocator(instance);
}



//---------------------------------------------------------------------
//  Class  NCollection_AlignedAllocator
//---------------------------------------------------------------------

RDC::OCC::NCollection_AlignedAllocator::NCollection_AlignedAllocator(long long unsigned int theAlignment)
	: RDC::OCC::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_AlignedAllocator(theAlignment);
}

System::IntPtr RDC::OCC::NCollection_AlignedAllocator::Allocate(long long unsigned int theSize)
{
	void* _result = ((::NCollection_AlignedAllocator*)_NativeInstance)->Allocate(theSize);
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::NCollection_AlignedAllocator::AllocateOptimal(long long unsigned int theSize)
{
	void* _result = ((::NCollection_AlignedAllocator*)_NativeInstance)->AllocateOptimal(theSize);
	return System::IntPtr(_result);
}

void RDC::OCC::NCollection_AlignedAllocator::Free(System::IntPtr thePtr)
{
	((::NCollection_AlignedAllocator*)_NativeInstance)->Free(thePtr.ToPointer());
}

RDC::OCC::NCollection_AlignedAllocator^ RDC::OCC::NCollection_AlignedAllocator::CreateDowncasted(::NCollection_AlignedAllocator* instance)
{
	return gcnew RDC::OCC::NCollection_AlignedAllocator(instance);
}



//---------------------------------------------------------------------
//  Class  NCollection_Buffer
//---------------------------------------------------------------------

RDC::OCC::NCollection_Buffer::NCollection_Buffer(RDC::OCC::NCollection_BaseAllocator^ theAlloc, long long unsigned int theSize, unsigned char% theData)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<unsigned char> pp_theData = &theData;
	NativeInstance = new ::NCollection_Buffer(Handle(::NCollection_BaseAllocator)(theAlloc->NativeInstance), theSize, (unsigned char*)pp_theData);
}

RDC::OCC::NCollection_Buffer::NCollection_Buffer(RDC::OCC::NCollection_BaseAllocator^ theAlloc, long long unsigned int theSize)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_Buffer(Handle(::NCollection_BaseAllocator)(theAlloc->NativeInstance), theSize, nullptr);
}

RDC::OCC::NCollection_Buffer::NCollection_Buffer(RDC::OCC::NCollection_BaseAllocator^ theAlloc)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_Buffer(Handle(::NCollection_BaseAllocator)(theAlloc->NativeInstance), 0, nullptr);
}

unsigned char RDC::OCC::NCollection_Buffer::Data()
{
	throw gcnew System::NotImplementedException();
}

unsigned char RDC::OCC::NCollection_Buffer::ChangeData()
{
	throw gcnew System::NotImplementedException();
}

bool RDC::OCC::NCollection_Buffer::IsEmpty()
{
	bool _result = ((::NCollection_Buffer*)_NativeInstance)->IsEmpty();
	return _result;
}

long long unsigned int RDC::OCC::NCollection_Buffer::Size()
{
	long long unsigned int _result = ((::NCollection_Buffer*)_NativeInstance)->Size();
	return _result;
}

RDC::OCC::NCollection_BaseAllocator^ RDC::OCC::NCollection_Buffer::Allocator()
{
	Handle(::NCollection_BaseAllocator) _result = ((::NCollection_Buffer*)_NativeInstance)->Allocator();
	return _result.IsNull() ? nullptr : RDC::OCC::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}

void RDC::OCC::NCollection_Buffer::SetAllocator(RDC::OCC::NCollection_BaseAllocator^ theAlloc)
{
	((::NCollection_Buffer*)_NativeInstance)->SetAllocator(Handle(::NCollection_BaseAllocator)(theAlloc->NativeInstance));
}

bool RDC::OCC::NCollection_Buffer::Allocate(long long unsigned int theSize)
{
	bool _result = ((::NCollection_Buffer*)_NativeInstance)->Allocate(theSize);
	return _result;
}

void RDC::OCC::NCollection_Buffer::Free()
{
	((::NCollection_Buffer*)_NativeInstance)->Free();
}

void RDC::OCC::NCollection_Buffer::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::NCollection_Buffer*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::NCollection_Buffer::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::NCollection_Buffer*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::NCollection_Buffer^ RDC::OCC::NCollection_Buffer::CreateDowncasted(::NCollection_Buffer* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Image_PixMapData)))
		return RDC::OCC::Image_PixMapData::CreateDowncasted((::Image_PixMapData*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_BoundBuffer)))
		return RDC::OCC::Graphic3d_BoundBuffer::CreateDowncasted((::Graphic3d_BoundBuffer*)instance);

	return gcnew RDC::OCC::NCollection_Buffer(instance);
}



//---------------------------------------------------------------------
//  Class  NCollection_IncAllocator
//---------------------------------------------------------------------

RDC::OCC::NCollection_IncAllocator::NCollection_IncAllocator(long long unsigned int theBlockSize)
	: RDC::OCC::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_IncAllocator(theBlockSize);
}

RDC::OCC::NCollection_IncAllocator::NCollection_IncAllocator()
	: RDC::OCC::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_IncAllocator(::NCollection_IncAllocator::THE_DEFAULT_BLOCK_SIZE);
}

void RDC::OCC::NCollection_IncAllocator::SetThreadSafe(bool theIsThreadSafe)
{
	((::NCollection_IncAllocator*)_NativeInstance)->SetThreadSafe(theIsThreadSafe);
}

void RDC::OCC::NCollection_IncAllocator::SetThreadSafe()
{
	((::NCollection_IncAllocator*)_NativeInstance)->SetThreadSafe(true);
}

System::IntPtr RDC::OCC::NCollection_IncAllocator::Allocate(long long unsigned int size)
{
	void* _result = ((::NCollection_IncAllocator*)_NativeInstance)->Allocate(size);
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::NCollection_IncAllocator::AllocateOptimal(long long unsigned int size)
{
	void* _result = ((::NCollection_IncAllocator*)_NativeInstance)->AllocateOptimal(size);
	return System::IntPtr(_result);
}

void RDC::OCC::NCollection_IncAllocator::Free(System::IntPtr parameter1)
{
	((::NCollection_IncAllocator*)_NativeInstance)->Free(parameter1.ToPointer());
}

void RDC::OCC::NCollection_IncAllocator::Reset(bool theReleaseMemory)
{
	((::NCollection_IncAllocator*)_NativeInstance)->Reset(theReleaseMemory);
}

void RDC::OCC::NCollection_IncAllocator::Reset()
{
	((::NCollection_IncAllocator*)_NativeInstance)->Reset(false);
}

RDC::OCC::NCollection_IncAllocator^ RDC::OCC::NCollection_IncAllocator::CreateDowncasted(::NCollection_IncAllocator* instance)
{
	return gcnew RDC::OCC::NCollection_IncAllocator(instance);
}



//---------------------------------------------------------------------
//  Class  NCollection_HeapAllocator
//---------------------------------------------------------------------

System::IntPtr RDC::OCC::NCollection_HeapAllocator::Allocate(long long unsigned int theSize)
{
	void* _result = ((::NCollection_HeapAllocator*)_NativeInstance)->Allocate(theSize);
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::NCollection_HeapAllocator::AllocateOptimal(long long unsigned int theSize)
{
	void* _result = ((::NCollection_HeapAllocator*)_NativeInstance)->AllocateOptimal(theSize);
	return System::IntPtr(_result);
}

void RDC::OCC::NCollection_HeapAllocator::Free(System::IntPtr anAddress)
{
	((::NCollection_HeapAllocator*)_NativeInstance)->Free(anAddress.ToPointer());
}

RDC::OCC::NCollection_HeapAllocator^ RDC::OCC::NCollection_HeapAllocator::GlobalHeapAllocator()
{
	Handle(::NCollection_HeapAllocator) _result = ::NCollection_HeapAllocator::GlobalHeapAllocator();
	return _result.IsNull() ? nullptr : RDC::OCC::NCollection_HeapAllocator::CreateDowncasted(_result.get());
}

RDC::OCC::NCollection_HeapAllocator^ RDC::OCC::NCollection_HeapAllocator::CreateDowncasted(::NCollection_HeapAllocator* instance)
{
	return gcnew RDC::OCC::NCollection_HeapAllocator(instance);
}



//---------------------------------------------------------------------
//  Class  NCollection_WinHeapAllocator
//---------------------------------------------------------------------

RDC::OCC::NCollection_WinHeapAllocator::NCollection_WinHeapAllocator(long long unsigned int theInitSizeBytes)
	: RDC::OCC::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_WinHeapAllocator(theInitSizeBytes);
}

RDC::OCC::NCollection_WinHeapAllocator::NCollection_WinHeapAllocator()
	: RDC::OCC::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_WinHeapAllocator(524288);
}

System::IntPtr RDC::OCC::NCollection_WinHeapAllocator::Allocate(long long unsigned int theSize)
{
	void* _result = ((::NCollection_WinHeapAllocator*)_NativeInstance)->Allocate(theSize);
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::NCollection_WinHeapAllocator::AllocateOptimal(long long unsigned int theSize)
{
	void* _result = ((::NCollection_WinHeapAllocator*)_NativeInstance)->AllocateOptimal(theSize);
	return System::IntPtr(_result);
}

void RDC::OCC::NCollection_WinHeapAllocator::Free(System::IntPtr theAddress)
{
	((::NCollection_WinHeapAllocator*)_NativeInstance)->Free(theAddress.ToPointer());
}

RDC::OCC::NCollection_WinHeapAllocator^ RDC::OCC::NCollection_WinHeapAllocator::CreateDowncasted(::NCollection_WinHeapAllocator* instance)
{
	return gcnew RDC::OCC::NCollection_WinHeapAllocator(instance);
}


