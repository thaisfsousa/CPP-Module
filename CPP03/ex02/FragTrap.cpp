/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:37:56 by thsousa           #+#    #+#             */
/*   Updated: 2023/05/04 18:30:41 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called \n";
    this->setEnergyPoints(100);
    this->setHitPoints(100);
    this->setName("FragTrapName");
    this->setAttackDamagePoints(30);
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Default constructor called \n";
    this->setEnergyPoints(100);
    this->setHitPoints(100);
    this->setName(name);
    this->setAttackDamagePoints(30);
}

FragTrap& FragTrap::operator=(const FragTrap &ClapClap)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->setHitPoints(ClapClap.getHit());
    this->setEnergyPoints(ClapClap.getEnergy());
    this->setAttackDamagePoints(0);
    this->setName(ClapClap.getName());
    return (*this);
}

void    FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << this->getName() << " atacks " << target << ", causing " << this->getAttack() << " points of damage!" << std::endl;
    this->setEnergyPoints(this->getEnergy() - 1);
}

void    FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FragTrap " << this->getName() << " took " << amount << " points of damage! "<< std::endl;
    this->setHitPoints(getHit() - amount);
}

void    FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "FragTrap " << this->getName() << " was repaired. " << std::endl;
    this->setHitPoints(this->getHit() + amount);
    this->setEnergyPoints(this->getEnergy() - 1);
}

void    highFivesGuys(void)
{

}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}