#pragma once
#include "CHV3DMYSQLSTD.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::HV3DMYSQLSTD::implementation
{
    struct CHV3DMYSQLSTD : CHV3DMYSQLSTDT<CHV3DMYSQLSTD>
    {
        CHV3DMYSQLSTD() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}
namespace winrt::HV3DMYSQLSTD::factory_implementation
{
    struct CHV3DMYSQLSTD : CHV3DMYSQLSTDT<CHV3DMYSQLSTD, implementation::CHV3DMYSQLSTD>
    {
    };
}
