/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:57:39 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/02/24 12:14:02 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename T>
int easyfind(T& type, int toFound){
    typename T::const_iterator it = std::find(type.begin(), type.end(), toFound);
    if(it == type.end())
        return(1);
    else
        return (0);
}

void	Span::addNumber(int nb){
    if(v.size() >= N)
        throw std::range_error("No space left in the container");
    else{
        if(easyfind(v, nb) == 0)
            throw std::invalid_argument("Do not add twice the same number");
        v.push_back(nb);
    }
}

void	Span::addNumber(std::vector<int> &t_vec)
{
	if (t_vec.size() > (this->N - v.size()))
		throw std::out_of_range("Too much elements");
	std::vector<int>::const_iterator it = t_vec.begin();
	std::vector<int>::const_iterator it2 = t_vec.end();
	v.insert(v.end(), it, it2);
}

int		Span::shortestSpan(void)
{
	if (this->v.size() == 1)
		throw std::length_error("Vector size is too small");
	else if (this->v.empty() == true)
		throw std::length_error("Vector is empty");
	int min = this->longestSpan();
	int shortest;
	std::vector<int> tmp = v;
	std::sort(tmp.begin(), tmp.end());
	for (std::vector<int>::const_iterator it = tmp.begin(); it != tmp.end(); ++it)
	{
		for (std::vector<int>::const_iterator it2 = it; it2 != tmp.end(); ++it2)
		{
			if (*it == *it2)
				continue ;
			shortest = *it2 - *it;
			if (shortest < min)
				min = shortest;
		}
	}
	return min;
}

int		Span::longestSpan(void)
{
	int max;
	int min;
	if (this->v.size() == 1)
		throw std::length_error("vector size is too small");
	else if (this->v.empty() == true)
		throw std::length_error("vector is empty");
	else
	{
		max = *std::max_element(v.begin(), v.end());
		min = *std::min_element(v.begin(), v.end());
	}
	return (max - min);
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

