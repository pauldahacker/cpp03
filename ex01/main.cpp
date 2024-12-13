#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a = ScavTrap("LION");
    ScavTrap b;
    ScavTrap c = b;

    std::cout << "Testing 50 attacks from LION to TIGER" << std::endl;
    for (int i=0; i < 50; ++i)
        a.attack("TIGER");
    std::cout << "Attempting to repair 1 hp..." << std::endl;
    a.beRepaired(1); //should not work because ep = 0
    std::cout << std::endl;

    std::cout << "Attempting to make LION take 10 points of damage 11 times" << std::endl;
    for (int i=0; i <= 10; ++i)
        a.takeDamage(10); // should stop after 10 times
    std::cout << "Attempting to make LION repair 100 hp" << std::endl;
    a.beRepaired(100); // should not work because hp <= 0
    std::cout << "Testing 1 attack from LION to CROCODILE" << std::endl;
    a.attack("CROCODILE"); // should not work because hp <= 0
    std::cout << std::endl;

    std::cout << "Testing Default ScavTrap" << std::endl;
    c.beRepaired(2);
    c.takeDamage(2);
    c.beRepaired(5);

/*
    // Same test as ex00:
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
*/
    return (0);
}