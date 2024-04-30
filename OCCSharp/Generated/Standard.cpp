// Generated wrapper code for package Standard

#include "OcctPCH.h"
#include "Standard.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TCollection.h"
#include "Quantity.h"
#include "TShort.h"
#include "TColStd.h"
#include "Bnd.h"
#include "TColgp.h"
#include "Geom.h"
#include "ProjLib.h"
#include "BRepAdaptor.h"
#include "TopTools.h"
#include "ShapeAnalysis.h"
#include "AIS.h"
#include "StdFail.h"
#include "gp.h"
#include "Geom2d.h"
#include "GProp.h"
#include "TopoDS.h"
#include "BRepExtrema.h"
#include "V3d.h"
#include "Prs3d.h"
#include "Aspect.h"
#include "Graphic3d.h"


//---------------------------------------------------------------------
//  Class  Standard_DumpValue
//---------------------------------------------------------------------

RDC::OCC::Standard_DumpValue::Standard_DumpValue()
	: RDC::OCC::BaseClass<::Standard_DumpValue>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_DumpValue();
}

RDC::OCC::Standard_DumpValue::Standard_DumpValue(RDC::OCC::TCollection_AsciiString^ theValue, int theStartPos)
	: RDC::OCC::BaseClass<::Standard_DumpValue>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_DumpValue(*(::TCollection_AsciiString*)theValue->NativeInstance, theStartPos);
}



//---------------------------------------------------------------------
//  Class  Standard_UUID
//---------------------------------------------------------------------

RDC::OCC::Standard_UUID::Standard_UUID()
	: RDC::OCC::BaseClass<::Standard_UUID>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_UUID();
}



//---------------------------------------------------------------------
//  Class  Standard
//---------------------------------------------------------------------

RDC::OCC::Standard::Standard()
	: RDC::OCC::BaseClass<::Standard>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard();
}

RDC::OCC::Standard::AllocatorType RDC::OCC::Standard::GetAllocatorType()
{
	::Standard::AllocatorType _result = ::Standard::GetAllocatorType();
	return (RDC::OCC::Standard::AllocatorType)_result;
}

System::IntPtr RDC::OCC::Standard::Allocate(long long unsigned int theSize)
{
	void* _result = ::Standard::Allocate(theSize);
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::Standard::AllocateOptimal(long long unsigned int theSize)
{
	void* _result = ::Standard::AllocateOptimal(theSize);
	return System::IntPtr(_result);
}

void RDC::OCC::Standard::Free(System::IntPtr thePtr)
{
	::Standard::Free(thePtr.ToPointer());
}

System::IntPtr RDC::OCC::Standard::Reallocate(System::IntPtr theStorage, long long unsigned int theNewSize)
{
	void* _result = ::Standard::Reallocate(theStorage.ToPointer(), theNewSize);
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::Standard::AllocateAligned(long long unsigned int theSize, long long unsigned int theAlign)
{
	void* _result = ::Standard::AllocateAligned(theSize, theAlign);
	return System::IntPtr(_result);
}

void RDC::OCC::Standard::FreeAligned(System::IntPtr thePtrAligned)
{
	::Standard::FreeAligned(thePtrAligned.ToPointer());
}

int RDC::OCC::Standard::Purge()
{
	int _result = ::Standard::Purge();
	return _result;
}

bool RDC::OCC::Standard::StackTrace(char% theBuffer, int theBufferSize, int theNbTraces, System::IntPtr theContext, int theNbTopSkip)
{
	pin_ptr<char> pp_theBuffer = &theBuffer;
	bool _result = ::Standard::StackTrace((char*)pp_theBuffer, theBufferSize, theNbTraces, theContext.ToPointer(), theNbTopSkip);
	return _result;
}

bool RDC::OCC::Standard::StackTrace(char% theBuffer, int theBufferSize, int theNbTraces, System::IntPtr theContext)
{
	pin_ptr<char> pp_theBuffer = &theBuffer;
	bool _result = ::Standard::StackTrace((char*)pp_theBuffer, theBufferSize, theNbTraces, theContext.ToPointer(), 0);
	return _result;
}

bool RDC::OCC::Standard::StackTrace(char% theBuffer, int theBufferSize, int theNbTraces)
{
	pin_ptr<char> pp_theBuffer = &theBuffer;
	bool _result = ::Standard::StackTrace((char*)pp_theBuffer, theBufferSize, theNbTraces, nullptr, 0);
	return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_Failure
//---------------------------------------------------------------------

RDC::OCC::Standard_Failure::Standard_Failure()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_Failure();
}

RDC::OCC::Standard_Failure::Standard_Failure(System::String^ theDesc)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theDesc = (char*)(void*)Marshal::StringToHGlobalAnsi(theDesc);
	NativeInstance = new ::Standard_Failure(sz_theDesc);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theDesc);
}

RDC::OCC::Standard_Failure::Standard_Failure(System::String^ theDesc, System::String^ theStackTrace)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theDesc = (char*)(void*)Marshal::StringToHGlobalAnsi(theDesc);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_Failure(sz_theDesc, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theDesc);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_Failure::Print(System::IO::TextWriter^ theStream)
{
	std::ostringstream oss_theStream;
	((::Standard_Failure*)_NativeInstance)->Print(oss_theStream);
	theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

System::String^ RDC::OCC::Standard_Failure::GetMessageString()
{
	Standard_CString _result = ((::Standard_Failure*)_NativeInstance)->GetMessageString();
	return gcnew System::String(_result);
}

void RDC::OCC::Standard_Failure::SetMessageString(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	((::Standard_Failure*)_NativeInstance)->SetMessageString(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

System::String^ RDC::OCC::Standard_Failure::GetStackString()
{
	Standard_CString _result = ((::Standard_Failure*)_NativeInstance)->GetStackString();
	return gcnew System::String(_result);
}

void RDC::OCC::Standard_Failure::SetStackString(System::String^ theStack)
{
	const char* sz_theStack = (char*)(void*)Marshal::StringToHGlobalAnsi(theStack);
	((::Standard_Failure*)_NativeInstance)->SetStackString(sz_theStack);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStack);
}

void RDC::OCC::Standard_Failure::Reraise()
{
	((::Standard_Failure*)_NativeInstance)->Reraise();
}

void RDC::OCC::Standard_Failure::Reraise(System::String^ aMessage)
{
	const char* sz_aMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(aMessage);
	((::Standard_Failure*)_NativeInstance)->Reraise(sz_aMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aMessage);
}

void RDC::OCC::Standard_Failure::Raise(System::String^ aMessage)
{
	const char* sz_aMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(aMessage);
	::Standard_Failure::Raise(sz_aMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aMessage);
}

void RDC::OCC::Standard_Failure::Raise()
{
	::Standard_Failure::Raise("");
}

RDC::OCC::Standard_Failure^ RDC::OCC::Standard_Failure::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_Failure) _result = ::Standard_Failure::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Failure::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Failure^ RDC::OCC::Standard_Failure::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_Failure) _result = ::Standard_Failure::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Failure::CreateDowncasted(_result.get());
}

int RDC::OCC::Standard_Failure::DefaultStackTraceLength()
{
	int _result = ::Standard_Failure::DefaultStackTraceLength();
	return _result;
}

void RDC::OCC::Standard_Failure::SetDefaultStackTraceLength(int theNbStackTraces)
{
	::Standard_Failure::SetDefaultStackTraceLength(theNbStackTraces);
}

void RDC::OCC::Standard_Failure::Jump()
{
	((::Standard_Failure*)_NativeInstance)->Jump();
}

