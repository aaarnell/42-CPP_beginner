#include "Zombie.hpp"

int main()
{
	Zombie *ptr = newZombie("Zombie1");
	randomChump("Zombie2");
	delete ptr;
	return 0;
}
