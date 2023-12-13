/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:36:00 by robin             #+#    #+#             */
/*   Updated: 2023/12/13 14:16:17 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap  {
    
        private :
                ClapTrap(void);
                std::string     _name;
                unsigned int             _hitPoint;
                unsigned int             _energyPoint;
                unsigned int             _attackDmg;

        public :
                ClapTrap(std::string _name);
                ClapTrap(const ClapTrap& src);
                ~ClapTrap();
                ClapTrap &operator=(const ClapTrap& rhs);
                void attack(const std::string& target);
                void takeDamage(unsigned int amount);
                void beRepaired(unsigned int amount);
                std::string	get_name(void) const;
		int get_HP(void) const;
		int get_energy(void) const;


    
};

#endif