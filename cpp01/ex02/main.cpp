
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "memory address of the string : " << &str << std::endl;
    std::cout << "memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "memory address held by stringREF : " << &stringREF << std::endl;
    std::cout << "the value of the string : "<< str << std::endl;
    std::cout << "the value pointed to by stringPTR : "<< *stringPTR << std::endl;
    std::cout << "the value pointed to by stringREF : "<< stringREF << std::endl;
    return 0;
}
