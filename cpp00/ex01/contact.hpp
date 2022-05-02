#pragma once

#include <string>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

public:
	void new_contact();
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nick();
	std::string get_phone();
	std::string get_secret();
};
