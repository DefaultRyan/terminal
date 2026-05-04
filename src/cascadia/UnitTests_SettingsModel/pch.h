/*++
Copyright (c) Microsoft Corporation
Licensed under the MIT license.

Module Name:
- precomp.h

Abstract:
- Contains external headers to include in the precompile phase of console build process.
- Avoid including internal project headers. Instead include them only in the classes that need them (helps with test project building).

Author(s):
- Carlos Zamora (cazamor) April 2019
--*/

#pragma once

// Manually include til after we include Windows.Foundation to give it winrt superpowers
#define BLOCK_TIL
// This includes support libraries from the CRT, STL, WIL, and GSL
#include <LibraryIncludes.h>

// Pre-include STL headers that conflict with import std;
#include <variant>
#include <latch>

// This is inexplicable, but for whatever reason, cppwinrt conflicts with the
//      SDK definition of this function, so the only fix is to undef it.
// from WinBase.h
// Windows::UI::Xaml::Media::Animation::IStoryboard::GetCurrentTime
#ifdef GetCurrentTime
#undef GetCurrentTime
#endif

#include <Unknwn.h>
#include <hstring.h>
#include <shellapi.h>

#include <WexTestClass.h>
#include <json/json.h>
#include "consoletaeftemplates.hpp"

// Pre-include STL headers that conflict with import std;
#include <variant>

#include <windows.ui.xaml.media.dxinterop.h>
