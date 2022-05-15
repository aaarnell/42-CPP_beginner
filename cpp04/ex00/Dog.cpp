#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"

/*
CONSTRUCTORS
*/

Dog::Dog() : Animal("Dog")
{
	std::cout	<< "The default Dog class constructor." << std::endl;
}

Dog::Dog(const Dog &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout	<< "Copy constructor of the Dog class." << std::endl;
}

/*
DESTRUCTORS
*/

Dog::~Dog()
{
	std::cout	<< "Dog class destructor." << std::endl;
}

/*
REDEFINITION OPERATORS
*/

Dog& Dog::operator=(const Dog &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout	<< "Overridden assignment operator of class Dog." << std::endl;
	return *this;
}

/*
METHODS
*/

void Dog::makeSound() const
{
	std::cout	<< "Woof!" << std::endl;
}
