#include "Page.h"

//setters
void Page::init()
{
	this->status = "";
	this->posts = "";
}

void Page::setStatus(std::string status)
{
	this->status = status;
}

void Page::addLineToPosts(std::string newline)
{
	this->posts += newline + "\n";
}

void Page::clearPage()
{
	init();
}

//getters

std::string Page::getPosts() const
{
	return this->posts;
}

std::string Page::getStatus() const
{
	return this->status;
}
