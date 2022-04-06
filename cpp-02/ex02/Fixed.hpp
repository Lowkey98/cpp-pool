#if !defined(FIXED_HPP)
#define FIXED_HPP

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
        Fixed& operator = ( const Fixed &f1);
        // std::ostream & operator << (std::ostream &st);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawbits( int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        int operator > (const Fixed &f1);
        int operator < (const Fixed &f1);
        int operator >= (const Fixed &f1);
        int operator <= (const Fixed &f1);
        int operator == (const Fixed &f1);
        int operator != (const Fixed &f1);
        Fixed operator + (const Fixed &f1);
        Fixed operator - (const Fixed &f1);
        Fixed operator * (const Fixed &f1);
        Fixed operator / (const Fixed &f1);
        static Fixed& min(Fixed &f1, Fixed &f2);
        static const Fixed& min(const Fixed &f1, const Fixed &f2);
        static Fixed& max(Fixed &f1, Fixed &f2);
        static const Fixed& max(const Fixed &f1, const Fixed &f2);

        Fixed& operator ++();
        Fixed operator ++(int);
        Fixed& operator --();
        Fixed operator --(int);
};
std::ostream& operator<< (std::ostream &os, const Fixed &f1);

#endif // FIXED_HPP