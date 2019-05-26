#pragma once
#include "pch.h"
#include <string>
#include <vector>
#include <Profile.h>

class Profile
{
public:
	std::string name;
	std::vector<std::string> languages;
	std::vector<unsigned long> trainingDurations;
	std::vector<float> accuraccies;

	Profile();
	Profile(std::string name = "profile", std::vector<std::string> languages = std::vector<std::string>{ "EN" },
		std::vector<unsigned long> trainingDurations = std::vector<unsigned long>{ 0 }, std::vector<float> accuraccies = std::vector<float>{ 0.0f });
	auto AddLanguage(std::string language);

};

