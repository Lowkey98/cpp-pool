#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define CAPACITY 8

#include <iomanip>
#include "Contact.hpp"
#include <limits>
class PhoneBook{

    private:
        size_t _NumberOfContact;
        size_t _OldestIndex;
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