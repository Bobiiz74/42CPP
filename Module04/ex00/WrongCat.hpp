/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:49:40 by robin             #+#    #+#             */
/*   Updated: 2023/10/11 17:39:46 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    private:
    
    public:
            WrongCat(void);
            WrongCat(const WrongCat& src);
            ~WrongCat();
            WrongCat &operator=(const WrongCat& rhs);
            void    makeSound(void) const;
            std::string getType() const;

};



#endif