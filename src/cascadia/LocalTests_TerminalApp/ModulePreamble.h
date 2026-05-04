// Module preamble for LocalTests_TerminalApp .cpp files.

#pragma once

#include "pch.h"

#define WINRT_IMPORT_MODULE

import winrt.Windows.ApplicationModel;
import winrt.Windows.ApplicationModel.Core;
import winrt.Windows.ApplicationModel.Resources.Core;
import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.Media.Playback;
import winrt.Windows.System;
import winrt.Windows.UI;
import winrt.Windows.UI.Core;
import winrt.Windows.UI.Input;
import winrt.Windows.UI.Xaml;
import winrt.Windows.UI.Xaml.Controls;
import winrt.Windows.UI.Xaml.Controls.Primitives;
import winrt.Windows.UI.Xaml.Data;
import winrt.Windows.UI.Xaml.Documents;
import winrt.Windows.UI.Xaml.Input;
import winrt.Windows.UI.Xaml.Markup;
import winrt.Windows.UI.Xaml.Media;
import winrt.Microsoft.UI.Xaml.Controls;
import winrt.Microsoft.Terminal.Core;
import winrt.Microsoft.Terminal.Control;
import winrt.Microsoft.Terminal.Settings.Model;
import winrt.Microsoft.Terminal.TerminalConnection;
import winrt.Microsoft.Management.Deployment;
import winrt.TerminalApp;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <til_color_module.h>
#include <cppwinrt_utils_module.h>

#include <SafeDispatcherTimer.h>

#include "winrtTaefTemplates.hpp"

#include "../../inc/conattrs.hpp"
#include "../../types/inc/utils.hpp"
#include "../../inc/DefaultSettings.h"

#include "winrt/Microsoft.Terminal.Core.h"
#include "winrt/Microsoft.Terminal.Control.h"
#include "winrt/Microsoft.Terminal.Settings.Model.h"
#include "winrt/Microsoft.Terminal.TerminalConnection.h"
#include "winrt/TerminalApp.h"
