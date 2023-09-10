/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:25:28 by robin             #+#    #+#             */
/*   Updated: 2023/09/10 12:01:17 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[N];
    std::stringstream   ss;
    for(int i=0; i<=N; i++){
        ss.str("");
        ss << name << i+1;
        horde[i].setName(ss.str());
    }
    return (horde);
}