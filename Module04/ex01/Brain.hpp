/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:42:01 by rgodtsch          #+#    #+#             */
/*   Updated: 2023/12/15 13:42:04 by rgodtsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
    
    protected:
                std::string     ideas[100];
    
    public:
            Brain(void);
            Brain(const Brain& src);
            virtual ~Brain();
            Brain &operator=(const Brain& rhs);


};



#endif