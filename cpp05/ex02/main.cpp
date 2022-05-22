#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void changeGrade(Bureaucrat &obj, unsigned int newGrade)
{
	if (newGrade < MAX_GRADE || newGrade > MIN_GRADE)
		return ;
	while (obj.getGrade() != newGrade)
	{
		if (obj.getGrade() < newGrade)
			obj.decreaseGrade();
		else
			obj.increaseGrade();
	}
	std::cout	<< "--> Bureaucrat grade has been increased to "
				<< newGrade << "." << std::endl;
}

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
		crat.executeForm(*forms[i]);
		crat.signForm(*forms[i]);
		changeGrade(crat, forms[i]->getGradeToSign());
		crat.signForm(*forms[i]);
		crat.signForm(*forms[i]);
		crat.executeForm(*forms[i]);
		changeGrade(crat, forms[i]->getGradeToExec());
		crat.executeForm(*forms[i]);
	}

	std::cout << crat << std::endl;

	for (int i = 0; i < 3; i++)
		delete forms[i];
	return 0;
}
