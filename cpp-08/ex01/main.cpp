#include "span.hpp"

int main()
{
    Span a(10);
    a.addNumber(-7);
    a.addNumber(-4);
    a.addNumber(3);
    a.addNumber(13);
    a.addNumber(20);

    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;
    return (0);
}