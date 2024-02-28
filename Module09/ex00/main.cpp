/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:19:18 by robin             #+#    #+#             */
/*   Updated: 2024/02/28 15:23:56 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc == 2)
    {
        Bitcoin bitcoin("data.csv");
        bitcoin.checkInput(argv[1]);
    }
    else
        std::cout << "File recquired\n";
    return 0;
}
