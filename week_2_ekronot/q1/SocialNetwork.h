#pragma once
#ifndef _SOCIALNETWORK_H_
#define _SOCIALNETWORK_H_
#include <string>
#include "ProfileList.h"

class SocialNetwork
{
	private:
		std::string networkName;
		ProfileList profiles;
		int minAge;

	public:
		//setters
		void init(std::string networkName, int minAge);
		void clear();
		bool addProfile(Profile profile_to_add);

		//getters
		std::string getNetworkName() const;
		int getMinAge() const;
		std::string getWindowsDevices() const;
};

#endif