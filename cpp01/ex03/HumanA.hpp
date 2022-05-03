#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;

public:
	HumanA(std::string _name, Weapon &weapon_type);
	~HumanA();
	void attack();
};
