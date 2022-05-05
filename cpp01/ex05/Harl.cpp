#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug(void)
{
	std::cerr << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cerr << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cerr << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::wrong()
{
	std::cerr << "Wrong level." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*func[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
		&Harl::wrong
	};
	int i = 0;
	while (i < 4 && level != array[i])
		i++;
	(this->*func[i])();
}
