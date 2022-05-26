#include <string>
#include <iostream>
#include <cstdlib>

class Base { public: virtual ~Base() {};};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	srand(time(NULL));
	if (rand() % 2 == 0)
		return new A;
	else if (rand() % 2 == 0)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	try
	{
		A* tmp;
		tmp = dynamic_cast<A*>(p);
		if (tmp)
			std::cout << "A*" << std::endl;
	}catch(std::exception&){}
	try
	{
		B* tmp;
		tmp = dynamic_cast<B*>(p);
		if (tmp)
			std::cout << "B*" << std::endl;
	}catch(std::exception&){}
	try
	{
		C* tmp;
		tmp = dynamic_cast<C*>(p);
		if (tmp)
			std::cout << "C*" << std::endl;
	}catch(std::exception&){}
}
void identify(Base& p)
{
	try
	{
		A& tmp = dynamic_cast<A&>(p);
		std::cout << "A&" << std::endl;
		(void) tmp;
	}catch(std::exception&){}
	try
	{
		B& tmp = dynamic_cast<B&>(p);
		std::cout << "B&" << std::endl;
		(void) tmp;
	}catch(std::exception&){}
	try
	{
		C& tmp = dynamic_cast<C&>(p);
		std::cout << "C&" << std::endl;
		(void) tmp;
	}catch(std::exception&){}
}

int main()
{
	Base *ptr;

	ptr = generate();

	identify(ptr);
	identify(*ptr);

	return 0;
}

