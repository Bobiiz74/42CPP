/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:15:24 by robin             #+#    #+#             */
/*   Updated: 2023/10/11 17:12:22 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    private:
    
    protected:
                std::string     _type;
    
    public:
            Animal(void);
            Animal(std::string type);
            Animal(const Animal& src);
            virtual ~Animal();
            Animal &operator=(const Animal& rhs);
            std::string getType() const;
            virtual void    makeSound(void) const;

};



#endif