#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(SCAV_HP, SCAV_EP, SCAV_DMG)
{
	std::cout << "Constructing Default ScavTrap " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, SCAV_HP, SCAV_EP, SCAV_DMG)
{
	std::cout << "Constructing ScavTrap " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destroying ScavTrap " << _name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hp == 0)
		std::cout << "ScavTrap " << _name << " is dead, it can't attack!" << std::endl;
	else if (_ep == 0)
		std::cout << "ScavTrap " << _name << " has no energy, it can't attack!" << std::endl;
	else
	{
		--this->_ep;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _dmg
			<< " points of damage! [Energy left: [" << _ep << "]" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	if (_hp == 0)
		std::cout << "ScavTrap " << _name << " is dead, it can't guardGate!" << std::endl;
	else if (_ep == 0)
		std::cout << "ScavTrap " << _name << " has no energy, it can't guardGate!" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}