/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:57:19 by robin             #+#    #+#             */
/*   Updated: 2024/01/16 11:01:42 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>

class AAnimal
{
    private:
    
    protected:
                AAnimal(void);
                std::string     _type;
    
    public:
            AAnimal(std::string type);
            AAnimal(const AAnimal& src);
            virtual ~AAnimal();
            AAnimal &operator=(const AAnimal& rhs);
            std::string getType() const;
            virtual void    makeSound(void) const = 0;

};



#endif