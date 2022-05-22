#pragma once
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string _target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	virtual ~RobotomyRequestForm();

	virtual void execute(const Bureaucrat &executor) const;

	RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
};
