#include "Profile.h"

//setters
void Profile::init(User owner)
{
	this->owner = owner;
	this->page.init();
	this->friendList.init();
}

void Profile::clear()
{
	this->page.clearPage();
	this->friendList.clear();
}

void Profile::setStatus(std::string new_status)
{
	this->page.setStatus(new_status);
}

void Profile::addPostToProfilePage(std::string post)
{
	this->page.addLineToPosts(post);
}

void Profile::addFriend(User friend_to_add)
{
	this->friendList.add(friend_to_add);
}

//getters
User Profile::getOwner() const
{
	return owner;
}

std::string Profile::getPage() const
{
	std::string str = "";
	str = "Status: " + this->page.getStatus() + "\n*******************\n*******************\n";
	str += this->page.getPosts();
	return str;
}

std::string Profile::getFriends() const
{
	std::string str = "";
	UserNode* curr = this->friendList.get_first();

	while (curr != nullptr)
	{
		str += curr->get_data().getUserName() + ",";
		curr = curr->get_next();
	}

	if (!str.empty())
	{
		str.pop_back();
	}

	return str;
}

std::string Profile::getFriendsWithSameNameLength() const
{
	std::string str = "";
	UserNode* curr = this->friendList.get_first();
	std::string owner_name = getOwner().getUserName();

	while (curr != nullptr)
	{
		if (curr->get_data().getUserName().length() == owner_name.length())
		{
			str += curr->get_data().getUserName() + ",";
		}
		curr = curr->get_next();
	}

	if (!str.empty())
	{
		str.pop_back();
	}

	return str;
}
