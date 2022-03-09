#include<string>

class Contact{

    private:
        std::string mFirstName;
        std::string mLastName;
        std::string mNickName;
        std::string mPhoneNumber;
        std::string mDarkestSecret;
    public:
        std::string getFirstName() const;
        std::string setFirstName(std::string str);
        std::string getLastName() const;
        std::string setLastName(std::string str);
        std::string getNickName() const;
        std::string setNickName(std::string str);
        std::string getPhoneNumber() const;
        std::string setPhoneNumber(std::string str);
        std::string getDarkestSecret() const;
        std::string setDarkestSecret(std::string str);
    
};