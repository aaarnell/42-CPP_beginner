#include <iostream>
#include <string>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\n\t--- constructors ---\n" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "\n\t--- types ---\n" << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrong->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;

	std::cout << "\n\t--- sounds ---\n" << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	wrong->makeSound();
	wrongCat->makeSound();

	std::cout << "\n\t--- destructors ---\n" << std::endl;
	delete wrongCat;
	delete wrong;
	delete i;
	delete j;
	delete meta;

	return 0;
}
