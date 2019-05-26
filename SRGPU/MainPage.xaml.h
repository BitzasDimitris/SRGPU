//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include <Profiles.h>

namespace SRGPU
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

		


	private:
		Profiles profiles;


		bool LoadResources();
		void OnAddProfileButton(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void ShowErrorDialog(std::string error);
		Platform::String^ stringToPlatformString(const std::string& input);
	};
}
