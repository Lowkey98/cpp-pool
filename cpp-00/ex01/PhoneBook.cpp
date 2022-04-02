# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _NumberOfContact(0) , _OldestIndex(0)
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
    if (_OldestIndex == CAPACITY)
        _OldestIndex = 0;
    this->ContactList[_OldestIndex] = contact;
    _OldestIndex++;
    if (_NumberOfContact < CAPACITY)
        _NumberOfContact++;
    
}
std::string PhoneBook::frmtStr(std::string str) const{
    std::string str1;

    if (str.length() >= 10)
    {
        str1 = str.substr(0,10);
        str1[9] = '.';
        return (str1);
    }
    return (str);
}
void PhoneBook::DisplayContacts() const{
    for(size_t i = 0; i < this->_NumberOfContact; i++){
        std::cout << i << "|";
        std::cout << std::right << std::setw(10) << frmtStr(this->ContactList[i].getFirstName())<< "|";
        std::cout << std::right << std::setw(10) << frmtStr(this->ContactList[i].getLastName()) << "|";
        std::cout << std::right << std::setw(10) << frmtStr(this->ContactList[i].getNickName())  << std::endl;
    }
}
void PhoneBook::DisplayContact(Contact contact) const{
    std::cout << contact.getFirstName() << std::endl;
    std::cout << contact.getLastName() << std::endl;
    std::cout << contact.getNickName() << std::endl;
}
void PhoneBook::search() const{
    size_t index;
    std::string line;
    DisplayContacts();
    std::cout << "Insert the index" << std::endl;
    while(1)
    {
        std::cin >> index;
        if (std::cin.fail())
        {
            std::cout << "Enter an index" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        
        if (index < _NumberOfContact && index >= 0)
            break;
        std::cout << "Index out of range, insert another one" << std::endl;
    }
    DisplayContact(ContactList[index]);
}