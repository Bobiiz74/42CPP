/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:56:16 by robin             #+#    #+#             */
/*   Updated: 2023/09/14 13:32:07 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harlito;

    if(ac != 2)
    {
        std::cout << "un seul argument est nécessaire (DEBUG, INFO, WARNING, ERROR)" << std::endl;
        return (1);
    }
    harlito.complain(av[1]);

    
    return (0);
}