/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <rgodtsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:18:25 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/02/20 14:36:19 by rgodtsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T >
void    iter(std::string array, int length, void f(char &))
{
    int i = 0;
    while(i <= length)
    {
        f(array[i]);
        i++;
    }
}
