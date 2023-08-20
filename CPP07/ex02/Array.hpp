/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:21:46 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 13:19:06 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>

template<class T>
class Array {
    private:
        T *_array;
        unsigned int _len;
    public:
        Array(){
            this->_array = new T[0];
            this->_len = 0;
        };
        Array(unsigned int n){
            this->_array = new T[n];
            this->_len = n;
        };
        Array(const Array &src){
            this->_array = new T[src.size()];
            this->_len = src.size();
            for (unsigned int i = 0; i < src.size(); i++)
                this->_array[i] = src._array[i];
        };
        Array &operator=(const Array &src){
            this->_array = new T[src.size()];
            this->_len = src.size();
            for (unsigned int i = 0; i < src.size(); i++)
                this->_array[i] = src._array[i];
            return *this;
        };
        ~Array(){
            delete [] this->_array;
        };
        T &operator[](unsigned int index){
            if (index >= this->size())
                throw std::out_of_range("Index is out of bounds");
            return (this->_array[index]);
        };
        unsigned int size() const{
            return (this->_len);
        };
};

#endif