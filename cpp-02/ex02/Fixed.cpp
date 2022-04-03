#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_fixed_n = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f1)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f1;
}

Fixed& Fixed::operator =(const Fixed  &f1)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_n = f1.getRawBits();
    return(*this);
}


std::ostream& operator<< (std::ostream &os, const Fixed  &f1)
{
    os << f1.toFloat();
    return(os);
}

void Fixed::setRawbits( int const raw)
{
    this->_fixed_n = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_fixed_n);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt( void ) const
{
    return (this->_fixed_n >> 8);
}
Fixed::Fixed(const int n)
{
    std::cout << "Int contructor called" << std::endl;
    this->_fixed_n = n << _n_fraction;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixed_n = roundf(f * pow(2, Fixed::_n_fraction));
}

float Fixed::toFloat( void ) const
{
    return (this->_fixed_n * pow(2,-1 * Fixed::_n_fraction));
}

int Fixed::operator > (const Fixed &f1)
{
    return (this->getRawBits() > f1.getRawBits());
}

int Fixed::operator < (const Fixed &f1)
{
    return (this->getRawBits() < f1.getRawBits());
}

int Fixed::operator >= (const Fixed &f1)
{
    return (this->getRawBits() >= f1.getRawBits());
}

int Fixed::operator <= (const Fixed &f1)
{
    return (this->getRawBits() <= f1.getRawBits());
}
int Fixed::operator == (const Fixed &f1)
{
    return (this->getRawBits() == f1.getRawBits());
}

int Fixed::operator != (const Fixed &f1)
{
    return (this->getRawBits() != f1.getRawBits());
}

Fixed Fixed::operator + (const Fixed &f1)
{
    return Fixed(this->toInt() + f1.toInt());
}

Fixed Fixed::operator - (const Fixed &f1)
{
    return Fixed(this->toInt() - f1.toInt());
}
Fixed Fixed::operator * (const Fixed &f1)
{
    return Fixed(this->toFloat() * f1.toFloat());
}

Fixed Fixed::operator / (const Fixed &f1)
{
    return Fixed(this->toFloat() / f1.toFloat());
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return (f1);
    return (f2);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return (f1);
    return (f2);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return (f1);
    return (f2);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return (f1);
    return (f2);
}

Fixed& Fixed::operator ++()
{
    ++(this->_fixed_n);
    return (*this);
}

Fixed Fixed::operator ++(int)
{
    Fixed temp = *this;

    (this->_fixed_n)++;
    return (temp);
}


Fixed& Fixed::operator --()
{
    --(this->_fixed_n);
    return (*this);
}
Fixed Fixed::operator --(int)
{
    Fixed temp;

    temp = *this;
    (this->_fixed_n)--;
    return (temp);
}
