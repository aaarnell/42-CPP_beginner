#include <iostream>
#include "Brain.hpp"

/*
CONSTRUCTORS
*/

Brain::Brain()
{
	std::cout << "The default Brain class constructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for(unsigned int i = 0; i < NUM_OF_IDEAS; i++)
		this->ideas[i] =  other.ideas[i];
}

/*
DESTRUCTORS
*/

Brain::~Brain()
{
	std::cout << "Brain class destructor" << std::endl;
}

/*
REDEFINITION OPERATORS
*/

Brain& Brain::operator=(const Brain &other)
{
	for(unsigned int i = 0; i < NUM_OF_IDEAS; i++)
		this->ideas[i] =  other.ideas[i];
	return *this;
}

/*
METHODS
*/

