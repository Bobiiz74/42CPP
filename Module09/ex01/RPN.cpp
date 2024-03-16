/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:54:50 by robin             #+#    #+#             */
/*   Updated: 2024/03/06 11:33:58 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::stack<double> number){
    numbers = number;
}
        
RPN::RPN(const RPN & src){
    *this = src;
}
        
RPN &RPN::operator=(const RPN & rhs){
    this->numbers = rhs.numbers;
    return(*this);
}

void RPN::doOp(std::string &input){
    for (size_t i = 0; i < input.size(); i++){
        char c = input[i];
        if(std::isspace(c))
            continue ;
        else if(std::isdigit(c)){
            double number = c - '0';
            numbers.push(number);
        }
        else if(c == '+' && numbers.size() >= 2){
            double a = numbers.top();
            numbers.pop();
            double b = numbers.top();
            numbers.pop();
            numbers.push(b + a);
        }
        else if(c == '-' && numbers.size() >= 2){
            double a = numbers.top();
            numbers.pop();
            double b = numbers.top();
            numbers.pop();
            numbers.push(b - a);
        }
        else if(c == '*' && numbers.size() >= 2){
            double a = numbers.top();
            numbers.pop();
            double b = numbers.top();
            numbers.pop();
            numbers.push(b * a);
        }
        else if(c == '/' && numbers.size() >= 2){
            double a = numbers.top();
            numbers.pop();
            double b = numbers.top();
            numbers.pop();
            numbers.push(b / a);
        }
        else{
            std::cerr << "Error\n";
            return ;
        }
    }
    if(numbers.size() == 1)
        std::cout << numbers.top() << std::endl;
    else
        std::cerr << "Error\n";
}
