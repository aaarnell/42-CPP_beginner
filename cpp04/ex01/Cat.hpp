#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &other);
	~Cat();

	void makeSound() const;

	Cat& operator=(const Cat &other);
};
