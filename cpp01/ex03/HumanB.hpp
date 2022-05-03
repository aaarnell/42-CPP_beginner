#pragma once

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;

public:
	HumanB(std::string _name);
	~HumanB();
	void setWeapon(Weapon &weapon_ptr);
	void attack();
};
