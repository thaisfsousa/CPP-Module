/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:23:46 by thsousa           #+#    #+#             */
/*   Updated: 2023/05/08 09:54:35 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ClapTrap c1;
    ScavTrap c2("teste");
	ScavTrap aux;
    ScavTrap c3(aux);

    std::cout << std::endl;

	c1.takeDamage(80);
    c1.attack("Thais");
    c2.attack("Anna");
    c3.attack("Raoni");

    std::cout << std::endl;

    c1.takeDamage(20);
    c2.takeDamage(50);
    c2.takeDamage(50);
    c3.takeDamage(5);

    std::cout << std::endl;

    c1.beRepaired(1000);
    c2.beRepaired(1);
    c3.beRepaired(5);

    std::cout << std::endl;

	c2.guardGate();
	c3.guardGate();

    std::cout << std::endl;
}
