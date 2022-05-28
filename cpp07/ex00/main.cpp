#include "whatever.hpp"
#include <iostream>
#include <string>
/*
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
	std::cout << "--- min -->\n";
	std::cout << "min = " << ::min(k, l) << "\n";
	std::cout << "--- max -->\n";
	std::cout << "max = " << ::max(k, l) << "\n";
	std::cout << std::endl;

	std::string str1 = "chaine1";
	std::string str2 = "chaine2";
	std::cout << "STRING. str1 = '" << str1 << "', str2 = '" << str2 << "'\n";
	std::cout << "--- swap -->\n";
	::swap(str1, str2);
	std::cout << "str1 = '" << str1 << "', str2  = '" << str2  << "'\n";
	std::cout << "--- min -->\n";
	std::cout << "min = '" << ::min(str1, str2) << "'\n";
	std::cout << "--- max -->\n";
	std::cout << "max = '" << ::max(str1, str2) << "'\n";
	std::cout << std::endl;

	return 0;
}
*/

class Awesome
{
public:
	Awesome(void) : _n(0) {}
	Awesome( int n ) : _n( n ) {}
	Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int get_n() const { return _n; }
private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void)
{
	Awesome a(2), b(4);

	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;
	return (0);
}
