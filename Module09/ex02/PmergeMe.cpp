/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:10:09 by robin             #+#    #+#             */
/*   Updated: 2024/03/21 16:08:30 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char *argv[]) {
    if (argc < 2) {
        throw std::invalid_argument("Insufficient arguments. Please provide a sequence of positive integers.");
    }

    try {
        for (int i = 1; i < argc; ++i) {
            int num = std::atoi(argv[i]);
            for (char *c = argv[i]; *c != '\0'; ++c) {
                if (!std::isdigit(*c)) {
                    throw std::invalid_argument("Invalid argument. Please provide only positive integers.");
                }
            }
            deque_sequence.push_back(num);
            vector_sequence.push_back(num);
        }
    } catch (const std::exception& e) {
        throw ;
    }
}

void PmergeMe::printSequencesBefore() const {
    std::cout << "Before: ";
    for (std::deque<unsigned int>::const_iterator deque_iter = deque_sequence.begin(); deque_iter != deque_sequence.end(); ++deque_iter) {
        std::cout << *deque_iter << " ";
    }
    std::cout << "\n";
}

void PmergeMe::printSequencesAfter() const {
    std::cout << "After: ";
    for (std::deque<unsigned int>::const_iterator deque_iter = deque_sequence.begin(); deque_iter != deque_sequence.end(); ++deque_iter) {
        std::cout << *deque_iter << " ";
    }
    std::cout << "\n";
}

static std::deque<std::deque<unsigned int> > fusionDeq(const std::deque<std::deque<unsigned int> > &left, const std::deque<std::deque<unsigned int> > &right)
{
	std::deque<std::deque<unsigned int> > res;
	unsigned int i = 0, j = 0;
	while (i < left.size() && j < right.size()) {
		if (left[i][0] < right[j][0]) {
			res.push_back(left[i]);
			i++;
		} else {
			res.push_back(right[j]);
			j++;
		}
	}
	for (; i < left.size(); i++)
		res.push_back(left[i]);
	for (; j < right.size(); j++)
		res.push_back(right[j]);
	return (res);
}

static std::deque<std::deque<unsigned int> > ft_SortDeq(std::deque<std::deque<unsigned int> > &group)
{
	if (group.empty())
		throw std::runtime_error("Deque is empty");
	if (group.size() == 1)
		return group;
	std::deque<std::deque<unsigned int > > left(group.begin(), group.begin() + group.size() / 2);
	std::deque<std::deque<unsigned int > > right(group.begin() + group.size() / 2, group.end());
	left = ft_SortDeq(left);
	right = ft_SortDeq(right);
	return (fusionDeq(left, right));
}

static void	insertSortDeq(std::deque<unsigned int> &deq) 
{
	unsigned int tmp;
	for (unsigned int i = 1; i < deq.size(); i++)
	{
		unsigned int j = i;
		while (j > 0 && deq[j - 1] > deq[j]) {
			tmp = deq[j - 1];
			deq[j - 1] = deq[j];
			deq[j] = tmp;
			j--;
		}
	}
}

void PmergeMe::mergeInsertSortDeque() {
    	std::deque<unsigned int> res = deque_sequence;

	for (unsigned int grpsize = 5; grpsize > 0; grpsize /= 2) {
		std::deque<std::deque<unsigned int> > group;
		for (unsigned int i = 0; i < res.size(); i += grpsize) {
			std::deque<unsigned int> tmp;
			for (unsigned int j = 0; j < grpsize && i + j < res.size(); j++)
				tmp.push_back(res[i + j]);
			group.push_back(tmp);
		}
		res.clear();
		// Insert and sort
		for (unsigned int i = 0; i < group.size(); i++)
			insertSortDeq(group[i]);
		
		group = ft_SortDeq(group);
		for (unsigned int i = 0; i < group.size(); i++)
			for(unsigned int j = 0; j < group[i].size(); j++)
				res.push_back(group[i][j]);
		}
	deque_sequence = res;
	return ;
}

static std::vector<std::vector<unsigned int> > fusion(const std::vector<std::vector<unsigned int> > &left, const std::vector<std::vector<unsigned int> > &right)
{
	std::vector<std::vector<unsigned int> > res;
	unsigned int i = 0, j = 0;
	while (i < left.size() && j < right.size()) {
		if (left[i][0] < right[j][0]) {
			res.push_back(left[i]);
			i++;
		} else {
			res.push_back(right[j]);
			j++;
		}
	}
	for (; i < left.size(); i++)
		res.push_back(left[i]);
	for (; j < right.size(); j++)
		res.push_back(right[j]);
	return (res);
}

static std::vector<std::vector<unsigned int> > ft_Sort(std::vector<std::vector<unsigned int> > &group)
{
	if (group.empty())
		throw std::runtime_error("Vector is empty");
	if (group.size() == 1)
		return group;
	std::vector<std::vector<unsigned int > > left(group.begin(), group.begin() + group.size() / 2);
	std::vector<std::vector<unsigned int > > right(group.begin() + group.size() / 2, group.end());
	left = ft_Sort(left);
	right = ft_Sort(right);
	return (fusion(left, right));
}

static void	insertSort(std::vector<unsigned int> &vec) 
{
	unsigned int tmp;
	for (unsigned int i = 1; i < vec.size(); i++)
	{
		unsigned int j = i;
		while (j > 0 && vec[j - 1] > vec[j]) {
			tmp = vec[j - 1];
			vec[j - 1] = vec[j];
			vec[j] = tmp;
			j--;
		}
	}
}
void PmergeMe::mergeInsertSortVector() {
    	std::vector<unsigned int> res = vector_sequence;

	for (unsigned int grpsize = 5; grpsize > 0; grpsize /= 2) {
		std::vector<std::vector<unsigned int> > group;
		for (unsigned int i = 0; i < res.size(); i += grpsize) {
			std::vector<unsigned int> tmp;
			for (unsigned int j = 0; j < grpsize && i + j < res.size(); j++)
				tmp.push_back(res[i + j]);
			group.push_back(tmp);
		}
		res.clear();
		// Insert and sort
		for (unsigned int i = 0; i < group.size(); i++)
			insertSort(group[i]);
		
		group = ft_Sort(group);
		for (unsigned int i = 0; i < group.size(); i++)
			for(unsigned int j = 0; j < group[i].size(); j++)
				res.push_back(group[i][j]);
		}
	return ;
}

void PmergeMe::sortSequencesAndPrintTime() {
    std::deque<int>::iterator deque_iter;
    std::vector<int>::iterator vector_iter;

    printSequencesBefore();
    clock_t start_deque = clock();
    mergeInsertSortDeque();
    clock_t end_deque = clock();
    printSequencesAfter();
    std::cout << "Time to process a range of " << deque_sequence.size() << " elements with deque: "
              << (double)(end_deque - start_deque) << " us\n";

    clock_t start_vector = clock();
    mergeInsertSortVector();
    clock_t end_vector = clock();
    std::cout << "Time to process a range of " << vector_sequence.size() << " elements with vector: "
              << (double)(end_vector - start_vector) << " us\n";
}

