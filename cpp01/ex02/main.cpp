#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout
		<< "address:" << std::endl
			<< "\tbrain\t\t= " << &brain << std::endl
			<< "\tstringPTR\t= " << stringPTR << std::endl
			<< "\tstringREF\t= " << &stringREF << std::endl
		<< "value:" << std::endl
			<< "\tbrain\t\t= " << brain << std::endl
			<< "\tstringPTR\t= " << *stringPTR << std::endl
			<< "\tstringREF\t= " << stringREF << std::endl;
	return 0;
}
