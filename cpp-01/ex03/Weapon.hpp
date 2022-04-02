#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<string>
#include<iostream>

class Weapon
{
    public:
        const std::string & getType();
        void    setType(std::string type);
        Weapon(std::string type);
        Weapon();
    private:
        std::string type;

};

#endif