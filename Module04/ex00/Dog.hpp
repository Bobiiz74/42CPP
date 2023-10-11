/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:53:48 by robin             #+#    #+#             */
/*   Updated: 2023/10/11 17:15:22 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: virtual public Animal
{
    private:
    
    public:
            Dog(void);
            Dog(const Dog& src);
            virtual ~Dog();
            Dog &operator=(const Dog& rhs);
            virtual void    makeSound(void) const;

};



#endif