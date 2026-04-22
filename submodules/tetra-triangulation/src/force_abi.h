#pragma once
// Force new ABI before any STL headers
#if defined(_GLIBCXX_USE_CXX11_ABI)
#  undef _GLIBCXX_USE_CXX11_ABI
#endif
#define _GLIBCXX_USE_CXX11_ABI 1