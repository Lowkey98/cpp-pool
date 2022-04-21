#include <iostream>
#include <algorithm>
#include <vector>
template <typename T>
int	easyfind(T & cont, int n)
{
	typename T::iterator it;
	it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		return (-1);
	else 
		return (it - cont.begin());
}
