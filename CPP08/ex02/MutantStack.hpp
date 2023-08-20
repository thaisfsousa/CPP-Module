/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:20:08 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 17:34:31 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <iterator>
#include <cstdlib>

template <typename T>
class MutantStack : public std::stack <T, std::deque <T> >
{
    public:
        MutantStack() {}
        MutantStack(const MutantStack &toCopy){
            *this = toCopy;
        };
        ~MutantStack() {};

        MutantStack &operator=(const MutantStack &toCopy){
            (void) toCopy;
            return *this;
        };

       typedef typename std::stack <T>::container_type::iterator iterator;

       iterator begin(){
            return this->c.begin();
       }

       iterator end(){
            return this->c.end();
       }
};

#endif