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
        void addNumber(int *array, int size);
        unsigned int shortestSpan();
        unsigned int longestSpan();

    private:
        unsigned int _N;
        unsigned int _size;
        std::vector<int> _vect;
};