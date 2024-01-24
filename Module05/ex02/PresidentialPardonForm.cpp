/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:17:10 by robin             #+#    #+#             */
/*   Updated: 2024/01/24 15:21:20 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <stdlib.h>

PresidentialPardonForm::PresidentialPardonForm (void){
    std::cout << "Constructor PresidentialPardonForm called" << std::endl;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm (){
    std::cout << "Destructor PresidentialPardonForm called" << std::endl;
    return; 
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm& src) {
    (void)src;
}

PresidentialPardonForm::PresidentialPardonForm (const std::string target)   : AForm("PresidentialPardonForm", 25, 5), _target(target){
    std::cout << "Constructor PresidentialPardonForm called" << std::endl;

        
}
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs){
    AForm::operator=(rhs);
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const{
    return(this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if(!this->getSigned())
        throw AForm::FormNotSignedException();
    if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
