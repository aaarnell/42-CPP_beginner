#include <string>
#include <iostream>

template <typename T>
void printCast(T input)
{
	bool singChar;
	bool signFloat;
	bool signDouble;
	bool signInt;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments." << std::endl;
		return 1;
	}

	std::string input = argv[1];

	try
	{
		if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
			printCast(static_cast<char>input[1]);
		else if (input[input.end()] == 'f' || input.find("nan") != std::string::npos)
			printCast(static_cast<float>(stof(input, NULL)));
		else if (input.find('.') != std::string::npos)
			printCast(static_cast<double>(stod(input, NULL)));
		else
			printCast(static_cast<long>(stol(input, NULL)));
	}
	catch(const std::exception& e)
	{
		std::cerr << "Incorrect input. Cause: " << e.what() << '\n';
	}


	return 0;
}
