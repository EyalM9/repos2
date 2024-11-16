
#include <iostream>
#include "Device.h"

void Device::init(unsigned int id, DeviceType type, std::string os)
{
	this->id = id;
	this->type = type;
	this->os = os;
}

std::string Device::getOS() const
{
	return os;
}

bool Device::isActive() const
{
	return state;
}

int unsigned Device::getID() const
{
	return id;
}

DeviceType Device::getType() const
{
	return type;
}

void Device::activate()
{
	this->state = true;
}

void Device::deactivate()
{
	this->state = false;
}