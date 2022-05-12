#include <iostream>
#include "ClapTrap.hpp"
#define MNLVLHP 3
#define REPPNT 2

static int checkContinue(ClapTrap &obj1, ClapTrap &obj2)
{
	return !((!obj1.getEnergyPoints() && !obj2.getEnergyPoints()) || \
		obj1.getHitPoints() < 0 || obj2.getHitPoints() < 0);

}

static void nextStep(ClapTrap &host, ClapTrap &slave)
{
	int energyHost = host.getEnergyPoints();
	if (host.getHitPoints() < MNLVLHP)
		host.beRepaired(REPPNT);
	else
	{
		host.attack(slave.getName());
		if (energyHost)
			slave.takeDamage(host.getDamagePoints());
	}
}

int	main(void)
{
	ClapTrap Pusya("Pusya", 10, 10, 1);
	ClapTrap Dusya("Dusya", 10, 6, 3);

	while(checkContinue(Pusya, Dusya))
	{
		nextStep(Pusya, Dusya);
		nextStep(Dusya, Pusya);
	}
	return (0);
}
