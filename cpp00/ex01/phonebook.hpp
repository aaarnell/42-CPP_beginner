#pragma once

#include "contact.hpp"

class PhoneBook
{
public:
	static const int	maxLengthList = 8;

	PhoneBook();
	void add_new_contact();
	void out_all_contacts();
	void request_contact();

private:
	int					totalContacts;
	int					nextContact;
	Contact				contacts[maxLengthList];
};
