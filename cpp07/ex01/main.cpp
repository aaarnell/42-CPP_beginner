#include "iter.hpp"
#include <iostream>
#include <string>
/*
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
*/

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}
