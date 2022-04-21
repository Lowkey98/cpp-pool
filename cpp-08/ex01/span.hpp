#include <vector>
#include <iostream>
#include<algorithm>
class Span
{
    public:
        Span();
        Span & operator=(Span &s);
        Span(Span &s);
        ~Span();
        Span(unsigned int N);
        void addNumber(int number);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

    private:
        unsigned int _N;
        unsigned int _size;
        int *_arr;
};