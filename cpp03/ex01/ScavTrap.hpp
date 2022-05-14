#pragma once
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string _name, int hp, int ep, int dp);
	ScavTrap(const ScavTrap &other);
	~ScavTrap(void);

	void guardGate(void);

	ScavTrap& operator=(const ScavTrap &other);
};
