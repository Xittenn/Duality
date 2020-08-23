#pragma once
#include "CHV3DMRPCM.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

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
