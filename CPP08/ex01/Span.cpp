/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:19:57 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 14:03:10 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
    this->storage = 0;
}

Span::Span(const Span &toCopy){
    *this = toCopy;
}

Span::Span(unsigned int nbr){
    this->storage = nbr;
}

Span &Span::operator=(const Span &toCopy){
    this->storage = toCopy.storage;
    this->numbers = toCopy.numbers;
    return *this;
}

Span::~Span(){}


void    Span::addNumber(int addNbr){
    if (this->numbers.size() >= this->storage)
        throw std::runtime_error("Exception: Already filled.");
    this->numbers.push_back(addNbr);
}


int    Span::shortestSpan(){
    if (this->storage <= 1 || this->numbers.size() <= 1)
        throw std::runtime_error("Exception: not enough numbers to compare.");
    int shortest = std::numeric_limits<int>::max();
    for (unsigned int i = 0; i < this->numbers.size(); i++){
        for (unsigned int j = 0; j < this->numbers.size(); j++){
            if (j == i)
                j++;
            if (j == this->numbers.size())
                break;
            if (this->numbers[i] >= this->numbers[j] && this->numbers[i] - this->numbers[j] < shortest)
                shortest = this->numbers[i] - this->numbers[j];
            else if (this->numbers[j] >= this->numbers[i] && this->numbers[j] - this->numbers[i] < shortest)
                shortest = this->numbers[j] - this->numbers[i];
        }
    }
    return shortest;
}


int    Span::longestSpan(){
    if (this->storage <= 1 || this->numbers.size() <= 1)
        throw std::runtime_error("Exception: not enough numbers to compare.");
    std::vector<int> buffer(this->numbers);
    sort(buffer.begin(), buffer.end());
    return (buffer[buffer.size() - 1] - buffer[0]);
}


void    Span::fillSpan(const std::vector<int>::iterator &start, const std::vector<int>::iterator &end){
    std::vector<int>::iterator begin = start;
    while(begin != end)
        begin++;
    unsigned int len = this->numbers.size() + std::distance(start, end);
    if (len > this->storage)
        throw std::runtime_error("Exception: Already filled.");
    this->numbers.insert(this->numbers.end(), start, end);
}