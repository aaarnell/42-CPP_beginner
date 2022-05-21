#include "Form.hpp"

/*
CONSTRUCTORS
*/

Form::Form()
	:	name("DefaultForm"),
		sign(false),
		gradeToSign(MIN_GRADE),
		gradeToExec(MIN_GRADE)
{}

Form::Form(std::string _name, unsigned int _gradeToSign, unsigned int _gradeToExec)
	:	name(_name),
		gradeToSign(_gradeToSign),
		gradeToExec(_gradeToExec)
{
	if (_gradeToSign < MAX_GRADE || _gradeToExec < MAX_GRADE)
		throw Form::GradeTooHighException();
	if (_gradeToSign > MIN_GRADE || _gradeToExec > MIN_GRADE)
		throw Form::GradeTooLowException();
	sign = false;
}

Form::Form(const Form &other)
	:	name(other.name),
		sign(other.sign),
		gradeToSign(other.gradeToSign),
		gradeToExec(other.gradeToExec)
{}

/*
DESTRUCTORS
*/

Form::~Form()
{}

/*
REDEFINITION OPERATORS
*/

Form& Form::operator=(const Form &other)
{
	if(this == &other)
		return *this;
	this->sign = other.sign;
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Form &obj)
{
	out	<< "Form's name = '" << obj.getName()
		<< "', signature sign  = '" << obj.getSign()
		<< "', grade for signing = " << obj.getGradeToSign()
		<< ", grade for executing = " << obj.getGradeToExec();
	return out;
}

/*
METHODS
*/

const std::string& Form::getName() const
{
	return name;
}

bool Form::getSign() const
{
	return sign;
}

unsigned int Form::getGradeToSign() const
{
	return gradeToSign;
}

unsigned int Form::getGradeToExec() const
{
	return gradeToExec;
}

void Form::beSigned(const Bureaucrat &obj)
{
	if (this->sign == true)
		throw Form::AlreadySigned();
	if (obj.getGrade() > gradeToSign || obj.getGrade() > gradeToExec)
		throw Form::GradeTooLowException();
	this->sign = true;
}

const char* Form::AlreadySigned::what() const throw()
{
	return "The form has already been signed.";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "(Form) Grade too high.";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "(Form) Grade too low.";
}
