#pragma once
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string _target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	virtual ~PresidentialPardonForm();

	virtual void execute(const Bureaucrat &executor) const;

	PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
};
