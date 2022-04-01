#include "Fixed.hpp"
int     main( void ) {
    Fixed   a;
    Fixed const b( 5.5222f );

    std::cout << a <<std::endl;
    std::cout << ++a <<std::endl;
    std::cout << a <<std::endl;
    std::cout << a++ <<std::endl;
    std::cout << a <<std::endl;
    std::cout << b.toFloat() <<std::endl;
    std::cout << Fixed::max(a,b) <<std::endl;
    return (0);
}