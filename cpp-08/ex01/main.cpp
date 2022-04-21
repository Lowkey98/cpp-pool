#include "span.hpp"

int main()
{
    Span a(10);
    a.addNumber(3);

    std::cout << a.shortestSpan();
    return (0);
}