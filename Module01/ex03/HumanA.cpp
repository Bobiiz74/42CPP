/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:29:50 by robin             #+#    #+#             */
/*   Updated: 2023/09/10 15:31:46 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string init, Weapon &initWeapon) : _name(init), _weapon(initWeapon)  {
    return;
}

HumanA::~HumanA(void){
   return;
}

void    HumanA::attack(void)    {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    return ;
}