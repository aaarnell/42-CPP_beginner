#include <iostream>
#include <cmath>
#include "Fixed.hpp"

/*
CONSTRUCTORS
*/

Fixed::Fixed(void) : rawBits(0)
{}

Fixed::Fixed(int raw)
{
	rawBits = raw * (1 << fraction);
}

Fixed::Fixed(float raw)
{
	rawBits = roundf(raw * (1 << fraction));
}

Fixed::Fixed(const Fixed &other)
{
	rawBits = other.getRawBits();
}

/*
DESTRUCROR
*/

Fixed::~Fixed(void)
{}

/*
METHODS
*/

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

Fixed& Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return obj2;
	return obj1;
}

const Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 > obj2)
		return obj2;
	return obj1;
}

Fixed& Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return obj2;
	return obj1;
}

const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 < obj2)
		return obj2;
	return obj1;
}

/*
REDEFINITION OPERATORS
*/

Fixed& Fixed::operator=(const Fixed &other)
{
	if(this != &other)
		this->rawBits = other.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &other) const
{
	return this->rawBits > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->rawBits < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->rawBits >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->rawBits <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->rawBits == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
	return !(*this == other);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return this->toFloat() - other.toFloat();
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return this->toFloat() / other.toFloat();
}

Fixed&	Fixed::operator++()
{
	++this->rawBits;
	return *this;
}

Fixed&	Fixed::operator--()
{
	--this->rawBits;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed res(*this);
	++(*this);
	return res;
}

Fixed	Fixed::operator--(int)
{
	Fixed res(*this);
	--(*this);
	return res;
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}


