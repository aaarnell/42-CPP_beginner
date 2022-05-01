#include <iostream>

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; argv[i]; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			if(isalpha(argv[i][j]))
				std::cout << (char)toupper(argv[i][j]);
			else
				std::cout << argv[i][j];
		}
	}
	std::cout << std::endl;
	return 0;
}
