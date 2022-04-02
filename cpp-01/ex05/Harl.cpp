#include "Harl.hpp"

void hello( void ){}

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
    std::cout << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << std::endl;
}
void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
    std::cout << std::endl;
}
void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

void    Harl::complain( std::string level)
{
    HarlMemFn   array_func[LEVELS] = {&Harl::debug,  &Harl::info, &Harl::warning,	&Harl::error,};
    std::string func_names[LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (size_t i = 0; i < LEVELS; i++)
    {
        if (level == func_names[i])
        {
            (this->*array_func[i])();
            break ;
        }
    }
}