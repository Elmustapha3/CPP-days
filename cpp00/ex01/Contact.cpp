#include "Contact.hpp"

std::string Contact::getFirstName(){
    return this->firstName;
}

void Contact::setFirstName(std::string value){
    this->firstName = value;
}

std::string Contact::getLastName(){
    return this->lastName;
}

void Contact::setLastName(std::string value){
    this->lastName = value;
}

std::string Contact::getNickName(){
    return this->nickName;
}

void Contact::setNickName(std::string value){
    this->nickName = value;
}

long long int Contact::getPhoneNumber(){
    return this->phoneNumber;
}

void Contact::setPhoneNumber(long long int value){
    this->phoneNumber = value;
}

std::string Contact::getDarkestSecret(){
    return this->darkestSecret;
}

void Contact::setDarkestSecret(std::string value){
    this->darkestSecret = value;
}
