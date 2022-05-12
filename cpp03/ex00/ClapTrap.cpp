#include <iostream>
#include <string>
#include "ClapTrap.hpp"

/*
CONSTRUCTORS
*/

ClapTrap::ClapTrap(void)
	:
		name("Default"),
		maxHP(10),
		maxEP(10),
		hitPoints(10),
		energyPoints(10),
		damagePoints(0)
{
	std::cout	<< "The default Claptrap class constructor"
				<< " created an object wit name 'Default'." << std::endl;
}

ClapTrap::ClapTrap(std::string _name, int hp = 10, int ep = 10, int dp = 0)
{
	name = _name;
	maxHP = hp;
	maxEP = ep;
	hitPoints = hp;
	energyPoints = ep;
	damagePoints = dp;
	std::cout	<< "Claptrap class constructor created an"
				<< " object with name '" << _name << "'." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::string tmp;

	tmp = this->name;
	this->name = other.name;
	this->maxHP = other.maxHP;
	this->maxEP = other.maxEP;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->damagePoints = other.damagePoints;

	std::cout	<< "The copy constructor of the Claptrap class"
				<< " copied the object with name '" << other.name
				<< "' into object with name '" << tmp
				<< "'."<< std::endl;
}


/*
DESTRUCTORS
*/

ClapTrap::~ClapTrap(void)
{
	std::cout	<< "The Claptrap class object named '" << this->name
				<< "' has been destroyed by the class destructor." << std::endl;
}


/*
REDEFINITION OPERATORS
*/

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::string tmp;

	tmp = this->name;
	if(this != &other)
	{
		this->name = other.name;
		this->maxHP = other.maxHP;
		this->maxEP = other.maxEP;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->damagePoints = other.damagePoints;
	}
	std::cout	<< "An object of the Claptrap class with the name '"
				<< other.name << "' is copied into an object of the"
				<< " Claptrap class with the name '" << tmp
				<< "' through an assignment operator." << std::endl;
	return *this;
}


/*
METHODS
*/

std::string ClapTrap::getName(void)
{
	return name;
}

int ClapTrap::getHitPoints(void)
{
	return hitPoints;
}

int ClapTrap::getEnergyPoints(void)
{
	return energyPoints;
}

int ClapTrap::getDamagePoints(void)
{
	return damagePoints;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints < 0)
	{
		std::cout	<< "'" << this->name
					<< "' is destroyed. Attack is impossible." << std::endl;
		return ;
	}
	if (!this->energyPoints)
	{
		std::cout	<< "ATTENTION! '" << this->name
					<< "' has 0 energy points. He cannot attack."	<< std::endl;
		return ;
	}
	this->energyPoints -= 1;
	std::cout	<< "'" << this->name << "' attacks '"
				<< target << "', causing "<< this->damagePoints
				<< " points of damage! There are " << this->energyPoints
				<< " energy points left." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints < 0)
	{
		std::cout	<< "'" << this->name
					<< "' is destroyed. Damage is not possible." << std::endl;
		return ;
	}

	this->hitPoints -= amount;

	std::cout	<< "'" << this->name
				<< "' suffered " << amount
				<< " points of damage. There are " << this->hitPoints
				<< " hit points left." << std::endl;

	if (this->hitPoints < 0)
	{
		std::cout	<< "'" << this->name
					<< "' is destroyed." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints < 0)
	{
		std::cout	<< "'" << this->name
					<< "' is destroyed. Repair is not possible." << std::endl;
		return ;
	}
	if (!this->energyPoints)
	{
		std::cout	<< "ATTENTION! '"	<< this->name
					<< "' has 0 energy points. He cannot be repaired."	<< std::endl;
		return ;
	}
	if (this->hitPoints == this->maxHP)
	{
		std::cout	<< "ATTENTION! '" << this->name
					<< "'s' health points are at maximum. Repair is not required."
					<< std::endl;
		return ;
	}

	this->energyPoints -= amount;
	this->hitPoints += amount;

	std::cout	<< "'" << this->name
				<< "' has been repaired. '" << this->name
				<< "' has " << this->hitPoints << " hit points."
				<< " There are " << this->energyPoints << " energy points left."
				<< std::endl;
}
