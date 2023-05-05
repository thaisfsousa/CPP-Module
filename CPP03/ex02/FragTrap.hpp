/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:41:34 by thsousa           #+#    #+#             */
/*   Updated: 2023/05/05 12:29:51 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include "ClapTrap.hpp"

class FragTrap : ClapTrap {
    private:
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap& operator=(const FragTrap &ClapClap);
    FragTrap(FragTrap const &toCopy);
    ~FragTrap();
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    attack(const std::string& target);
    void    highFivesGuys(void);
};

#endif
