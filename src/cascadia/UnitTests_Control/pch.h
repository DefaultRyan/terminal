/*++
Copyright (c) Microsoft Corporation
Licensed under the MIT license.
--*/

#pragma once

// Block minwindef.h min/max macros to prevent <algorithm> conflict
#define NOMINMAX

#define WIN32_LEAN_AND_MEAN
#define NOMCX
#define NOHELP
#define NOCOMM

#include <Unknwn.h>
#include <ShObjIdl.h>

// Manually include til after we include Windows.Foundation to give it winrt superpowers
#define BLOCK_TIL
// This includes support libraries from the CRT, STL, WIL, and GSL
#include "LibraryIncludes.h"
// This is inexplicable, but for whatever reason, cppwinrt conflicts with the
//      SDK definition of this function, so the only fix is to undef it.
// from WinBase.h
// Windows::UI::Xaml::Media::Animation::IStoryboard::GetCurrentTime
#ifdef GetCurrentTime
#undef GetCurrentTime
#endif

#include <Unknwn.h>
#include <hstring.h>

#include <WexTestClass.h>
#include "consoletaeftemplates.hpp"

// Pre-include STL headers that conflict with import std;
#include <variant>

// til.h and utils.hpp are included in ModulePreamble.h after module imports
// so til::color conversion operators light up correctly.
#include <til/mutex.h>
