/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:36:23 by robin             #+#    #+#             */
/*   Updated: 2024/01/24 14:34:18 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Form;

class ShrubberyCreationForm : public AForm {  
    
    private:
            ShrubberyCreationForm(void);
            const   std::string _target;

    public:
            ShrubberyCreationForm(const std::string target);
            ShrubberyCreationForm(const ShrubberyCreationForm& src);
            virtual ~ShrubberyCreationForm();
            ShrubberyCreationForm &operator=(const ShrubberyCreationForm& rhs);

            std::string getTarget(void) const;
            void execute(Bureaucrat const & executor) const;
            

};

#endif