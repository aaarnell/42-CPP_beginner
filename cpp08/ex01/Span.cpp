#include <Span.hpp>
#include <algorithm>
#include <numeric>
#include <stdexcept>

/*
CONSTRUCTORS
*/

Span::Span()
	:	arr(0), capacity(0)
{}

Span::Span(unsigned int N)
{
	arr.reserve(N);
	capacity = N;
}

Span::Span(const Span& other)
	:	arr(other.arr),
		capacity(other.capacity)
{}

/*
DESTRUCTORS
*/

Span::~Span()
{}

/*
REDEFINITION OPERATORS
*/

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	arr = other.arr;
	capacity = other.capacity;
	return *this;
}

int& Span::operator[](unsigned int index)
{
	return arr.at(index);
}

/*
METHODS
*/

void Span::addNumber(int number)
{
	if (arr.size() == capacity)
		throw std::runtime_error("Adding is not possible. The array is full.");
	arr.push_back(number);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if(arr.size() + std::distance(begin, end) > capacity)
		throw std::runtime_error("Adding is not possible. Too large range of values.");
	arr.insert(arr.end(), begin, end);
}

int Span::shortestSpan(){
	if (arr.size() < 2)
		throw std::runtime_error("The array has less than 2 elements.");
	std::vector<int> tmp(arr);
	std::sort(std::begin(tmp), std::end(tmp));
	std::adjacent_difference(std::begin(tmp), std::end(tmp), std::begin(tmp));
	return *std::min_element(std::begin(tmp) + 1, std::end(tmp));
}

int Span::longestSpan(){
	if (arr.size() < 2)
		throw std::runtime_error("The array has less than 2 elements.");
	std::vector<int> tmp(arr);
	std::sort(std::begin(tmp), std::end(tmp));
	return *(tmp.end() - 1) - *tmp.begin();
}
