#include "span.hpp"

Span::Span()
{
	this->_arr = new int[0];
	this->_N = 0;
	this->_size = 0;
}

Span::Span(unsigned int N)
{
    this->_arr = new int[N];	
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
    this->_arr = new int [this->_N];
	return (*this);
}
Span::~Span()
{
	delete[] _arr;
}

void Span::addNumber(int number)
{
	if (this->_size == this->_N)
		throw "maxed size";
	this->_arr[this->_size] = number;
    this->_size++;
}


unsigned int Span::shortestSpan() const
{
    int min;

    if (this->_size < 2)
        throw "size too small";
    std::sort(this->_arr, this->_arr + this->_size);
    min = abs(this->_arr[0] - this->_arr[1]);
    for (unsigned int i = 1; i < this->_size - 1;i++)
    {
        if (abs(this->_arr[i] - this->_arr[i + 1]) < min)
            min = abs(this->_arr[i] - this->_arr[i + 1]);
    }
    return (min);
}

unsigned int Span::longestSpan() const
{
    if (this->_size < 2)
        throw "size too small";
    std::sort(this->_arr, this->_arr + this->_size);
    return abs(this->_arr[0] - this->_arr[this->_size - 1]);
}