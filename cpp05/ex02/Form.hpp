#pragma once
#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class Form
{
protected:
	const std::string	name;
	bool				sign;
	bool				exec;
	const unsigned int	gradeToSign;
	const unsigned int	gradeToExec;

public:
	Form();
	Form(std::string _name, unsigned int _gradeToSign, unsigned int _gradeToExec);
	Form(const Form &other);
	virtual ~Form();

	const std::string&	getName() const;
	bool				getSign() const;
	bool				getExec() const;
	void				setExec();
	unsigned int		getGradeToSign() const;
	unsigned int		getGradeToExec() const;
	void				beSigned(const Bureaucrat &obj);
	virtual void		execute(const Bureaucrat &executor) const = 0;
	void				checkBeforeExec(const Bureaucrat &executor) const;

	class GradeTooHighException : public std::exception
	{
		public: virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public: virtual const char* what() const throw();
	};

	class AlreadySigned : public std::exception
	{
		public: virtual const char* what() const throw();
	};

	class NotSigned : public std::exception
	{
		public: virtual const char* what() const throw();
	};

	Form& operator=(const Form &other);
};

std::ostream&	operator<<(std::ostream &out, const Form &obj);
