/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:10:09 by robin             #+#    #+#             */
/*   Updated: 2024/03/15 16:20:44 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char *argv[]) {
    if (argc < 2) {
        throw std::invalid_argument("Insufficient arguments. Please provide a sequence of positive integers.");
    }

    try {
        for (int i = 1; i < argc; ++i) {
            int num = std::stoi(argv[i]);
            deque_sequence.push_back(num);
            vector_sequence.push_back(num);
        }
    } catch (const std::exception& e) {
        throw std::invalid_argument("Invalid argument. Please provide only positive integers.");
    }
}

void PmergeMe::printSequencesBefore() const {
    std::cout << "Before: ";
    for (std::deque<int>::const_iterator deque_iter = deque_sequence.begin(); deque_iter != deque_sequence.end(); ++deque_iter) {
        std::cout << *deque_iter << " ";
    }
    std::cout << "\n";
}

void PmergeMe::printSequencesAfter() const {
    std::cout << "After: ";
    for (std::deque<int>::const_iterator deque_iter = deque_sequence.begin(); deque_iter != deque_sequence.end(); ++deque_iter) {
        std::cout << *deque_iter << " ";
    }
    std::cout << "\n";
}

void PmergeMe::mergeInsertSortDeque() {
    std::deque<int> tempDeque;
    while (!deque_sequence.empty()) {
        int current = deque_sequence.front();
        deque_sequence.pop_front();

        while (!tempDeque.empty() && tempDeque.back() > current) {
            deque_sequence.push_front(tempDeque.back());
            tempDeque.pop_back();
        }
        tempDeque.push_back(current);
    }

    while (!tempDeque.empty()) {
        deque_sequence.push_front(tempDeque.back());
        tempDeque.pop_back();
    }
}

void PmergeMe::mergeInsertSortVector() {
    std::vector<int> tempVector;
    for (std::vector<int>::iterator it = vector_sequence.begin(); it != vector_sequence.end(); ++it) {
        std::vector<int>::iterator insertPos = std::upper_bound(tempVector.begin(), tempVector.end(), *it);
        tempVector.insert(insertPos, *it);
    }
    vector_sequence = tempVector;
}

void PmergeMe::sortSequencesAndPrintTime() {
    std::deque<int>::iterator deque_iter;
    std::vector<int>::iterator vector_iter;

    printSequencesBefore();
    std::chrono::steady_clock::time_point start_deque = std::chrono::steady_clock::now();
    mergeInsertSortDeque();
    std::chrono::steady_clock::time_point end_deque = std::chrono::steady_clock::now();
    printSequencesAfter();
    std::cout << "Time to process a range of " << deque_sequence.size() << " elements with deque: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end_deque - start_deque).count() << " us\n";

    std::chrono::steady_clock::time_point start_vector = std::chrono::steady_clock::now();
    mergeInsertSortVector();
    std::chrono::steady_clock::time_point end_vector = std::chrono::steady_clock::now();
    std::cout << "Time to process a range of " << vector_sequence.size() << " elements with vector: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end_vector - start_vector).count() << " us\n";
}
