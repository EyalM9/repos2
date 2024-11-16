#include <iostream>
#include "SocialNetwork.h"

void SocialNetwork::init(std::string networkName, int minAge)
{
	this->netName = networkName;
	this->minAge = minAge;
}

void SocialNetwork::clear()
{
	netName.clear();
	minAge = 0;
	profileList.clear();
}

int SocialNetwork::getMinAge() const
{
	return minAge;
}

std::string SocialNetwork::getNetworkName() const
{
	return netName;
}

bool SocialNetwork::addProfile(Profile profile_to_add)
{
	int ownerAge = profile_to_add.getOwner().getAge();
	if (ownerAge < minAge)
	{
		return false;
	}
	else
	{
		profileList.add(profile_to_add);
		return true;
	}
}

std::string SocialNetwork::getWindowsDevices() const
{
	std::string windowStr;
	std::string OS;
	ProfileNode* temp;
	DeviceNode* tempDevice;

	temp = profileList.get_first();

	while (temp != NULL)
	{
		tempDevice = temp->get_data().getOwner().getDevices().get_first();
		while (tempDevice != NULL)
		{
			OS = tempDevice->get_data().getOS();
			if (OS[0] == 'W')
			{
				windowStr.append("[");
				windowStr.append(std::to_string(tempDevice->get_data().getID()));
				windowStr.append(", ");
				windowStr.append(OS);
				windowStr.append("], ");
			}
			tempDevice = tempDevice->get_next();
		}
		temp = temp->get_next();
	}
	windowStr.pop_back();
	windowStr.pop_back();
	return windowStr;
}