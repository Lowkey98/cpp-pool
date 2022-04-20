#include "iter.hpp"

int main()
{
    int tab[] = { 0, 1, 2, 3, 4 }; 
    iter( tab, 5, add_one_print );
    return 0;
}
