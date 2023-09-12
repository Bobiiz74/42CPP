/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:29:09 by robin             #+#    #+#             */
/*   Updated: 2023/09/12 10:50:58 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
            private :
                    std::string     _type;

            public :
                    Weapon(std::string const &init);
                    ~Weapon(void);
                    std::string const & getType(void) const;
                    void    setType(std::string _type);
};

#endif