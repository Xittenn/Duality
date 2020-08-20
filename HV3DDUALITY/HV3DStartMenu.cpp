#include "pch.h"
#include "HV3DStartMenu.h"
#if __has_include("HV3DStartMenu.g.cpp")
#include "HV3DStartMenu.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::HV3DDUALITY::implementation
{
    HV3DStartMenu::HV3DStartMenu()
    {
        InitializeComponent();
    }

    int32_t HV3DStartMenu::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void HV3DStartMenu::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void HV3DStartMenu::Click_NewEmptyProject(IInspectable const&, RoutedEventArgs const&)
    {
        NewEmptyProject().Content(box_value(L"Clicked"));
    }
}
