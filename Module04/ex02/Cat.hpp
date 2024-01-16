/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:49:40 by robin             #+#    #+#             */
/*   Updated: 2024/01/16 11:09:05 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
    private:    
            Brain*  brain;
    
    public:
            Cat(void);
            Cat(const Cat& src);
            virtual ~Cat();
            Cat &operator=(const Cat& rhs);
            virtual void    makeSound(void) const;
            std::string getType() const;

};



#endif