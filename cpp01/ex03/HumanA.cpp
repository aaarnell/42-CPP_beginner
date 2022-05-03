#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &weapon_type) :
	name(_name),
	weapon(weapon_type)
{}

HumanA::~HumanA()
{}

void HumanA::attack()
{
	std::cout
		<< name << " attacks with their " << weapon.getType()
	<< std::endl;
}
