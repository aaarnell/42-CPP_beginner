#pragma once
#include <string>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;

public:
	Bureaucrat(std::string name);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();

	std::string		getName();
	int				getGrade();

	Bureaucrat& operator=(const Bureaucrat &other);
}
