#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string z_name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(z_name);
	return horde;
}

int main()
{
	int		N = 5;
	Zombie	*horde = zombieHorde(N, "Charlie");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
