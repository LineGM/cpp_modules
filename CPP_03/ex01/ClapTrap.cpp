#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name(""), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
	*this = toCopy;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &toCopy)
{
	this->m_name = toCopy.getName();
	this->m_hitPoints = toCopy.getHitPoints();
	this->m_energyPoints = toCopy.getEnergyPoints();
	this->m_attackDamage = toCopy.getAttackDamage();
	return (*this);
}

std::string ClapTrap::getName(void) const
{
	return (this->m_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->m_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->m_energyPoints);
}
int ClapTrap::getAttackDamage(void) const
{
	return (this->m_attackDamage);
}

void ClapTrap::attack(std::string const &target)
{
	if (this->m_energyPoints <= 0 || this->m_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->m_name << " can't do anything!" << std::endl;
	}
	else
	{
		this->m_energyPoints -= 1;
		std::cout << "ClapTrap " << this->m_name << " attacks " << target;
		std::cout << " causing " << this->m_attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->m_hitPoints <= amount)
	{
		this->m_hitPoints = 0;
		std::cout << "ClapTrap " << this->m_name << " took " << amount << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->m_name << " out of hit points now!, repair it!" << std::endl;
	}
	else
	{
		this->m_hitPoints -= amount;
		std::cout << "ClapTrap " << this->m_name << " took " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->m_energyPoints <= 0 || this->m_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->m_name << " can't do anything!" << std::endl;
	}
	else
	{
		this->m_energyPoints -= 1;
		this->m_hitPoints += amount;
		std::cout << "ClapTrap " << this->m_name << " repaired " << amount << " hit points!" << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}