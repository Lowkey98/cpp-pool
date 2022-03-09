#include<Contact.hpp>

std::string Contact::getFirstName() const{
    return (this->mFirstName);
}

std::string Contact::getLastName() const{
    return (this->mLastName);
}

std::string Contact::getNickName() const{
    return (this->mNickName);
}

std::string Contact::getDarkestSecret() const{
    return (this->mDarkestSecret);
}