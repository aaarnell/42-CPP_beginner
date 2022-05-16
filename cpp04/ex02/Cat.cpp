#include <iostream>
#include <string>
#include "Cat.hpp"

/*
CONSTRUCTORS
*/

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "The default Cat class constructor" << std::endl;
}

Cat::Cat(std::string type)
	: Animal(type), brain(new Brain())
{
	std::cout << "Cat class constructor" << std::endl;
}

Cat::Cat(const Cat &other)
	: Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Copy constructor of the Cat class" << std::endl;
}

/*
DESTRUCTORS
*/

Cat::~Cat()
{
	delete brain;
	std::cout	<< "Cat class destructor" << std::endl;
}

/*
REDEFINITION OPERATORS
*/

Cat& Cat::operator=(const Cat &other)
{
	if(this != &other)
	{
		this->type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "Overridden assignment operator of class Cat." << std::endl;
	return *this;
}

/*
METHODS
*/

void Cat::makeSound() const
{
	std::cout	<< "Meow!" << std::endl;
}
