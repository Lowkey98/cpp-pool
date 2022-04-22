#include "span.hpp"

int main()
{
    Span a(10);
    // a.addNumber(7);
    // a.addNumber(2);
    // a.addNumber(3);
    int foo [5] = {1, 5, 6, 7, 10};
    try
    {
        a.addNumber(foo, 5);
        std::cout << a.shortestSpan() << std::endl;
        std::cout << a.longestSpan() << std::endl;
    }
    catch(char const *err)
    {
        std::cerr << err;
    }
    return (0);
}