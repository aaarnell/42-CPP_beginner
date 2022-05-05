#pragma once
#include <string>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	wrong(void);

public:
	Harl();
	void	complain(std::string level);
	~Harl();
};
