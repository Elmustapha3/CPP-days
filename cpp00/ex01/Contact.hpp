#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        long long int phoneNumber;
        std::string darkestSecret;
    public:
        void setFirstName(std::string value);
        void setLastName(std::string value);
        void setNickName(std::string value);
        void setPhoneNumber(long long int value);
        void setDarkestSecret(std::string value);
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        long long int getPhoneNumber();
        std::string getDarkestSecret();
};

#endif