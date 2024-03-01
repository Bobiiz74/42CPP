/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <rgodtsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:54:42 by robin             #+#    #+#             */
/*   Updated: 2024/03/01 11:19:57 by rgodtsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>


template <typename T>
class Span {
        private :
                        unsigned int N;
                        std::vector<int> v;
	public :
                        Span(void) {};
                        Span(unsigned int size) : N(size) {};
                        ~Span(void) {};
                        Span(const Span& src) : N(src.N), v(src.v) {};
                        void	addNumber(int nb);
                        void	addNumber(std::vector<int> &t_vec);
                        int		longestSpan(void);
                        int		shortestSpan(void);
                        Span &operator=(const Span &rhs);
};


#endif
