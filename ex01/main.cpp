/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:19:52 by robin             #+#    #+#             */
/*   Updated: 2023/08/16 15:39:51 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int main()
{
    PhoneBook   phonebook;
    std::string cmd_input("");
    while(cmd_input.compare("EXIT"))
    {
        std::cout <<"PhoneBook : ";
        std::getline(std::cin, cmd_input);
        if (!cmd_input.compare("ADD"))
            phonebook.add_contact();
        if(!cmd_input.compare("SEARCH"))
            phonebook.search_contact();
    }
    std::cout << "CYA " << std::endl;
    return (0);
}
