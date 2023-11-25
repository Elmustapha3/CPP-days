#include "ClapTrap.hpp"


int main()
{
    ClapTrap c;
    ClapTrap d(c);

    c.attack("c1");
    d.attack("c2");
    c.beRepaired(20);
    d.beRepaired(20);

    return 0;
}