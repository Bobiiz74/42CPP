/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:44:17 by robin             #+#    #+#             */
/*   Updated: 2024/03/06 11:02:31 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    if(argc == 2){
        RPN stack;
        std::string input = argv[1];
        stack.doOp(input);
    }
    else
        std::cerr << "Error\n";
    return (0);
}
