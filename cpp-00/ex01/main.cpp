#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string command;
    PhoneBook phonebook;
    while (1){
        std::cout << "Enter one of the 3 commands:" << std::endl;
        std::cout << "ADD" << std::endl;
        std::cout << "SEARCH" << std::endl;
        std::cout << "EXIT" << std::endl;
        std::cin >> command;
        if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
        else if (command == "EXIT")
            break;
    }
    return (0);
}
