#include "whatever.hpp"
#include <iostream>

int main()
{
	char a = 'a';
	char b = '8';

	std::cout << "CHAR. a = '" << a << "', b = '" << b << "'\n";
	std::cout << "--- swap -->\n";
	::swap(a, b);
	std::cout << "a = '" << a << "', b = '" << b << "'\n";
	std::cout << "--- min -->\n";
	std::cout << "min = '" << ::min(a, b) << "'\n";
	std::cout << "--- max -->\n";
	std::cout << "max = '" << ::max(a, b) << "'\n";
	std::cout << std::endl;

	int c = 120;
	int d = 12;
	std::cout << "INTEGER. c = " << c << ", d = " << d << "\n";
	std::cout << "--- swap -->\n";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << "\n";
	std::cout << "--- min -->\n";
	std::cout << "min = " << ::min(c, d) << "\n";
	std::cout << "--- max -->\n";
	std::cout << "max = " << ::max(c, d) << "\n";
	std::cout << std::endl;

	float e = -3402.0125f;
	float f = 210.094f;
	std::cout << "FLOAT. e = " << e << ", f = " << f << "\n";
	std::cout << "--- swap -->\n";
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << "\n";
	std::cout << "--- min -->\n";
	std::cout << "min = " << ::min(e, f) << "\n";
	std::cout << "--- max -->\n";
	std::cout << "max = " << ::max(e, f) << "\n";
	std::cout << std::endl;

	double g = 3.4E-38;
	double h = 3.4E+38;
	std::cout << "DOUBLE. g = " << g << ", h = " << h << "\n";
	std::cout << "--- swap -->\n";
	::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << "\n";
	std::cout << "--- min -->\n";
	std::cout << "min = " << ::min(g, h) << "\n";
	std::cout << "--- max -->\n";
	std::cout << "max = " << ::max(g, h) << "\n";
	std::cout << std::endl;

	const int k = -222;
	const int l = 444;
	std::cout << "CONST INTEGER. k = " << k << ", l = " << l << "\n";
	std::cout << "k = " << k << ", l = " << l << "\n";
	std::cout << "--- min -->\n";
	std::cout << "min = " << ::min(k, l) << "\n";
	std::cout << "--- max -->\n";
	std::cout << "max = " << ::max(k, l) << "\n";
	std::cout << std::endl;

	return 0;
}
