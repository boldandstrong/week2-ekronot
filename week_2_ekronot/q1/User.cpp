#include "User.h"

//setters
void User::init(unsigned int id, std::string username, unsigned int age)
{
	this->age = age;
	this->id = id;
	this->username = username;
}

void User::clear()
{
	this->Devices.clear();
}

void User::addDevice(Device newDevice)
{
	this->Devices.add(newDevice);
}

//getters
unsigned int User::getID() const
{
	return this->id;
}

std::string User::getUserName() const
{
	return this->username;
}

unsigned int User::getAge() const
{
	return this->age;
}

const DevicesList& User::getDevices() const
{
	return this->Devices;
}

const bool User::checkIfDevicesAreOn() const
{
	bool allOn = true;
	DevicesList devList = this->getDevices();
	DeviceNode* dev = devList.get_first();

	if (dev == nullptr)
	{
		return allOn;
	}

	Device data = dev->get_data();

	while (devList.get_first()->get_next() != NULL)
	{
		if (!data.isActive())
		{
			allOn = false;
			break;
		}
		else
		{
			dev = dev->get_next();

			if (dev == nullptr)
			{
				return allOn;
			}

			data = dev->get_data();
		}
	}

	return allOn;
}
