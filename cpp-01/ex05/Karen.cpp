#include "Karen.hpp"
        void hello( void ){}

        void    Karen::debug( void ){std::cout << "I eat debug";}
        void    Karen::info( void){std::cout << "I eat info";}
        void    Karen::warning( void){std::cout << "I eat warning";}
        void    Karen::error( void){std::cout << "I eat error";}
        void    Karen::complain( std::string level){
        typedef  void (Karen::*KarenMemFn)(); 
        // KarenMemFn p = &Karen::debug;
        KarenMemFn array_func[4] = {
            &Karen::debug,
            &Karen::info,
            &Karen::warning,
            &Karen::error,
            };
        std::string func_names[4] = {
                                        "debug",
                                        "info",
                                        "warning",
                                        "error",
        };
        for (size_t i = 0; i < sizeof(func_names) / sizeof(func_names[0]); i++) 
            if(level == func_names[i]){
                (this->*array_func[i])();
            } 
        }