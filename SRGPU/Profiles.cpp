#include "pch.h"
#include "Profiles.h"



Profiles::Profiles() {
	//TODO Read Profiles from json file
	uiProfiles = ref new Platform::Collections::Vector<Profile>();
}

void Profiles::UpdateUIProfiles()
{
	uiProfiles->Clear();
	for each (Profile profile in profiles)
	{
		//uiProfiles->Append(profile); doesn't work
	}
}

auto Profiles::GetProfiles() {
	UpdateUIProfiles();
	return uiProfiles;
}

bool Profiles::AddProfile(Profile profile) {
	if (!std::any_of(profiles.begin(), profiles.end(), [profile](Profile prof) {return prof.name.compare(profile.name); })) {
		profiles.push_back(profile);
	}
}

auto Profiles::SaveProfiles()
{
	//TODO Write profiles in Json
}

