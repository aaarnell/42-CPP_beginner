#pragma once
#include <string>

class ClapTrap
{
private:
	std::string	name;
	int			maxHP;
	int			maxEP;
	int			hitPoints;
	int			energyPoints;
	int			damagePoints;

public:
	ClapTrap(void);
	ClapTrap(std::string _name, int hp, int ep, int dp);
	ClapTrap(const ClapTrap &other);
	~ClapTrap(void);

	std::string	getName(void) const;
	int			getMaxHP(void) const;
	int			getMaxEP(void) const;
	int			getHitPoints(void) const;
	int			getEnergyPoints(void) const;
	int			getDamagePoints(void) const;
	void		setName(std::string	_name);
	void		setMaxHP(int value);
	void		setMaxEP(int value);
	void		setHitPoints(int value);
	void		setEnergyPoints(int value);
	void		setDamagePoints(int value);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap&	operator=(const ClapTrap &other);
};
