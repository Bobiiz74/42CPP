/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:19:34 by robin             #+#    #+#             */
/*   Updated: 2023/09/13 12:02:24 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string get_str(std::ifstream & file)   {
    std::string     newStr("");
    char    tmp = file.get();
    while(file.good())
    {
        newStr += tmp;
        tmp = file.get();
    }
    return (newStr);
}

std::string search_and_replace(std::string line, std::string &oldArg, std::string &newArg) {
    std::string     newStr("");
    int     start;
    for (int i = 0; i < (int)line.size(); i++)
	{
		start = line.find(oldArg, i);
		if (start != -1 && start == i)
		{
			newStr += newArg;
			i += std::string(oldArg).size() - 1;
		}
		else
			newStr += line[i];
	}
    return(newStr);
}

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "Need 1 file and 2 strings" << std::endl;
        return (1);
    }
        
    std::string     filename(av[1]);
    std::string     filecopy(filename);
    filecopy.append(".replace");

    std::ifstream inputFilename(filename);
    if(!inputFilename.good())
    {
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
    std::string line;
    line = get_str(inputFilename);

	inputFilename.close();

    std::string	oldArg(av[2]);
	std::string	newArg(av[3]);
	std::string	newStr;
	newStr = search_and_replace(line, oldArg, newArg);


    std::ofstream	outputFilename(filecopy);
	outputFilename << newStr;
	outputFilename.close();

    return (0);
}
