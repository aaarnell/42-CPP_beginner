#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"

/*
CONSTRUCTORS
*/

Cat::Cat(): Animal("Cat")
{
	std::cout	<< "The default Cat class constructor" << std::endl;
}

Cat::Cat(const Cat &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout	<< "Copy constructor of the Cat class" << std::endl;
}

/*
DESTRUCTORS
*/

Cat::~Cat()
{
	std::cout	<< "Cat class destructor" << std::endl;
}

/*
REDEFINITION OPERATORS
*/

Cat& Cat::operator=(const Cat &other)
{
	if(this != &other)
		this->type = other.type;
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
