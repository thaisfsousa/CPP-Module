/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:20:59 by thsousa           #+#    #+#             */
/*   Updated: 2023/02/26 19:21:00 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
  Zombie *Horde = new Zombie[N];
  for (int i = 0; i < N; i++)
  {
    Horde[i].setName(name);
    Horde[i].announce();
  }
  return Horde;
}