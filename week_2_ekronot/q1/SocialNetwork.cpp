#include "SocialNetwork.h"

//setters
void SocialNetwork::init(std::string networkName, int minAge)
{
	this->networkName = networkName;
	this->minAge = minAge;
	this->profiles.init();
}

void SocialNetwork::clear()
{
	this->profiles.clear();
}

bool SocialNetwork::addProfile(Profile profile_to_add)
{
	return profiles.add(profile_to_add);
}

//getters
std::string SocialNetwork::getNetworkName() const
{
	return this->networkName;
}

int SocialNetwork::getMinAge() const
{
	return this->minAge;
}

std::string SocialNetwork::getWindowsDevices() const {
    std::string str = "";
    ProfileNode* profile = this->profiles.get_first();

    while (profile != nullptr)
    {
        DeviceNode* user_dev = profile->get_data().getOwner().getDevices().get_first();

        while (user_dev != nullptr)
        {
            std::string os = user_dev->get_data().getOS();
            if (os.find("Windows") != -1)
            {
                str += "[" + std::to_string(user_dev->get_data().getID()) + ", " + os + "], ";
            }
            user_dev = user_dev->get_next();
        }
        profile = profile->get_next();
    }

    if (!str.empty())
    {
        str.pop_back();
        str.pop_back();
    }

    return str;
}

