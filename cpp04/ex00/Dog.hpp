#pragma once

class Dog: public Animal
{
public:
	Dog();
	Dog(const Dog &other);
	~Dog();

	void makeSound() const;

	Dog& operator=(const Dog &other);
};
