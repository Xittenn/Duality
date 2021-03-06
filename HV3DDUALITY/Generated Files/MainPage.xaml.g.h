//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#pragma once


namespace winrt::HV3DDUALITY::implementation
{
    using IInspectable = ::winrt::Windows::Foundation::IInspectable;

    template <typename D, typename ... I>
    struct MainPageT : public ::winrt::HV3DDUALITY::implementation::MainPage_base<D,
        ::winrt::Windows::UI::Xaml::Markup::IComponentConnector,
        ::winrt::Windows::UI::Xaml::Markup::IComponentConnector2,
        I...>
    {
        using base_type = typename MainPageT::base_type;
        using base_type::base_type;
        using class_type = typename MainPageT::class_type;

        void InitializeComponent();
        void Connect(int32_t connectionId, IInspectable const& target);
        ::winrt::Windows::UI::Xaml::Markup::IComponentConnector GetBindingConnector(int32_t connectionId, IInspectable const& target);
        void UnloadObject(::winrt::Windows::UI::Xaml::DependencyObject const& dependencyObject);
        void DisconnectUnloadedObject(int32_t connectionId);

        ::winrt::Windows::UI::Xaml::Controls::Grid RootPage()
        {
            return _RootPage;
        }
        void RootPage(::winrt::Windows::UI::Xaml::Controls::Grid value)
        {
            _RootPage = value;
        }

        ::winrt::HV3DDUALITY::HV3DStartMenu HV3DStartMenu()
        {
            return _HV3DStartMenu;
        }
        void HV3DStartMenu(::winrt::HV3DDUALITY::HV3DStartMenu value)
        {
            _HV3DStartMenu = value;
        }
        
    protected:
        bool _contentLoaded{false};

    private:
        struct MainPage_obj1_Bindings;

        ::winrt::Windows::UI::Xaml::Controls::Grid _RootPage{nullptr};
        ::winrt::HV3DDUALITY::HV3DStartMenu _HV3DStartMenu{nullptr};
    };
}

