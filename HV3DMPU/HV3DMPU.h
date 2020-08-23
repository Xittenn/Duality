#pragma once

#include "CHV3DMPU.g.h"

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
