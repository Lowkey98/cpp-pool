#include<string>

class Contact{

    private:
        std::string mFirstName;
        std::string mLastName;
        std::string mNickName;
        std::string mPhoneNumber;
        std::string mDarkestSecret;
    public:
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
    
}