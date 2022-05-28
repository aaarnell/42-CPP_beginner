#include <exception>

/*
CONSTRUCTORS
*/

template <typename T>
Array<T>::Array()
	: arr(0), size_(0)
{}

template <typename T>
Array<T>::Array(unsigned int _size)
	: arr(new T[_size]), size_(_size)
{}

template <typename T>
Array<T>::Array(const Array<T>& other)
	:	arr(new T[other.size_]), size_(other.size_)
{
	for (unsigned int i = 0; i < other.size_; i++)
		arr[i] = other.arr[i];
}

/*
DESTRUCTORS
*/

template <typename T>
Array<T>::~Array()
{
	if (arr)
		delete [] arr;
}

/*
REDEFINITION OPERATORS
*/
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this == &other)
		return *this;
	if (arr)
		delete [] arr;
	arr = 0;
	size_ = other.size_;
	if (!other.arr && !other.size_)
		return *this;
	arr = new T[other.size_];
	for (unsigned int i = 0; i < other.size_; i++)
		arr[i] = other.arr[i];
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (!arr || index >= size_ || index < 0)
		throw std::out_of_range("Out of range of array values");
	return arr[index];
}

/*
METHODS
*/

template <typename T>
unsigned int Array<T>::size() const
{
	return size_;
}
