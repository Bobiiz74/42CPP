/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:24:33 by robin             #+#    #+#             */
/*   Updated: 2023/09/10 12:42:35 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str("HI THIS IS BRAIN");
    std::string *strPTR = &str;
    std::string strREF = str;

    std::cout << "L’adresse de la string en mémoire est " << strPTR << std::endl;
}
