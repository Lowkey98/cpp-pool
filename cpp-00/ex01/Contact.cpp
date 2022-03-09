#include "Contact.hpp"

std::string Contact::getFirstName() const{
    return (this->mFirstName);
}

std::string Contact::getLastName() const{
    return (this->mLastName);
}

std::string Contact::getNickName() const{
    return (this->mNickName);
}

std::string Contact::getPhoneNumber() const{
    return (this->mPhoneNumber);
}
std::string Contact::getDarkestSecret() const{
    return (this->mDarkestSecret);
}

Contact::Contact(void)
{};
Contact::Contact(std::string FirstName,
            std::string LastName,
            std::string NickName,
            std::string PhoneNumber,
            std::string DarkestSecret){
                this->mFirstName = FirstName;
                this->mLastName = LastName;
                this->mNickName = NickName;
                this->mPhoneNumber = PhoneNumber;
                this->mDarkestSecret = DarkestSecret;
            }