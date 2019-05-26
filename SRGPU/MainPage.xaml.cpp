//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"



using namespace SRGPU;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Popups;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
	if (!LoadResources()) {
		ShowErrorDialog("Application couldn't load resources");
	}
}




bool MainPage::LoadResources()
{
	profiles = Profiles();

	return true;
}

//Opens up dialog to create new Profile
void MainPage::OnAddProfileButton(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

}

void MainPage::ShowErrorDialog(std::string error)
{
	MessageDialog^ msg = ref new MessageDialog(stringToPlatformString(error));
	msg->Title = "Error";
	msg->ShowAsync();
}

Platform::String^ MainPage::stringToPlatformString(const std::string& input)
{
	std::wstring w_str = std::wstring(input.begin(), input.end());
	return (ref new Platform::String(w_str.c_str()));
}
