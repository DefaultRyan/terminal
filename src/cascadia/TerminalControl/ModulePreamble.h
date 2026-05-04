// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// Module preamble for TerminalControl .cpp files.
// Replaces the winrt headers that were previously in the PCH.
// Include this after pch.h in each .cpp file.

#pragma once

#include "pch.h"

#define WINRT_IMPORT_MODULE

import winrt.Windows.ApplicationModel.DataTransfer;
import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.Graphics.Display;
import winrt.Windows.Storage;
import winrt.Windows.Storage.Streams;
import winrt.Windows.System;
import winrt.Windows.UI;
import winrt.Windows.UI.Core;
import winrt.Windows.UI.Input;
import winrt.Windows.UI.Text.Core;
import winrt.Windows.UI.ViewManagement;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Automation.Peers;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Controls.Primitives;
import winrt.Windows.UI.Xaml.Data;
import winrt.Windows.UI.Xaml.Documents;
import winrt.Windows.UI.Xaml.Input;
import winrt.Windows.UI.Xaml.Interop;
import winrt.Windows.UI.Xaml.Markup;
import winrt.Windows.UI.Xaml.Media;
import winrt.Windows.UI.Xaml.Media.Animation;
import winrt.Windows.UI.Xaml.Media.Imaging;
import winrt.Windows.UI.Xaml.Shapes;
import winrt.Microsoft.UI.Xaml.Controls;
import winrt.Microsoft.UI.Xaml.Controls.Primitives;
import winrt.Microsoft.UI.Xaml.XamlTypeInfo;

// Component reference projections
import winrt.Microsoft.Terminal.Core;
import winrt.Microsoft.Terminal.TerminalConnection;
import winrt.Microsoft.Terminal.UI;
import winrt.Microsoft.Terminal.Control;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <til_color_module.h>

// Include til.h after module imports and header guards are set
#include "til.h"
#include <til/mutex.h>

#include <SafeDispatcherTimer.h>
#include <ThrottledFunc.h>
#include <cppwinrt_utils_module.h>
#include <LibraryResources.h>

// Set component header guards
#include "winrt/Microsoft.Terminal.TerminalConnection.h"
#include "winrt/Microsoft.Terminal.Core.h"
#include "winrt/Microsoft.Terminal.UI.h"
