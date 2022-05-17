#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

/*
CONSTRUCTORS
*/

Bureaucrat::Bureaucrat(std::string _name = "Bureaucrat", int _grade = 150)
{
	if (_grade < 1 || _grade > 150)

	name = _name;
	grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	: name(other.name), grade(other.grade)
{}

/*
DESTRUCTORS
*/

Bureaucrat::~Bureaucrat()
{}

/*
REDEFINITION OPERATORS
*/

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if(this == &other)
		return *this;
	this->grade = other.grade;
	return *this;
}

/*
METHODS
*/

std::string Bureaucrat::getName()
{
	return name;
}

int Bureaucrat::getGrade()
{
	return grade;
}
