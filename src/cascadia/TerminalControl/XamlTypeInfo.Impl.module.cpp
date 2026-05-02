// Wrapper for the XAML-generated XamlTypeInfo.Impl.g.cpp.
// Sets up C++20 module imports before including the generated file.

#include "pch.h"
#include "ModulePreamble.h"

#if __has_include("Generated Files\\XamlTypeInfo.Impl.g.cpp")
#include "Generated Files\\XamlTypeInfo.Impl.g.cpp"
#endif
