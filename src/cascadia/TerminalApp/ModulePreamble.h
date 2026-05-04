// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// Module preamble for TerminalApp .cpp files.

#pragma once

#include "pch.h"

#define WINRT_IMPORT_MODULE

import winrt.Windows.ApplicationModel;
import winrt.Windows.ApplicationModel.DataTransfer;
import winrt.Windows.ApplicationModel.Resources.Core;
import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.Foundation.Metadata;
import winrt.Windows.Globalization;
import winrt.Windows.Graphics.Display;
import winrt.Windows.Management.Deployment;
import winrt.Windows.Media;
import winrt.Windows.Media.Core;
import winrt.Windows.Media.Playback;
import winrt.Windows.Services.Store;
import winrt.Windows.Storage;
import winrt.Windows.Storage.Pickers;
import winrt.Windows.Storage.Provider;
import winrt.Windows.System;
import winrt.Windows.UI;
import winrt.Windows.UI.Core;
import winrt.Windows.UI.Input;
import winrt.Windows.UI.Text;
import winrt.Windows.UI.ViewManagement;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Automation.Peers;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Controls.Primitives;
import winrt.Windows.UI.Xaml.Data;
import winrt.Windows.UI.Xaml.Documents;
import winrt.Windows.UI.Xaml.Input;
import winrt.Windows.UI.Xaml.Markup;
import winrt.Windows.UI.Xaml.Media;
import winrt.Windows.UI.Xaml.Media.Animation;
import winrt.Windows.UI.Xaml.Media.Imaging;
import winrt.Windows.UI.Xaml.Shapes;
import winrt.Windows.UI.Xaml.Hosting;
import winrt.Microsoft.UI.Xaml.Controls;
import winrt.Microsoft.UI.Xaml.Controls.Primitives;
import winrt.Microsoft.UI.Xaml.XamlTypeInfo;
import winrt.Microsoft.Management.Deployment;

// Component reference projections
import winrt.Microsoft.Terminal.Core;
import winrt.Microsoft.Terminal.Control;
import winrt.Microsoft.Terminal.TerminalConnection;
import winrt.Microsoft.Terminal.Settings.Editor;
import winrt.Microsoft.Terminal.Settings.Model;
import winrt.Microsoft.Terminal.UI;
import winrt.Microsoft.Terminal.UI.Markdown;
import winrt.TerminalApp;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <til_color_module.h>

#include "til.h"

#include <SafeDispatcherTimer.h>
#include <cppwinrt_utils_module.h>
#include <LibraryResources.h>

// Set platform header guards
#define WINRT_BASE_H
#include "winrt/Windows.ApplicationModel.h"

// Set component header guards
#include "winrt/Microsoft.Terminal.Core.h"
#include "winrt/Microsoft.Terminal.Control.h"
#include "winrt/Microsoft.Terminal.TerminalConnection.h"
#include "winrt/Microsoft.Terminal.Settings.Editor.h"
#include "winrt/Microsoft.Terminal.Settings.Model.h"
#include "winrt/Microsoft.Terminal.UI.h"
#include "winrt/Microsoft.Terminal.UI.Markdown.h"
