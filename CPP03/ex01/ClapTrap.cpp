/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:19:26 by thsousa           #+#    #+#             */
/*   Updated: 2023/05/04 18:22:44 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor Called" << std::endl;
    this->setHitPoints(10);
    this->setEnergyPoints(10);
    this->setAttackDamagePoints(0);
    this->name = "DefaultName";
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default Constructor Called" << std::endl;
    this->setHitPoints(10);
    this->setEnergyPoints(10);
    this->setAttackDamagePoints(0);
    this->setName(name);
}

ClapTrap::ClapTrap(ClapTrap const &toCopy)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = toCopy;
}

void    ClapTrap::setHitPoints(int points)
{
    this->HitPoints = points;
}

void    ClapTrap::setEnergyPoints(int points)
{
    this->EnergyPoints = points;
}

void    ClapTrap::setAttackDamagePoints(int points)
{
    this->AttackDamage = points;
}

void    ClapTrap::setName(std::string name)
{
    this->name = name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ClapClap)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->setHitPoints(ClapClap.getHit());
    this->setEnergyPoints(ClapClap.getEnergy());
    this->setAttackDamagePoints(0);
    this->setName(ClapClap.getName());
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->getEnergy() > 0 && this->getHit() > 0)
        std::cout << "ClapTrap " << this->getName() << " atacks " << target << ", causing " << this->getAttack() << " points of damage!" << std::endl;
    else
         std::cout << "Can't get enough points" << std::endl;
}

std::string ClapTrap::getName() const
{
    return (this->name);
}

int ClapTrap::getAttack() const
{
    return (this->AttackDamage);
}

int ClapTrap::getEnergy() const
{
    return (this->EnergyPoints);
}

int ClapTrap::getHit() const
{
    return (this->HitPoints);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->getHit() > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " took " << amount << " points of damage! "<< std::endl;
        this->setEnergyPoints(this->getEnergy() - 1);
    }
    else
        std::cout << "Can't get enough points" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getEnergy() > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " was repaired. " << std::endl;
        this->setHitPoints(this->getHit() + amount);
        this->setEnergyPoints(this->getEnergy() - 1);
    }
    else
        std::cout << "Can't get enough points" << std::endl;
}