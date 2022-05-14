#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

static void putCompCT(const ClapTrap& obj)
{
	std::cout	<< "Name '" << obj.getName()
				<< "'\tmaxHP = " << obj.getMaxHP()
				<< "'\tmaxEP = " << obj.getMaxEP()
				<< "'\tHP = " << obj.getHitPoints()
				<< "'\tEP = " << obj.getEnergyPoints()
				<< "'\tDP = " << obj.getDamagePoints()
				<< std::endl;
}

static void putCompST(const ScavTrap& obj)
{
	std::cout	<< "Name '" << obj.getName()
				<< "'\tmaxHP = " << obj.getMaxHP()
				<< "'\tmaxEP = " << obj.getMaxEP()
				<< "'\tHP = " << obj.getHitPoints()
				<< "'\tEP = " << obj.getEnergyPoints()
				<< "'\tDP = " << obj.getDamagePoints()
				<< "'\t";
}

int	main(void)
{
	std::cout << "---> Pusya-obj create:" << std::endl;
	ClapTrap Pusya;
	std::cout << "---> Dusya-obj create:" << std::endl;
	ScavTrap Dusya;
	Pusya.setName("Pusya");
	Dusya.setName("Dusya");

	std::cout << "---> a-obj create:" << std::endl;
	ClapTrap a(Pusya);
	std::cout << "---> b-obj create:" << std::endl;
	ClapTrap b;

	std::cout << "---> c-obj create:" << std::endl;
	ScavTrap c(Dusya);
	std::cout << "---> d-obj create:" << std::endl;
	ScavTrap d;

	std::cout << "---> a-obj copy into b-obj:" << std::endl;
	b = a;
	std::cout << "---> c-obj copy into d-obj:" << std::endl;
	d = c;
	b.setName(b.getName().append("_b"));
	a.setName(a.getName().append("_a"));
	Pusya.setName(Pusya.getName().append("_0"));
	d.setName(d.getName().append("_d"));
	c.setName(c.getName().append("_c"));
	Dusya.setName(Dusya.getName().append("_0"));

	std::cout << "\n\t--- Start composition check ---\n" << std::endl;
	std::cout << "Objects of class ClapTrap:" << std::endl;
	std::cout << "obj 'Pusya'\t";
	putCompCT(Pusya);
	std::cout << "obj 'a(Pusya)'\t";
	putCompCT(a);
	std::cout << "obj 'b = a'\t";
	putCompCT(b);
	std::cout << "---" << std::endl;
	std::cout << "Objects of class ScavTrap:" << std::endl;
	std::cout << "obj 'Dusya'\t";
	putCompST(Dusya);
	Dusya.guardGate();
	std::cout << "obj 'c(Dusya)'\t";
	putCompST(c);
	c.guardGate();
	std::cout << "obj 'd = c'\t";
	putCompST(d);
	d.guardGate();
	std::cout << "\n\t--- End composition check ---\n" << std::endl;
	return (0);
}
