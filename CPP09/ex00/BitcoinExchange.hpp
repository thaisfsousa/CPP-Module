/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:57:08 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 18:54:34 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <cstdlib>

class BitcoinExchange
{
private:
    std::map<std::string, float> _map;
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange operator=(const BitcoinExchange &src);
    ~BitcoinExchange();
    std::map<std::string, float> getMap() const;
	void setMap(const std::map<std::string, float> &map);
	void openData();
	void exchange(const std::string &fileName);
	void validateInputFile(const std::string &fileName);
	void validateValue(const std::string &value, const std::string &date);
};

#endif