RDC::OCC::Standard_Failure^ RDC::OCC::Standard_Failure::CreateDowncasted(::Standard_Failure* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_DomainError)))
		return RDC::OCC::Standard_DomainError::CreateDowncasted((::Standard_DomainError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_ProgramError)))
		return RDC::OCC::Standard_ProgramError::CreateDowncasted((::Standard_ProgramError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_AbortiveTransaction)))
		return RDC::OCC::Standard_AbortiveTransaction::CreateDowncasted((::Standard_AbortiveTransaction*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_NumericError)))
		return RDC::OCC::Standard_NumericError::CreateDowncasted((::Standard_NumericError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_LicenseError)))
		return RDC::OCC::Standard_LicenseError::CreateDowncasted((::Standard_LicenseError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdFail_NotDone)))
		return RDC::OCC::StdFail_NotDone::CreateDowncasted((::StdFail_NotDone*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdFail_InfiniteSolutions)))
		return RDC::OCC::StdFail_InfiniteSolutions::CreateDowncasted((::StdFail_InfiniteSolutions*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdFail_Undefined)))
		return RDC::OCC::StdFail_Undefined::CreateDowncasted((::StdFail_Undefined*)instance);

	return gcnew RDC::OCC::Standard_Failure(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_DomainError
//---------------------------------------------------------------------

RDC::OCC::Standard_DomainError::Standard_DomainError()
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_DomainError();
}

RDC::OCC::Standard_DomainError::Standard_DomainError(System::String^ theMessage)
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_DomainError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_DomainError::Standard_DomainError(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_DomainError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_DomainError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_DomainError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_DomainError::Raise()
{
	::Standard_DomainError::Raise("");
}

RDC::OCC::Standard_DomainError^ RDC::OCC::Standard_DomainError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_DomainError) _result = ::Standard_DomainError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DomainError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DomainError^ RDC::OCC::Standard_DomainError::NewInstance()
{
	Handle(::Standard_DomainError) _result = ::Standard_DomainError::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DomainError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DomainError^ RDC::OCC::Standard_DomainError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_DomainError) _result = ::Standard_DomainError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DomainError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DomainError^ RDC::OCC::Standard_DomainError::CreateDowncasted(::Standard_DomainError* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_ConstructionError)))
		return RDC::OCC::Standard_ConstructionError::CreateDowncasted((::Standard_ConstructionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_RangeError)))
		return RDC::OCC::Standard_RangeError::CreateDowncasted((::Standard_RangeError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_DimensionError)))
		return RDC::OCC::Standard_DimensionError::CreateDowncasted((::Standard_DimensionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_NoSuchObject)))
		return RDC::OCC::Standard_NoSuchObject::CreateDowncasted((::Standard_NoSuchObject*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_TypeMismatch)))
		return RDC::OCC::Standard_TypeMismatch::CreateDowncasted((::Standard_TypeMismatch*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_ImmutableObject)))
		return RDC::OCC::Standard_ImmutableObject::CreateDowncasted((::Standard_ImmutableObject*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_MultiplyDefined)))
		return RDC::OCC::Standard_MultiplyDefined::CreateDowncasted((::Standard_MultiplyDefined*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_NoMoreObject)))
		return RDC::OCC::Standard_NoMoreObject::CreateDowncasted((::Standard_NoMoreObject*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_NullObject)))
		return RDC::OCC::Standard_NullObject::CreateDowncasted((::Standard_NullObject*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Quantity_DateDefinitionError)))
		return RDC::OCC::Quantity_DateDefinitionError::CreateDowncasted((::Quantity_DateDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Quantity_PeriodDefinitionError)))
		return RDC::OCC::Quantity_PeriodDefinitionError::CreateDowncasted((::Quantity_PeriodDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdFail_UndefinedDerivative)))
		return RDC::OCC::StdFail_UndefinedDerivative::CreateDowncasted((::StdFail_UndefinedDerivative*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdFail_UndefinedValue)))
		return RDC::OCC::StdFail_UndefinedValue::CreateDowncasted((::StdFail_UndefinedValue*)instance);
	if (instance->IsKind(STANDARD_TYPE(::gp_VectorWithNullMagnitude)))
		return RDC::OCC::gp_VectorWithNullMagnitude::CreateDowncasted((::gp_VectorWithNullMagnitude*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_UndefinedDerivative)))
		return RDC::OCC::Geom2d_UndefinedDerivative::CreateDowncasted((::Geom2d_UndefinedDerivative*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_UndefinedValue)))
		return RDC::OCC::Geom2d_UndefinedValue::CreateDowncasted((::Geom2d_UndefinedValue*)instance);
	if (instance->IsKind(STANDARD_TYPE(::GProp_UndefinedAxis)))
		return RDC::OCC::GProp_UndefinedAxis::CreateDowncasted((::GProp_UndefinedAxis*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_UndefinedDerivative)))
		return RDC::OCC::Geom_UndefinedDerivative::CreateDowncasted((::Geom_UndefinedDerivative*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_UndefinedValue)))
		return RDC::OCC::Geom_UndefinedValue::CreateDowncasted((::Geom_UndefinedValue*)instance);
	if (instance->IsKind(STANDARD_TYPE(::TopoDS_FrozenShape)))
		return RDC::OCC::TopoDS_FrozenShape::CreateDowncasted((::TopoDS_FrozenShape*)instance);
	if (instance->IsKind(STANDARD_TYPE(::TopoDS_LockedShape)))
		return RDC::OCC::TopoDS_LockedShape::CreateDowncasted((::TopoDS_LockedShape*)instance);
	if (instance->IsKind(STANDARD_TYPE(::TopoDS_UnCompatibleShapes)))
		return RDC::OCC::TopoDS_UnCompatibleShapes::CreateDowncasted((::TopoDS_UnCompatibleShapes*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepExtrema_UnCompatibleShape)))
		return RDC::OCC::BRepExtrema_UnCompatibleShape::CreateDowncasted((::BRepExtrema_UnCompatibleShape*)instance);
	if (instance->IsKind(STANDARD_TYPE(::V3d_UnMapped)))
		return RDC::OCC::V3d_UnMapped::CreateDowncasted((::V3d_UnMapped*)instance);

	return gcnew RDC::OCC::Standard_DomainError(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_ConstructionError
//---------------------------------------------------------------------

RDC::OCC::Standard_ConstructionError::Standard_ConstructionError()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_ConstructionError();
}

RDC::OCC::Standard_ConstructionError::Standard_ConstructionError(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_ConstructionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_ConstructionError::Standard_ConstructionError(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_ConstructionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_ConstructionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_ConstructionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_ConstructionError::Raise()
{
	::Standard_ConstructionError::Raise("");
}

RDC::OCC::Standard_ConstructionError^ RDC::OCC::Standard_ConstructionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_ConstructionError) _result = ::Standard_ConstructionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_ConstructionError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_ConstructionError^ RDC::OCC::Standard_ConstructionError::NewInstance()
{
	Handle(::Standard_ConstructionError) _result = ::Standard_ConstructionError::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_ConstructionError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_ConstructionError^ RDC::OCC::Standard_ConstructionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_ConstructionError) _result = ::Standard_ConstructionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_ConstructionError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_ConstructionError^ RDC::OCC::Standard_ConstructionError::CreateDowncasted(::Standard_ConstructionError* instance)
{
	return gcnew RDC::OCC::Standard_ConstructionError(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_RangeError
//---------------------------------------------------------------------

RDC::OCC::Standard_RangeError::Standard_RangeError()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_RangeError();
}

RDC::OCC::Standard_RangeError::Standard_RangeError(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_RangeError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_RangeError::Standard_RangeError(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_RangeError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_RangeError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_RangeError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_RangeError::Raise()
{
	::Standard_RangeError::Raise("");
}

RDC::OCC::Standard_RangeError^ RDC::OCC::Standard_RangeError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_RangeError) _result = ::Standard_RangeError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_RangeError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_RangeError^ RDC::OCC::Standard_RangeError::NewInstance()
{
	Handle(::Standard_RangeError) _result = ::Standard_RangeError::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_RangeError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_RangeError^ RDC::OCC::Standard_RangeError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_RangeError) _result = ::Standard_RangeError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_RangeError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_RangeError^ RDC::OCC::Standard_RangeError::CreateDowncasted(::Standard_RangeError* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_OutOfRange)))
		return RDC::OCC::Standard_OutOfRange::CreateDowncasted((::Standard_OutOfRange*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_NegativeValue)))
		return RDC::OCC::Standard_NegativeValue::CreateDowncasted((::Standard_NegativeValue*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_NullValue)))
		return RDC::OCC::Standard_NullValue::CreateDowncasted((::Standard_NullValue*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Prs3d_InvalidAngle)))
		return RDC::OCC::Prs3d_InvalidAngle::CreateDowncasted((::Prs3d_InvalidAngle*)instance);

	return gcnew RDC::OCC::Standard_RangeError(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_OutOfRange
//---------------------------------------------------------------------

RDC::OCC::Standard_OutOfRange::Standard_OutOfRange()
	: RDC::OCC::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_OutOfRange();
}

