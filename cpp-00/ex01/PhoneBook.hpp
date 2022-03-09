#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{

    private:
        size_t mNumberOfContact;
        Contact ContactList[8];
        void DisplayContacts() const;
        void DisplayContact(Contact contact) const;

    public:
        PhoneBook();
        void add();
        void search() const;
};

#endif