// Wrapper for the XAML-generated CodeBlock.xaml.g.hpp.
// Sets up C++20 module imports before including the generated file,
// which is compiled as a standalone translation unit by the XAML compiler.

#include "pch.h"

#define WINRT_IMPORT_MODULE

import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Data;
import winrt.Windows.UI.Xaml.Input;
import winrt.Windows.UI.Xaml.Interop;
import winrt.Windows.UI.Xaml.Markup;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <cppwinrt_utils_module.h>

import winrt.Microsoft.Terminal.UI.Markdown;

#if __has_include("Generated Files\\CodeBlock.xaml.g.hpp")
#include "Generated Files\\CodeBlock.xaml.g.hpp"
#endif
