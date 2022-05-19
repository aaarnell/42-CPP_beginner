#pragma once
#include <string>
#include <iostream>
#include <exception>
#define MAX_GRADE 1
#define MIN_GRADE 150

class Form
{
private:
	const std::string	name;
	bool				sign;
	const int			gradeToSign;
	const int			gradeToExec;

public:
	Form();
	Form(std::string _name, bool _sign, int _gradeToSign, int _gradeToExec);
	Form(const Form &other);
	~Form();

	const std::string&	getName() const;
	bool				getSign() const;
	int					getGradeToSign() const;
	int					getGradeToExec() const;
	void				beSigned(const Bureaucrat &obj);

	class GradeTooHighException : public std::exception
	{
		public: virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public: virtual const char* what() const throw();
	};

	Form& operator=(const Form &other);
};

std::ostream&	operator<<(std::ostream &out, const Form &obj);
