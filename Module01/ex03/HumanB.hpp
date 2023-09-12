/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:30:00 by robin             #+#    #+#             */
/*   Updated: 2023/09/12 11:11:52 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB    {
    
            private :
                    std::string     _name;
                    Weapon  *_weapon;

            public :
                    HumanB(std::string _name);
                    ~HumanB(void);
                    void    attack(void);
                    void    setWeapon(Weapon &weapon);
            
};

#endif