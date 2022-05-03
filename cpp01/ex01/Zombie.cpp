#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{}

void Zombie::announce()
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string z_name)
{
	name = z_name;
}

Zombie::~Zombie()
{
	std::cout << "Destroy zombie '" << name << "'" << std::endl;
}
