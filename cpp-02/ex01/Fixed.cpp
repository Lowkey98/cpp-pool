#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::Fixed(Fixed const &f1)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f1;
}

Fixed& Fixed::operator =(const Fixed  &f1)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed = f1.getRawBits();
    return(*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixed = n << _n_fraction;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixed = roundf(f * pow(2, Fixed::_n_fraction));
}

float Fixed::toFloat( void ) const 
{
    return ( this->_fixed / pow(2, Fixed::_n_fraction) );
}

int Fixed::toInt( void ) const 
{
    return (this->_fixed >> 8);
}

std::ostream& operator<< (std::ostream &os, const Fixed  &f1)
{
    os << f1.toFloat();
    return(os);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_fixed);
}

void Fixed::setRawbits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed = raw;
}


// std::ostream& Fixed::operator << (std::ostream &st){
//     st << toFloat() << std::endl;
//     return (st);
// }