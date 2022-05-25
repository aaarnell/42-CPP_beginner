#include <string>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include "Converter.hpp"

bool isNanInf(std::string &str)
{
	return str == "nan" || str == "+inf" || str == "-inf" || str == "inf";
}

bool isNanInfF(std::string &str)
{
	return str == "nanf" || str == "+inff" || str == "-inff" || str == "inff";
}

bool isChar(std::string &str)
{
	return str.length() == 1 && !isdigit(str[0]);
}

bool isFloat(std::string &str)
{
	return str.find('.') != std::string::npos && \
		str.find('f') != std::string::npos;
}

bool isDouble(std::string &str)
{
	return str.find('.') != std::string::npos;
}

void getType(std::string &str, std::string &type)
{
	if (isChar(str))
		type = "char";
	else if (isFloat(str) || isNanInfF(str))
	{
		type = "float";
		stof(str, NULL);
	}
	else if (isDouble(str) || isNanInf(str))
	{
		type = "double";
		stod(str, NULL);
	}
	else
	{
		type = "integer";
		stoi(str, NULL);
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
	catch(const std::out_of_range& e)
	{
		std::cerr << "Out of range." << std::endl;
		return 1;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << "Incorrect input." << std::endl;
		return 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		return 1;
	}
	if (type == "false")
		return 1;

	std::cout << "type: " << type << std::endl;

	std::cout << std::setprecision(1) << std::fixed;

	if (type == "char")
	{
		Converter<char> conv(static_cast<char>(input[0]));
		conv.printTypes();
	}
	else if (type == "double")
	{
		Converter<double> conv(static_cast<double>(stod(input, NULL)));
		conv.printTypes();
	}
	else if (type == "float")
	{
		Converter<float> conv(static_cast<float>(stof(input, NULL)));
		conv.printTypes();
	}
	else if (type == "integer")
	{
		Converter<int> conv(static_cast<int>(stoi(input, NULL)));
		conv.printTypes();
	}
	return 0;
}
