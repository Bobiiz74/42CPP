/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:25:02 by robin             #+#    #+#             */
/*   Updated: 2023/09/10 12:07:15 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *horde = zombieHorde(N, "bob");
    for(int i = 0; i<N; i++){
        horde[i].announce();
    }
    delete [] horde;
    return (0);
}