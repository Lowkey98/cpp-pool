#if !defined(HARL_HPP)
#define HARL_HPP
#define LEVELS 4
#include <string>
#include<iostream>
void hello( void );
class Harl
{
	public:
		void    complain( std::string level);
	private:
		void    debug( void );
		void    info( void);
		void    warning( void);
		void    error( void);
};
typedef  void (Harl::*HarlMemFn)(); 
#endif // HARL_HPP