# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : mNumberOfContact(0)
{

}

void    PhoneBook::add(){
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    std::cout << "Enter the firstname" << std::endl;
    std::cin >> FirstName;
    std::cout << "Enter the lastname" << std::endl;
    std::cin >> LastName;
    std::cout << "Enter the nickname" << std::endl;
    std::cin >> NickName;
    std::cout << "Enter the phonenumber" << std::endl;
    std::cin >> PhoneNumber;
    std::cout << "Enter the darkest secret" << std::endl;
    std::cin >> DarkestSecret;

    Contact contact(FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
    if (this->mNumberOfContact == 8)
        this->ContactList[0] = contact;
    else {
        this->ContactList[mNumberOfContact] = contact;
        this->mNumberOfContact++;
    }
}

void PhoneBook::DisplayContacts() const{
    for(size_t i = 0; i < this->mNumberOfContact; i++){
        std::cout << i << " ";
        std::cout << std::setw(10) << this->ContactList[i].getFirstName()<< " ";
        std::cout << this->ContactList[i].getLastName() << " ";
        std::cout << this->ContactList[i].getNickName() << " " << std::endl;
    }
}
void PhoneBook::DisplayContact(Contact contact) const{
    std::cout << contact.getFirstName() << std::endl;
    std::cout << contact.getLastName() << std::endl;
    std::cout << contact.getNickName() << std::endl;
}
void PhoneBook::search() const{
    size_t index;

    DisplayContacts();
    std::cout << "Insert the index" << std::endl;
    while(1)
    {
        std::cin >> index;
        if (index < mNumberOfContact)
            break;
        std::cout << "Index out of range, insert another one" << std::endl;
    }
    DisplayContact(ContactList[index]);
}