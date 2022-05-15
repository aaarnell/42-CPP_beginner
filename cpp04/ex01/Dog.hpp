#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &other);
	~Dog();

	void makeSound() const;

	Dog& operator=(const Dog &other);
};
