#include "Device.h"

void Device::init(unsigned int ID, DeviceType TYPE, std::string OS)
{
	os = OS;
	type = TYPE;
	id = ID;
}

unsigned int Device::getID() const
{
	return id;
}

DeviceType Device::getType() const
{
	return type;
}
 
std::string Device::getOS() const
{
	return os;
}

bool Device::isActive() const
{
	return active;
}

void Device::activate()
{
	active = true;
}

void Device::deactivate()
{
	active = false;
}