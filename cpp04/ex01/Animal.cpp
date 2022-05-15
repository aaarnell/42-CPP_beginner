#include <iostream>
#include <string>
#include "Animal.hpp"

/*
CONSTRUCTORS
*/

Animal::Animal() : type("Animal")
{
	std::cout	<< "The default Animal class constructor" << std::endl;
}

Animal::Animal(std::string _type)
	: type(_type)
{
	std::cout	<< "Animal class constructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout	<< "Copy constructor of the Animal class" << std::endl;
}

/*
DESTRUCTORS
*/

Animal::~Animal()
{
	std::cout	<< "Animal class destructor" << std::endl;
}

/*
REDEFINITION OPERATORS
*/

Animal& Animal::operator=(const Animal &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout	<< "Overridden assignment operator of class Animal." << std::endl;
	return *this;
}

/*
METHODS
*/

std::string	Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout	<< "(Nothing)...." << std::endl;
}
