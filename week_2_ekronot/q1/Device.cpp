#include "Device.h"

void Device::init(unsigned int ID, DeviceType TYPE, std::string OS)
{
	this->os = OS;
	this->type = TYPE;
	this->id = ID;
}

unsigned int Device::getID() const
{
	return this->id;
}

DeviceType Device::getType() const
{
	return this->type;
}
 
std::string Device::getOS() const
{
	return this->os;
}

bool Device::isActive() const
{
	return this->active;
}

void Device::activate()
{
	this->active = true;
}

void Device::deactivate()
{
	this->active = false;
}