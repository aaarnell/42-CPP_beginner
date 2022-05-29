#pragma once
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, int needed)
{
	typename T::iterator it = std::find(container.begin(), container.end(), needed);
	if (it == container.end())
		throw std::exception();
	return it;
}
