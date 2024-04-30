#pragma once

#define WIN32_LEAN_AND_MEAN

#include <vcclr.h>
#include <sstream>

// 版本检查
#include "Standard_Version.hxx"
#include "Generated/VersionInfo.h"

#if REQUIRED_OCCT_VERSION_MAJOR != OCC_VERSION_MAJOR || REQUIRED_OCCT_VERSION_MINOR != OCC_VERSION_MINOR || REQUIRED_OCCT_VERSION_MAINTENANCE != OCC_VERSION_MAINTENANCE
#pragma message( "ERROR: OCCT library has the wrong version. Please install the correct version or regenerate wrapper code." )
#pragma message( "       Installed version: " OCC_VERSION_STRING_EXT )
#pragma message( "       Required version: " REQUIRED_OCCT_VERSION_STRING )
#error Incorrect OCCT library version.
#endif

// 原始包含

#include "Standard_TypeDef.hxx"
#include "gp.hxx"
#include "gp_XY.hxx"
#include "gp_XYZ.hxx"
#include "Message_ProgressIndicator.hxx"
#include "Message_Msg.hxx"

// 将 Aspect_FBConfig 定义为指针，否则它将被类型转换为链接器无法找到的 OpenGL 类型
#define _Aspect_FBConfig_HeaderFile
typedef void* Aspect_FBConfig;

//前向声明和原始包含
#include "Generated/ForwardDeclarations.h"
#include "Generated/NativeIncludes.h"

// 引入模板类

#include "BaseClass.h"
#include "IndexEnumerator.h"
#include "IteratorEnumerator.h"
#include "Standard_Transient.h"
#include "ValueTypes\ValueTypes.h"

#include "Extensions/BRep_Ex.h"
#include "Extensions/Graphic3d_Ex.h"
#include "Extensions/Geom2dAPI_Ex.h"
#include "Extensions/TopTools_Ex.h"
#include "Extensions/V3d_Ex.h"
