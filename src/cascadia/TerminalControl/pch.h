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

#include <Unknwn.h>

// Workaround: STL headers included by downstream headers after module imports
// cause import-then-include redefinition errors. Pre-include them here.
#include <variant>
#include <shared_mutex>
// Workaround: winioctl.h gets included twice from different paths in
// HwndTerminal.cpp's include chain, causing enum redefinition.
#include <winioctl.h>

#include <windows.ui.xaml.media.dxinterop.h>

#include <TraceLoggingProvider.h>
TRACELOGGING_DECLARE_PROVIDER(g_hTerminalControlProvider);
#include <telemetry/ProjectTelemetry.h>

#include <shellapi.h>
#include <ShlObj_core.h>
#include <WinUser.h>
#include <UIAutomationCore.h>
