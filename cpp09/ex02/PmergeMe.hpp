#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <cstring>
#include <deque>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cctype>


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
		template <typename container>
		void mergeSort(container &v){

			size_t mdl, i, s;
			container lv;
			container rv;
			typename container::iterator it, lit, rit;


			s = v.size();
			i = 0;
			if(s <= 1)
				return;
			mdl = s / 2;
			it = v.begin();
			lit = lv.begin();
			rit = rv.begin();
			for (; it < v.end(); it++)
			{
				if(i < mdl)
					lv.push_back(*it);
				else{
					rv.push_back(*it);
				}
				i++;
			}

			this->mergeSort<container>(lv);
			this->mergeSort<container>(rv);
			this->merge<container>(v, lv, rv);
		};

		void parser_and_fill(int ac, char **av);
		template <typename container>
		void merge(container &v, container &lv, container &rv){
			typename container::iterator it, lit, rit;

			it = v.begin();
			lit = lv.begin();
			rit = rv.begin();

			for (; lit < lv.end() && rit < rv.end() && it < v.end(); it++)
			{
				if(*lit < *rit){
					*it = *lit;
					lit++;
				}
				else{
					*it = *rit;
					rit++;
				}
			}

			for (; lit < lv.end() && it < v.end(); lit++)
			{
				*it = *lit;
				it++;
			}
			for (; rit < rv.end() && it < v.end() ; rit++)
			{
				*it = *rit;
				it++;
			}
		};

		template <typename container>
		void afficheResult(int p, container &v){
			typename container::iterator it;
			int i = 0;
			it = v.begin();
			if(p == 1)
				std::cout << "After: ";
			if(p == 0)
				std::cout << "Before:";
			if(v.size() > 5)
			{
				for (; it < v.end(); it++)
				{
					if(i == 4){
						std::cout << " [...]";
						break;
					}
					std::cout << " " << *it;
					i++;
				}
			}
			else{
				for (; it < v.end(); it++)
				{
					std::cout << " " << *it;
				}
			}
			std::cout << std::endl;
		};
};

std::string& trim(std::string& str);

#endif
