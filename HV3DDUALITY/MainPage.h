#pragma once

#include "MainPage.g.h"

namespace winrt::HV3DDUALITY::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

    };
}

namespace winrt::HV3DDUALITY::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
