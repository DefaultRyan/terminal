// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// Module preamble for TerminalSettingsEditor .cpp files.

#pragma once

#include "pch.h"

#define WINRT_IMPORT_MODULE

import winrt.Windows.ApplicationModel;
import winrt.Windows.ApplicationModel.Resources.Core;
import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.Globalization;
import winrt.Windows.Globalization.NumberFormatting;
import winrt.Windows.Media;
import winrt.Windows.Media.Core;
import winrt.Windows.Media.Playback;
import winrt.Windows.System;
import winrt.Windows.UI;
import winrt.Windows.UI.Core;
import winrt.Windows.UI.Input;
import winrt.Windows.UI.Popups;
import winrt.Windows.UI.Text;
import winrt.Windows.UI.ViewManagement;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Automation;
import winrt.Windows.UI.Xaml.Automation.Peers;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Controls.Primitives;
import winrt.Windows.UI.Xaml.Data;
import winrt.Windows.UI.Xaml.Input;
import winrt.Windows.UI.Xaml.Interop;
import winrt.Windows.UI.Xaml.Markup;
import winrt.Windows.UI.Xaml.Media;
import winrt.Windows.UI.Xaml.Navigation;
import winrt.Microsoft.UI.Xaml.Controls;
import winrt.Microsoft.UI.Xaml.XamlTypeInfo;

// Component reference projections
import winrt.Microsoft.Terminal.Core;
import winrt.Microsoft.Terminal.Control;
import winrt.Microsoft.Terminal.TerminalConnection;
import winrt.Microsoft.Terminal.Settings.Model;
import winrt.Microsoft.Terminal.UI;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <til_color_module.h>

#include "til.h"

#include <cppwinrt_utils_module.h>
#include <LibraryResources.h>

// Set platform header guards for headers that check them
#define WINRT_BASE_H
#include "winrt/Windows.ApplicationModel.h"

// Set component header guards
#include "winrt/Microsoft.Terminal.Core.h"
#include "winrt/Microsoft.Terminal.Control.h"
#include "winrt/Microsoft.Terminal.TerminalConnection.h"
#include "winrt/Microsoft.Terminal.Settings.Model.h"
#include "winrt/Microsoft.Terminal.UI.h"
