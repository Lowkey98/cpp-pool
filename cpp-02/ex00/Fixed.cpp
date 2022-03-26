#include "Fixed.hpp"

Fixed::Fixed(){
    this->_fixed_n = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f1){
    std::cout << "Copy constructor called" << std::endl;
    this->_fixed_n = f1._fixed_n;
}

Fixed Fixed::operator=(Fixed const &f1){
    std::cout << "Copy assignment operator called" << std::endl;
    return(f1);
}
int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_fixed_n);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}