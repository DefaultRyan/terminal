// Wrapper for the XAML-generated XamlTypeInfo.g.cpp.
// Sets up C++20 module imports before including the generated file,
// which uses winrt projected types but doesn't know about modules.

#include "pch.h"

#define WINRT_IMPORT_MODULE

import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Data;
import winrt.Windows.UI.Xaml.Interop;
import winrt.Windows.UI.Xaml.Markup;
import winrt.Microsoft.UI.Xaml.Controls;
import winrt.Microsoft.UI.Xaml.XamlTypeInfo;
import winrt.Microsoft.Terminal.UI;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <cppwinrt_utils_module.h>
#include <LibraryResources.h>

#if __has_include("Generated Files\\XamlTypeInfo.g.cpp")
#include "Generated Files\\XamlTypeInfo.g.cpp"
#endif
