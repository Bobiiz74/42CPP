/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:56:12 by robin             #+#    #+#             */
/*   Updated: 2023/09/14 12:32:34 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)    {
    return;
}

Harl::~Harl(void)   {
    return;
}

void    Harl::debug(void){
    std::cout << "DEBUG - I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void    Harl::info(void){
    std::cout << "INFO - I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning(void){
    std::cout << "WARNING - I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void){
    std::cout << "ERROR - This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level){
    std::string functionLevel[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    void (Harl::*functionPtr[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    
    for (int i = 0; i < 4; i++){
        if(level == functionLevel[i])
        {
            (this->*(functionPtr[i]))();
            break;
        }
    }
    return;
}
