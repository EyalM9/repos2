
#pragma once
#include <string>
#include "DeviceList.h"


class User
{
public:
	void init(unsigned int id, std::string username, unsigned int age);
	void clear();

	// getters
	std::string getUserName() const;
	int unsigned getID() const;
	int unsigned getAge() const;
	DevicesList& getDevices();
	bool checkIfDevicesAreOn() const;

	// setters
	void addDevice(Device newDevice);
	

private:

	// fields
	std::string username;
	unsigned int id;
	unsigned int age;
	DevicesList devices;
};
