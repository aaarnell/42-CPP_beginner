#include "RobotomyRequestForm.hpp"
#include <cstdlib>

/*
CONSTRUCTORS
*/

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 72, 45), target("DefaultTarget")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
	: Form("RobotomyRequestForm", 72, 45), target(_target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: Form(other), target(other.target)
{}

/*
DESTRUCTORS
*/

RobotomyRequestForm::~RobotomyRequestForm()
{}

/*
REDEFINITION OPERATORS
*/

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this == &other)
		return *this;
	this->sign = other.sign;
	return *this;
}


/*
METHODS
*/

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->checkBeforeExec(executor);

	std::cout << "... drilling noises ..." << std::endl;
	if (rand() % 2)
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->target << " robotomy failed." << std::endl;
}
