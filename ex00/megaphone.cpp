/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:39:59 by thsousa           #+#    #+#             */
/*   Updated: 2023/01/25 20:00:27 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
  if (argc > 1)
  {
    int i = 1;

    while (argv[i])
    {
      int j = 0;
      while (argv[i][j])
      {
        std::cout << (char)(toupper(argv[i][j]));
        j++;
      }
      i++;
      if (argv[i])
        std::cout << " ";
    }
  }
  else if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  std::cout << "\n";
  return (0);
}