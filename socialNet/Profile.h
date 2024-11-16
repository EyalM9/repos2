#pragma once
#include <string>
#include "UserList.h"
#include "Page.h"



class Profile
{
public:
	void init(User owner);
	void clear();

	// getters
	User getOwner() const;
	std::string getPage() const;
	std::string getFriends() const;
	std::string getFriendsWithSameNameLength() const;

	// setters
	void addPostToProfilePage(std::string post);
	void setStatus(std::string new_status);
	void addFriend(User friend_to_add);


private:

	// fields
	Page page;
	User owner;
	UserList userList;
	

};
