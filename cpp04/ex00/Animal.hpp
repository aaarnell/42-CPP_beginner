#pragma once

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(std::string _type);
	Animal(const Animal &other);
	virtual ~Animal();

	std::string		getType() const;
	virtual void	makeSound() const;

	Animal& operator=(const Animal &other);
};

