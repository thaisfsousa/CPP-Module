/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:23:46 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/25 16:28:35 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap teste("Thais");
    ClapTrap teste2("Anna");
    teste.attack("Anna");
    teste.beRepaired(5);
    teste.takeDamage(2);
    return (0);
}