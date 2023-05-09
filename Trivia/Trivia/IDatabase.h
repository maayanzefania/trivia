#pragma once
#include <iostream>
#include <io.h>
#include "sqlite3.h"
class IDatabase
{
public:
	virtual bool open() = 0;
	virtual void close() = 0;
	virtual bool doesUserExist(std::string name) = 0;
	virtual bool doesPasswordMatch(std::string name, std::string password) = 0;
	virtual void addNewUser(std::string name, std::string password, std::string mail) = 0;
};