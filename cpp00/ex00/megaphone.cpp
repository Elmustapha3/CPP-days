#include <iostream>

int main(int ac, char *av[])
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        int i = 1;
        int j;
        while (i < ac)
        {
            j = 0;
            while (av[i][j])
            {
                std::cout << (char)toupper(av[i][j]);
                j++;
            }
            std::cout << ' ';
            i++;
        }
        std::cout << std::endl;

    }
    return 0;
}
