#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animals[] = {
		new Dog("Matros"), new Cat("Barsik"),
		new Dog("Ivan"), new Cat("Tolik"),
		new Dog("Martun"), new Cat("Tyzik")
	};

	for (int i = 0; i < 6; ++i)
		std::cout << animals[i]->getType() << std::endl;

	for (int i = 0; i < 6; ++i)
		delete animals[i];

	return 0;
}
