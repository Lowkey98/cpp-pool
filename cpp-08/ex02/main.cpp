#include "MutantStack.hpp"
// int main()
// {
//     MutantStack <int> a;
//     a.push(1);
//     a.push(2);
//     a.push(3);
//     a.push(4);
//     a.push(5);
//     a.push(6);
//     for (MutantStack<int>::MyIterator  it = a.begin(); it != a.end(); it++)
//     {
//         std::cout << *it << std::endl;
//     }

// }
int main()
{
    MutantStack<int> mstack;
    mstack.push(7);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);


    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}