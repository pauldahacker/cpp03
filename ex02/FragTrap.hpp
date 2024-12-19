#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define FRAG_HP (unsigned int)100
# define FRAG_EP (unsigned int)100
# define FRAG_DMG (unsigned int)30

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
        FragTrap(const FragTrap &other);
		~FragTrap(void);

		void highFivesGuys();
};

#endif