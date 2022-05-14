#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
				<< std::endl;
}
static void putCompFT(const FragTrap& obj)
{
	std::cout	<< "Name '" << obj.getName()
				<< "'\tmaxHP = " << obj.getMaxHP()
				<< "'\tmaxEP = " << obj.getMaxEP()
				<< "'\tHP = " << obj.getHitPoints()
				<< "'\tEP = " << obj.getEnergyPoints()
				<< "'\tDP = " << obj.getDamagePoints()
				<< std::endl;
}

int	main(void)
{
	std::cout << "---> Pusya-obj create:" << std::endl;
	ClapTrap Pusya;
	std::cout << "---> Dusya-obj create:" << std::endl;
	ScavTrap Dusya;
	std::cout << "---> Gusya-obj create:" << std::endl;
	FragTrap Gusya;
	Pusya.setName("Pusya");
	Dusya.setName("Dusya");
	Gusya.setName("Gusya");

	std::cout << "---> a-obj create:" << std::endl;
	ClapTrap a(Pusya);
	std::cout << "---> b-obj create:" << std::endl;
	ClapTrap b;

	std::cout << "---> c-obj create:" << std::endl;
	ScavTrap c(Dusya);
	std::cout << "---> d-obj create:" << std::endl;
	ScavTrap d;

	std::cout << "---> e-obj create:" << std::endl;
	FragTrap e(Gusya);
	std::cout << "---> f-obj create:" << std::endl;
	FragTrap f;

	std::cout << "---> a-obj copy into b-obj:" << std::endl;
	b = a;
	std::cout << "---> c-obj copy into d-obj:" << std::endl;
	d = c;
	std::cout << "---> e-obj copy into f-obj:" << std::endl;
	f = e;
	b.setName(b.getName().append("_b"));
	a.setName(a.getName().append("_a"));
	Pusya.setName(Pusya.getName().append("_0"));
	d.setName(d.getName().append("_d"));
	c.setName(c.getName().append("_c"));
	Dusya.setName(Dusya.getName().append("_0"));
	f.setName(f.getName().append("_f"));
	e.setName(e.getName().append("_e"));
	Gusya.setName(Gusya.getName().append("_0"));

	std::cout << "\n\t--- Start composition check ---\n" << std::endl;

	std::cout << "Objects of class ClapTrap:" << std::endl;
	std::cout << "obj 'Pusya'\t";
	putCompCT(Pusya);
	Pusya.attack(a.getName());
	std::cout << "obj 'a(Pusya)'\t";
	putCompCT(a);
	a.attack(b.getName());
	std::cout << "obj 'b = a'\t";
	putCompCT(b);
	b.attack(Pusya.getName());

	std::cout << "---" << std::endl;

	std::cout << "Objects of class ScavTrap:" << std::endl;
	std::cout << "obj 'Dusya'\t";
	putCompST(Dusya);
	Dusya.guardGate();
	Dusya.attack(c.getName());
	std::cout << "obj 'c(Dusya)'\t";
	putCompST(c);
	c.guardGate();
	c.attack(d.getName());
	std::cout << "obj 'd = c'\t";
	putCompST(d);
	d.guardGate();
	d.attack(Dusya.getName());

	std::cout << "---" << std::endl;

	std::cout << "Objects of class FragTrap:" << std::endl;
	std::cout << "obj 'Gusya'\t";
	putCompFT(Gusya);
	Gusya.highFivesGuys();
	Gusya.attack(e.getName());
	std::cout << "obj 'e(Gusya)'\t";
	putCompFT(e);
	e.highFivesGuys();
	e.attack(f.getName());
	std::cout << "obj 'f = e'\t";
	putCompFT(f);
	f.highFivesGuys();
	f.attack(Gusya.getName());
	std::cout << "\n\t--- End composition check ---\n" << std::endl;
	return (0);
}
