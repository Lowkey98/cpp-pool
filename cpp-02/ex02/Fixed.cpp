#include "Fixed.hpp"

Fixed::Fixed(){
    this->_fixed_n = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f1){
    std::cout << "Copy constructor called" << std::endl;
    this->_fixed_n = f1._fixed_n;
}

Fixed &Fixed::operator =(Fixed  &f1){
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

int Fixed::toInt( void ) const {
    return (this->_fixed_n >> 8);
}
Fixed::Fixed(const int n){
    this->_fixed_n = n << 8;
}

Fixed::Fixed(const float f){
    this->_fixed_n = f * pow(2, Fixed::_n_fraction);
}

float Fixed::toFloat( void ) const {
    return (this->_fixed_n * pow(2,-1 * Fixed::_n_fraction));
}

// std::ostream& Fixed::operator << (std::ostream &st){
//     st << toFloat() << std::endl;
//     return (st);
// }