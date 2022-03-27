#include <iostream>
#include <cmath>
class Fixed{
    private: 
        int _fixed_n;
        static const int _n_fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed &f1);
        Fixed(const int n);
        Fixed(const float f);
        Fixed& operator = ( Fixed &f1);
        // std::ostream & operator << (std::ostream &st);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawbits( int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};