#include <string>
#include<iostream>
void hello( void );
class Karen{
    private:
        void    debug( void );
        void    info( void);
        void    warning( void);
        void    error( void);
        
    public:
        void complain( std::string level);
};