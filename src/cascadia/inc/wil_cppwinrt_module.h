// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// Wrapper header for wil/cppwinrt.h in module-consuming projects.
// Imports the winrt_base module, then includes inert winrt headers
// to define the header guards that wil/cppwinrt.h checks.

#pragma once

import winrt_base;

#define WINRT_IMPORT_MODULE
#define WINRT_BASE_H
#include <winrt/Windows.Foundation.h>

#include <wil/cppwinrt.h>
