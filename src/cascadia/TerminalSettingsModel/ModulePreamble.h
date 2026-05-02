// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// Module preamble for TerminalSettingsModel .cpp files.
// Replaces the winrt headers that were previously in the PCH.
// Include this after pch.h in each .cpp file.

#pragma once

#define WINRT_IMPORT_MODULE

import winrt.Windows.ApplicationModel;
import winrt.Windows.ApplicationModel.AppExtensions;
import winrt.Windows.ApplicationModel.Resources.Core;
import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.Management.Deployment;
import winrt.Windows.Storage;
import winrt.Windows.Storage.Streams;
import winrt.Windows.System;
import winrt.Windows.UI.Core;
import winrt.Windows.UI.ViewManagement;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Media;
import winrt.Microsoft.UI.Xaml.Controls;

// Component reference projections — import modules directly
import winrt.Microsoft.Terminal.Core;
import winrt.Microsoft.Terminal.Control;
import winrt.Microsoft.Terminal.TerminalConnection;

// Set platform header guards for headers that check them (e.g. WtExeUtils.h, JsonUtils.h)
#define WINRT_BASE_H
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/Windows.ApplicationModel.AppExtensions.h"
#include "winrt/Windows.ApplicationModel.Resources.Core.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Storage.h"
#include "winrt/Windows.Storage.Streams.h"
#include "winrt/Windows.UI.ViewManagement.h"

// Set component header guards
#include "winrt/Microsoft.Terminal.Core.h"
#include "winrt/Microsoft.Terminal.Control.h"
#include "winrt/Microsoft.Terminal.TerminalConnection.h"

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <til_color_module.h>

// Include til.h after module imports and header guards are set,
// so til/color.h sees the winrt guards and enables its conversion operators.
// Must come before cppwinrt_utils_module.h which uses til::split_iterator.
#include "til.h"

#include <cppwinrt_utils_module.h>

#include <LibraryResources.h>
