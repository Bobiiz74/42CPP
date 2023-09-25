/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:12:11 by robin             #+#    #+#             */
/*   Updated: 2023/09/18 15:34:55 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)    {
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)  {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDmg = 20;
    return;
}

ScavTrap::~ScavTrap(void)   {
    std::cout << "ScavTrap destructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src)    {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
    return;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & rhs) {
    std::cout << "ScavTrap assignement constructor called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoint = rhs._hitPoint;
    this->_energyPoint = rhs._energyPoint;
    this->_attackDmg = rhs._attackDmg;
    return (*this);
}

void ScavTrap::attack(const std::string& target)    {
    if(this->_hitPoint > 0 && this->_energyPoint > 0)
    {
        std::cout << this->_name;
        std::cout << " attacks " << target;
        std::cout << " dealing " << this->_attackDmg;
        std::cout << " points of damage." << std::endl;
        this->_energyPoint--;
    }
    else
        std::cout << this->_name << " can't attack" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)  {
    if(this->_hitPoint > 0 && this->_energyPoint > 0 && get_HP() < 100)
    {
        if(amount > (unsigned int)(100 - get_HP()))
        {
            std::cout << this->_name;
		    std::cout << " repairs " << (100 - _hitPoint) << " hp." << std::endl;
            this->_hitPoint = (100 - get_HP());
        }
        else
        {
            std::cout << this->_name;
		    std::cout << " repairs " << amount << " hp." << std::endl;
            this->_hitPoint += amount;
        }
    }
    else
        std::cout << this->_name << " can't be repared" << std::endl; 
}

void ScavTrap::guardGate()  {
    if(this->_hitPoint <= 0)
        std::cout << _name << " cannot enter in Guard Gate mode because he is dead" << std::endl;
    else if(this->_energyPoint <= 1)
        std::cout << _name << " cannot enter in Guard Gate mode because he needs energy" << std::endl;
    else
    {
        std::cout << _name << " enter in Guard Gate mode" << std::endl;
        this->_energyPoint--;
    }
}