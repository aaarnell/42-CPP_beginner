#include "Form.hpp"

/*
CONSTRUCTORS
*/

Form::Form()
	:	name("DefaultForm"),
		sign(0),
		gradeToSign(MIN_GRADE),
		gradeToExec(MIN_GRADE)
{}

Form::Form(std::string _name, bool _sign, int _gradeToSign, int _gradeToExec)
	:	name(_name),
		sign(_sign),
		gradeToSign(_gradeToSign),
		gradeToExec(_gradeToExec)
{
	if (_gradeToSign < MAX_GRADE || _gradeToExec < MAX_GRADE)
		throw Form::GradeTooHighException();
	if (_gradeToSign > MIN_GRADE || _gradeToExec > MIN_GRADE)
		throw Form::GradeTooLowException();
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
		<< "', signature sign  = '" << obj.getGrade()
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

int Form::getGradeToSign() const
{
	return gradeToSign;
}

int Form::getGradeToExec() const
{
	return gradeToExec;
}

void Form::beSigned(const Bureaucrat &obj)
{
	if (obj.grade)

	this->sign = 1;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "(Form) Grade too high.";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "(Form) Grade too low.";
}
