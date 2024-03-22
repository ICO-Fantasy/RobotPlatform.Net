#include "OcctPCH.h"
#include "..\Generated\V3d.h"
#include "..\Generated\Graphic3d.h"

RDC::OCC::Graphic3d_RenderingParams^ RDC::OCC::V3d_View::ChangeRenderingParams()
{
	return gcnew RDC::OCC::Graphic3d_RenderingParams(NativeInstance->ChangeRenderingParams());
}