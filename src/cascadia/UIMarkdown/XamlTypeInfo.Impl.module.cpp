// Wrapper for the XAML-generated XamlTypeInfo.Impl.g.cpp.
// Sets up C++20 module imports before including the generated file.

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
import winrt.Microsoft.Terminal.UI.Markdown;

#if __has_include("Generated Files\\XamlTypeInfo.Impl.g.cpp")
#include "Generated Files\\XamlTypeInfo.Impl.g.cpp"
#endif
