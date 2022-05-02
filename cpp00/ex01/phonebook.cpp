#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

PhoneBook::PhoneBook() : totalContacts(0), nextContact(0)
{
}

void PhoneBook::add_new_contact()
{
	contacts[nextContact].new_contact();
	if (totalContacts < maxLengthList)
	{
		totalContacts++;
	}
	if (nextContact < maxLengthList - 1)
		nextContact++;
	else
		nextContact = 0;
}

std::string cut_string(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return str;
}

void PhoneBook::out_all_contacts()
{
	std::cout << std::string(45, '-') << std::endl;
	std::cout << "|"
		<< std::setw(10) << std::right << "Index" << "|"
		<< std::setw(10) << std::right << "First Name" << "|"
		<< std::setw(10) << std::right << "Last Name" << "|"
		<< std::setw(10) << std::right << "Nickname" << "|" << std::endl;
	std::cout << std::string(45, '-') << std::endl;
	for (int i = 0; i < totalContacts; i++)
	{
		std::cout << "|"
			<< std::setw(10) << i + 1 << "|"
			<< std::setw(10) << cut_string(contacts[i].get_first_name()) << "|"
			<< std::setw(10) << cut_string(contacts[i].get_last_name()) << "|"
			<< std::setw(10) << cut_string(contacts[i].get_nick()) << "|" << std::endl;
	}
	std::cout << std::string(45, '-') << std::endl;
}

int	conv_to_num(std::string index)
{
	int	res;
	try
	{
		res = stoi(index);
	}
	catch(std::invalid_argument e)
	{
		res = -1;
	}
	return res;
}

void PhoneBook::request_contact()
{
	std::string	index;
	int			res;

	std::cout << "Enter number of Index: ";
	getline(std::cin, index);
	res = conv_to_num(index);
	if (res <= 0 || res > totalContacts)
	{
		std::cout << "Error: invalid index." << std::endl;
		return ;
	}
	res--;
	std::cout
		<< "First Name: " << contacts[res].get_first_name() << std::endl
		<< "Last Name: " << contacts[res].get_last_name() << std::endl
		<< "Nickname: " << contacts[res].get_nick() << std::endl
		<< "Phone Number: " << contacts[res].get_phone() << std::endl
		<< "Darkest Secret: " << contacts[res].get_secret() << std::endl;
}
