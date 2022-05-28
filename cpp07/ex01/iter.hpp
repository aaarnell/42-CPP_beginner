#pragma once

template <typename T>
void iter(T* array, unsigned int s, void (*f)(T&))
{
	for (unsigned int i = 0; i < s; i++)
		f(array[i]);
}
