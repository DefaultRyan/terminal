#include "pch.h"

#define WINRT_IMPORT_MODULE

import winrt.Windows.Foundation;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Markup;
import winrt.Windows.ApplicationModel.Resources.Core;
import winrt.Windows.ApplicationModel.Resources;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <cppwinrt_utils_module.h>
#include <LibraryResources.h>

#include "ResourceString.h"
#include "ResourceString.g.cpp"

namespace winrt::Microsoft::Terminal::UI::implementation
{
    winrt::Windows::Foundation::IInspectable ResourceString::ProvideValue()
    {
        if (tree_.empty())
        {
            return nullptr;
        }

        auto loader{ winrt::Windows::ApplicationModel::Resources::ResourceLoader::GetForCurrentView(tree_ + L"/Resources") };
        return winrt::box_value(loader.GetString(name_));
    }
}
