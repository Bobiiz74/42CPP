/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:25:02 by robin             #+#    #+#             */
/*   Updated: 2024/02/28 15:55:56 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>

class Bitcoin {
        private:
                std::map<std::string, float> data;
                //stock les elements avec des clés(+ clés dupliquées autorisées), 
                //clés triés dans l'odre automatiquement 
                // pour une petite quantité de données std::map offre de bonnes performances sans consommer trop de memoire 
                
        public:
                Bitcoin() {};
                Bitcoin(const std::string &path);
                ~Bitcoin() {};
                bool isValidDate(const std::string &date);
                bool isValidData(const std::string &data);
                bool isValidValue(const std::string &valueStr);
                void checkInput(const std::string &input);
                void printMoney(const std::string &date, float value);
                
};
        


#endif
