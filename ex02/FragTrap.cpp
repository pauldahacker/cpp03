#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(FRAG_HP, FRAG_EP, FRAG_DMG)
{
	std::cout << "Constructing Default FragTrap " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, FRAG_HP, FRAG_EP, FRAG_DMG)
{
	std::cout << "Constructing FragTrap " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destroying FragTrap " << _name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (_hp == 0)
		std::cout << "ScavTrap " << _name << " is dead, it can't highFivesGuys!" << std::endl;
	else if (_ep == 0)
		std::cout << "ScavTrap " << _name << " has no energy, it can't highFivesGuys!" << std::endl;
	else
	{
		std::cout << "FragTrap " << _name << " requests a positive high five (Press Enter...)";
		std::cin.get();
		std::cout << "The high five was successful. You now have to marry FragTrap " << _name << std::endl;
	}
}
	