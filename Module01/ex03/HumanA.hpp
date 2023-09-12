/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:29:37 by robin             #+#    #+#             */
/*   Updated: 2023/09/12 10:58:27 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA    {
    
            private :
                    std::string     _name;
                    Weapon  &_weapon;

            public :
                    HumanA(std::string _name, Weapon &_weapon);
                    ~HumanA(void);
                    void    attack(void);
            
};


#endif