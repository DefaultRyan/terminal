// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// Forced include for XAML compiler generated .cpp files (XamlTypeInfo.g.cpp,
// XamlMetaDataProvider.cpp, etc.) that use winrt projected types but don't
// know about C++20 modules. This header is added via /FI on generated TUs.
//
// It imports the platform modules commonly needed by XAML codegen and defines
// WINRT_IMPORT_MODULE so that cppwinrt-generated headers use module imports.

#pragma once

#ifndef WINRT_IMPORT_MODULE
#define WINRT_IMPORT_MODULE
#endif

import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Data;
import winrt.Windows.UI.Xaml.Interop;
import winrt.Windows.UI.Xaml.Markup;

#include <wil_cppwinrt_module.h>
#include <cppwinrt_utils_module.h>
