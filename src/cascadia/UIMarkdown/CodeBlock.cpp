// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#include "pch.h"

#define WINRT_IMPORT_MODULE

import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Input;
import winrt.Windows.UI.Xaml.Markup;
import winrt.Microsoft.UI.Xaml.Controls;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <cppwinrt_utils_module.h>
#include <LibraryResources.h>

#include "CodeBlock.h"

#include "CodeBlock.g.cpp"
#include "RequestRunCommandsArgs.g.cpp"

namespace winrt
{
    namespace MUX = Microsoft::UI::Xaml;
    namespace WUX = Windows::UI::Xaml;
    using IInspectable = Windows::Foundation::IInspectable;
}

namespace winrt::Microsoft::Terminal::UI::Markdown::implementation
{
    CodeBlock::CodeBlock(const winrt::hstring& initialCommandlines) :
        Commandlines(initialCommandlines)
    {
    }
    void CodeBlock::_playPressed(const Windows::Foundation::IInspectable&,
                                 const Windows::UI::Xaml::Input::TappedRoutedEventArgs& e)
    {
        auto args = winrt::make_self<RequestRunCommandsArgs>(Commandlines());
        RequestRunCommands.raise(*this, *args);
        e.Handled(true);
    }
}
