// Module preamble for Control UnitTests .cpp files.

#pragma once

#define WINRT_IMPORT_MODULE

import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.System;
import winrt.Windows.UI;
import winrt.Windows.ApplicationModel.Resources.Core;
import winrt.Microsoft.Terminal.Core;
import winrt.Microsoft.Terminal.Control;
import winrt.Microsoft.Terminal.TerminalConnection;

#include <wil_cppwinrt_module.h>
#include <til_winrt_module.h>
#include <til_color_module.h>
#include <cppwinrt_utils_module.h>

#include <ThrottledFunc.h>

#include "../../inc/conattrs.hpp"
#include "../../types/inc/utils.hpp"
#include "../../inc/DefaultSettings.h"

#include "winrt/Microsoft.Terminal.Core.h"
#include "winrt/Microsoft.Terminal.Control.h"
#include "winrt/Microsoft.Terminal.TerminalConnection.h"
