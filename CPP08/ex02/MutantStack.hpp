#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <iterator>

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