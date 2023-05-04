/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:23:46 by thsousa           #+#    #+#             */
/*   Updated: 2023/05/04 18:21:33 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	b("Morgan");

	b.beRepaired(5);
	b.attack("Eric");
	b.takeDamage(3);
	b.attack("Eric");
	b.takeDamage(20);
	b.attack("Eric");
	b.beRepaired(6);
	b.attack("Eric");
}