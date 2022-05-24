#include <string>
#include <stdexcept>
#include <iostream>

// bool checkArgType(std::string &str, std::string &sign)
// {
// 	//проверка аргумента на соответсвие char
// 	//проверка строк -inff, +inff, nanf, -inf, +inf, nan
// 	if (sign == "char")
// 		return str.length() == 1 && !isdigit(str[i])
// 	}
// 	else if (sign == "float")
// 	{
// 		try
// 		{

// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cerr << e.what() << '\n';
// 			return false;
// 		}

// 	}
// 	else if (sign == "double")

// 	else if (sign == "int")

// 	return false;
// }

// bool checkArg(std::string &str)
// {
// 	if (str.length() == 1 && !isdigit(str[1]))
// 		return true;
// 	else
// 	{
// 		try { stod(str, NULL); }
// 		catch(const std::out_of_range& e) { return true; }
// 		catch(const std::invalid_argument& e)
// 		{
// 			std::cerr << "Incorrect input." << std::endl;
// 			return false;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cerr << "Error: " << e.what() << '\n';
// 			return false;
// 		}
// 		return true;
// 	}
// }

void getType(std::string &str, std::string &type)
{
	if (str.length() == 1 && !isdigit(str[1]))
		type = "char";
	else
	{
		if (str.find('.') != std::string::npos)
		try { stod(str, NULL); }
		catch(const std::out_of_range& e)
		{
			type = "impossible";
			return ;
		}
		catch(const std::invalid_argument& e)
		{
			std::cerr << "Incorrect input." << std::endl;
			return ;
		}
		type = "double";

		try { stof(str, NULL); }
		catch(const std::out_of_range& e)
		{ return ; }
		catch(const std::invalid_argument& e)
		{ return ; }
		type = "float";


		try { stoi(str, NULL); }
		catch(const std::out_of_range& e)
		{ return ; }
		catch(const std::invalid_argument& e)
		{ return ; }
		type = "integer";
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments." << std::endl;
		return 1;
	}

	std::string type = "false";
	std::string input = argv[1];
	try { getType(input, type); }
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		return 1;
	}
	if (type == "false")
		return 1;

	// if (checkArg(input, "char"))
	// 	printCast(static_cast<char>input[1]);
	// else if (checkArg(input, "float"))
	// 	printCast(static_cast<float>(stof(input, NULL)));
	// else if (checkArg(input, "double"))
	// 	printCast(static_cast<double>(stod(input, NULL)));
	// else if (checkArg(input, "int"))
	// 	printCast(static_cast<long>(stol(input, NULL)));
	// else
	// {
	// 	std::cerr << "Incorrect input." << std::endl;
	// 	return 1;
	// }

	//Проверка, что указанные данные ни один из аргументов
	// if(!checkArg(input))
	// 	return 1;
/*	printChar();
	printInt();
	printFloat();
	printDouble();*/

	if (type == "char")
		std::cout << static_cast<char>(input[0]) << std::endl;
	else if (type == "double")
		std::cout << type << ": " << stod(input, NULL) << std::endl;
	else if (type == "float")
		std::cout << type << ": " << stof(input, NULL) << std::endl;
	else if (type == "integer")
		std::cout << type << ": " << stoi(input, NULL) << std::endl;
	else
		std::cout << type << std::endl;
	return 0;
}
