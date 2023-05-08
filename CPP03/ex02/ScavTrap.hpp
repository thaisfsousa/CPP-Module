/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:41:34 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/26 17:37:13 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
    private:
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap& operator=(const ScavTrap &ClapClap);
    ScavTrap(ScavTrap const &toCopy);
    ~ScavTrap();
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    attack(const std::string& target);
    void guardGate();
};

#endif