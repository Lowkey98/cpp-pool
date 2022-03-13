# include "Zombie.hpp"


int main()
{
    Zombie *z = zombieHorde(5, "ayoub");
    for (int i = 0; i < 5; i++){
        z[i].announce();
    }
    std::cout << "costructor call:\n";
    delete[] z;
}