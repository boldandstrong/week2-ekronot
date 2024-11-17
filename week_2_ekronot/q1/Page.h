#pragma once

#include <string>

class Page
{
private:
	std::string status;
	std::string posts;

public:
	//setters
	void init();
	void addLineToPosts(std::string newline);
	void clearPage();
	void setStatus(std::string status);
	

	//getters
	std::string getPosts() const;
	std::string getStatus() const;
};
