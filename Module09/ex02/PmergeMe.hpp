/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:10:28 by robin             #+#    #+#             */
/*   Updated: 2024/03/15 16:16:27 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <chrono>

class PmergeMe
{
    private:
        std::deque<int> deque_sequence;
        std::vector<int> vector_sequence;

        void mergeInsertSortDeque();
        void mergeInsertSortVector();

public:
        PmergeMe(int argc, char *argv[]);
        void printSequencesBefore() const;
        void printSequencesAfter() const;
        void sortSequencesAndPrintTime();
    };

#endif
