#pragma once

class ClapTrap
{
private:
	std::string	name;
	const int	maxHP;
	const int	maxEP;
	int			hitPoints;
	int			energyPoints;
	int			damagePoints;

public:
	ClapTrap(void);
	ClapTrap(std::string _name, int hp, int ep, int dp);
	ClapTrap(const ClapTrap &other);
	~ClapTrap(void);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap&	operator=(const ClapTrap &other);
};
