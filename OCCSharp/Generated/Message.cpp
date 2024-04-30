// Generated wrapper code for package Message

#include "OcctPCH.h"
#include "Message.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TCollection.h"
#include "Standard.h"


//---------------------------------------------------------------------
//  Class  Message_ListOfAlert
//---------------------------------------------------------------------

RDC::OCC::Message_ListOfAlert::Message_ListOfAlert()
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ListOfAlert();
}

RDC::OCC::Message_ListOfAlert::Message_ListOfAlert(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ListOfAlert(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::Message_ListOfAlert::Size()
{
	int _result = ((::Message_ListOfAlert*)_NativeInstance)->Size();
	return _result;
}

RDC::OCC::Message_ListOfAlert^ RDC::OCC::Message_ListOfAlert::Assign(RDC::OCC::Message_ListOfAlert^ theOther)
{
	::Message_ListOfAlert* _result = new ::Message_ListOfAlert();
	*_result = ((::Message_ListOfAlert*)_NativeInstance)->Assign(*(::Message_ListOfAlert*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Message_ListOfAlert(_result);
}

void RDC::OCC::Message_ListOfAlert::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::Message_ListOfAlert*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::Message_ListOfAlert::Clear()
{
	((::Message_ListOfAlert*)_NativeInstance)->Clear(0L);
}

void RDC::OCC::Message_ListOfAlert::RemoveFirst()
{
	((::Message_ListOfAlert*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::Message_ListOfAlert::Reverse()
{
	((::Message_ListOfAlert*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  Message_Printer
//---------------------------------------------------------------------

RDC::OCC::Message_Gravity RDC::OCC::Message_Printer::GetTraceLevel()
{
	::Message_Gravity _result = ((::Message_Printer*)_NativeInstance)->GetTraceLevel();
	return (RDC::OCC::Message_Gravity)_result;
}

void RDC::OCC::Message_Printer::SetTraceLevel(RDC::OCC::Message_Gravity theTraceLevel)
{
	((::Message_Printer*)_NativeInstance)->SetTraceLevel((::Message_Gravity)theTraceLevel);
}

void RDC::OCC::Message_Printer::Send(RDC::OCC::TCollection_ExtendedString^ theString, RDC::OCC::Message_Gravity theGravity)
{
	((::Message_Printer*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void RDC::OCC::Message_Printer::Send(System::String^ theString, RDC::OCC::Message_Gravity theGravity)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_Printer*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void RDC::OCC::Message_Printer::Send(RDC::OCC::TCollection_AsciiString^ theString, RDC::OCC::Message_Gravity theGravity)
{
	((::Message_Printer*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void RDC::OCC::Message_Printer::SendObject(RDC::OCC::Standard_Transient^ theObject, RDC::OCC::Message_Gravity theGravity)
{
	((::Message_Printer*)_NativeInstance)->SendObject(Handle(::Standard_Transient)(theObject->NativeInstance), (::Message_Gravity)theGravity);
}

RDC::OCC::Message_Printer^ RDC::OCC::Message_Printer::CreateDowncasted(::Message_Printer* instance)
{
	return gcnew RDC::OCC::Message_Printer(instance);
}



//---------------------------------------------------------------------
//  Class  Message_Messenger
//---------------------------------------------------------------------

RDC::OCC::Message_Messenger::Message_Messenger()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Messenger();
}

RDC::OCC::Message_Messenger::Message_Messenger(RDC::OCC::Message_Printer^ thePrinter)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Messenger(Handle(::Message_Printer)(thePrinter->NativeInstance));
}

bool RDC::OCC::Message_Messenger::AddPrinter(RDC::OCC::Message_Printer^ thePrinter)
{
	bool _result = ((::Message_Messenger*)_NativeInstance)->AddPrinter(Handle(::Message_Printer)(thePrinter->NativeInstance));
	return _result;
}

bool RDC::OCC::Message_Messenger::RemovePrinter(RDC::OCC::Message_Printer^ thePrinter)
{
	bool _result = ((::Message_Messenger*)_NativeInstance)->RemovePrinter(Handle(::Message_Printer)(thePrinter->NativeInstance));
	return _result;
}

void RDC::OCC::Message_Messenger::Send(System::String^ theString, RDC::OCC::Message_Gravity theGravity)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_Messenger*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void RDC::OCC::Message_Messenger::Send(System::String^ theString)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_Messenger*)_NativeInstance)->Send(sz_theString, Message_Warning);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void RDC::OCC::Message_Messenger::Send(RDC::OCC::TCollection_AsciiString^ theString, RDC::OCC::Message_Gravity theGravity)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void RDC::OCC::Message_Messenger::Send(RDC::OCC::TCollection_AsciiString^ theString)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, Message_Warning);
}

void RDC::OCC::Message_Messenger::Send(RDC::OCC::TCollection_ExtendedString^ theString, RDC::OCC::Message_Gravity theGravity)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void RDC::OCC::Message_Messenger::Send(RDC::OCC::TCollection_ExtendedString^ theString)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, Message_Warning);
}

void RDC::OCC::Message_Messenger::Send(RDC::OCC::Standard_Transient^ theObject, RDC::OCC::Message_Gravity theGravity)
{
	((::Message_Messenger*)_NativeInstance)->Send(Handle(::Standard_Transient)(theObject->NativeInstance), (::Message_Gravity)theGravity);
}

void RDC::OCC::Message_Messenger::Send(RDC::OCC::Standard_Transient^ theObject)
{
	((::Message_Messenger*)_NativeInstance)->Send(Handle(::Standard_Transient)(theObject->NativeInstance), Message_Warning);
}

void RDC::OCC::Message_Messenger::SendFail(RDC::OCC::TCollection_AsciiString^ theMessage)
{
	((::Message_Messenger*)_NativeInstance)->SendFail(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void RDC::OCC::Message_Messenger::SendAlarm(RDC::OCC::TCollection_AsciiString^ theMessage)
{
	((::Message_Messenger*)_NativeInstance)->SendAlarm(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void RDC::OCC::Message_Messenger::SendWarning(RDC::OCC::TCollection_AsciiString^ theMessage)
{
	((::Message_Messenger*)_NativeInstance)->SendWarning(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void RDC::OCC::Message_Messenger::SendInfo(RDC::OCC::TCollection_AsciiString^ theMessage)
{
	((::Message_Messenger*)_NativeInstance)->SendInfo(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void RDC::OCC::Message_Messenger::SendTrace(RDC::OCC::TCollection_AsciiString^ theMessage)
{
	((::Message_Messenger*)_NativeInstance)->SendTrace(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void RDC::OCC::Message_Messenger::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Message_Messenger*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Message_Messenger::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Message_Messenger*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Message_Messenger^ RDC::OCC::Message_Messenger::CreateDowncasted(::Message_Messenger* instance)
{
	return gcnew RDC::OCC::Message_Messenger(instance);
}



//---------------------------------------------------------------------
//  Class  Message_Report
//---------------------------------------------------------------------

RDC::OCC::Message_Report::Message_Report()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Report();
}

RDC::OCC::Message_ListOfAlert^ RDC::OCC::Message_Report::GetAlerts(RDC::OCC::Message_Gravity theGravity)
{
	::Message_ListOfAlert* _result = new ::Message_ListOfAlert();
	*_result = (::Message_ListOfAlert)((::Message_Report*)_NativeInstance)->GetAlerts((::Message_Gravity)theGravity);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Message_ListOfAlert(_result);
}

bool RDC::OCC::Message_Report::IsActiveInMessenger(RDC::OCC::Message_Messenger^ theMessenger)
{
	bool _result = ((::Message_Report*)_NativeInstance)->IsActiveInMessenger(Handle(::Message_Messenger)(theMessenger->NativeInstance));
	return _result;
}

bool RDC::OCC::Message_Report::IsActiveInMessenger()
{
	bool _result = ((::Message_Report*)_NativeInstance)->IsActiveInMessenger(nullptr);
	return _result;
}

void RDC::OCC::Message_Report::ActivateInMessenger(bool toActivate, RDC::OCC::Message_Messenger^ theMessenger)
{
	((::Message_Report*)_NativeInstance)->ActivateInMessenger(toActivate, Handle(::Message_Messenger)(theMessenger->NativeInstance));
}

void RDC::OCC::Message_Report::ActivateInMessenger(bool toActivate)
{
	((::Message_Report*)_NativeInstance)->ActivateInMessenger(toActivate, nullptr);
}

void RDC::OCC::Message_Report::UpdateActiveInMessenger(RDC::OCC::Message_Messenger^ theMessenger)
{
	((::Message_Report*)_NativeInstance)->UpdateActiveInMessenger(Handle(::Message_Messenger)(theMessenger->NativeInstance));
}

void RDC::OCC::Message_Report::UpdateActiveInMessenger()
{
	((::Message_Report*)_NativeInstance)->UpdateActiveInMessenger(nullptr);
}

void RDC::OCC::Message_Report::Clear()
{
	((::Message_Report*)_NativeInstance)->Clear();
}

void RDC::OCC::Message_Report::Clear(RDC::OCC::Message_Gravity theGravity)
{
	((::Message_Report*)_NativeInstance)->Clear((::Message_Gravity)theGravity);
}

void RDC::OCC::Message_Report::SetActiveMetric(RDC::OCC::Message_MetricType theMetricType, bool theActivate)
{
	((::Message_Report*)_NativeInstance)->SetActiveMetric((::Message_MetricType)theMetricType, theActivate);
}

void RDC::OCC::Message_Report::ClearMetrics()
{
	((::Message_Report*)_NativeInstance)->ClearMetrics();
}

int RDC::OCC::Message_Report::Limit()
{
	int _result = ((::Message_Report*)_NativeInstance)->Limit();
	return _result;
}

void RDC::OCC::Message_Report::SetLimit(int theLimit)
{
	((::Message_Report*)_NativeInstance)->SetLimit(theLimit);
}

void RDC::OCC::Message_Report::Dump(System::IO::TextWriter^ theOS)
{
	std::ostringstream oss_theOS;
	((::Message_Report*)_NativeInstance)->Dump(oss_theOS);
	theOS->Write(gcnew System::String(oss_theOS.str().c_str()));
}

void RDC::OCC::Message_Report::Dump(System::IO::TextWriter^ theOS, RDC::OCC::Message_Gravity theGravity)
{
	std::ostringstream oss_theOS;
	((::Message_Report*)_NativeInstance)->Dump(oss_theOS, (::Message_Gravity)theGravity);
	theOS->Write(gcnew System::String(oss_theOS.str().c_str()));
}

void RDC::OCC::Message_Report::SendMessages(RDC::OCC::Message_Messenger^ theMessenger)
{
	((::Message_Report*)_NativeInstance)->SendMessages(Handle(::Message_Messenger)(theMessenger->NativeInstance));
}

void RDC::OCC::Message_Report::SendMessages(RDC::OCC::Message_Messenger^ theMessenger, RDC::OCC::Message_Gravity theGravity)
{
	((::Message_Report*)_NativeInstance)->SendMessages(Handle(::Message_Messenger)(theMessenger->NativeInstance), (::Message_Gravity)theGravity);
}

void RDC::OCC::Message_Report::Merge(RDC::OCC::Message_Report^ theOther)
{
	((::Message_Report*)_NativeInstance)->Merge(Handle(::Message_Report)(theOther->NativeInstance));
}

void RDC::OCC::Message_Report::Merge(RDC::OCC::Message_Report^ theOther, RDC::OCC::Message_Gravity theGravity)
{
	((::Message_Report*)_NativeInstance)->Merge(Handle(::Message_Report)(theOther->NativeInstance), (::Message_Gravity)theGravity);
}

void RDC::OCC::Message_Report::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Message_Report*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Message_Report::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Message_Report*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Message_Report^ RDC::OCC::Message_Report::CreateDowncasted(::Message_Report* instance)
{
	return gcnew RDC::OCC::Message_Report(instance);
}



//---------------------------------------------------------------------
//  Class  Message
//---------------------------------------------------------------------

RDC::OCC::Message::Message()
	: RDC::OCC::BaseClass<::Message>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message();
}

RDC::OCC::Message_Messenger^ RDC::OCC::Message::DefaultMessenger()
{
	Handle(::Message_Messenger) _result = ::Message::DefaultMessenger();
	return _result.IsNull() ? nullptr : RDC::OCC::Message_Messenger::CreateDowncasted(_result.get());
}

void RDC::OCC::Message::Send(RDC::OCC::TCollection_AsciiString^ theMessage, RDC::OCC::Message_Gravity theGravity)
{
	::Message::Send(*(::TCollection_AsciiString*)theMessage->NativeInstance, (::Message_Gravity)theGravity);
}

void RDC::OCC::Message::SendFail(RDC::OCC::TCollection_AsciiString^ theMessage)
{
	::Message::SendFail(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void RDC::OCC::Message::SendAlarm(RDC::OCC::TCollection_AsciiString^ theMessage)
{
	::Message::SendAlarm(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void RDC::OCC::Message::SendWarning(RDC::OCC::TCollection_AsciiString^ theMessage)
{
	::Message::SendWarning(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void RDC::OCC::Message::SendInfo(RDC::OCC::TCollection_AsciiString^ theMessage)
{
	::Message::SendInfo(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void RDC::OCC::Message::SendTrace(RDC::OCC::TCollection_AsciiString^ theMessage)
{
	::Message::SendTrace(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

RDC::OCC::TCollection_AsciiString^ RDC::OCC::Message::FillTime(int Hour, int Minute, double Second)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Message::FillTime(Hour, Minute, Second);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TCollection_AsciiString(_result);
}

RDC::OCC::Message_Report^ RDC::OCC::Message::DefaultReport(bool theToCreate)
{
	Handle(::Message_Report) _result = ::Message::DefaultReport(theToCreate);
	return _result.IsNull() ? nullptr : RDC::OCC::Message_Report::CreateDowncasted(_result.get());
}

RDC::OCC::Message_Report^ RDC::OCC::Message::DefaultReport()
{
	Handle(::Message_Report) _result = ::Message::DefaultReport(false);
	return _result.IsNull() ? nullptr : RDC::OCC::Message_Report::CreateDowncasted(_result.get());
}

bool RDC::OCC::Message::MetricFromString(System::String^ theString, RDC::OCC::Message_MetricType% theType)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	pin_ptr<RDC::OCC::Message_MetricType> pp_theType = &theType;
	bool _result = ::Message::MetricFromString(sz_theString, *(::Message_MetricType*)pp_theType);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
	return _result;
}

System::String^ RDC::OCC::Message::MetricToString(RDC::OCC::Message_MetricType theType)
{
	Standard_CString _result = ::Message::MetricToString((::Message_MetricType)theType);
	return gcnew System::String(_result);
}

RDC::OCC::Message_MetricType RDC::OCC::Message::MetricFromString(System::String^ theString)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	::Message_MetricType _result = ::Message::MetricFromString(sz_theString);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
	return (RDC::OCC::Message_MetricType)_result;
}



//---------------------------------------------------------------------
//  Class  Message_ProgressRange
//---------------------------------------------------------------------

RDC::OCC::Message_ProgressRange::Message_ProgressRange()
	: RDC::OCC::BaseClass<::Message_ProgressRange>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ProgressRange();
}

bool RDC::OCC::Message_ProgressRange::UserBreak()
{
	bool _result = ((::Message_ProgressRange*)_NativeInstance)->UserBreak();
	return _result;
}

bool RDC::OCC::Message_ProgressRange::More()
{
	bool _result = ((::Message_ProgressRange*)_NativeInstance)->More();
	return _result;
}

bool RDC::OCC::Message_ProgressRange::IsActive()
{
	bool _result = ((::Message_ProgressRange*)_NativeInstance)->IsActive();
	return _result;
}

void RDC::OCC::Message_ProgressRange::Close()
{
	((::Message_ProgressRange*)_NativeInstance)->Close();
}


