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
    this->_fixed = f1._fixed;
    return(*this);
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

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

