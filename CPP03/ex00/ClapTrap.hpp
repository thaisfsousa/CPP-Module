/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:09:19 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/25 16:37:05 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class ClapTrap {
private:
    std::string name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;

public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &toCopy);
    ClapTrap& operator=(const ClapTrap &ClapClap);
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    setName(std::string name);
    void    setHitPoints(int points);
    void    setEnergyPoints(int points);
    int     getEnergy() const ;
    int     getHit() const ;
    int     getAttack() const;
    std::string getName() const ;
    void    setAttackDamagePoints(int points);
    
};



#endif
