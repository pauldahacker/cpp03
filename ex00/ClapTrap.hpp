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
    private:
        std::string 	_name;
        unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_dmg;
	
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap(void);

		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif