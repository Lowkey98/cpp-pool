#include "span.hpp"

Span::Span()
{
	this->_N = 0;
	this->_size = 0;
}

Span::Span(unsigned int N)
{
	this->_N = N;
	this->_size = 0;
}

Span::Span(Span &s)
{
	*this = s;
}
Span& Span::operator=(Span &s)
{
	this->_N = s._N;
	this->_size = s._size;
	return (*this);
}
Span::~Span()
{
}

void Span::addNumber(int number)
{
	if (this->_size == this->_N)
		throw "maxed size";
    this->_vect.push_back(number);
    this->_size++;
}
void Span::addNumber(int *array, int size)
{
    if (this->_size + size > this->_N)
        throw "maxed size";
    this->_vect.insert (this->_vect.begin(), array, array + size);
    this->_size += size;
}

bool ascend(int a, int b){return a < b;}
unsigned int Span::shortestSpan()
{
    int min;

    if (this->_size < 2)
        throw "size too small";
    std::sort(this->_vect.begin(), this->_vect.end());

    min = abs(this->_vect[0] - this->_vect[1]);
    for (unsigned int i = 1; i < this->_size - 1;i++)
    {
        if (abs(this->_vect[i] - this->_vect[i + 1]) < min)
            min = abs(this->_vect[i] - this->_vect[i + 1]);
    }
    return (min);
}

unsigned int Span::longestSpan()
{
    if (this->_size < 2)
        throw "size too small";
    std::sort(this->_vect.begin(), this->_vect.end());
    return abs(this->_vect[0] - this->_vect[this->_size - 1]);
}