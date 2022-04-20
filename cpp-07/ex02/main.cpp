#include "Array.hpp"

int main()
{
    Array<std::string> a;
    std::cout << "a.size() = " << a.size() << std::endl;
    Array <std::string> arr(12);
    std::cout << "arr[4] = " << arr[4] << std::endl;
    arr[4] = "hello";
    // std::cout << "arr.size() = " << arr.size() << std::endl;
    // std::cout << "---------------" << std::endl;
    Array <std::string> arr2(arr);
    std::cout << "arr2.size() = "<< arr2.size() << std::endl;
    std::cout << "arr2[4] = " << arr2[4] << std::endl;
    try 
    {
        std::cout << arr[100] << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