RDC::OCC::Standard_OutOfRange::Standard_OutOfRange(System::String^ theMessage)
	: RDC::OCC::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_OutOfRange(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_OutOfRange::Standard_OutOfRange(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_OutOfRange(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_OutOfRange::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_OutOfRange::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_OutOfRange::Raise()
{
	::Standard_OutOfRange::Raise("");
}

RDC::OCC::Standard_OutOfRange^ RDC::OCC::Standard_OutOfRange::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_OutOfRange) _result = ::Standard_OutOfRange::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_OutOfRange::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_OutOfRange^ RDC::OCC::Standard_OutOfRange::NewInstance()
{
	Handle(::Standard_OutOfRange) _result = ::Standard_OutOfRange::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_OutOfRange::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_OutOfRange^ RDC::OCC::Standard_OutOfRange::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_OutOfRange) _result = ::Standard_OutOfRange::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_OutOfRange::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_OutOfRange^ RDC::OCC::Standard_OutOfRange::CreateDowncasted(::Standard_OutOfRange* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Aspect_AspectFillAreaDefinitionError)))
		return RDC::OCC::Aspect_AspectFillAreaDefinitionError::CreateDowncasted((::Aspect_AspectFillAreaDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_AspectLineDefinitionError)))
		return RDC::OCC::Aspect_AspectLineDefinitionError::CreateDowncasted((::Aspect_AspectLineDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_AspectMarkerDefinitionError)))
		return RDC::OCC::Aspect_AspectMarkerDefinitionError::CreateDowncasted((::Aspect_AspectMarkerDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_DisplayConnectionDefinitionError)))
		return RDC::OCC::Aspect_DisplayConnectionDefinitionError::CreateDowncasted((::Aspect_DisplayConnectionDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_GraphicDeviceDefinitionError)))
		return RDC::OCC::Aspect_GraphicDeviceDefinitionError::CreateDowncasted((::Aspect_GraphicDeviceDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_IdentDefinitionError)))
		return RDC::OCC::Aspect_IdentDefinitionError::CreateDowncasted((::Aspect_IdentDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_WindowDefinitionError)))
		return RDC::OCC::Aspect_WindowDefinitionError::CreateDowncasted((::Aspect_WindowDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_WindowError)))
		return RDC::OCC::Aspect_WindowError::CreateDowncasted((::Aspect_WindowError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_GroupDefinitionError)))
		return RDC::OCC::Graphic3d_GroupDefinitionError::CreateDowncasted((::Graphic3d_GroupDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_MaterialDefinitionError)))
		return RDC::OCC::Graphic3d_MaterialDefinitionError::CreateDowncasted((::Graphic3d_MaterialDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_PriorityDefinitionError)))
		return RDC::OCC::Graphic3d_PriorityDefinitionError::CreateDowncasted((::Graphic3d_PriorityDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_StructureDefinitionError)))
		return RDC::OCC::Graphic3d_StructureDefinitionError::CreateDowncasted((::Graphic3d_StructureDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::V3d_BadValue)))
		return RDC::OCC::V3d_BadValue::CreateDowncasted((::V3d_BadValue*)instance);

	return gcnew RDC::OCC::Standard_OutOfRange(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_DimensionError
//---------------------------------------------------------------------

RDC::OCC::Standard_DimensionError::Standard_DimensionError()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_DimensionError();
}

RDC::OCC::Standard_DimensionError::Standard_DimensionError(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_DimensionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_DimensionError::Standard_DimensionError(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_DimensionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_DimensionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_DimensionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_DimensionError::Raise()
{
	::Standard_DimensionError::Raise("");
}

RDC::OCC::Standard_DimensionError^ RDC::OCC::Standard_DimensionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_DimensionError) _result = ::Standard_DimensionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DimensionError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DimensionError^ RDC::OCC::Standard_DimensionError::NewInstance()
{
	Handle(::Standard_DimensionError) _result = ::Standard_DimensionError::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DimensionError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DimensionError^ RDC::OCC::Standard_DimensionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_DimensionError) _result = ::Standard_DimensionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DimensionError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DimensionError^ RDC::OCC::Standard_DimensionError::CreateDowncasted(::Standard_DimensionError* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_DimensionMismatch)))
		return RDC::OCC::Standard_DimensionMismatch::CreateDowncasted((::Standard_DimensionMismatch*)instance);

	return gcnew RDC::OCC::Standard_DimensionError(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_DimensionMismatch
//---------------------------------------------------------------------

RDC::OCC::Standard_DimensionMismatch::Standard_DimensionMismatch()
	: RDC::OCC::Standard_DimensionError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_DimensionMismatch();
}

