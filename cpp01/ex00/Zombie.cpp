#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string z_name) : name(z_name)
{}

void Zombie::announce()
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroy zombie '" << name << "'" << std::endl;
}
