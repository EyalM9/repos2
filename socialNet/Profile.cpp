#include <iostream>
#include "Profile.h"

void Profile::init(User owner)
{
	this->owner = owner;
}

void Profile::clear()
{
	page.clearPage();
	//owner.clear();
	userList.clear();
}

User Profile::getOwner() const
{
	return owner;
}

std::string Profile::getPage() const
{
	std::string rPage = "Status: ";
	rPage.append(page.getStatus());
	rPage.append("\n*******************\n*******************\n");
	rPage.append(page.getPosts());
	return rPage;
}

std::string Profile::getFriends() const
{
	std::string friendStr;
	//here we make temp node point to the first node in the list of this users devices
	UserNode* tempNode = userList.get_first();
	User temp;

	while (tempNode != NULL)
	{
		temp = tempNode->get_data();
		friendStr.append(temp.getUserName());
		friendStr.append(",");
		tempNode = tempNode->get_next();
	}
	friendStr.pop_back();
	return friendStr;
}

std::string Profile::getFriendsWithSameNameLength() const
{
	bool flag = false;
	int ownerLen = owner.getUserName().length();
	std::string friendStr;
	//here we make temp node point to the first node in the list of this users devices
	UserNode* tempNode = userList.get_first();
	User temp;

	while (tempNode != NULL)
	{
		temp = tempNode->get_data();
		if (ownerLen == temp.getUserName().length())
		{
			friendStr.append(temp.getUserName());
			friendStr.append(",");
			flag = true;
		}
		tempNode = tempNode->get_next();
	}
	if (flag)
	{
		friendStr.pop_back();
	}
	return friendStr;
}

void Profile::addPostToProfilePage(std::string post)
{
	page.addLineToPosts(post);
}

void Profile::setStatus(std::string new_status)
{
	page.setStatus(new_status);
}

void Profile::addFriend(User friend_to_add)
{
	userList.add(friend_to_add);
	
}