#pragma once

template <class T>
class Array
{
private:
	T				*arr;
	unsigned int	size_;

public:
	Array();
	Array(unsigned int _size);
	Array(const Array<T>& other);
	~Array();

	unsigned int size() const;

	Array<T>& operator=(const Array<T> &other);
	T& operator[](unsigned int index);
};

#include "Array.tpp"
