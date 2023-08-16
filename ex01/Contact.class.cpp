/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:58:41 by robin             #+#    #+#             */
/*   Updated: 2023/08/16 15:30:13 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include "Contact.class.hpp"

Contact::Contact(void) :
_First_name(""), _Last_name(""), _Nick_name(""), _Phone_number(""), _Darkest_secret("") {
	return ;
}

Contact::~Contact( void ) {
	return ;
}

void Contact::_set_data(std::string s_name, std::string s_fname, std::string s_nick,
		std::string s_phone, std::string s_dark) {
	this->_First_name = s_name;
	this->_Last_name = s_fname;
	this->_Nick_name = s_nick;
	this->_Phone_number = s_phone;
	this->_Darkest_secret = s_dark;
	return ;
}

static void get_input(std::string &s_input, std::string s_param) {
	std::cout << "Type " << s_param << ": ";
	while (!s_input.compare(""))
	{
		std::getline(std::cin, s_input);
		if (std::cin.fail())
		{
			std::cout << std::endl;
			std::cout << "Something went wrong!" << std::endl;
			exit(1);
		}
	}
	return ;
}

void Contact::ask_param(void){

	std::string s_prenom("");
	get_input(s_prenom, "first name");
	std::string s_nom("");
	get_input(s_nom, "last name");
	std::string s_nick("");
	get_input(s_nick, "nickname");
	std::string s_phone("");
	get_input(s_phone, "phone number");
	std::string s_dark("");
	get_input(s_dark, "darkest secret");
	this->_set_data(s_prenom, s_nom, s_nick, s_phone, s_dark);
	return ;
}

void Contact::copy(const Contact old_contact) {
	this->_set_data(old_contact._First_name, old_contact._Last_name,
			old_contact._Nick_name, old_contact._Phone_number,
			old_contact._Darkest_secret);
	return ;
}

void Contact::print_contact(void) const {
	std::cout << "Prenom        : "<< this->_First_name << std::endl; 
	std::cout << "Nom           : "<< this->_Last_name << std::endl;
	std::cout << "Nickname      : "<< this->_Nick_name << std::endl;
	std::cout << "Phone number  : "<< this->_Phone_number << std::endl;
	std::cout << "darkest secret: "<< this->_Darkest_secret << std::endl;
	return ;
}

static void print_name_under_10(std::string s_name) {
	if (s_name.length() > 10)
	{
		std::cout << s_name.substr(0, 9);
		std::cout << ".|";
		return ;
	}
	std::cout << std::right << std::setw(10) << s_name;
	std::cout << "|";
	return ;
}

void Contact::print_line_contact(int index) const {
	std::cout << std::right << std::setw(10) << index + 1  << "|";
	print_name_under_10(this->_First_name);
	print_name_under_10(this->_Last_name);
	print_name_under_10(this->_Nick_name);
	std::cout << std::endl;
}
