/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:16:26 by robin             #+#    #+#             */
/*   Updated: 2023/09/07 16:36:23 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string name) : _name(name) {
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
