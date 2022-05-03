#pragma once
#include <string>

class Zombie
{
	std::string name;

public:
	Zombie();
	void announce();
	void setName(std::string z_name);
	~Zombie();
};
