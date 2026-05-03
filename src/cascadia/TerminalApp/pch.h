// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// pch.h
// Header for platform projection include files
//

#pragma once

#define WIN32_LEAN_AND_MEAN
#define NOMCX
#define NOHELP
#define NOCOMM

// Manually include til after we include Windows.Foundation to give it winrt superpowers
#define BLOCK_TIL
#include <LibraryIncludes.h>
// This is inexplicable, but for whatever reason, cppwinrt conflicts with the
//      SDK definition of this function, so the only fix is to undef it.
// from WinBase.h
// Windows::UI::Xaml::Media::Animation::IStoryboard::GetCurrentTime
#ifdef GetCurrentTime
#undef GetCurrentTime
#endif

#include <windows.ui.xaml.media.dxinterop.h>

// Including TraceLogging essentials for the binary
#include <TraceLoggingProvider.h>
#include <winmeta.h>
TRACELOGGING_DECLARE_PROVIDER(g_hTerminalAppProvider);
#include <telemetry/ProjectTelemetry.h>
#include <TraceLoggingActivity.h>

#include <msctf.h>
#include <shellapi.h>
#include <shobjidl_core.h>

#include <CLI/CLI.hpp>

// Workaround: STL headers included by til/*.h after module imports
// cause import-then-include redefinition errors.
#include <latch>
