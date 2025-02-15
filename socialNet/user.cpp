#include <iostream>
#include "user.h"

void User::init(unsigned int id, std::string username, unsigned int age)
{
	this->age = age;
	this->id = id;
	this->username = username;
}

void User::clear()
{
	username.clear();
	id = 0;
	age = 0;
	devices.clear();
}

std::string User::getUserName()  const
{
	return username;
}

int unsigned User::getID() const
{
	return id;
}

int unsigned User::getAge() const
{
	return age;
}

DevicesList& User::getDevices()
{
	return devices;

}

void User::addDevice(Device newDevice)
{
	devices.add(newDevice);
}

bool User::checkIfDevicesAreOn() const
{
	DeviceNode* tempNode = NULL;
	Device temp;
	bool devState = true;
	
	//here we make a node point to the first node in the list of this users devices
	tempNode = devices.get_first();

	while (tempNode != NULL)
	{
		//here we get the nodes current device
		temp = tempNode->get_data();
		//if the device is off then we return false
		if (temp.isActive() == false)
		{
			devState = false;
			return devState;
		}

		tempNode = tempNode->get_next();
	}
	return devState;	
}
