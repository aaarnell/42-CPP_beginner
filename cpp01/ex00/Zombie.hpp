#pragma once
#include <string>

class Zombie
{
	std::string name;

public:
	Zombie(std::string z_name);
	void announce();
	~Zombie();
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
