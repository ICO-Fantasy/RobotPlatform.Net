#pragma once

namespace RDC
{
	namespace OCC
	{
		template<typename T>
		public ref class BaseClass abstract {
		protected:
			//在C++20标准中，标准头文件 <iterator> 中引入了名为 InitMode 的标识符。因此修改枚举类名称
			enum class InitMode {
				Uninitialized
			};

			//--------------------------------------------------------------------------------------------------

			T* _NativeInstance = nullptr;
			bool _DeleteOnFinalize = true;

			//--------------------------------------------------------------------------------------------------
			///析构
			virtual void DeleteInstance() {
				if (_NativeInstance != nullptr)
				{
					delete _NativeInstance;
					_NativeInstance = nullptr;
				}
			}

			//--------------------------------------------------------------------------------------------------

		public:

			// 派生类大多定义了自己的默认构造函数，用于创建新的本地实例。我们需要另一个什么也不做的默认构造函数。
			BaseClass(InitMode init) {
			};

			//--------------------------------------------------------------------------------------------------
			///构造
			BaseClass(T* instance, bool deleteOnFinalize) {
				_NativeInstance = instance;
				_DeleteOnFinalize = deleteOnFinalize;
			}

			//--------------------------------------------------------------------------------------------------

			virtual ~BaseClass() {
				this->!BaseClass();
			}

			//--------------------------------------------------------------------------------------------------
			///析构
			!BaseClass() {
				if (!IsDisposed())
				{
					if (_DeleteOnFinalize)
					{
						DeleteInstance();
					}
					_NativeInstance = nullptr;
				}
			}

			//--------------------------------------------------------------------------------------------------

			bool IsDisposed() {
				return this == nullptr || _NativeInstance == nullptr;
			}

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override {
				if (this->GetType()->IsInstanceOfType(obj))
				{
					return _NativeInstance == ((BaseClass^)obj)->_NativeInstance;
				}
				return false;
			}

			//--------------------------------------------------------------------------------------------------

			int GetHashCode() override {
				return (int)(unsigned long long)_NativeInstance;
			}

			//--------------------------------------------------------------------------------------------------

		};

	}; // Occt
}; // RDC
