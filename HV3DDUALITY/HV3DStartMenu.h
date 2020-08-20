#pragma once

#include "HV3DStartMenu.g.h"

namespace winrt::HV3DDUALITY::implementation
{
    struct HV3DStartMenu : HV3DStartMenuT<HV3DStartMenu>
    {
        HV3DStartMenu();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void Click_NewEmptyProject(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::HV3DDUALITY::factory_implementation
{
    struct HV3DStartMenu : HV3DStartMenuT<HV3DStartMenu, implementation::HV3DStartMenu>
    {
    };
}
