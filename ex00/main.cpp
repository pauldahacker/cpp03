#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a = ClapTrap("LION");
    ClapTrap b;
    ClapTrap c = b;

    for (int i=0; i < 10; ++i)
        a.attack("TIGER");
    a.beRepaired(1); //should not work because ep = 0
    for (int i=0; i <= 10; ++i)
        a.takeDamage(1); // should stop after 10 times
    a.beRepaired(100); // should not work because hp <= 0
    a.attack("CROCODILE"); // should not work because hp <= 0

    c.beRepaired(2);
    c.takeDamage(2);
    c.beRepaired(5);
}