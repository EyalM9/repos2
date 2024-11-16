
#include <iostream>
#include "Page.h"

void Page::init(std::string status, std::string post)
{
	this->status = status;
	this->post = post;
}

void Page::clearPage()
{
	status.clear();
	post.clear();
}

std::string Page::getPosts() const
{
	return post;
}

std::string Page::getStatus() const
{
	return status;
}

void Page::setStatus(std::string status)
{
	this->status = status;
}

void Page::addLineToPosts(std::string new_line)
{
	//post = post.append("\n");
	post.append(new_line + "\n");
	
	
}