/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:49:40 by robin             #+#    #+#             */
/*   Updated: 2023/12/17 15:28:40 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
    private:
    
    public:
            Cat(void);
            Cat(const Cat& src);
            ~Cat();
            Cat &operator=(const Cat& rhs);
            virtual void    makeSound(void) const;
            std::string getType() const;

};



#endif