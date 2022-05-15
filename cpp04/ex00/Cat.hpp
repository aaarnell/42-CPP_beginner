#pragma once

class Cat: public Animal
{
public:
	Cat();
	Cat(const Cat &other);
	~Cat();

	void makeSound() const;

	Cat& operator=(const Cat &other);
};
