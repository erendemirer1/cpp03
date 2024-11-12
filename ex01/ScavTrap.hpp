#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP


# include "ClapTrap.hpp"
# include <iostream>
class ScavTrap : public ClapTrap
{
    private:
        bool _guarding_gate;
    public:
    ScavTrap();
    ScavTrap(const ScavTrap &cpy);
    ScavTrap(std::string name);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &src);

    void attack(const std::string &target);
	void guardGate(void);
};

#endif