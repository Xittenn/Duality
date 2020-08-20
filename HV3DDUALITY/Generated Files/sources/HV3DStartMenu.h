#pragma once
#include "HV3DStartMenu.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::HV3DDUALITY::implementation
{
    struct HV3DStartMenu : HV3DStartMenuT<HV3DStartMenu>
    {
        HV3DStartMenu() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}
namespace winrt::HV3DDUALITY::factory_implementation
{
    struct HV3DStartMenu : HV3DStartMenuT<HV3DStartMenu, implementation::HV3DStartMenu>
    {
    };
}
