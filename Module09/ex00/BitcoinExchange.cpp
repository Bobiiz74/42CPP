/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:25:00 by robin             #+#    #+#             */
/*   Updated: 2024/02/28 15:35:21 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin(const std::string &path)
{
        std::fstream file(path.c_str());
        if (!file.is_open()) {
            std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
            return;
        }
        else if(file.is_open()){
            std::string line;
            getline(file, line);
            while (std::getline(file, line)) {
                std::string valueStr;
                std::string dateStr;
                std::size_t separator;
                float value;
                separator = line.find(",");
                if (separator == std::string::npos){
                    std::cerr << "Format de ligne invalide ";
                    std::cerr << line << std::endl;
                    continue ;
                }
                dateStr = line.substr(0, separator);
                valueStr = line.substr(separator + 1);
                separator = valueStr.find(",");
                if (separator != std::string::npos){
                    std::cerr << "Format de ligne invalide ";
                    std::cerr << line << std::endl;
                    continue ;
                }
                std::stringstream(valueStr) >> value;
                data[dateStr] = value;
            }
            file.close();
        }
    }

bool Bitcoin::isValidDate(const std::string &date) {
        if (date.size() != 10)
            return false;

        if (date[4] != '-' || date[7] != '-')
            return false;

        int year = atoi(date.substr(0, 4).c_str());
        int month = atoi(date.substr(5, 2).c_str());
        int day = atoi(date.substr(8, 2).c_str());

        if (month < 1 || month > 12 || day < 1 || day > 31)
            return false;

        // Vérifier les années bissextiles
        if (month == 2) {
            if (year % 4 == 0) {
                if (day > 29)
                    return false;
            } else {
                if (day > 28)
                    return false;
            }
        }

        // Vérifier le nombre de jours pour les mois ayant 30 jours
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;

        return true;
    }

bool Bitcoin::isValidData(const std::string &data){
    if (data.length() < 14)
	{
		std::cerr << "Error: Not the right format => " << data << std::endl;
		return (false);
	}
	else if (!data.find_first_not_of("0123456789. |-"))
	{
		std::cerr << "Error: Invalid Character => " << data << std::endl;
		return (false);
	}
	else if (std::count(data.begin(), data.end(), ' ') != 2)
	{
		std::cerr << "Error: not the right space(s) number => " << data << std::endl;
		return (false);
	}
	else if (std::count(data.begin(), data.end(), '|') != 1 ||
		std::count(data.begin(), data.end(), '-') != 2)
	{
		std::cerr << "Error: not the right delimiters(s) number => " << data << std::endl;
		return (false);
	}
	return (true);
}

bool Bitcoin::isValidValue(const std::string &valueStr){
    float checkVal;
	if (valueStr.find('-') != std::string::npos) {
		std::cerr << "Error: Not a positive number => " << valueStr << std::endl;
		return (false);
	}
	else if (valueStr.find_first_of("| -") != std::string::npos) {
		std::cerr << "Error: Invalid Format " << valueStr << std::endl;
		return (false);
	}
	if (valueStr.size() > 4 && valueStr.find(".") >= 4) {
		std::cerr << "Error: too large number " << valueStr << std::endl;
		return (false);
	}
	std::stringstream(valueStr) >> checkVal;
	if (checkVal > static_cast<float>(1000)) {
		std::cerr << "Error: too large number " << valueStr << std::endl;
		return (false);
	}
	return (true);
}

void Bitcoin::checkInput(const std::string &input){
    std::fstream    file(input.c_str());
    float           value;
    std::string     dateStr;
    std::string     valueStr;
    std::string     line;
    
    if (!file.is_open())
	{
		std::cerr << "Error: Cannot open file\n";
		return ;
	}
	if (file.is_open())
	{
		getline(file, line);
		if (line != "date | value"){
			std::cerr << "Error: First line input not correct\n";
			return ;
		}
	}
	while(getline(file, line))
	{
		if (this->isValidData(line) == false)
			continue ;
		dateStr = line.substr(0, 10);
		valueStr = line.substr(13);
		if (this->isValidValue(valueStr) == false)
			continue ;
		if (this->isValidDate(dateStr) == false)
			continue ;
		std::stringstream(valueStr) >> value;
		this->printMoney(dateStr, value);
	}
	file.close();
	return ;
}

void Bitcoin::printMoney(const std::string &date, float value){
    //lower_bound retourne un iterateur pointant vers 1er elem de data 
    //sans depasser date.
    std::map<std::string, float>::iterator it = data.lower_bound(date);
	float finalValue;

	if (it != data.end()) {
		if (it->first != date)
			--it;
		finalValue = (it->second);
	}
	else if (!data.empty()) {
		finalValue = ((--it)->second);
	}
	else {
		std::cerr << "Error: No changes rate found for => " << date << std::endl;
		return ;
	}
	std::cout << date << " => " << value << " = " << value * finalValue << std::endl;
}
