#include "pch.h"
#include "ModulePreamble.h"
import winrt.Microsoft.Terminal.Settings.Model;

// Through the power of LTCG, this will all get deleted... and all call
// sites too.
// https://devblogs.microsoft.com/oldnewthing/20250416-00/?p=111077

bool TestHook_CascadiaSettings_ResolveSingleMediaResource(
    winrt::Microsoft::Terminal::Settings::Model::OriginTag,
    std::wstring_view,
    const winrt::Microsoft::Terminal::Settings::Model::IMediaResource&)
{
    return false;
}
