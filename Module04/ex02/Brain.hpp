/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:42:01 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/01/16 10:32:31 by robin            ###   ########.fr       */
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
            std::string getIdeas(int i) const;


};



#endif