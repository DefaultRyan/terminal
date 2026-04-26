// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// pch.h
// Header for platform projection include files
//

#pragma once

// Needs to be defined or we get redeclaration errors
#define WIN32_LEAN_AND_MEAN
#define NOMCX
#define NOHELP
#define NOCOMM

// Manually include til after we include Windows.Foundation to give it winrt superpowers
#define BLOCK_TIL
#include <LibraryIncludes.h>

// Must be included before any WinRT headers.
#include <Unknwn.h>
#include <Windows.h>

#include <winhttp.h>
#include <wil/resource.h>

#include <TraceLoggingProvider.h>
TRACELOGGING_DECLARE_PROVIDER(g_hTerminalConnectionProvider);
#include <telemetry/ProjectTelemetry.h>

#include "til.h"
