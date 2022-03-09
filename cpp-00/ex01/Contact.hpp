#ifndef CONTACT_HPP
#define CONTACT_HPP
#include<string>
#include<cstring>
#include<iostream>

class Contact{

    private:
        std::string mFirstName;
        std::string mLastName;
        std::string mNickName;
        std::string mPhoneNumber;
        std::string mDarkestSecret;
    public:
        Contact(void);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
        Contact(std::string FirstName,
            std::string LastName,
            std::string NickName,
            std::string PhoneNumber,
            std::string DarkestSecret
        );
};

#endif