#pragma once

#include "CHV3DMYSQLSTD.g.h"

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
