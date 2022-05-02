#pragma once
#include <string>

class Zombie
{
	std::string name;
	void announce();

public:
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
}
