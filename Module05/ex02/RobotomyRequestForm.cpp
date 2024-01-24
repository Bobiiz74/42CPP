/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:38:52 by robin             #+#    #+#             */
/*   Updated: 2024/01/24 15:12:28 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm (void){
    std::cout << "Constructor RobotomyRequestForm called" << std::endl;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm (){
    std::cout << "Destructor RobotomyRequestForm called" << std::endl;
    return; 
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm& src) {
    (void)src;
}

RobotomyRequestForm::RobotomyRequestForm (const std::string target)   : AForm("RobotomyRequestForm", 72, 45), _target(target){
    std::cout << "Constructor RobotomyRequestForm called" << std::endl;

        
}
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs){
    AForm::operator=(rhs);
	return *this;
}

std::string RobotomyRequestForm::getTarget(void) const{
    return(this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if(!this->getSigned())
        throw AForm::FormNotSignedException();
    if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::cout << "*Bruit de perceuse ...*" << std::endl;
    srand (time(NULL));
    int success = std::rand() % 2;
    if (success == 1)
    {
        std::cout << _target << " was robotomised." << std::endl;
        return;
    }
    std::cout << _target << " was NOT robotomised." << std::endl;
}
