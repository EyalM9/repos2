#pragma once
#include <string>


class Page
{
public:
	void init(std::string status, std::string post);
	void clearPage();

	// getters
	std::string getPosts() const;
	std::string getStatus() const;

	// setters
	void setStatus(std::string status);
	void addLineToPosts(std::string new_line);


private:

	// fields
	std::string status;
	std::string post;

};
