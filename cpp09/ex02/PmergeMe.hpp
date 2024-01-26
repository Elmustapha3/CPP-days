#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <cstring>
#include <deque>
#include <vector>
#include <cstdlib>



class PmergeMe {
	std::vector<int> v;
	std::deque<int> d;
	public:
		PmergeMe();
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe& pm);
		PmergeMe& operator=(const PmergeMe& pm);
		~PmergeMe();
		void FordJohnsonAlgo(int ac, char **av);
		void mergeSort(std::vector<int> &v);
		void parser_and_fill(int ac, char **av);
		void merge(std::vector<int> &lv, std::vector<int> &rv, std::vector<int> &v);
		void afficheResult(int p, std::vector<int> &v);
};

#endif
