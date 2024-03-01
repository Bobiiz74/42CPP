/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <rgodtsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:54:42 by robin             #+#    #+#             */
/*   Updated: 2024/02/23 17:59:42 by rgodtsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
class Span {
        private :
                        unsigned int N;
                        std::vector<int> v;
	public :
                        Span(void) {};
                        Span(unsigned int size) : N(size) {};
                        ~Span(void) {};
                        void	addNumber(int nb);
                        int		shortestSpan(void);
                        int		longestSpan(void);
                        Span &operator=(const Span &rhs);
};


#endif
