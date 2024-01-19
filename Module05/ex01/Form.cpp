/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:12:11 by robin             #+#    #+#             */
/*   Updated: 2024/01/19 15:25:11 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form (void) : _name("nikemouk"), _gradeToSign(1), _gradeToExecute(1){
    std::cout << "Constructor Form called" << std::endl;
    return;
}

Form::~Form (){
    std::cout << "Destructor Form called" << std::endl;
    return; 
}

Form::Form(const Form& src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute), _signed(src._signed){

}

Form::Form (const std::string name, const int gts, const int gte)   : _name(name), _gradeToSign(gts), _gradeToExecute(gte) {
    std::cout << "Constructor Form called" << std::endl;
    if(gts < 1 || gte < 1)
        throw Form::GradeTooHighException();
    if(gts > 150 || gte > 150)
        throw Form::GradeTooLowException();
    else
        this->_signed = false;
}
Form & Form::operator=(const Form& rhs){
    (void)rhs;
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

void    Form::beSigned(Bureaucrat const& a) {
    if(a.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
}

std::ostream &operator<<(std::ostream &ostr, const Form &b)
{
	ostr << b.getName() << ", Form grade to sign " << b.getGradeToSign() << " and grade to exec " << b.getGradeToExecute();
	return (ostr);
}