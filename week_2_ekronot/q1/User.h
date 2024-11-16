#pragma once
#
#include "DeviceList.h"
#include <string>


class User
{
	private:
		unsigned int id;
		std::string username;
		unsigned int age;
		DevicesList Devices;

	public:
		//setters
		void init(unsigned int id, std::string username, unsigned int age);
		void clear();
		void addDevice(Device newDevice);

		//getters
		unsigned int getID() const;
		std::string getUserName() const;
		unsigned int getAge() const;
		const DevicesList& getDevices() const;
		const bool checkIfDevicesAreOn() const;
};