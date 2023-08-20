/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:26:28 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 19:18:20 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){};
BitcoinExchange::BitcoinExchange(const BitcoinExchange &src){
    *this = src;
}
BitcoinExchange BitcoinExchange::operator=(const BitcoinExchange &src){
	this->setMap(src.getMap());
    return *this;
}

BitcoinExchange::~BitcoinExchange(){};

void BitcoinExchange::openData(){
	std::ifstream dataBase("data.csv");
	if (!dataBase.is_open()) {
		std::cerr << "Error: 'data.csv' file." << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string line;
	getline(dataBase, line);
	while (getline(dataBase, line)) {
		std::string date = line.substr(0, 10);
		std::string strValue = line.substr(11);
		float value = atof(strValue.c_str());
		this->_map.insert(std::make_pair(date, value));
	}
	dataBase.close();	
}


void BitcoinExchange::validateValue(const std::string &value, const std::string &date) {
	float val = atof(value.c_str());
	if (val < 0)
		std::cerr << "Error: not a positive number." << std::endl;
	else if (val > 1000)
		std::cerr << "Error: too large a number." << std::endl;
	else  if (date != "date | val") {
		float rate = (--this->_map.upper_bound(date))->second;
		std::cout << date << " => " << val << " = " << val * rate << std::endl;
	}
}

static bool isLeapYear(const int &year) {
	if (year % 4 != 0)
        return false;
    else if (year % 100 != 0)
        return true;
    else if (year % 400 != 0)
        return false;
    else
        return true;
}

static bool isValidDateFormat(const std::string &date) {
	if (date.size() != 10)
		return false;
	for (int i = 0; i < 10; i++) {
		if (i == 4 || i == 7) {
			if (date[i] != '-')
				return false;
		}
		else {
			if (!isdigit(date[i]))
				return false;
		}
	}
	return true;
}

static bool validDate(const std::string &date) {
	if (date != "date | val" && !isValidDateFormat(date)) {
		std::cerr << "Error: invalid date format => " << date << std::endl;
		return false;
	}
	if (date != "date | val" ) {
		std::string yearStr = date.substr(0, 4);
		int year = atoi(yearStr.c_str());
		if (year < 2009) {
			std::cerr << "Error: invalid year => " << year << std::endl;
			return false;
		}
		std::string monthStr = date.substr(5, 2);
		int month = atoi(monthStr.c_str());
		if (month < 1 || month > 12) {
			std::cerr << "Error invalid month => " << month << std::endl;
			return false;
		}
		std::string dayStr = date.substr(8,2);
		int day = atoi(dayStr.c_str());
		if (day >= 1 && day <= 31) {
			if (year == 2009 && month == 1 && day < 3) {
				std::cerr << "Error: bitcoin doesn't exist on date => " << date << std::endl; 
				return false;
			}
			if (day > 28 && month == 2) {
				if (day == 29 && !isLeapYear(year)) {
					std::cerr << "Error: " << year << " is not leap year." << std::endl;
					return false;
				}
				else if (day > 29) {
					std::cerr << "Error: february cannot have more than 29 days." << std::endl;
					return false;
				}
			}
			if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)) {
				std::cerr << "Error: month => " << month << " doesn't have 31 days." << std::endl;
				return false;
			}
		}
		else {
			std::cerr << "Error: invalid day => " << day << std::endl; 
			return false;
		}
	}
	return true;
}

void BitcoinExchange::validateInputFile(const std::string &fileName) {
	std::ifstream inputFile(fileName.c_str());

	if (!inputFile.is_open()) {
		std::cerr << "Error: file " << fileName << " doesn't exist." << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string line;
	while (getline(inputFile, line)) {
		if (line.substr(10, 3) != " | " && line != "date | value")
			std::cerr << "Error: bad input => " << line << std::endl;
		else {
			if (validDate(line.substr(0, 10)))
				validateValue(line.substr(12), line.substr(0, 10));
		}
	}
	inputFile.close();
}

std::map<std::string, float> BitcoinExchange::getMap() const{
    return (this->_map);
}

void BitcoinExchange::setMap(const std::map<std::string, float> &map){
    this->_map = map;
}

void BitcoinExchange::exchange(const std::string &fileName) {
	openData();
	validateInputFile(fileName);
}


