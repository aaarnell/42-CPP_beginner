#include <iostream>
#include <string>
#include "FragTrap.hpp"

/*
CONSTRUCTORS
*/

FragTrap::FragTrap(void)
	: ClapTrap("Default", 100, 100, 30)
{
	std::cout	<< "The default FragTrap class constructor"
				<< " created an object with name 'Default'." << std::endl;
}

FragTrap::FragTrap(std::string _name, int hitPoints,
	int energyPoints, int damagePoints)
	: ClapTrap(_name, hitPoints, energyPoints, damagePoints)
{
	std::cout	<< "FragTrap class constructor created an"
				<< " object with name '" << _name << "'." << std::endl;

}

FragTrap::FragTrap(const FragTrap &other)
{
	std::string tmp;

	tmp = this->getName();
	this->setName(other.getName());
	this->setMaxHP(other.getMaxHP());
	this->setMaxEP(other.getMaxEP());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setDamagePoints(other.getDamagePoints());

	std::cout	<< "The copy constructor of the FragTrap class"
				<< " copied the object with name '" << other.getName()
				<< "' into object with name '" << tmp
				<< "'."<< std::endl;
}


/*
DESTRUCTORS
*/

FragTrap::~FragTrap(void)
{
	std::cout	<< "The FragTrap class object named '" << this->getName()
				<< "' has been destroyed by the class destructor." << std::endl;
}

/*
REDEFINITION OPERATORS
*/

FragTrap& FragTrap::operator=(const FragTrap &other)
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
	std::cout	<< "An object of the FragTrap class with the name '"
				<< other.getName() << "' is copied into an object of the"
				<< " FragTrap class with the name '" << tmp
				<< "' through an assignment operator." << std::endl;
	return *this;
}


/*
METHODS
*/

void FragTrap::attack(const std::string& target)
{
	std::cout << "(FragTrap) ";
	ClapTrap::attack(target);
}

void FragTrap::highFivesGuys(void)
{
	std::cout	<< "An object of class FragTrap '" << this->getName()
				<< "' sad 'High five'." << std::endl;
}

