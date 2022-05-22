#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern randomIntern;
	Form *resForm;

	resForm = randomIntern.makeForm("shrubbery creation", "target1");
	std::cout << *resForm << std::endl;
	delete resForm;
	resForm = randomIntern.makeForm("robotomy request", "target2");
	std::cout << *resForm << std::endl;
	delete resForm;
	resForm = randomIntern.makeForm("presidential pardon", "target3");
	std::cout << *resForm << std::endl;
	delete resForm;
	resForm = randomIntern.makeForm("error", "target4");

	return 0;
}
