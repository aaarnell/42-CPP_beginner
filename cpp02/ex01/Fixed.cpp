#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int raw)
{
	std::cout << "Int constructor called" << std::endl;
	rawBits = raw * (1 << fraction);
}

Fixed::Fixed(float raw)
{
	std::cout << "Float constructor called" << std::endl;
	rawBits = roundf(raw * (1 << fraction));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	rawBits = other.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other)
		this->rawBits = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return rawBits;
}

void Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return float(rawBits) / (1 << fraction);
}

int Fixed::toInt(void) const
{
	return rawBits / (1 << fraction);
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}
