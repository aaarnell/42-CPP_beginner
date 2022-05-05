#include <iostream>
#include <fstream>

std::string change_occurrences(std::string base, std::string comp, std::string repl)
{
	std::string	str;
	std::size_t	found = base.find(comp);
	if (found == std::string::npos)
		return base;
	str.append(base, 0, found);
	str.append(repl);
	str.append(base.begin() + found + comp.length(), base.end());
	str = change_occurrences(str, comp, repl);
	return str;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Incorrect number of arguments" << std::endl;
		return -1;
	}

	std::string		str;
	std::string		filename = argv[1];
	std::string		comp = argv[2];
	std::string		repl = argv[3];
	std::ifstream	in;
	std::ofstream	out;

	in.open(filename);
	if (!in)
	{
		std::cerr << "Error opening source file" << std::endl;
		return -1;
	}
	out.open(filename.append(".replace"));
	if (!out)
	{
		std::cerr << "Error opening target file" << std::endl;
		return -1;
	}
	while(!in.eof())
	{
		std::getline(in, str);
		out << change_occurrences(str, comp, repl) << std::endl;
	}
	in.close();
	out.close();
	return 0;
}
