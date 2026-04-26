// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// Wrapper header for til/winrt.h in module-consuming projects.
// Imports the winrt modules that til/winrt.h conditionally depends on,
// then includes inert winrt headers to define the header guards.

#pragma once

import winrt.Windows.Foundation;
import winrt.Windows.UI;
import winrt.Windows.UI.Xaml.Data;

#define WINRT_IMPORT_MODULE
#define WINRT_BASE_H
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.UI.h>
#include <winrt/Windows.UI.Xaml.Data.h>

#include <til/winrt.h>
