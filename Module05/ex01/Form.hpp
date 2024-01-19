/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:06:07 by robin             #+#    #+#             */
/*   Updated: 2024/01/19 15:25:28 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat;

class Form {
    
    private:
            Form(void);
            const   std::string _name;
            const int   _gradeToSign;
            const int   _gradeToExecute; 
            bool        _signed;

    public:
            Form(const std::string name, const int gts, const int gte);
            Form(const Form& src);
            ~Form();
            Form &operator=(const Form& rhs);
            
            int getGradeToSign(void) const;
            int getGradeToExecute(void) const;
            std::string getName(void) const;
            void    beSigned(Bureaucrat const& a);
            
            class GradeTooHighException: public std::exception
            {
                public:
                    const char *what() const throw(){
                        return ("Grade Too High !");
                    }
            };
            class GradeTooLowException: public std::exception
            {
                public:
                    const char *what() const throw(){
                        return ("Grade Too Low !");
                    }
            };
};

std::ostream &operator<<(std::ostream &ostr, const Form& rhs);

#endif