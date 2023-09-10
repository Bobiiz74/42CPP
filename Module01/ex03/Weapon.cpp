/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:29:19 by robin             #+#    #+#             */
/*   Updated: 2023/09/10 15:15:21 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const & init) : _type(init)    {
    return;
}

Weapon::~Weapon(void)    {
    return;
}

std::string const & Weapon::getType(void) const {
    return this->_type;
}

void Weapon::setType(std::string _type){
    this->_type = _type;
    return;
}