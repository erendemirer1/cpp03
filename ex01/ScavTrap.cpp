#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy): ClapTrap(cpy)
{
    this->_guarding_gate = cpy._guarding_gate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Constructor for the name " << this->_name << " called" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor for " << this->_name << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called. " << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energy_points && this->_hit_points)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage! " << std::endl;
        this->_energy_points--;
    }
    else if (!this->_energy_points)
        std::cout << "ScavTrap has not enough energy so he can't attack!" << std::endl;
    else
        std::cout << "ScavTrap is DEAD so he can't attack!" << std::endl;
}
void	ScavTrap::guardGate(void)
{
	if (this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already guarding the gate!" << std::endl;
}