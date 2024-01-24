/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:15:11 by robin             #+#    #+#             */
/*   Updated: 2024/01/24 15:18:05 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Form;

class PresidentialPardonForm : public AForm {  
    
    private:
            PresidentialPardonForm(void);
            const   std::string _target;

    public:
            PresidentialPardonForm(const std::string target);
            PresidentialPardonForm(const PresidentialPardonForm& src);
            virtual ~PresidentialPardonForm();
            PresidentialPardonForm &operator=(const PresidentialPardonForm& rhs);

            std::string getTarget(void) const;
            void execute(Bureaucrat const & executor) const;
            

};

#endif