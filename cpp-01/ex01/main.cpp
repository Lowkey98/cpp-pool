#include "Zombie.hpp"

int main()
{
    int n = 5;
    Zombie *z = zombieHorde(n, "Ayoub");
    for (int i = 0; i < n; i++)
    {
        z[i].announce();
    }
    delete[] z;
}