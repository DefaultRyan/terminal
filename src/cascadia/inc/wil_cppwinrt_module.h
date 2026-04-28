// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// Wrapper header for wil/cppwinrt.h and wil/cppwinrt_helpers.h in
// module-consuming projects.
// Imports winrt_base, then includes inert winrt headers to define the
// header guards that WIL checks for conditional feature enablement.

#pragma once

#pragma warning(push)
#pragma warning(disable : 4348) // Workaround: import std + textual <coroutine> in PCH causes redefinition warning

import winrt_base;
import winrt.Windows.Foundation;
import winrt.Windows.System;     // DispatcherQueue for wil::resume_foreground
import winrt.Windows.UI.Core;    // CoreDispatcher for wil::resume_foreground

#define WINRT_IMPORT_MODULE
#define WINRT_BASE_H // Workaround: base.h lacks WINRT_IMPORT_MODULE guard, must suppress manually
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.UI.Core.h>

#include <wil/cppwinrt.h>
#include <wil/cppwinrt_helpers.h>

#pragma warning(pop)
