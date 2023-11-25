#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <cstring>

std::string getInformation(std::string message);

class PhoneBook {
    private:
        Contact contacts[8];
    public:
        int d;
        void addContact(int i);
        void search();
        void exitPhoneBook();
};

#endif
