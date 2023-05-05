/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:23:46 by thsousa           #+#    #+#             */
/*   Updated: 2023/05/05 12:26:19 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
   FragTrap	c("Pietro");

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
