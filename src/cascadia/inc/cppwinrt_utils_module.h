// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// Wrapper header for cppwinrt_utils.h in module-consuming projects.
// Imports the winrt modules used by cppwinrt_utils.h, then includes
// inert winrt headers to define the header guards it checks.

#pragma once

import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Data;
import winrt.Windows.UI.Xaml.Interop;

#define WINRT_IMPORT_MODULE
#define WINRT_BASE_H
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Data.h>
#include <winrt/Windows.UI.Xaml.Interop.h>

#include <cppwinrt_utils.h>
