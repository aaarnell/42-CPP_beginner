#include "Intern.hpp"

/*
CONSTRUCTORS
*/

Intern::Intern()
{}

/*
DESTRUCTORS
*/

Intern::~Intern()
{}

/*
REDEFINITION OPERATORS
*/

/*
METHODS
*/

Form* Intern::shrub(std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form* Intern::robot(std::string &target)
{
	return new RobotomyRequestForm(target);
}
Form* Intern::pardon(std::string &target)
{
	return new PresidentialPardonForm(target);
}

Form* Intern::error(std::string &target)
{
	std::cerr << "There is no specified form for the target '"<< target << "'." << std::endl;
	return NULL;
}

Form* Intern::makeForm(std::string form, std::string target)
{
	std::string array[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int end = sizeof(array) / sizeof(array[0]);

	Form* (Intern::*func[])(std::string&) = {
		&Intern::shrub,
		&Intern::robot,
		&Intern::pardon,
		&Intern::error
	};

	int i = 0;
	while (i < end && form != array[i])
		i++;

	return (this->*func[i])(target);
}
