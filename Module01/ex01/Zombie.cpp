/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:25:17 by robin             #+#    #+#             */
/*   Updated: 2023/09/10 12:06:05 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(void) {
    return;
}

void    Zombie::announce(void){
    std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

Zombie::~Zombie(void){
    std::cout << this->_name << " is dead" << std::endl;
    return;
}

void    Zombie::setName(std::string name){
    this->_name = name;
    return ;
}