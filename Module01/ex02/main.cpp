/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:24:33 by robin             #+#    #+#             */
/*   Updated: 2023/09/10 14:24:38 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string strREF = str;

    std::cout << "L’adresse de la string en mémoire est " << &str << std::endl;
    std::cout << "L’adresse stockée dans stringPTR est " << strPTR << std::endl;
    std::cout << "L’adresse stockée dans stringREF est " << &strREF << std::endl << std::endl;
    
    std::cout << "La valeur de la string est " << str << std::endl;
    std::cout << "La valeur pointée par stringPTR est " << *strPTR << std::endl;
    std::cout << "La valeur pointée par stringREF est " << strREF << std::endl;

    return (0);
}
