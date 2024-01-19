/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:06:07 by robin             #+#    #+#             */
/*   Updated: 2024/01/19 12:47:24 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Form {
    
    private:
            const   std::string _name;
            const int _gradeToSign;
            const int _gradeToExecute; 
            bool    _signed;

    public:
            Form(void);
            Form(std::string name, const int gts, const int gte);
            Form(const Form& src);
            ~Form();
            Form &operator=(const Form& rhs);
            
            int getGradeToSign(void) const;
            int getGradeToExecute(void) const;
            std::string getName(void) const;
            
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