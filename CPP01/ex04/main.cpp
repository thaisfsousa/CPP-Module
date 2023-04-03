/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:39:47 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/02 12:09:02 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
  if (argc == 4)
  {
    std::string original = argv[2];
    std::string replace = argv[3];
    std::string filename = argv[1];
    std::ifstream file(filename);
    int posChar = 0;
    int size = 0;

    if (file.is_open())
    {
      std::string line;
      std::string temp;
      while (std::getline(file, line))
      {
        while (line.find(original) != std::string::npos)
        {
            posChar = line.find(original);
            std::string aux = line.substr(size, posChar);
            int len = posChar + replace.length();
            line = aux + replace + line.substr(len, line.length());    
        }
        line += '\n';
        temp += line;
      }
      std::ofstream newfile(filename + ".replace");
      newfile << temp;
    }
    else
      std::cout << "\033[1;31m  Not valid file. \033[m \n";
  }
  else
    std::cout << "\033[1;31m  Missing arguments. \033[m \n";
}