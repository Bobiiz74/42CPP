/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:54:02 by robin             #+#    #+#             */
/*   Updated: 2024/02/22 16:51:51 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    {
        std::vector<int> vec(1);
        vec.push_back(10);
        vec.push_back(3);
        vec.push_back(42);
        easyfind(vec, 1);
        easyfind(vec, 41);
        easyfind(vec, 2);
        easyfind(vec, 42);
    }
    std::cout << "---------------\n";
    {
        std::list<int> l(3);
        l.push_back(2);
        l.push_front(1);
        l.push_back(41);
        l.pop_back();
        l.pop_front();
        l.push_back(42);
        easyfind(l, 1);
        easyfind(l, 41);
        easyfind(l, 2);
        easyfind(l, 42);
    }
    return(0);
}
