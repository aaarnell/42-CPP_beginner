#include "Bureaucrat.hpp"

/*
CONSTRUCTORS
*/

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(MIN_GRADE)
{}

Bureaucrat::Bureaucrat(const std::string _name, unsigned int _grade)
	: name(_name), grade(_grade)
{
	if (_grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	: name(other.name), grade(other.grade)
{}

/*
DESTRUCTORS
*/

Bureaucrat::~Bureaucrat()
{}

/*
REDEFINITION OPERATORS
*/

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if(this == &other)
		return *this;
	this->grade = other.grade;
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return out;
}

/*
METHODS
*/

std::string Bureaucrat::getName() const
{
	return name;
}

unsigned int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::increaseGrade()
{
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	--grade;
}

void Bureaucrat::decreaseGrade()
{
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	++grade;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "'" << this->name << "' signed '" << form.getName() << "'" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr	<< "'" << this->name << "' couldn’t sign '"
					<< form.getName() << "' because '" << e.what() << "'." << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << "'" << this->name << "' executed '" << form.getName() << "'" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr	<< "'" << this->name << "' couldn’t execute '"
					<< form.getName() << "' because '" << e.what() << "'." << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "(Bureaucrat) Grade too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "(Bureaucrat) Grade too low.";
}
