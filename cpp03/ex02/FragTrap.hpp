#pragma once
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string _name, int hp, int ep, int dp);
	FragTrap(const FragTrap &other);
	~FragTrap(void);

	void attack(const std::string& target);
	void highFivesGuys(void);

	FragTrap& operator=(const FragTrap &other);
};
