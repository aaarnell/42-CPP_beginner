#include "Bureaucrat.hpp"

int main()
{
	std::cout << "--- Test01 (grade 1, decrease by 1) -->" << std::endl;
	try{
		Bureaucrat crat("Dodo01", 1);
		std::cout << "Before: ";
		std::cout << crat << std::endl;
		crat.decreaseGrade();
		std::cout << "After: ";
		std::cout << crat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "EXCEPTION: ";
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n--- Test02 (grade 1, increase by 1) -->" << std::endl;
	try{
		Bureaucrat crat("Dodo02", 1);
		std::cout << "Before: ";
		std::cout << crat << std::endl;
		crat.increaseGrade();
		std::cout << "After: ";
		std::cout << crat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "EXCEPTION: ";
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n--- Test03 (grade 150, increase by 1) -->" << std::endl;
	try{
		Bureaucrat crat("Dodo03", 150);
		std::cout << "Before: ";
		std::cout << crat << std::endl;
		crat.increaseGrade();
		std::cout << "After: ";
		std::cout << crat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "EXCEPTION: ";
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n--- Test04 (grade 150, decrease by 1) -->" << std::endl;
	try{
		Bureaucrat crat("Dodo04", 150);
		std::cout << "Before: ";
		std::cout << crat << std::endl;
		crat.decreaseGrade();
		std::cout << "After: ";
		std::cout << crat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "EXCEPTION: ";
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n--- Test05 (create obj. with grade <1) -->" << std::endl;
	try{
		Bureaucrat crat("Dodo05", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << "EXCEPTION: ";
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n--- Test06 (create obj. with grade >150) -->" << std::endl;
	try{
		Bureaucrat crat("Dodo05", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << "EXCEPTION: ";
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
