#pragma once
#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	const std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string _target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	virtual ~ShrubberyCreationForm();

	virtual void execute(const Bureaucrat &executor) const;

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
};
