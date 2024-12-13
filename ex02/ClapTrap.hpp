#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <algorithm>

# define CLAP_HP (unsigned int)10
# define CLAP_EP (unsigned int)10
# define CLAP_DMG (unsigned int)0

class ClapTrap
{
    protected:
        std::string 	_name;
        unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_dmg;
		unsigned int	_maxHp;
	
	public:
		ClapTrap(void);
		ClapTrap(int hp, int ep, int dmg);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int ep, int dmg);
		ClapTrap(const ClapTrap &other);
		~ClapTrap(void);

		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif