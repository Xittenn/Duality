#include "pch.h"
#include "HV3DStartMenu.h"
#if __has_include("HV3DStartMenu.g.cpp")
#include "HV3DStartMenu.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;

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


    event_token HV3DStartMenu::loaded_PopulateProjects(RoutedEventHandler const& handler) const
    {
        return loaded_PopulateProjectsEvents.add(handler);
    }

    void HV3DStartMenu::loaded_PopulateProjects(event_token const* cookie) const
    {

    }

    Canvas::Loaded_revoker HV3DStartMenu::loaded_PopulateProjects(auto_revoke_t, RoutedEventHandler const& handler) const
    {


    }


    event_token HV3DStartMenu::loaded_PopulateNewProjects(RoutedEventHandler const& handler) const
    {

    }

    void HV3DStartMenu::loaded_PopulateNewProjects(event_token const* cookie) const
    {

    }

    Canvas::Loaded_revoker HV3DStartMenu::loaded_PopulateNewProjects(auto_revoke_t, RoutedEventHandler const& handler) const
    {


    }


}
