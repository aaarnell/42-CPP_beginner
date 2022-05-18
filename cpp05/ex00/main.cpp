#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat crat("Dodo", 0);

		std::cout << crat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
