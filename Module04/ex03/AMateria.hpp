/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:19:20 by robin             #+#    #+#             */
/*   Updated: 2024/01/16 12:30:30 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected:
    
    public:
            AMateria (void);
            ~AMateria();
            AMateria(std::string const & type);
            AMateria &operator=(const AMateria& rhs);
            std::string const & getType() const; //Returns the materia type
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);

}~



#endif