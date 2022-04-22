#include "MutantStack.hpp"
int main()
{
    MutantStack <int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    for (MyIterator <int> it = a.begin(); it != a.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}