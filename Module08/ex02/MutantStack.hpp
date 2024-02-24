/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:04:10 by robin             #+#    #+#             */
/*   Updated: 2024/02/24 15:42:58 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <string>
#include <list>
#include <iostream>
#include <vector>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
        /* data */
    public:
            typedef typename std::stack<T>::container_type::iterator iterator;
            MutantStack(void) : std::stack<T>() {}
            ~MutantStack() {};
            MutantStack(const MutantStack& src) : std::stack<T>(src) {}
            MutantStack &operator=(const MutantStack &rhs){
            if(this != &rhs )
                std::stack<T>::operator=(rhs);
            return *this;
            }

            iterator begin() {return this->c.begin();}
            iterator end() {return this->c.end();}
};

#endif
