#include "pch.h"
#include "Profile.h"

Profile::Profile()
{

}

Profile::Profile(std::string name, std::vector<std::string> languages, std::vector<unsigned long> trainingDurations, std::vector<float> accuraccies)
{
	this->name = name;
	this->languages = std::vector<std::string>(languages);
	this->trainingDurations = std::vector<unsigned long>(trainingDurations);
	this->accuraccies = std::vector<float>(accuraccies);
}

auto Profile::AddLanguage(std::string language) {
	if (!std::any_of(this->languages.begin(), this->languages.end(), [language](std::string lan) {return lan.compare(language); })) {
		this->languages.push_back(language);
		this->trainingDurations.push_back(0);
		this->accuraccies.push_back(0.0f);
		return true;
	}
	return false;
}
