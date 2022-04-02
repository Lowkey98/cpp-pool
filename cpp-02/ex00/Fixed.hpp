#if !defined(FIXED_HPP)
#define FIXED_HPP

# include <string>
# include <iostream>
class Fixed
{
    private: 
        int _fixed;
        static const int n_fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed &f1);
        Fixed & operator = (const Fixed  &f1);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawbits( int const raw);
};

#endif // FIXED_HPP
