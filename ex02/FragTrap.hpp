#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const FragTrap &cpy);
    FragTrap(std::string name);
    FragTrap &operator=( const FragTrap& cpy);
    ~FragTrap();

    void    highFivesGuys(void);

};


#endif