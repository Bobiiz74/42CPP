/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:38:54 by robin             #+#    #+#             */
/*   Updated: 2024/01/24 14:39:43 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Form;

class RobotomyRequestForm : public AForm {  
    
    private:
            RobotomyRequestForm(void);
            const   std::string _target;

    public:
            RobotomyRequestForm(const std::string target);
            RobotomyRequestForm(const RobotomyRequestForm& src);
            virtual ~RobotomyRequestForm();
            RobotomyRequestForm &operator=(const RobotomyRequestForm& rhs);

            std::string getTarget(void) const;
            void execute(Bureaucrat const & executor) const;
            

};

#endif