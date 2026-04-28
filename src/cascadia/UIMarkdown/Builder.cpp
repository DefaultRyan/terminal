#include "pch.h"

#define WINRT_IMPORT_MODULE

import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Documents;
import winrt.Windows.UI.Xaml.Media.Imaging;
import winrt.Windows.UI.Text;
import winrt.Microsoft.UI.Xaml.Controls;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <cppwinrt_utils_module.h>
#include <LibraryResources.h>

#include "Builder.h"
#include "Builder.g.cpp"

#include "MarkdownToXaml.h"

namespace winrt::Microsoft::Terminal::UI::Markdown::implementation
{
    winrt::Windows::UI::Xaml::Controls::RichTextBlock Builder::Convert(const winrt::hstring& text,
                                                                       const winrt::hstring& baseUrl)
    {
        const auto u8String{ til::u16u8(text) };
        return MarkdownToXaml::Convert(u8String, baseUrl);
    }
}
