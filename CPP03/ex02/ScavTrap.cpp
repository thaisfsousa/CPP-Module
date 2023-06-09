/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:37:56 by thsousa           #+#    #+#             */
/*   Updated: 2023/05/08 10:15:32 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called \n";
    this->setEnergyPoints(50);
    this->setHitPoints(100);
    this->setName("ScavTrapName");
    this->setAttackDamagePoints(20);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Default constructor called \n";
    this->setEnergyPoints(50);
    this->setHitPoints(100);
    this->setName(name);
    this->setAttackDamagePoints(20);
}

ScavTrap::ScavTrap(ScavTrap const &toCopy)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = toCopy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ClapClap)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->setHitPoints(ClapClap.getHit());
    this->setEnergyPoints(ClapClap.getEnergy());
    this->setAttackDamagePoints(0);
    this->setName(ClapClap.getName());
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
	if (this->getHit() > 0 && this->getEnergy() > 0)
    	std::cout << "ScavTrap " << this->getName() << " atacks " << target << ", causing " << this->getAttack() << " points of damage!" << std::endl;
	else
        std::cout << "ScavTrap " << this->getName() << " has not HP or EP" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
	if (this->getHit() > 0 && this->getEnergy() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " took " << amount << " points of damage! "<< std::endl;
    	this->setHitPoints(this->getHit() - amount);
	}
	else
        std::cout << "ScavTrap " << this->getName() << " has not HP or EP" << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
	if (this->getHit() > 0 && this->getEnergy() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " was repaired. " << std::endl;
    	this->setHitPoints(this->getHit() + amount);
    	this->setEnergyPoints(this->getEnergy() - 1);
	}
	else
        std::cout << "ScavTrap " << this->getName() << " has not HP or EP" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << this->getName() << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called" << std::endl;
}
