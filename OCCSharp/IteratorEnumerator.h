#pragma once

using namespace System::Collections::Generic;

namespace RDC
{
namespace OCC
{
template <typename T, typename IT>
public ref class IteratorEnumerator
	: public RDC::OCC::BaseClass<IT>
	, IEnumerator<T> {

public:
	IteratorEnumerator(BaseClass::InitMode init)
		: RDC::OCC::BaseClass<IT>(init) {
	};

	//--------------------------------------------------------------------------------------------------

	IteratorEnumerator(IT* nativeInstance, bool deleteOnFinalize)
		: RDC::OCC::BaseClass<IT>(nativeInstance, deleteOnFinalize) {
		_Started = false;
	}

	//--------------------------------------------------------------------------------------------------

	virtual T Value() = 0;
	virtual bool More() = 0;
	virtual void Next() = 0;

	//--------------------------------------------------------------------------------------------------

	virtual bool MoveNext() = IEnumerator<T>::MoveNext
	{
		if (_Started)
		{
			Next();
		}
		_Started = true;

		return More();
	}

		//--------------------------------------------------------------------------------------------------

		virtual void Reset() = IEnumerator<T>::Reset
	{
		throw gcnew System::NotImplementedException();
	}

		//--------------------------------------------------------------------------------------------------

		property T Current
	{
		virtual T get() = IEnumerator<T>::Current::get
		{
			return Value();
		}
	};

	//--------------------------------------------------------------------------------------------------

	property System::Object^ Current2
	{
		virtual System::Object^ get() = System::Collections::IEnumerator::Current::get
		{
			return Value();
		}
	};

	//--------------------------------------------------------------------------------------------------

private:
	bool _Started;
};

}; // Occt
}; // RDC
