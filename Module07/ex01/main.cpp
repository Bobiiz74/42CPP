/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <rgodtsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:18:47 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/02/20 14:38:21 by rgodtsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    plusOneFunc(char str){
    str += 1;
}

int main( void ) {
std::string str = "Wesh 42";
iter(&str, str.length(), plusOneFunc);
return(0);
}
