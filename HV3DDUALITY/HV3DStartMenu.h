#pragma once

#include "HV3DStartMenu.g.h"


namespace winrt::HV3DDUALITY::implementation
{
    struct HV3DStartMenu : HV3DStartMenuT<HV3DStartMenu>
    {
        HV3DStartMenu();

        
        int32_t MyProperty();
        
        void MyProperty(int32_t value);


        void Click_NewEmptyProject(IInspectable const& sender, RoutedEventArgs const& args);
 

        event_token load_PopulateProjects(RoutedEventHandler const& handler) const;

        void load_PopulateProjects(event_token const* cookie) const;

        Loaded_revoker load_PopulateProjects(auto_revoke_t, RoutedEventHandler const& handler) const;


        event_token loaded_PopulateNewProjects(RoutedEventHandler const& handler) const;

        void loaded_PopulateNewProjects(event_token const* cookie) const;

        Loaded_revoker loaded_PopulateNewProjects(auto_revoke_t, RoutedEventHandler const& handler) const;

    };
}

namespace winrt::HV3DDUALITY::factory_implementation
{
    struct HV3DStartMenu : HV3DStartMenuT<HV3DStartMenu, implementation::HV3DStartMenu>
    {
    };
}
