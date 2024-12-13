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

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_dmg = other._dmg;
        this->_maxHp = other._maxHp;
	}
	return (*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}