#pragma once
#include <Profile.h>


class Profiles
{
private:
	std::vector<Profile> profiles;
	Windows::UI::Xaml::Interop::IBindableVector^ uiProfiles;

	void UpdateUIProfiles();

public:
	Profiles();
	auto GetProfiles();
	bool AddProfile(Profile profile);
	auto SaveProfiles();
};

