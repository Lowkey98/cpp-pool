#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define CAPACITY 3

#include <iomanip>
#include "Contact.hpp"
#include <limits>
class PhoneBook{

    private:
        size_t mNumberOfContact;
        size_t mOldestIndex;
        Contact ContactList[CAPACITY];
        void DisplayContacts() const;
        void DisplayContact(Contact contact) const;
        std::string frmtStr(std::string str) const;
    public:
        PhoneBook();
        void add();
        void search() const;
};

#endif