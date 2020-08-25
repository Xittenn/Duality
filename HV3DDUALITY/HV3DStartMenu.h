#pragma once

#include "HV3DStartMenu.g.h"


namespace winrt::HV3DDUALITY::implementation
{
    struct HV3DStartMenu : HV3DStartMenuT<HV3DStartMenu>
    {
        HV3DStartMenu();

        
        int32_t MyProperty();
        
        void MyProperty(int32_t value);


        void Click_NewEmptyProject(
            IInspectable const& sender, 
            winrt::Windows::UI::Xaml::RoutedEventArgs const& args );


        winrt::event_token loaded_PopulateProjects(
            winrt::Windows::UI::Xaml::RoutedEventHandler const& loaded_PopulateProjectsREH) const;

        void loaded_PopulateProjects(
            winrt::event_token const* loaded_PopulateProjectsCookie) const;

        winrt::Windows::UI::Xaml::Controls::Canvas::Loaded_revoker loaded_PopulateProjects(
            auto_revoke_t, 
            winrt::Windows::UI::Xaml::RoutedEventHandler const& loaded_PopulateProjectsREH) const;


        winrt::event_token loaded_PopulateNewProjects(
            winrt::Windows::UI::Xaml::RoutedEventHandler const& loaded_PopulateNewProjectsREH) const;

        void loaded_PopulateNewProjects(
            winrt::event_token const* loaded_PopulateNewProjectsCookie) const;

        winrt::Windows::UI::Xaml::Controls::Canvas::Loaded_revoker loaded_PopulateNewProjects(
            auto_revoke_t, 
            winrt::Windows::UI::Xaml::RoutedEventHandler const& loaded_PopulateNewProjectsREH) const;


    private:

        winrt::Windows::UI::Xaml::RoutedEventHandler loaded_PopulateProjectsREH;

        winrt::event_token loaded_PopulateProjectsCookie;


        winrt::Windows::UI::Xaml::RoutedEventHandler loaded_PopulateNewProjectsREH;

        winrt::event_token loaded_PopulateNewProjectsCookie;

    };
}

namespace winrt::HV3DDUALITY::factory_implementation
{
    struct HV3DStartMenu : HV3DStartMenuT<HV3DStartMenu, implementation::HV3DStartMenu>
    {
    };
}
