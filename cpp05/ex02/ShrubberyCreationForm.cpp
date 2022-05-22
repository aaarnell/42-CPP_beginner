#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*
CONSTRUCTORS
*/

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137), target("DefaultTarget")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
	: Form("ShrubberyCreationForm", 145, 137), target(_target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: Form(other), target(other.target)
{}

/*
DESTRUCTORS
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

/*
REDEFINITION OPERATORS
*/

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this == &other)
		return *this;
	this->sign = other.sign;
	return *this;
}


/*
METHODS
*/

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->checkBeforeExec(executor);

	std::ofstream out;
	out.open(target + "_shrubbery");

	if (!out)
		return ;

	out <<
		"              &&& &&  & &\n"
		"      && &\\/&\\|& ()|/ @, &&\n"
		"      &\\/(/&/&||/& /_/)_&/_&\n"
		"   &() &\\/&|()|/&\\/ '%\" & ()\n"
		"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
		"&&   && & &| &| /& & % ()& /&&\n"
		" ()&_---()&\\&\\|&&-&&--%---()~\n"
		"     &&     \\|||\n"
		"             |||\n"
		"             |||\n"
		"             |||\n"
		"       , -=-~  .-^- _\\n"
		<< std::endl;

	out.close();
}
