#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

/*
CONSTRUCTORS
*/

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout	<< "The default WrongAnimal class constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type)
	: type(_type)
{
	std::cout	<< "WrongAnimal class constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout	<< "Copy constructor of the WrongAnimal class" << std::endl;
}

/*
DESTRUCTORS
*/

WrongAnimal::~WrongAnimal()
{
	std::cout	<< "WrongAnimal class destructor" << std::endl;
}

/*
REDEFINITION OPERATORS
*/

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout	<< "Overridden assignment operator of class WrongAnimal." << std::endl;
	return *this;
}

/*
METHODS
*/

std::string	WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout	<< "WRONG BRAAAAAAAAINZZZ...." << std::endl;
}
