#pragma once
#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"
#define MAX_GRADE 1
#define MIN_GRADE 150

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	unsigned int		grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, unsigned int _grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();

	std::string		getName() const;
	unsigned int	getGrade() const;
	void			increaseGrade();
	void			decreaseGrade();
	void			signForm(Form &form);

	class GradeTooHighException : public std::exception
	{
		public: virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public: virtual const char* what() const throw();
	};

	Bureaucrat& operator=(const Bureaucrat &other);
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &obj);
