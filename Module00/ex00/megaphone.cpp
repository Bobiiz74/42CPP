/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:07:12 by robin             #+#    #+#             */
/*   Updated: 2023/08/11 15:33:25 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

void    ft_up(char *str)
{
    int i = 0;
    while(str[i])
    {
        std::cout << (char)toupper(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    if(ac > 1)
    {
        while(av[i])
        {
            ft_up(av[i]);
            i++;
        }
        std::cout << "\n";
    }
    return (0);
}
