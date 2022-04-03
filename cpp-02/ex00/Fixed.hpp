#if !defined(FIXED_HPP)
#define FIXED_HPP

# include <string>
# include <iostream>
class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &f1);
		Fixed & operator = (const Fixed  &f1);
		~Fixed();
		int getRawBits( void ) const;
		void setRawbits( int const raw);
	private:
		int _fixed;
		static const int n_fraction = 8;
};

#endif // FIXED_HPP
