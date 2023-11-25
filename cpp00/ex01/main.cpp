#include "PhoneBook.hpp"
#include <limits>

int main()
{
    int index = 0;
    PhoneBook myPhoneBook;
    std::string cmd;
    while(1)
    {
        std::cout << "your cmd (EXIT, ADD or SEARCH) >> ";
        if(!getline(std::cin, cmd))
            break;
        if(cmd == "ADD")
        {
            if(index == 8)
                index = 0;
            myPhoneBook.addContact(index);
            index++;
        }
        else if(cmd == "SEARCH")
            myPhoneBook.search();
        else if(cmd == "EXIT")
            myPhoneBook.exitPhoneBook();
    }
}