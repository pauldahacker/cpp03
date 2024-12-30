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
	std::cout << "FragTrap " << _name << " requests a positive high fives." << std::endl;
}
	