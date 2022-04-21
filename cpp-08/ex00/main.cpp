#include "easyfind.hpp"

int main()
{
	std::vector <int> a;
    a.push_back(12);
    a.push_back(12);
    a.push_back(12);
    a.push_back(3);
	std::cout << easyfind(a, 3);
	return (0);
}