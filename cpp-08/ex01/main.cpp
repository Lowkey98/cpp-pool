#include "span.hpp"

int main()
{
    Span a(10);
    a.addNumber(7);
    a.addNumber(2);
    a.addNumber(3);
    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;

    // std::cout << a.shortestSpan() << std::endl;
    // std::cout << a.longestSpan() << std::endl;
    return (0);
}