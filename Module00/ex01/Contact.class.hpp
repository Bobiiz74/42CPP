/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:30:14 by robin             #+#    #+#             */
/*   Updated: 2023/08/16 16:34:29 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define    CONTACT_CLASS_HPP

#include <iostream>

class Contact   {
        private:
                std::string _First_name;
                std::string _Last_name;
                std::string _Nick_name;
                std::string _Phone_number;
                std::string _Darkest_secret;
                void _set_data(std::string s_fname, std::string s_lname,
                        std::string s_nname, std::string s_phone, std::string s_dark);
        public:
                Contact(void);
                ~Contact(void);
                void copy(const Contact old_contact);
                void get_param(void);
                void print_contact (void) const;
                void print_line_contact (int index) const;
    };

#endif