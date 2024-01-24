/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:02:34 by robin             #+#    #+#             */
/*   Updated: 2024/01/24 17:04:54 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Intern {  
    
    private:
                std::string _formName[3];

    public:
                Intern(void);
                Intern(const Intern& src);
                ~Intern();
                Intern &operator=(const Intern& rhs);

                AForm* makeForm(std::string const form, std::string const target);
                class NoFormFound: public std::exception
                {
                        public:
                                virtual const char *what() const throw(){
                                        return ("No Form Found!");
                                }
                };
            

};

#endif