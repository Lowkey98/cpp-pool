#include "Contact.hpp"

std::string Contact::getFirstName() const{
    return (this->_FirstName);
}

std::string Contact::getLastName() const{
    return (this->_LastName);
}

std::string Contact::getNickName() const{
    return (this->_NickName);
}

std::string Contact::getPhoneNumber() const{
    return (this->_PhoneNumber);
}
std::string Contact::getDarkestSecret() const{
    return (this->_DarkestSecret);
}

Contact::Contact(void)
{};
Contact::Contact(std::string FirstName,
            std::string LastName,
            std::string NickName,
            std::string PhoneNumber,
            std::string DarkestSecret){
                this->_FirstName = FirstName;
                this->_LastName = LastName;
                this->_NickName = NickName;
                this->_PhoneNumber = PhoneNumber;
                this->_DarkestSecret = DarkestSecret;
            }