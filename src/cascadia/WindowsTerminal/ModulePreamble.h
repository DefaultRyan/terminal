// Module preamble for WindowsTerminal .cpp files.

#pragma once

#define WINRT_IMPORT_MODULE

import winrt.Windows.ApplicationModel;
import winrt.Windows.ApplicationModel.Resources.Core;
import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.System;
import winrt.Windows.UI.Composition;
import winrt.Windows.UI.Core;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Controls.Primitives;
import winrt.Windows.UI.Xaml.Data;
import winrt.Windows.UI.Xaml.Hosting;
import winrt.Windows.UI.Xaml.Media;

// Component reference projections
import winrt.TerminalApp;
import winrt.Microsoft.Terminal.Control;
import winrt.Microsoft.Terminal.Settings.Model;
import winrt.Microsoft.Terminal.TerminalConnection;
import winrt.Microsoft.Terminal.UI;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <til_color_module.h>

#include "til.h"
#include "til/mutex.h"

#include <SafeDispatcherTimer.h>
#include <cppwinrt_utils_module.h>
#include <LibraryResources.h>

// Set platform header guards
#define WINRT_BASE_H
#include <winrt/base_macros.h>

// Set component header guards so inert winrt includes are no-ops
#define WINRT_Windows_ApplicationModel_H
#define WINRT_TerminalApp_H
#define WINRT_Microsoft_Terminal_Control_H
#define WINRT_Microsoft_Terminal_Settings_Model_H
#define WINRT_Microsoft_Terminal_TerminalConnection_H
#define WINRT_Microsoft_Terminal_UI_H
