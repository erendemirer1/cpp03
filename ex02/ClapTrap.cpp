#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("no_name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Default Constructor Executed. (Without Name)" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
   std::cout << "Constructor Executed. That Newborn ClapTrap's name is -> " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Executed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy_points && this->_hit_points)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage! " << std::endl;
        this->_energy_points--;
    }
    else if (!this->_energy_points)
        std::cout << "ClapTrap has not enough energy so he can't attack!" << std::endl;
    else
        std::cout << "ClapTrap is DEAD so he can't attack!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points > amount)
    {
        this->_hit_points-= amount;
        std::cout << "ClapTrap's HP decreased, him current HP is: " << this->_hit_points << std::endl; 
    }
    else if(this->_hit_points > 0)
    {
        this->_hit_points = 0;
        std::cout << "You killed Claptrap, are you happy now?!" << std::endl;
    }
    else
        std::cout << "ClapTrap is already dead, so you can't attack him!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points > 0 && this->_hit_points > 0 && this->_hit_points + amount <= 10)
    {
        std::cout << "ClapTrap repaired himself " << amount << " HP" << std::endl;
        this->_hit_points += amount;
        this->_energy_points--;
        std::cout << "ClapTrap's current HP: " << this->_hit_points <<std::endl;
    }
    else
        std::cout << "ClapTrap has not enough energy or not enough HP for repair himself!" << std::endl;
    
}