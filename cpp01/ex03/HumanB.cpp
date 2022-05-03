#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon &weapon_ptr)
{
	weapon = &weapon_ptr;
}

void HumanB::attack()
{
	std::cout
		<< name << " attacks with their " << weapon->getType()
	<< std::endl;
}
