// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

// We're suspending the inclusion of til here so that we can include
// it after some of our C++/WinRT headers.
#define BLOCK_TIL
#include <LibraryIncludes.h>
// Workaround: STL headers included after module imports (import std via winrt
// modules) cause redefinition errors. Pre-include any STL headers that
// downstream headers (OutputCell.hpp, MacroBuffer.hpp, etc.) pull in, so
// they appear before the import boundary.
#include <bitset>
#include <variant>

#include <til.h>
