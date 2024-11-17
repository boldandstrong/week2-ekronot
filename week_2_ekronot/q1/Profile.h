#pragma once
#include "UserList.h"
#include "Page.h"

class Profile
{
private:
	User owner;
	Page page;
	UserList friendList;

public:
	//setters
	void init(User owner);
	void clear();
	void setStatus(std::string new_status);
	void addPostToProfilePage(std::string post);
	void addFriend(User friend_to_add);

	//getters
	User getOwner() const;
	std::string getPage() const;
	std::string getFriends() const;
	std::string getFriendsWithSameNameLength() const;
};