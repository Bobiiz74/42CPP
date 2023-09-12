/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:30:08 by robin             #+#    #+#             */
/*   Updated: 2023/09/12 11:12:39 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string init)  :   _name(init), _weapon(nullptr)   {
    return;
}

HumanB::~HumanB(void)   {
    return;
}

void    HumanB::attack(void)    {
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon &weapon)   {
    this->_weapon = &weapon;
    return;
}