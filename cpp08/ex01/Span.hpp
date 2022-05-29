#pragma once
#include <vector>

class Span
{
private:
	std::vector<int> arr;
	unsigned int	capacity;

public:
	Span();
	Span(unsigned int N);
	Span(const Span& other);
	virtual ~Span();

	void	addNumber(int number);
	void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan();
	int		longestSpan();

	Span& operator=(const Span& other);
	int& operator[](unsigned int index);
};
