#include "PhoneBook.hpp"


void printColumn(std::string information)
{
    int len, j;

    len = information.length();
    j = 0;
    if(len < 10)
    {
        while(j++ < 10 - len)
            std::cout << ' ';
        std::cout << information;

    }
    else if(len > 10)
    {
        while (j < 9)
        {
            std::cout << information[j];
            j++;
        }
        std::cout << '.';
    }
    else
        std::cout << information;

}


void printLine(int i, Contact contact)
{
    int j;

    std::cout << "|";
    j = 0;
    while (j++ < 9)
        std::cout << ' ';
    std::cout << i;
    std::cout << "|";
    printColumn(contact.getFirstName());
    std::cout << "|";
    printColumn(contact.getLastName());
    std::cout << "|";
    printColumn(contact.getNickName());
    std::cout << "|";
    std::cout << std::endl;
    std::cout << "---------------------------------------------"<< std::endl;
}


int check_is_number(std::string value)
{
    int i = 0;
    while(value[i])
    {
        if(!isdigit(value[i]))
            return 0;
        i++;
    }
    return 1;
}

int is_just_spaces_or_tabs(std::string value)
{
    int i = 0;
    while(value[i])
    {
        if(value[i] != ' ' && value[i] != '\t')
            return 0;
        i++;
    }
    return 1;
}

int isBigNumber(std::string value, int size)
{
    int len = value.length();
    if(len > size)
        return 1;
    return 0;

}

std::string getInformation(std::string message)
{
    int check;
    std::string value;
    do {
        check = 1;
        std::cout << message ;
        if(!getline(std::cin, value))
            return "";
        if(value == "" || is_just_spaces_or_tabs(value))
        {
            std::cout << "\n\tIt must not be empty, retype it\n\n";
            check = 0;
        }
        else if (value == "exit" || value == "EXIT")
            check = -1;
    }while(!check);

    int j,i = 0;
    while(value[i] && (value[i] == ' ' || value[i] == '\t'))
        i++;
    j = value.length() - 1;
    while(j >= 0 && (value[j] == ' ' || value[j] == '\t'))
        j--;
    return value.substr(i, j - i + 1);
}

std::string getFNumber(std::string message)
{
    std::string value;
    int check;

    do {
        check = 1;
        std::cout << message ;
        if(!getline(std::cin, value))
            exit(0);
        if(value == "" || is_just_spaces_or_tabs(value))
        {
            std::cout << "\n\tIt must not be empty, retry please!\n\n";
            check = 0;
        }
        else if (value == "exit" || value == "EXIT")
            check = -1;
        else if(!check_is_number(value))
        {
            std::cout << "\n\tthe phone number must be a number, retry please!\n\n";
            check = 0;
        }
        else if(isBigNumber(value, 15))
        {
            std::cout << "\n\tthe number is not accepted, its too big, retry please!\n\n";
            check = 0;
        }
    }while(!check);
    if(check == -1)
        return "";
    int j,i = 0;
    while(value[i] && value[i] == ' ')
        i++;
    j = value.length() - 1;
    while(j >= 0 && value[j] == ' ')
        j--;
    return value.substr(i, j - i + 1);
}


void PhoneBook::addContact(int i){

    std::string fname;
    std::string lname;
    std::string nname;
    std::string nphone;
    std::string dsercet;
    long long int PhoneNumber;

    fname = getInformation("your first name : ");
    if(fname == "")
        exit(0);
    lname = getInformation("your last name : ");
    if(lname == "")
        exit(0);
    nname = getInformation("your nick name : ");
    if(nname == "")
        exit(0);
    nphone = getFNumber("your phone number : ");
    if(nphone == "")
        exit(0);
    dsercet = getInformation("your darkest secret : ");
    if(dsercet == "")
        exit(0);
    this->contacts[i].setFirstName(fname);
    this->contacts[i].setLastName(lname);
    this->contacts[i].setNickName(nname);
    PhoneNumber = atoll(nphone.c_str());
    this->contacts[i].setPhoneNumber(PhoneNumber);
    this->contacts[i].setDarkestSecret(dsercet);

    std::cout << "\nContact is successfully added!!\n\n" ;
}

void PhoneBook::search(){
    int i = 0, check;
    std::string sIndex;
    int index;
    if(this->contacts[0].getFirstName() != "")
    {
        std::cout << "---------------------------------------------"<< std::endl;
        std::cout << "|   index  |first name| last name| nick name|" << std::endl;
        std::cout << "---------------------------------------------"<< std::endl;
    }
    else
        std::cout << "\nNo contact found!!\n\n" ;

    while (i < 8 && this->contacts[i].getFirstName() != "")
    {
        printLine(i, this->contacts[i]);
        i++;
    }
    if(this->contacts[0].getFirstName() != "")
    {
        do {
            check = 1;
            std::cout << "type an index (or exit to go back) : ";
            if(!getline(std::cin, sIndex))
                exit(0);
            if(sIndex == "" || is_just_spaces_or_tabs(sIndex))
            {
                std::cout << "\n\tIt must not be empty, retry please!\n\n";
                check = 0;
            }
            else if(sIndex == "exit" || sIndex == "EXIT")
            {
                check = -1;
            }
            else if(!check_is_number(sIndex))
            {
                std::cout << "\n\tthe phone number must be a number, retry please!\n\n";
                check = 0;
            }
            else if(isBigNumber(sIndex, 1))
            {
                std::cout << "\n\tthe number is not accepted, try  between 0 and 7!\n\n";
                check = 0;
            }
            else
            {
                index = atoi(sIndex.c_str());
                if(index < 0 || index > 7)
                {
                    std::cout << "\n\tout of range of the phoneBook, try  between 0 and 7\n\n";
                    check = 0;
                }
                else if(this->contacts[index].getFirstName() == "")
                {
                    std::cout << "empty index" << std::endl;
                    check = 0;
                }
            }
        }while(!check);
        if(check == 1)
        {
            std::cout << "\nfirstname : " << this->contacts[index].getFirstName() << std::endl;
            std::cout << "laststname : " << this->contacts[index].getLastName() << std::endl;
            std::cout << "nickname : " << this->contacts[index].getNickName() << std::endl;
            std::cout << "phone number : " << this->contacts[index].getPhoneNumber() << std::endl;
            std::cout << "secret : " << this->contacts[index].getDarkestSecret() << std::endl;
            std::cout << std::endl;
        }
    }
}

void PhoneBook::exitPhoneBook(){
    exit(0);
}
