#include <iostream>
#include <string>
#include "Dog.hpp"

/*
CONSTRUCTORS
*/

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout	<< "The default Dog class constructor." << std::endl;
}

Dog::Dog(std::string type)
	: Animal(type), brain(new Brain())
{
	std::cout << "Dog class constructor" << std::endl;
}

Dog::Dog(const Dog &other)
	: Animal(other), brain(new Brain(*other.brain))
{
	std::cout	<< "Copy constructor of the Dog class." << std::endl;
}

/*
DESTRUCTORS
*/

Dog::~Dog()
{
	delete brain;
	std::cout	<< "Dog class destructor." << std::endl;
}

/*
REDEFINITION OPERATORS
*/

Dog& Dog::operator=(const Dog &other)
{
	if(this != &other)
	{
		this->type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
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
