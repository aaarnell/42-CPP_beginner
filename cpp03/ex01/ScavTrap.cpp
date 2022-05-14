#include <iostream>
#include <string>
#include "ScavTrap.hpp"

/*
CONSTRUCTORS
*/

ScavTrap::ScavTrap(void)
	: ClapTrap("Default", 100, 50, 20)
{
	std::cout	<< "The default ScavTrap class constructor"
				<< " created an object with name 'Default'." << std::endl;
}

ScavTrap::ScavTrap(std::string _name, int hitPoints,
	int energyPoints, int damagePoints)
	: ClapTrap(_name, hitPoints, energyPoints, damagePoints)
{
	std::cout	<< "ScavTrap class constructor created an"
				<< " object with name '" << _name << "'." << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	this->setName(other.getName());
	this->setMaxHP(other.getMaxHP());
	this->setMaxEP(other.getMaxEP());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setDamagePoints(other.getDamagePoints());
}


/*
DESTRUCTORS
*/

ScavTrap::~ScavTrap(void)
{
	std::cout	<< "The ScavTrap class object named '" << this->getName()
				<< "' has been destroyed by the class destructor." << std::endl;
}

/*
REDEFINITION OPERATORS
*/

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::string tmp;

	tmp = this->getName();
	if(this != &other)
	{
		this->setName(other.getName());
		this->setMaxHP(other.getMaxHP());
		this->setMaxEP(other.getMaxEP());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setDamagePoints(other.getDamagePoints());
	}
	std::cout	<< "An object of the ScavTrap class with the name '"
				<< other.getName() << "' is copied into an object of the"
				<< " ScavTrap class with the name '" << tmp
				<< "' through an assignment operator." << std::endl;
	return *this;
}


/*
METHODS
*/

void ScavTrap::guardGate(void)
{
	std::cout	<< "An object of class ScavTrap '" << this->getName()
				<< "' is in the Gate keeper mode." << std::endl;
}

