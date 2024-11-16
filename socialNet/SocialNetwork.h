#pragma once
#include <string>
#include "ProfileList.h"



class SocialNetwork
{
public:
	void init(std::string networkName, int minAge);
	void clear();

	// getters
	std::string getNetworkName() const;
	int getMinAge() const;
	std::string getWindowsDevices() const;

	// setters
	bool addProfile(Profile profile_to_add);

private:

	// fields
	int minAge;
	ProfileList profileList;
	std::string netName;


};
