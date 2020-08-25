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

    void HV3DStartMenu::Click_NewEmptyProject(IInspectable const&, winrt::Windows::UI::Xaml::RoutedEventArgs const&)
    {
        NewEmptyProject().Content(box_value(L"Clicked"));
    }


    event_token HV3DStartMenu::loaded_PopulateProjects(winrt::Windows::UI::Xaml::RoutedEventHandler const& handler) const
    {

    }

    void HV3DStartMenu::loaded_PopulateProjects(event_token const* cookie) const
    {

    }

    Loaded_revoker HV3DStartMenu::loaded_PopulateProjects(auto_revoke_t, winrt::Windows::UI::Xaml::RoutedEventHandler const& handler) const
    {

    }


    event_token HV3DStartMenu::loaded_PopulateNewProjects(winrt::Windows::UI::Xaml::RoutedEventHandler const& handler) const
    {

    }

    void HV3DStartMenu::loaded_PopulateNewProjects(event_token const* cookie) const
    {

    }

    Loaded_revoker HV3DStartMenu::loaded_PopulateNewProjects(auto_revoke_t, winrt::Windows::UI::Xaml::RoutedEventHandler const& handler) const
    {

    }


}
