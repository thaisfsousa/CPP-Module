/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:23:46 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/25 17:07:29 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    // ClapTrap teste("Thais");
    // ScavTrap teste2("Anna");
    // teste.attack("Anna");
    // teste.beRepaired(5);
    // teste.takeDamage(2);
    // teste2.attack("TESTANDO");
    ScavTrap	c("Pietro");

	c.beRepaired(5);
	c.beRepaired(10);
	c.attack("Eric");
	c.takeDamage(3);
	c.attack("Eric");
	c.takeDamage(20);
	c.attack("Eric");
	c.beRepaired(6);
	c.attack("Eric");
	c.guardGate();
    return (0);
}