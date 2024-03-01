/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <rgodtsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:54:02 by robin             #+#    #+#             */
/*   Updated: 2024/03/01 11:18:52 by rgodtsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define NB_ELEM 5

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


{
    try {
    Span spanInstance(NB_ELEM); 

    std::vector<int> numbersToAdd;
    srand(time(nullptr));
    for (int i = 0; i < NB_ELEM; ++i) {
        numbersToAdd.push_back(rand() % 20000 + 1);
    }
        spanInstance.addNumber(numbersToAdd);
        for (size_t i = 0; i < numbersToAdd.size(); ++i) {
        std::cout << i+1 << " : " << numbersToAdd[i] << std::endl;
    }
        std::cout << spanInstance.shortestSpan() << std::endl;
        std::cout << spanInstance.longestSpan() << std::endl;
    } 
    catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }
}
    return 0;
}
