#include "Converter.hpp"

/*
CONSTRUCTORS
*/
template <typename T>
Converter<T>::Converter()
	:	data(0.0)
{}

template <typename T>
Converter<T>::Converter(T _data)
	:	data(_data)
{}

template <typename T>
Converter<T>::Converter(const Converter<T> &other)
	:	data(other.data)
{}


/*
DESTRUCTORS
*/
template <typename T>
Converter<T>::~Converter() {}

/*
REDEFINITION OPERATORS
*/
template <typename T>
Converter<T>& Converter<T>::operator=(const Converter<T> &other)
{
	if (this == &other)
		return *this;
	this->data = other.data;
	return *this;
}

/*
METHODS
*/

template <typename T>
void Converter<T>::toChar()
{
	if (std::isnan(data) || data > std::numeric_limits<char>::max() || \
		data < std::numeric_limits<char>::min())
		std::cout << "char:\tImpossible" << std::endl;
	else if (!isprint(static_cast<char>(data)))
		std::cout << "char:\tNon displayable" << std::endl;
	else
		std::cout << "char:\t'" << static_cast<char>(data) << "'" << std::endl;
}

template <typename T>
void Converter<T>::toInt()
{
	if (std::isnan(data) || data > std::numeric_limits<int>::max() || \
		data < std::numeric_limits<int>::min())
		std::cout << "int:\tImpossible" << std::endl;
	else
		std::cout << "int:\t" << static_cast<int>(data) << std::endl;
}

template <typename T>
void Converter<T>::toFloat()
{
	if (!std::isinf(data) && (data > std::numeric_limits<float>::max() || \
		data < std::numeric_limits<float>::min()))
		std::cout << "float:\tImpossible" << std::endl;
	else
		std::cout << "float:\t" << static_cast<float>(data) << "f" << std::endl;
}

template <typename T>
void Converter<T>::toDouble()
{
	if (!std::isinf(data) && (data > std::numeric_limits<double>::max() || \
		data < std::numeric_limits<double>::min()))
		std::cout << "double:\tImpossible" << std::endl;
	else
		std::cout << "double:\t" << static_cast<double>(data) << std::endl;
}

template <typename T>
void Converter<T>::printTypes()
{
	toChar();
	toInt();
	toFloat();
	toDouble();
}
