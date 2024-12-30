#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define CLAP_HP (unsigned int)10
# define CLAP_EP (unsigned int)10
# define CLAP_DMG (unsigned int)0

class ClapTrap
{
	// uncommented = same as ex00
	protected:
		std::string 	_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_dmg;
		unsigned int	_maxHp; // will be either 10 for ClapTrap or 50 for SlavTrap
	
	public:
		ClapTrap(void);
		ClapTrap(int hp, int ep, int dmg); // Default construction with other starting values
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int ep, int dmg); // ClapTrap <name> construction with other starting values
		ClapTrap(const ClapTrap &other);
		~ClapTrap(void);

		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount); // changed to only be repaired if _hp < _maxHp
};

#endif