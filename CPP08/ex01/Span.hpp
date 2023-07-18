#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    private:
        std::vector<int> numbers;
        unsigned int nbr;
    public:
        Span();
        Span(unsigned int nbr);
        Span(const Span &toCopy);
        ~Span();

        Span &operator=(const Span &toCopy);

        void    addNumber(int nbr);
        int     shortestSpan();
        int     longestSpan();
        void    fillSpan(const std::vector<int>::iterator &start, const std::vector<int>::iterator &end);
};

#endif