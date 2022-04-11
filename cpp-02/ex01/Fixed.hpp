#if !defined(FIXED_HPP)
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed{
    private: 
        int _fixed;
        static const int _n_fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed &f1);
        Fixed(const int n);
        Fixed(const float f);
        Fixed& operator = ( const Fixed &f1);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawbits( int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream& operator<< (std::ostream &os, const Fixed &f1);

#endif // FIXED_HPP