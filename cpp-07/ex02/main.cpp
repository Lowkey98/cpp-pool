#include "Array.hpp"

int main()
{
    Array<int> a;
    std::cout << "a.size() = " << a.size() << std::endl;
    Array <int> arr(12);
    std::cout << "arr[4] = " << arr[4] << std::endl;
    arr[4] = 5;
    // std::cout << "arr.size() = " << arr.size() << std::endl;
    // std::cout << "---------------" << std::endl;
    Array <int> arr2(arr);
    std::cout << "arr2.size() = "<< arr2.size() << std::endl;
    std::cout << "arr2[4] = " << arr2[4] << std::endl;
    try 
    {
        std::cout << arr[9] << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
