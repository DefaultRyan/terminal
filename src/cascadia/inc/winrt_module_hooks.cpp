// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.
//
// winrt_module_hooks.cpp
//
// When consuming C++/WinRT via modules, the selectany global function pointers
// from base.h (winrt_to_hresult_handler, etc.) become module-attached and are
// not visible to the linker in consumer DLLs. This file provides the
// definitions that each DLL needs.
//
// Include this file in the sources of any DLL project that consumes
// the CppWinRT module.

import winrt_base;

// These are the global hook function pointers that C++/WinRT declares
// with __declspec(selectany) in base.h. In module builds, the module
// owns those definitions, but DLL consumers need their own copies.
__declspec(selectany) std::int32_t(__stdcall* winrt_to_hresult_handler)(void* address) noexcept {};
__declspec(selectany) winrt::hstring(__stdcall* winrt_to_message_handler)(void* address) {};
__declspec(selectany) void(__stdcall* winrt_throw_hresult_handler)(std::uint32_t lineNumber, char const* fileName, char const* functionName, void* returnAddress, winrt::hresult const result) noexcept {};
__declspec(selectany) std::int32_t(__stdcall* winrt_activation_handler)(void* classId, winrt::guid const& iid, void** factory) noexcept {};
