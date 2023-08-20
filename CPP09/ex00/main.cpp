/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:56:18 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 19:19:12 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2){
        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }
    BitcoinExchange btc;
    btc.exchange(argv[1]);
    return (0);
}