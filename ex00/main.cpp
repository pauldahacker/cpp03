#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap _default;
	ClapTrap a = ClapTrap("LION");
	ClapTrap b = ClapTrap("SHARK");
	ClapTrap c = _default;

	std::cout << std::endl << "ENERGY TEST" << std::endl;
	std::cout << "Testing 11 attacks from LION to TIGER" << std::endl;
	for (int i=0; i <= 10; ++i)
		a.attack("TIGER");
	a.beRepaired(1); //should not work because ep = 0

	std::cout << std::endl << "HP TEST" << std::endl;
	std::cout << "Attempting to make SHARK take 1 point of damage 11 times" << std::endl;
	for (int i=0; i <= 10; ++i)
		b.takeDamage(1); // should stop after 10 times
	b.beRepaired(100); // should not work because hp <= 0
	b.attack("CROCODILE"); // should not work because hp <= 0

	std::cout << std::endl << "MAX HP TEST" << std::endl;
	c.beRepaired(2);
	c.takeDamage(2);
	c.beRepaired(5);
	std::cout << std::endl;

	return (0);
}