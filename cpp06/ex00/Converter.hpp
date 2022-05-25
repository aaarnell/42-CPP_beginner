#pragma once
#include <string>
#include <iostream>
#include <exception>
#include <cmath>

template <class T>
class Converter
{
private:
	T	data;

public:
	Converter();
	Converter(T _data);
	Converter(const Converter<T> &other);
	~Converter();

	void	toChar();
	void	toInt();
	void	toFloat();
	void	toDouble();
	void	printTypes();

	Converter<T> & operator=(const Converter<T> &other);
};
