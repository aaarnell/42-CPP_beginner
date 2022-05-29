#include <Span.hpp>
#include <iostream>

int main()
{
	{
		std::cout << "--- Subject -->" << std::endl;

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	{
		std::cout << "--- addNumber(). Adding over the limit -->" << std::endl;

		try
		{
			Span sp = Span(4);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- addRange() -->" << std::endl;

		try
		{
			Span sp = Span(8);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::vector<int> tmp;
			for (int i = 0; i < 10; i++)
				tmp.push_back(100 + i);

			sp.addRange(tmp.begin(), tmp.begin() + 2);

			std::cout << "ОK" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- addRange(). Adding over the limit -->" << std::endl;

		try
		{
			Span sp = Span(8);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::vector<int> tmp;
			for (int i = 0; i < 10; i++)
				tmp.push_back(100 + i);

			sp.addRange(tmp.begin(), tmp.end());
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- shortestSpan() -->" << std::endl;

		try
		{
			Span sp = Span(10);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "6, 3, 17, 9, 11. Res: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- shortestSpan(). Less than 2 item -->" << std::endl;

		try
		{
			Span sp = Span(1);
			sp.addNumber(6);
			std::cout << "6. Res: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- longestSpan() -->" << std::endl;

		try
		{
			Span sp = Span(10);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "6, 3, 17, 9, 11. Res: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- longestSpan(). Less than 2 item -->" << std::endl;

		try
		{
			Span sp = Span(1);
			sp.addNumber(6);
			std::cout << "6. Res: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}

/*
void testFromSubject(){
	std::cout << "---Test from subject---- " << std::endl;
	try{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
}

void testMax(void) {
	std::cout << "------Test min max------ " << std::endl;
	Span sp = Span(10000);

	for (int i = -5000; i <= 4999; i++)
		sp.addNumber(i);
	std::cout << "Shortest span: " << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void testRange(void) {
	std::cout << "-------Test range------- " << std::endl;
	std::vector<int>  v;
	Span sp(9);

	for (int i = 1 ; i < 10 ; i++)
		v.push_back(i * 5);
	sp.addRange(std::begin(v), std::end(v));
	std::cout << "Shortest span: " << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main(){
	testFromSubject();
	testMax();
	testRange();
	return 0;
}
*/
