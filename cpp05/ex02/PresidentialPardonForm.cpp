#include "PresidentialPardonForm.hpp"

/*
CONSTRUCTORS
*/

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", 25, 5), target("DefaultTarget")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
	: Form("PresidentialPardonForm", 25, 5), target(_target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: Form(other), target(other.target)
{}

/*
DESTRUCTORS
*/

PresidentialPardonForm::~PresidentialPardonForm()
{}

/*
REDEFINITION OPERATORS
*/

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this == &other)
		return *this;
	this->sign = other.sign;
	return *this;
}

/*
METHODS
*/

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->checkBeforeExec(executor);

	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
