/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <rgodtsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:57:39 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/02/23 17:57:47 by rgodtsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void	Span::addNumber(int nb){
    if(v.size() >= N)
        throw std::range_error("No space left in the container");
    else
        v.push_back(nb);
}

template <typename T>
int		Span::shortestSpan(void){
    typename T::const_iterator it = this->v.begin();
    typename T::const_iterator it2 = this->v.begin();
    int num1 = v[it];
    int num2 = v[it];
    unsigned int diff = num1 - num2;
    for(; it && it2 < this->v.end(); it++ && it2++){
        if(static_cast<unsigned int>(num1) - static_cast<unsigned int>(num2) <= diff)
            diff = static_cast<unsigned int>(num1) - static_cast<unsigned int>(num2);
        typename T::const_iterator it2 = this->v.begin();
    }
    return(diff);
}

template <typename T>
int		Span::longestSpan(void){
    
    typename T::const_iterator it = this->v.begin();
    int shortest = v[it];
    int biggest = v[it];
    for(; it < this->v.end(); it++){
        if (v[it] >= shortest)
            shortest = v[it];
        else if (v[it] <= biggest)
            biggest = v[it];
    }
    return (biggest-shortest);
}

Span &Span::operator=(const Span & rhs)
{
	if (this != &rhs)
	{
		this->N = rhs.N;
		this->v = rhs.v;
	}
	return *this;
}
