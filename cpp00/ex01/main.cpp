#include <iostream>
#include <string>
#include "phonebook.hpp"

void hint_notice()
{
	std::cout << std::endl;
	std::cout << "Use one of the commands:" << std::endl;
	std::cout << "ADD\t- add contact;" << std::endl;
	std::cout << "SEARCH\t- view contacts;" << std::endl;
	std::cout << "EXIT\t- finish working with the phonebook." << std::endl;
	std::cout << std::endl;
}

int main()
{
	PhoneBook	phoneBook;
	std::string	command;

	std::cout << "The phonebook is activated." << std::endl;
	hint_notice();
	while(1)
	{
		std::cout << "> ";
		getline(std::cin, command);
		if (command == "ADD")
		{
			phoneBook.add_new_contact();
		}
		else if (command == "SEARCH")
		{
			phoneBook.out_all_contacts();
			phoneBook.request_contact();
		}
		else if (command == "EXIT")
		{
			std::cout << "Exit: The work with the phonebook is completed." << std::endl;
			break ;
		}
		else
		{
			std::cout << "ERROR: invalid command." << std::endl;
			hint_notice();
		}
	}
	return 0;
}
