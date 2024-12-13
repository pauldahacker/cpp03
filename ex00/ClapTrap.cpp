#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(CLAP_HP), _ep(CLAP_EP), _dmg(CLAP_DMG)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(CLAP_HP), _ep(CLAP_EP), _dmg(CLAP_DMG)
{
	std::cout << "Constructing ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destroying ClapTrap " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_dmg = other._dmg;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_hp == 0)
		std::cout <<  _name << " is dead, it can't attack!" << std::endl;
	else if (_ep == 0)
		std::cout << _name << " has no energy, it can't attack!" << std::endl;
	else
	{
		--this->_ep;
		std::cout << _name << " attacks " << target << ", causing " << _dmg 
			<< " points of damage! [Energy left: [" << _ep << "]" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		this->_hp -= std::min(_hp, amount);
		std::cout << _name <<" takes " << amount
			<< " points of damage! [HP left: " << _hp << "]" << std::endl;
	}
	else
		std::cout << _name << " is dead, it can't take damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp == 0)
		std::cout << _name << " is dead, it can't repair!" << std::endl;
	else if (_ep == 0)
		std::cout << _name << " has no energy, it can't repair!" << std::endl;
	else if (_hp == CLAP_HP)
		std::cout << _name << " has full health, it won't repair!" << std::endl;
	else
	{
		this->_hp = std::min(CLAP_HP, _hp + amount);
		--this->_ep;
		std::cout << _name <<" repairs " << amount << " hitpoints! [Energy left: "
			<< _ep << ", HP left: " << _hp << "]" << std::endl;
	}
}