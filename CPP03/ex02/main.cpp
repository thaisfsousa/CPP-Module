/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:23:46 by thsousa           #+#    #+#             */
/*   Updated: 2023/05/08 09:52:01 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
   FragTrap	c("Pietro");
   FragTrap thais;


   	c.takeDamage(200);
	c.beRepaired(5);
	c.beRepaired(10);
	c.attack("Eric");
	c.takeDamage(3);
	c.attack("Eric");
	c.takeDamage(20);
	c.attack("Eric");
	c.beRepaired(6);
	c.attack("Eric");
	c.highFivesGuys();
    return (0);
}
