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


    event_token load_PopulateProjects(winrt::Windows::UI::Xaml::RoutedEventHandler const& handler) const
    {

    }

    void load_PopulateProjects(event_token const* cookie) const
    {

    }

    Loaded_revoker load_PopulateProjects(auto_revoke_t, winrt::Windows::UI::Xaml::RoutedEventHandler const& handler) const
    {

    }


    event_token load_PopulateNewProjects(winrt::Windows::UI::Xaml::RoutedEventHandler const& handler) const
    {

    }

    void load_PopulateNewProjects(event_token const* cookie) const
    {

    }

    Loaded_revoker load_PopulateNewProjects(auto_revoke_t, winrt::Windows::UI::Xaml::RoutedEventHandler const& handler) const
    {

    }


}
