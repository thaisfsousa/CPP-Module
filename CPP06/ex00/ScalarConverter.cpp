/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:31:31 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/20 19:42:34 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &toCopy){
    *this = toCopy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &toCopy){
    (void) toCopy;
    return *this;
}

ScalarConverter::~ScalarConverter(){}

static bool isPseudo(const std::string &toConvert){
        std::string literals[6] = {"-inf", "+inf", "nan", "-ninff", "+inff", "nann"};
        for (int i = 0; i < 6; i++){
            if (toConvert == literals[i])
                return true;
        }
        return false;
}

void    ScalarConverter::convert(const std::string &toConvert)
{
    std::string typeChar = "";
    int         typeInt = 0;
    float       typeFloat = 0.0f;
    double      typeDouble = 0.0;

    if (toConvert.length() == 1 && isprint(toConvert[0]) && !isdigit(toConvert[0])){
        typeChar = toConvert[0];
        std::cout << "char: " << typeChar << std::endl;
        std::cout << "int: " << static_cast<int>(typeChar[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(typeChar[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(typeChar[0])  << ".0" << std::endl;
        return;
    }

    typeInt = atoi(toConvert.c_str());

    if (toConvert[toConvert.length() - 1] == 'f') {
        typeFloat = atof(toConvert.c_str());
        typeDouble = static_cast<double>(typeFloat);
    }
    else{
        typeDouble = atof(toConvert.c_str());
        typeFloat = static_cast<float>(typeDouble);
    }

    if (isPseudo(toConvert))
        typeChar = "impossible";

    if (typeChar.empty() && !isprint(typeInt)){
        typeChar = "Non displayable";
    }
    
    if (typeChar.empty() && isprint(typeInt)){
        typeChar = "'";
        typeChar += static_cast<char>(typeInt);
        typeChar += "'";
    }
    std::cout << "char: " << typeChar << std::endl;
    
    if (typeChar == "impossible")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << typeInt << std::endl;
        
    if (typeChar == "impossible" && typeFloat == 0) {
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
    if (typeChar != "impossible" && typeFloat - static_cast<int>(typeFloat) == 0){
        std::cout << "float: " << typeFloat << ".0f" << std::endl;
        std::cout << "double: " << typeDouble << ".0" << std::endl;
        return;
    }

    std::cout << "float: " << typeFloat << "f" << std::endl;
    std::cout << "double: " << typeDouble << std::endl;
}