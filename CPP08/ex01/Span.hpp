/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:20:00 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 14:02:26 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    private:
        std::vector<int> numbers;
        unsigned int storage;
    public:
        Span();
        Span(unsigned int nbr);
        Span(const Span &toCopy);
        ~Span();
        Span &operator=(const Span &toCopy);
        void    addNumber(int addNbr);
        int     shortestSpan();
        int     longestSpan();
        void    fillSpan(const std::vector<int>::iterator &start, const std::vector<int>::iterator &end);
};

#endif