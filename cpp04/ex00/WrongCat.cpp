#include <iostream>
#include <string>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*
CONSTRUCTORS
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout	<< "The default WrongCat class constructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout	<< "Copy constructor of the WrongCat class." << std::endl;
}

/*
DESTRUCTORS
*/

WrongCat::~WrongCat()
{
	std::cout	<< "WrongCat class destructor." << std::endl;
}

/*
REDEFINITION OPERATORS
*/

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout	<< "Overridden assignment operator of class WrongCat." << std::endl;
	return *this;
}

/*
METHODS
*/

