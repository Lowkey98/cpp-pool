#include <iostream>
template <typename T>
void iter(T *arr, int N, void (*f)(T))
{
    for (int i = 0; i < N; i++)
        f(arr[i]);
}

template <typename T>
void	add_one_print(T a)
{
	std::cout << a + 1 << std::endl;
}