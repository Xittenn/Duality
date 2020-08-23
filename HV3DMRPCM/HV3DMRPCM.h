#pragma once

#include "CHV3DMRPCM.g.h"

namespace winrt::HV3DMRPCM::implementation
{
    struct CHV3DMRPCM : CHV3DMRPCMT<CHV3DMRPCM>
    {
        CHV3DMRPCM() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::HV3DMRPCM::factory_implementation
{
    struct CHV3DMRPCM : CHV3DMRPCMT<CHV3DMRPCM, implementation::CHV3DMRPCM>
    {
    };
}
