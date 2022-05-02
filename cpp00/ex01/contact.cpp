#include <iostream>
#include <string>
#include "contact.hpp"

void Contact::new_contact()
{
	std::cout << "First Name: ";
	getline(std::cin, firstName);
	std::cout << "Last Name: ";
	getline(std::cin, lastName);
	std::cout << "Nickname: ";
	getline(std::cin, nickname);
	std::cout << "Phone number: ";
	getline(std::cin, phoneNumber);
	std::cout << "Darkest secret: ";
	getline(std::cin, darkestSecret);
}

std::string Contact::get_first_name()
{
	return firstName;
}

std::string Contact::get_last_name()
{
	return lastName;
}

std::string Contact::get_nick()
{
	return nickname;
}

std::string Contact::get_phone()
{
	return phoneNumber;
}

std::string Contact::get_secret()
{
	return darkestSecret;
}