RDC::OCC::Standard_DimensionMismatch::Standard_DimensionMismatch(System::String^ theMessage)
	: RDC::OCC::Standard_DimensionError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_DimensionMismatch(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_DimensionMismatch::Standard_DimensionMismatch(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DimensionError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_DimensionMismatch(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_DimensionMismatch::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_DimensionMismatch::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_DimensionMismatch::Raise()
{
	::Standard_DimensionMismatch::Raise("");
}

RDC::OCC::Standard_DimensionMismatch^ RDC::OCC::Standard_DimensionMismatch::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_DimensionMismatch) _result = ::Standard_DimensionMismatch::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DimensionMismatch::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DimensionMismatch^ RDC::OCC::Standard_DimensionMismatch::NewInstance()
{
	Handle(::Standard_DimensionMismatch) _result = ::Standard_DimensionMismatch::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DimensionMismatch::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DimensionMismatch^ RDC::OCC::Standard_DimensionMismatch::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_DimensionMismatch) _result = ::Standard_DimensionMismatch::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DimensionMismatch::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DimensionMismatch^ RDC::OCC::Standard_DimensionMismatch::CreateDowncasted(::Standard_DimensionMismatch* instance)
{
	return gcnew RDC::OCC::Standard_DimensionMismatch(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_ProgramError
//---------------------------------------------------------------------

RDC::OCC::Standard_ProgramError::Standard_ProgramError()
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_ProgramError();
}

RDC::OCC::Standard_ProgramError::Standard_ProgramError(System::String^ theMessage)
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_ProgramError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_ProgramError::Standard_ProgramError(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_ProgramError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_ProgramError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_ProgramError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_ProgramError::Raise()
{
	::Standard_ProgramError::Raise("");
}

RDC::OCC::Standard_ProgramError^ RDC::OCC::Standard_ProgramError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_ProgramError) _result = ::Standard_ProgramError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_ProgramError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_ProgramError^ RDC::OCC::Standard_ProgramError::NewInstance()
{
	Handle(::Standard_ProgramError) _result = ::Standard_ProgramError::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_ProgramError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_ProgramError^ RDC::OCC::Standard_ProgramError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_ProgramError) _result = ::Standard_ProgramError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_ProgramError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_ProgramError^ RDC::OCC::Standard_ProgramError::CreateDowncasted(::Standard_ProgramError* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_OutOfMemory)))
		return RDC::OCC::Standard_OutOfMemory::CreateDowncasted((::Standard_OutOfMemory*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_NotImplemented)))
		return RDC::OCC::Standard_NotImplemented::CreateDowncasted((::Standard_NotImplemented*)instance);

	return gcnew RDC::OCC::Standard_ProgramError(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_OutOfMemory
//---------------------------------------------------------------------

RDC::OCC::Standard_OutOfMemory::Standard_OutOfMemory(System::String^ theMessage)
	: RDC::OCC::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_OutOfMemory(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_OutOfMemory::Standard_OutOfMemory()
	: RDC::OCC::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_OutOfMemory(nullptr);
}

System::String^ RDC::OCC::Standard_OutOfMemory::GetMessageString()
{
	Standard_CString _result = ((::Standard_OutOfMemory*)_NativeInstance)->GetMessageString();
	return gcnew System::String(_result);
}

void RDC::OCC::Standard_OutOfMemory::SetMessageString(System::String^ aMessage)
{
	const char* sz_aMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(aMessage);
	((::Standard_OutOfMemory*)_NativeInstance)->SetMessageString(sz_aMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aMessage);
}

void RDC::OCC::Standard_OutOfMemory::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_OutOfMemory::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_OutOfMemory::Raise()
{
	::Standard_OutOfMemory::Raise("");
}

RDC::OCC::Standard_OutOfMemory^ RDC::OCC::Standard_OutOfMemory::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_OutOfMemory) _result = ::Standard_OutOfMemory::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_OutOfMemory::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_OutOfMemory^ RDC::OCC::Standard_OutOfMemory::NewInstance()
{
	Handle(::Standard_OutOfMemory) _result = ::Standard_OutOfMemory::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_OutOfMemory::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_OutOfMemory^ RDC::OCC::Standard_OutOfMemory::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_OutOfMemory) _result = ::Standard_OutOfMemory::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_OutOfMemory::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_OutOfMemory^ RDC::OCC::Standard_OutOfMemory::CreateDowncasted(::Standard_OutOfMemory* instance)
{
	return gcnew RDC::OCC::Standard_OutOfMemory(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_NotImplemented
//---------------------------------------------------------------------

RDC::OCC::Standard_NotImplemented::Standard_NotImplemented()
	: RDC::OCC::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NotImplemented();
}

RDC::OCC::Standard_NotImplemented::Standard_NotImplemented(System::String^ theMessage)
	: RDC::OCC::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_NotImplemented(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_NotImplemented::Standard_NotImplemented(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_NotImplemented(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_NotImplemented::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_NotImplemented::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_NotImplemented::Raise()
{
	::Standard_NotImplemented::Raise("");
}

RDC::OCC::Standard_NotImplemented^ RDC::OCC::Standard_NotImplemented::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_NotImplemented) _result = ::Standard_NotImplemented::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NotImplemented::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NotImplemented^ RDC::OCC::Standard_NotImplemented::NewInstance()
{
	Handle(::Standard_NotImplemented) _result = ::Standard_NotImplemented::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NotImplemented::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NotImplemented^ RDC::OCC::Standard_NotImplemented::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_NotImplemented) _result = ::Standard_NotImplemented::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NotImplemented::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NotImplemented^ RDC::OCC::Standard_NotImplemented::CreateDowncasted(::Standard_NotImplemented* instance)
{
	return gcnew RDC::OCC::Standard_NotImplemented(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_Persistent
//---------------------------------------------------------------------

RDC::OCC::Standard_Persistent::Standard_Persistent()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_Persistent();
}

RDC::OCC::Standard_Persistent^ RDC::OCC::Standard_Persistent::CreateDowncasted(::Standard_Persistent* instance)
{
	return gcnew RDC::OCC::Standard_Persistent(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_NoSuchObject
//---------------------------------------------------------------------

RDC::OCC::Standard_NoSuchObject::Standard_NoSuchObject()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NoSuchObject();
}

RDC::OCC::Standard_NoSuchObject::Standard_NoSuchObject(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_NoSuchObject(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_NoSuchObject::Standard_NoSuchObject(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_NoSuchObject(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_NoSuchObject::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_NoSuchObject::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_NoSuchObject::Raise()
{
	::Standard_NoSuchObject::Raise("");
}

RDC::OCC::Standard_NoSuchObject^ RDC::OCC::Standard_NoSuchObject::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_NoSuchObject) _result = ::Standard_NoSuchObject::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NoSuchObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NoSuchObject^ RDC::OCC::Standard_NoSuchObject::NewInstance()
{
	Handle(::Standard_NoSuchObject) _result = ::Standard_NoSuchObject::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NoSuchObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NoSuchObject^ RDC::OCC::Standard_NoSuchObject::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_NoSuchObject) _result = ::Standard_NoSuchObject::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NoSuchObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NoSuchObject^ RDC::OCC::Standard_NoSuchObject::CreateDowncasted(::Standard_NoSuchObject* instance)
{
	return gcnew RDC::OCC::Standard_NoSuchObject(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_TypeMismatch
//---------------------------------------------------------------------

RDC::OCC::Standard_TypeMismatch::Standard_TypeMismatch()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_TypeMismatch();
}

RDC::OCC::Standard_TypeMismatch::Standard_TypeMismatch(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_TypeMismatch(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_TypeMismatch::Standard_TypeMismatch(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_TypeMismatch(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_TypeMismatch::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_TypeMismatch::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_TypeMismatch::Raise()
{
	::Standard_TypeMismatch::Raise("");
}

RDC::OCC::Standard_TypeMismatch^ RDC::OCC::Standard_TypeMismatch::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_TypeMismatch) _result = ::Standard_TypeMismatch::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_TypeMismatch::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_TypeMismatch^ RDC::OCC::Standard_TypeMismatch::NewInstance()
{
	Handle(::Standard_TypeMismatch) _result = ::Standard_TypeMismatch::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_TypeMismatch::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_TypeMismatch^ RDC::OCC::Standard_TypeMismatch::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_TypeMismatch) _result = ::Standard_TypeMismatch::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_TypeMismatch::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_TypeMismatch^ RDC::OCC::Standard_TypeMismatch::CreateDowncasted(::Standard_TypeMismatch* instance)
{
	return gcnew RDC::OCC::Standard_TypeMismatch(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_Dump
//---------------------------------------------------------------------

RDC::OCC::Standard_Dump::Standard_Dump()
	: RDC::OCC::BaseClass<::Standard_Dump>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_Dump();
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::Standard_Dump::HierarchicalValueIndices(RDC::OCC::TColStd_IndexedDataMapOfStringString^ theValues)
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result = ::Standard_Dump::HierarchicalValueIndices(*(::TColStd_IndexedDataMapOfStringString*)theValues->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

bool RDC::OCC::Standard_Dump::HasChildKey(RDC::OCC::TCollection_AsciiString^ theSourceValue)
{
	bool _result = ::Standard_Dump::HasChildKey(*(::TCollection_AsciiString*)theSourceValue->NativeInstance);
	return _result;
}

System::String^ RDC::OCC::Standard_Dump::JsonKeyToString(RDC::OCC::Standard_JsonKey theKey)
{
	Standard_CString _result = ::Standard_Dump::JsonKeyToString((::Standard_JsonKey)theKey);
	return gcnew System::String(_result);
}

int RDC::OCC::Standard_Dump::JsonKeyLength(RDC::OCC::Standard_JsonKey theKey)
{
	int _result = ::Standard_Dump::JsonKeyLength((::Standard_JsonKey)theKey);
	return _result;
}

void RDC::OCC::Standard_Dump::AddValuesSeparator(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	::Standard_Dump::AddValuesSeparator(oss_theOStream);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Standard_Dump::GetPointerPrefix()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Standard_Dump::GetPointerPrefix();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Standard_Dump::GetPointerInfo(RDC::OCC::Standard_Transient^ thePointer, bool isShortInfo)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Standard_Dump::GetPointerInfo(Handle(::Standard_Transient)(thePointer->NativeInstance), isShortInfo);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Standard_Dump::GetPointerInfo(RDC::OCC::Standard_Transient^ thePointer)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Standard_Dump::GetPointerInfo(Handle(::Standard_Transient)(thePointer->NativeInstance), true);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Standard_Dump::GetPointerInfo(System::IntPtr thePointer, bool isShortInfo)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Standard_Dump::GetPointerInfo(thePointer.ToPointer(), isShortInfo);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Standard_Dump::GetPointerInfo(System::IntPtr thePointer)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Standard_Dump::GetPointerInfo(thePointer.ToPointer(), true);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

void RDC::OCC::Standard_Dump::DumpKeyToClass(System::IO::TextWriter^ theOStream, RDC::OCC::TCollection_AsciiString^ theKey, RDC::OCC::TCollection_AsciiString^ theField)
{
	std::ostringstream oss_theOStream;
	::Standard_Dump::DumpKeyToClass(oss_theOStream, *(::TCollection_AsciiString*)theKey->NativeInstance, *(::TCollection_AsciiString*)theField->NativeInstance);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Standard_Dump::DumpCharacterValues(System::IO::TextWriter^ theOStream, int theCount)
{
	std::ostringstream oss_theOStream;
	::Standard_Dump::DumpCharacterValues(oss_theOStream, theCount);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Standard_Dump::DumpRealValues(System::IO::TextWriter^ theOStream, int theCount)
{
	std::ostringstream oss_theOStream;
	::Standard_Dump::DumpRealValues(oss_theOStream, theCount);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool RDC::OCC::Standard_Dump::ProcessStreamName(RDC::OCC::TCollection_AsciiString^ theStreamStr, RDC::OCC::TCollection_AsciiString^ theName, int% theStreamPos)
{
	pin_ptr<int> pp_theStreamPos = &theStreamPos;
	bool _result = ::Standard_Dump::ProcessStreamName(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance, *(int*)pp_theStreamPos);
	return _result;
}

bool RDC::OCC::Standard_Dump::ProcessFieldName(RDC::OCC::TCollection_AsciiString^ theStreamStr, RDC::OCC::TCollection_AsciiString^ theName, int% theStreamPos)
{
	pin_ptr<int> pp_theStreamPos = &theStreamPos;
	bool _result = ::Standard_Dump::ProcessFieldName(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance, *(int*)pp_theStreamPos);
	return _result;
}

bool RDC::OCC::Standard_Dump::InitRealValues(RDC::OCC::TCollection_AsciiString^ theStreamStr, int% theStreamPos, int theCount)
{
	pin_ptr<int> pp_theStreamPos = &theStreamPos;
	bool _result = ::Standard_Dump::InitRealValues(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(int*)pp_theStreamPos, theCount);
	return _result;
}

bool RDC::OCC::Standard_Dump::InitValue(RDC::OCC::TCollection_AsciiString^ theStreamStr, int% theStreamPos, RDC::OCC::TCollection_AsciiString^ theValue)
{
	pin_ptr<int> pp_theStreamPos = &theStreamPos;
	bool _result = ::Standard_Dump::InitValue(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(int*)pp_theStreamPos, *(::TCollection_AsciiString*)theValue->NativeInstance);
	return _result;
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Standard_Dump::DumpFieldToName(RDC::OCC::TCollection_AsciiString^ theField)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Standard_Dump::DumpFieldToName(*(::TCollection_AsciiString*)theField->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_AbortiveTransaction
//---------------------------------------------------------------------

RDC::OCC::Standard_AbortiveTransaction::Standard_AbortiveTransaction()
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_AbortiveTransaction();
}

RDC::OCC::Standard_AbortiveTransaction::Standard_AbortiveTransaction(System::String^ theMessage)
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_AbortiveTransaction(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_AbortiveTransaction::Standard_AbortiveTransaction(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_AbortiveTransaction(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_AbortiveTransaction::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_AbortiveTransaction::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_AbortiveTransaction::Raise()
{
	::Standard_AbortiveTransaction::Raise("");
}

RDC::OCC::Standard_AbortiveTransaction^ RDC::OCC::Standard_AbortiveTransaction::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_AbortiveTransaction) _result = ::Standard_AbortiveTransaction::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_AbortiveTransaction::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_AbortiveTransaction^ RDC::OCC::Standard_AbortiveTransaction::NewInstance()
{
	Handle(::Standard_AbortiveTransaction) _result = ::Standard_AbortiveTransaction::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_AbortiveTransaction::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_AbortiveTransaction^ RDC::OCC::Standard_AbortiveTransaction::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_AbortiveTransaction) _result = ::Standard_AbortiveTransaction::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_AbortiveTransaction::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_AbortiveTransaction^ RDC::OCC::Standard_AbortiveTransaction::CreateDowncasted(::Standard_AbortiveTransaction* instance)
{
	return gcnew RDC::OCC::Standard_AbortiveTransaction(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_Condition
//---------------------------------------------------------------------

RDC::OCC::Standard_Condition::Standard_Condition(bool theIsSet)
	: RDC::OCC::BaseClass<::Standard_Condition>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_Condition(theIsSet);
}

void RDC::OCC::Standard_Condition::Set()
{
	((::Standard_Condition*)_NativeInstance)->Set();
}

void RDC::OCC::Standard_Condition::Reset()
{
	((::Standard_Condition*)_NativeInstance)->Reset();
}

void RDC::OCC::Standard_Condition::Wait()
{
	((::Standard_Condition*)_NativeInstance)->Wait();
}

bool RDC::OCC::Standard_Condition::Wait(int theTimeMilliseconds)
{
	bool _result = ((::Standard_Condition*)_NativeInstance)->Wait(theTimeMilliseconds);
	return _result;
}

bool RDC::OCC::Standard_Condition::Check()
{
	bool _result = ((::Standard_Condition*)_NativeInstance)->Check();
	return _result;
}

bool RDC::OCC::Standard_Condition::CheckReset()
{
	bool _result = ((::Standard_Condition*)_NativeInstance)->CheckReset();
	return _result;
}

System::IntPtr RDC::OCC::Standard_Condition::getHandle()
{
	void* _result = ((::Standard_Condition*)_NativeInstance)->getHandle();
	return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_CStringHasher
//---------------------------------------------------------------------

RDC::OCC::Standard_CStringHasher::Standard_CStringHasher()
	: RDC::OCC::BaseClass<::Standard_CStringHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_CStringHasher();
}



//---------------------------------------------------------------------
//  Class  Standard_NumericError
//---------------------------------------------------------------------

RDC::OCC::Standard_NumericError::Standard_NumericError()
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NumericError();
}

RDC::OCC::Standard_NumericError::Standard_NumericError(System::String^ theMessage)
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_NumericError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_NumericError::Standard_NumericError(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_NumericError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_NumericError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_NumericError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_NumericError::Raise()
{
	::Standard_NumericError::Raise("");
}

RDC::OCC::Standard_NumericError^ RDC::OCC::Standard_NumericError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_NumericError) _result = ::Standard_NumericError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NumericError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NumericError^ RDC::OCC::Standard_NumericError::NewInstance()
{
	Handle(::Standard_NumericError) _result = ::Standard_NumericError::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NumericError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NumericError^ RDC::OCC::Standard_NumericError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_NumericError) _result = ::Standard_NumericError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NumericError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NumericError^ RDC::OCC::Standard_NumericError::CreateDowncasted(::Standard_NumericError* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_DivideByZero)))
		return RDC::OCC::Standard_DivideByZero::CreateDowncasted((::Standard_DivideByZero*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_Overflow)))
		return RDC::OCC::Standard_Overflow::CreateDowncasted((::Standard_Overflow*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_Underflow)))
		return RDC::OCC::Standard_Underflow::CreateDowncasted((::Standard_Underflow*)instance);

	return gcnew RDC::OCC::Standard_NumericError(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_DivideByZero
//---------------------------------------------------------------------

RDC::OCC::Standard_DivideByZero::Standard_DivideByZero()
	: RDC::OCC::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_DivideByZero();
}

RDC::OCC::Standard_DivideByZero::Standard_DivideByZero(System::String^ theMessage)
	: RDC::OCC::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_DivideByZero(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_DivideByZero::Standard_DivideByZero(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_DivideByZero(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_DivideByZero::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_DivideByZero::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_DivideByZero::Raise()
{
	::Standard_DivideByZero::Raise("");
}

RDC::OCC::Standard_DivideByZero^ RDC::OCC::Standard_DivideByZero::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_DivideByZero) _result = ::Standard_DivideByZero::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DivideByZero::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DivideByZero^ RDC::OCC::Standard_DivideByZero::NewInstance()
{
	Handle(::Standard_DivideByZero) _result = ::Standard_DivideByZero::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DivideByZero::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DivideByZero^ RDC::OCC::Standard_DivideByZero::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_DivideByZero) _result = ::Standard_DivideByZero::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_DivideByZero::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_DivideByZero^ RDC::OCC::Standard_DivideByZero::CreateDowncasted(::Standard_DivideByZero* instance)
{
	return gcnew RDC::OCC::Standard_DivideByZero(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_ErrorHandler
//---------------------------------------------------------------------

RDC::OCC::Standard_ErrorHandler::Standard_ErrorHandler()
	: RDC::OCC::BaseClass<::Standard_ErrorHandler>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_ErrorHandler();
}

void RDC::OCC::Standard_ErrorHandler::Destroy()
{
	((::Standard_ErrorHandler*)_NativeInstance)->Destroy();
}

void RDC::OCC::Standard_ErrorHandler::Unlink()
{
	((::Standard_ErrorHandler*)_NativeInstance)->Unlink();
}

RDC::OCC::Standard_Failure^ RDC::OCC::Standard_ErrorHandler::Error()
{
	Handle(::Standard_Failure) _result = ((::Standard_ErrorHandler*)_NativeInstance)->Error();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Failure::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Failure^ RDC::OCC::Standard_ErrorHandler::LastCaughtError()
{
	Handle(::Standard_Failure) _result = ::Standard_ErrorHandler::LastCaughtError();
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Failure::CreateDowncasted(_result.get());
}

bool RDC::OCC::Standard_ErrorHandler::IsInTryBlock()
{
	bool _result = ::Standard_ErrorHandler::IsInTryBlock();
	return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_ErrorHandler::Callback
//---------------------------------------------------------------------

void RDC::OCC::Standard_ErrorHandler::Callback::RegisterCallback()
{
	((::Standard_ErrorHandler::Callback*)_NativeInstance)->RegisterCallback();
}

void RDC::OCC::Standard_ErrorHandler::Callback::UnregisterCallback()
{
	((::Standard_ErrorHandler::Callback*)_NativeInstance)->UnregisterCallback();
}

void RDC::OCC::Standard_ErrorHandler::Callback::DestroyCallback()
{
	((::Standard_ErrorHandler::Callback*)_NativeInstance)->DestroyCallback();
}



//---------------------------------------------------------------------
//  Class  Standard_GUID
//---------------------------------------------------------------------

RDC::OCC::Standard_GUID::Standard_GUID()
	: RDC::OCC::BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_GUID();
}

RDC::OCC::Standard_GUID::Standard_GUID(System::String^ aGuid)
	: RDC::OCC::BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<const wchar_t> pp_aGuid = PtrToStringChars(aGuid);
	_NativeInstance = new ::Standard_GUID((Standard_ExtString)pp_aGuid);
}

RDC::OCC::Standard_GUID::Standard_GUID(RDC::OCC::Standard_UUID^ aGuid)
	: RDC::OCC::BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_GUID(*(::Standard_UUID*)aGuid->NativeInstance);
}

RDC::OCC::Standard_UUID^ RDC::OCC::Standard_GUID::ToUUID()
{
	::Standard_UUID* _result = new ::Standard_UUID();
	*_result = ((::Standard_GUID*)_NativeInstance)->ToUUID();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Standard_UUID(_result);
}

void RDC::OCC::Standard_GUID::ToCString(char aStrGuid)
{
	pin_ptr<char> pp_aStrGuid = &aStrGuid;
	((::Standard_GUID*)_NativeInstance)->ToCString((char*)pp_aStrGuid);
}

bool RDC::OCC::Standard_GUID::IsSame(RDC::OCC::Standard_GUID^ uid)
{
	bool _result = ((::Standard_GUID*)_NativeInstance)->IsSame(*(::Standard_GUID*)uid->NativeInstance);
	return _result;
}

bool RDC::OCC::Standard_GUID::IsNotSame(RDC::OCC::Standard_GUID^ uid)
{
	bool _result = ((::Standard_GUID*)_NativeInstance)->IsNotSame(*(::Standard_GUID*)uid->NativeInstance);
	return _result;
}

void RDC::OCC::Standard_GUID::Assign(RDC::OCC::Standard_GUID^ uid)
{
	((::Standard_GUID*)_NativeInstance)->Assign(*(::Standard_GUID*)uid->NativeInstance);
}

void RDC::OCC::Standard_GUID::Assign(RDC::OCC::Standard_UUID^ uid)
{
	((::Standard_GUID*)_NativeInstance)->Assign(*(::Standard_UUID*)uid->NativeInstance);
}

void RDC::OCC::Standard_GUID::ShallowDump(System::IO::TextWriter^ aStream)
{
	std::ostringstream oss_aStream;
	((::Standard_GUID*)_NativeInstance)->ShallowDump(oss_aStream);
	aStream->Write(gcnew System::String(oss_aStream.str().c_str()));
}

bool RDC::OCC::Standard_GUID::CheckGUIDFormat(System::String^ aGuid)
{
	const char* sz_aGuid = (char*)(void*)Marshal::StringToHGlobalAnsi(aGuid);
	bool _result = ::Standard_GUID::CheckGUIDFormat(sz_aGuid);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aGuid);
	return _result;
}

int RDC::OCC::Standard_GUID::GetHashCode()
{
	return std::hash<::Standard_GUID>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Standard_ImmutableObject
//---------------------------------------------------------------------

RDC::OCC::Standard_ImmutableObject::Standard_ImmutableObject()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_ImmutableObject();
}

RDC::OCC::Standard_ImmutableObject::Standard_ImmutableObject(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_ImmutableObject(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_ImmutableObject::Standard_ImmutableObject(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_ImmutableObject(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_ImmutableObject::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_ImmutableObject::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_ImmutableObject::Raise()
{
	::Standard_ImmutableObject::Raise("");
}

RDC::OCC::Standard_ImmutableObject^ RDC::OCC::Standard_ImmutableObject::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_ImmutableObject) _result = ::Standard_ImmutableObject::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_ImmutableObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_ImmutableObject^ RDC::OCC::Standard_ImmutableObject::NewInstance()
{
	Handle(::Standard_ImmutableObject) _result = ::Standard_ImmutableObject::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_ImmutableObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_ImmutableObject^ RDC::OCC::Standard_ImmutableObject::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_ImmutableObject) _result = ::Standard_ImmutableObject::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_ImmutableObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_ImmutableObject^ RDC::OCC::Standard_ImmutableObject::CreateDowncasted(::Standard_ImmutableObject* instance)
{
	return gcnew RDC::OCC::Standard_ImmutableObject(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_LicenseError
//---------------------------------------------------------------------

RDC::OCC::Standard_LicenseError::Standard_LicenseError()
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_LicenseError();
}

RDC::OCC::Standard_LicenseError::Standard_LicenseError(System::String^ theMessage)
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_LicenseError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_LicenseError::Standard_LicenseError(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_LicenseError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_LicenseError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_LicenseError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_LicenseError::Raise()
{
	::Standard_LicenseError::Raise("");
}

RDC::OCC::Standard_LicenseError^ RDC::OCC::Standard_LicenseError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_LicenseError) _result = ::Standard_LicenseError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_LicenseError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_LicenseError^ RDC::OCC::Standard_LicenseError::NewInstance()
{
	Handle(::Standard_LicenseError) _result = ::Standard_LicenseError::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_LicenseError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_LicenseError^ RDC::OCC::Standard_LicenseError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_LicenseError) _result = ::Standard_LicenseError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_LicenseError::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_LicenseError^ RDC::OCC::Standard_LicenseError::CreateDowncasted(::Standard_LicenseError* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_LicenseNotFound)))
		return RDC::OCC::Standard_LicenseNotFound::CreateDowncasted((::Standard_LicenseNotFound*)instance);

	return gcnew RDC::OCC::Standard_LicenseError(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_LicenseNotFound
//---------------------------------------------------------------------

RDC::OCC::Standard_LicenseNotFound::Standard_LicenseNotFound()
	: RDC::OCC::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_LicenseNotFound();
}

RDC::OCC::Standard_LicenseNotFound::Standard_LicenseNotFound(System::String^ theMessage)
	: RDC::OCC::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_LicenseNotFound(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_LicenseNotFound::Standard_LicenseNotFound(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_LicenseNotFound(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_LicenseNotFound::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_LicenseNotFound::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_LicenseNotFound::Raise()
{
	::Standard_LicenseNotFound::Raise("");
}

RDC::OCC::Standard_LicenseNotFound^ RDC::OCC::Standard_LicenseNotFound::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_LicenseNotFound) _result = ::Standard_LicenseNotFound::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_LicenseNotFound::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_LicenseNotFound^ RDC::OCC::Standard_LicenseNotFound::NewInstance()
{
	Handle(::Standard_LicenseNotFound) _result = ::Standard_LicenseNotFound::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_LicenseNotFound::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_LicenseNotFound^ RDC::OCC::Standard_LicenseNotFound::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_LicenseNotFound) _result = ::Standard_LicenseNotFound::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_LicenseNotFound::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_LicenseNotFound^ RDC::OCC::Standard_LicenseNotFound::CreateDowncasted(::Standard_LicenseNotFound* instance)
{
	return gcnew RDC::OCC::Standard_LicenseNotFound(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_MMgrRoot
//---------------------------------------------------------------------

RDC::OCC::Standard_MMgrRoot::Standard_MMgrRoot()
	: RDC::OCC::BaseClass<::Standard_MMgrRoot>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

System::IntPtr RDC::OCC::Standard_MMgrRoot::Allocate(long long unsigned int theSize)
{
	void* _result = ((::Standard_MMgrRoot*)_NativeInstance)->Allocate(theSize);
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::Standard_MMgrRoot::Reallocate(System::IntPtr thePtr, long long unsigned int theSize)
{
	void* _result = ((::Standard_MMgrRoot*)_NativeInstance)->Reallocate(thePtr.ToPointer(), theSize);
	return System::IntPtr(_result);
}

void RDC::OCC::Standard_MMgrRoot::Free(System::IntPtr thePtr)
{
	((::Standard_MMgrRoot*)_NativeInstance)->Free(thePtr.ToPointer());
}

int RDC::OCC::Standard_MMgrRoot::Purge(bool isDestroyed)
{
	int _result = ((::Standard_MMgrRoot*)_NativeInstance)->Purge(isDestroyed);
	return _result;
}

int RDC::OCC::Standard_MMgrRoot::Purge()
{
	int _result = ((::Standard_MMgrRoot*)_NativeInstance)->Purge(false);
	return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_MultiplyDefined
//---------------------------------------------------------------------

RDC::OCC::Standard_MultiplyDefined::Standard_MultiplyDefined()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_MultiplyDefined();
}

RDC::OCC::Standard_MultiplyDefined::Standard_MultiplyDefined(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_MultiplyDefined(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_MultiplyDefined::Standard_MultiplyDefined(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_MultiplyDefined(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_MultiplyDefined::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_MultiplyDefined::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_MultiplyDefined::Raise()
{
	::Standard_MultiplyDefined::Raise("");
}

RDC::OCC::Standard_MultiplyDefined^ RDC::OCC::Standard_MultiplyDefined::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_MultiplyDefined) _result = ::Standard_MultiplyDefined::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_MultiplyDefined::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_MultiplyDefined^ RDC::OCC::Standard_MultiplyDefined::NewInstance()
{
	Handle(::Standard_MultiplyDefined) _result = ::Standard_MultiplyDefined::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_MultiplyDefined::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_MultiplyDefined^ RDC::OCC::Standard_MultiplyDefined::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_MultiplyDefined) _result = ::Standard_MultiplyDefined::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_MultiplyDefined::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_MultiplyDefined^ RDC::OCC::Standard_MultiplyDefined::CreateDowncasted(::Standard_MultiplyDefined* instance)
{
	return gcnew RDC::OCC::Standard_MultiplyDefined(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_NegativeValue
//---------------------------------------------------------------------

RDC::OCC::Standard_NegativeValue::Standard_NegativeValue()
	: RDC::OCC::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NegativeValue();
}

RDC::OCC::Standard_NegativeValue::Standard_NegativeValue(System::String^ theMessage)
	: RDC::OCC::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_NegativeValue(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_NegativeValue::Standard_NegativeValue(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_NegativeValue(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_NegativeValue::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_NegativeValue::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_NegativeValue::Raise()
{
	::Standard_NegativeValue::Raise("");
}

RDC::OCC::Standard_NegativeValue^ RDC::OCC::Standard_NegativeValue::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_NegativeValue) _result = ::Standard_NegativeValue::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NegativeValue::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NegativeValue^ RDC::OCC::Standard_NegativeValue::NewInstance()
{
	Handle(::Standard_NegativeValue) _result = ::Standard_NegativeValue::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NegativeValue::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NegativeValue^ RDC::OCC::Standard_NegativeValue::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_NegativeValue) _result = ::Standard_NegativeValue::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NegativeValue::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NegativeValue^ RDC::OCC::Standard_NegativeValue::CreateDowncasted(::Standard_NegativeValue* instance)
{
	return gcnew RDC::OCC::Standard_NegativeValue(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_NoMoreObject
//---------------------------------------------------------------------

RDC::OCC::Standard_NoMoreObject::Standard_NoMoreObject()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NoMoreObject();
}

RDC::OCC::Standard_NoMoreObject::Standard_NoMoreObject(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_NoMoreObject(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_NoMoreObject::Standard_NoMoreObject(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_NoMoreObject(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_NoMoreObject::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_NoMoreObject::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_NoMoreObject::Raise()
{
	::Standard_NoMoreObject::Raise("");
}

RDC::OCC::Standard_NoMoreObject^ RDC::OCC::Standard_NoMoreObject::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_NoMoreObject) _result = ::Standard_NoMoreObject::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NoMoreObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NoMoreObject^ RDC::OCC::Standard_NoMoreObject::NewInstance()
{
	Handle(::Standard_NoMoreObject) _result = ::Standard_NoMoreObject::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NoMoreObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NoMoreObject^ RDC::OCC::Standard_NoMoreObject::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_NoMoreObject) _result = ::Standard_NoMoreObject::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NoMoreObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NoMoreObject^ RDC::OCC::Standard_NoMoreObject::CreateDowncasted(::Standard_NoMoreObject* instance)
{
	return gcnew RDC::OCC::Standard_NoMoreObject(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_NullObject
//---------------------------------------------------------------------

RDC::OCC::Standard_NullObject::Standard_NullObject()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NullObject();
}

RDC::OCC::Standard_NullObject::Standard_NullObject(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_NullObject(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_NullObject::Standard_NullObject(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_NullObject(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_NullObject::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_NullObject::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_NullObject::Raise()
{
	::Standard_NullObject::Raise("");
}

RDC::OCC::Standard_NullObject^ RDC::OCC::Standard_NullObject::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_NullObject) _result = ::Standard_NullObject::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NullObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NullObject^ RDC::OCC::Standard_NullObject::NewInstance()
{
	Handle(::Standard_NullObject) _result = ::Standard_NullObject::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NullObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NullObject^ RDC::OCC::Standard_NullObject::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_NullObject) _result = ::Standard_NullObject::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NullObject::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NullObject^ RDC::OCC::Standard_NullObject::CreateDowncasted(::Standard_NullObject* instance)
{
	return gcnew RDC::OCC::Standard_NullObject(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_NullValue
//---------------------------------------------------------------------

RDC::OCC::Standard_NullValue::Standard_NullValue()
	: RDC::OCC::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NullValue();
}

RDC::OCC::Standard_NullValue::Standard_NullValue(System::String^ theMessage)
	: RDC::OCC::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_NullValue(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_NullValue::Standard_NullValue(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_NullValue(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_NullValue::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_NullValue::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_NullValue::Raise()
{
	::Standard_NullValue::Raise("");
}

RDC::OCC::Standard_NullValue^ RDC::OCC::Standard_NullValue::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_NullValue) _result = ::Standard_NullValue::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NullValue::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NullValue^ RDC::OCC::Standard_NullValue::NewInstance()
{
	Handle(::Standard_NullValue) _result = ::Standard_NullValue::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NullValue::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NullValue^ RDC::OCC::Standard_NullValue::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_NullValue) _result = ::Standard_NullValue::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_NullValue::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_NullValue^ RDC::OCC::Standard_NullValue::CreateDowncasted(::Standard_NullValue* instance)
{
	return gcnew RDC::OCC::Standard_NullValue(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_Overflow
//---------------------------------------------------------------------

RDC::OCC::Standard_Overflow::Standard_Overflow()
	: RDC::OCC::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_Overflow();
}

RDC::OCC::Standard_Overflow::Standard_Overflow(System::String^ theMessage)
	: RDC::OCC::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_Overflow(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_Overflow::Standard_Overflow(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_Overflow(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_Overflow::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_Overflow::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_Overflow::Raise()
{
	::Standard_Overflow::Raise("");
}

RDC::OCC::Standard_Overflow^ RDC::OCC::Standard_Overflow::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_Overflow) _result = ::Standard_Overflow::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Overflow::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Overflow^ RDC::OCC::Standard_Overflow::NewInstance()
{
	Handle(::Standard_Overflow) _result = ::Standard_Overflow::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Overflow::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Overflow^ RDC::OCC::Standard_Overflow::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_Overflow) _result = ::Standard_Overflow::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Overflow::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Overflow^ RDC::OCC::Standard_Overflow::CreateDowncasted(::Standard_Overflow* instance)
{
	return gcnew RDC::OCC::Standard_Overflow(instance);
}



//---------------------------------------------------------------------
//  Class  Standard_ReadBuffer
//---------------------------------------------------------------------

RDC::OCC::Standard_ReadBuffer::Standard_ReadBuffer(long long int theDataLen, long long unsigned int theChunkLen, bool theIsPartialPayload)
	: RDC::OCC::BaseClass<::Standard_ReadBuffer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_ReadBuffer(theDataLen, theChunkLen, theIsPartialPayload);
}

RDC::OCC::Standard_ReadBuffer::Standard_ReadBuffer(long long int theDataLen, long long unsigned int theChunkLen)
	: RDC::OCC::BaseClass<::Standard_ReadBuffer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_ReadBuffer(theDataLen, theChunkLen, false);
}

void RDC::OCC::Standard_ReadBuffer::Init(long long int theDataLen, long long unsigned int theChunkLen, bool theIsPartialPayload)
{
	((::Standard_ReadBuffer*)_NativeInstance)->Init(theDataLen, theChunkLen, theIsPartialPayload);
}

void RDC::OCC::Standard_ReadBuffer::Init(long long int theDataLen, long long unsigned int theChunkLen)
{
	((::Standard_ReadBuffer*)_NativeInstance)->Init(theDataLen, theChunkLen, false);
}

bool RDC::OCC::Standard_ReadBuffer::IsDone()
{
	bool _result = ((::Standard_ReadBuffer*)_NativeInstance)->IsDone();
	return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_ReadLineBuffer
//---------------------------------------------------------------------

RDC::OCC::Standard_ReadLineBuffer::Standard_ReadLineBuffer(long long unsigned int theMaxBufferSizeBytes)
	: RDC::OCC::BaseClass<::Standard_ReadLineBuffer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_ReadLineBuffer(theMaxBufferSizeBytes);
}

void RDC::OCC::Standard_ReadLineBuffer::Clear()
{
	((::Standard_ReadLineBuffer*)_NativeInstance)->Clear();
}

bool RDC::OCC::Standard_ReadLineBuffer::IsMultilineMode()
{
	bool _result = ((::Standard_ReadLineBuffer*)_NativeInstance)->IsMultilineMode();
	return _result;
}

bool RDC::OCC::Standard_ReadLineBuffer::ToPutGapInMultiline()
{
	bool _result = ((::Standard_ReadLineBuffer*)_NativeInstance)->ToPutGapInMultiline();
	return _result;
}

void RDC::OCC::Standard_ReadLineBuffer::SetMultilineMode(bool theMultilineMode, bool theToPutGap)
{
	((::Standard_ReadLineBuffer*)_NativeInstance)->SetMultilineMode(theMultilineMode, theToPutGap);
}

void RDC::OCC::Standard_ReadLineBuffer::SetMultilineMode(bool theMultilineMode)
{
	((::Standard_ReadLineBuffer*)_NativeInstance)->SetMultilineMode(theMultilineMode, true);
}



//---------------------------------------------------------------------
//  Class  Standard_Underflow
//---------------------------------------------------------------------

RDC::OCC::Standard_Underflow::Standard_Underflow()
	: RDC::OCC::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_Underflow();
}

RDC::OCC::Standard_Underflow::Standard_Underflow(System::String^ theMessage)
	: RDC::OCC::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_Underflow(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Standard_Underflow::Standard_Underflow(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Standard_Underflow(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Standard_Underflow::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_Underflow::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Standard_Underflow::Raise()
{
	::Standard_Underflow::Raise("");
}

RDC::OCC::Standard_Underflow^ RDC::OCC::Standard_Underflow::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_Underflow) _result = ::Standard_Underflow::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Underflow::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Underflow^ RDC::OCC::Standard_Underflow::NewInstance()
{
	Handle(::Standard_Underflow) _result = ::Standard_Underflow::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Underflow::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Underflow^ RDC::OCC::Standard_Underflow::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Standard_Underflow) _result = ::Standard_Underflow::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Standard_Underflow::CreateDowncasted(_result.get());
}

RDC::OCC::Standard_Underflow^ RDC::OCC::Standard_Underflow::CreateDowncasted(::Standard_Underflow* instance)
{
	return gcnew RDC::OCC::Standard_Underflow(instance);
}


