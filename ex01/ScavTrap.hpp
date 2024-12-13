#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define SCAV_HP (unsigned int)100
# define SCAV_EP (unsigned int)50
# define SCAV_DMG (unsigned int)20

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		~ScavTrap(void);

		ScavTrap &operator=(const ScavTrap &other);

		void guardGate();
};

#endif