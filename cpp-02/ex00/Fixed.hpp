# include <iostream>
class Fixed{
    private: 
        int _fixed_n;
        static const int _n_fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed &f1);
        Fixed operator = (const Fixed &f1);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawbits( int const raw);
};