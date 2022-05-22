#include <string>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	Form*	shrub(std::string &target);
	Form*	robot(std::string &target);
	Form*	pardon(std::string &target);
	Form*	error(std::string &target);

public:
	Intern();
	~Intern();

	Form* makeForm(std::string form, std::string target);
};
