#pragma once
#include "CHV3DMPU.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::HV3DMPU::implementation
{
    struct CHV3DMPU : CHV3DMPUT<CHV3DMPU>
    {
        CHV3DMPU() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}
namespace winrt::HV3DMPU::factory_implementation
{
    struct CHV3DMPU : CHV3DMPUT<CHV3DMPU, implementation::CHV3DMPU>
    {
    };
}
