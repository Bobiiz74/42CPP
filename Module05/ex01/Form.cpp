/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:12:11 by robin             #+#    #+#             */
/*   Updated: 2024/01/19 12:50:10 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form (void){
    std::cout << "Constructor Form called" << std::endl;
    this->_gradeToExecute = 1;
    this->_gradeToSign = 1;
    this->_signed = false;
    return;
}

Form::~Form (){
    std::cout << "Destructor Form called" << std::endl;
    return; 
}

Form::Form (const std::string name, const int gts, const int gte)   : _name(name), _gradeToSign(gts), _gradeToExecute(gte) {
    std::cout << "Constructor Form called" << std::endl;
    if(gts || gte < 1)
        throw Form::GradeTooHighException();
    if(gts || gte > 150)
        throw Form::GradeTooLowException();
    else{
        this->_gradeToSign = gts;
        this->_gradeToExecute = gte;
        this->_signed = false;
    }
}
Form & Form::operator=(const Form& rhs){
    (void)rhs;
	std::cout << "Can't copy a Form per assignement" << std::endl;
	return *this;
}

std::string Form::getName(void) const {
    return(this->_name);
}

int Form::getGradeToSign(void) const{
    return(this->_gradeToSign);
}

int Form::getGradeToExecute(void) const{
    return(this->_gradeToExecute);
}

std::ostream &operator<<(std::ostream &ostr, const Form &b)
{
	ostr << b.getName() << ", Form grade " << b.getGrade();
	return (ostr);
}