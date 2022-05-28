#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void printElem(T& elem)
{
	std::cout << "|\t" << elem << "\t|";
}

int main()
{
	int			arr1[] = {1, 2, 3, 4, 5};
	double		arr2[] = {10.0, 20.0, 30.0, 40.0, 50.0};
	std::string	arr3[] = {"one", "two", "three"};

	iter(arr1, 5, printElem);
	std::cout << std::endl;
	iter(arr2, 5, printElem);
	std::cout << std::endl;
	iter(arr3, 3, printElem);
	std::cout << std::endl;

	return 0;
}
