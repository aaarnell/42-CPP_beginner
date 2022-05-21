#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat crat("God", 150);
	Form *forms[] = {
		new ShrubberyCreationForm("Target1"),
		new RobotomyRequestForm("Target2"),
		new PresidentialPardonForm("Target3")
	};

	for (int i = 0; i < 3; i++)
	{
		while (forms[i]->getExec() == false)
		{
			if (forms[i]->getSign() == false)
				crat.signForm(*forms[i]);
			else
				crat.executeForm(*forms[i]);
			crat.increaseGrade();
		}
	}

	for (int i = 0; i < 3; i++)
		delete forms[i];
	return 0;
}
