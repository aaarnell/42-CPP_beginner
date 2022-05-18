#pragma once
#include <string>
#include <iostream>
#include <exception>
#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int _grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	void		increaseGrade();
	void		decreaseGrade();

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
