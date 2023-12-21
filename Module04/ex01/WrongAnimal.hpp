/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:15:24 by robin             #+#    #+#             */
/*   Updated: 2023/10/11 17:39:15 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    private:
    
    protected:
                std::string     _type;
    
    public:
            WrongAnimal(void);
            WrongAnimal(std::string type);
            WrongAnimal(const WrongAnimal& src);
            virtual ~WrongAnimal();
            WrongAnimal &operator=(const WrongAnimal& rhs);
            std::string getType() const;
            void    makeSound(void) const;

};



#endif