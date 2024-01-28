#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <cstdlib>
#include <ctime>


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
		void algoStart(container &c, char cc){
			typename container::iterator it;
			typename container::iterator ite;
			container c1;
			container c2;
			int a, b, i = 0;
			it = c.begin();
			for (; it < c.end(); it++, i++)
			{
				if(i % 2 == 0)
					a = *it;
				else if(i % 2 == 1){
					b = *it;
					c1.push_back(a);
					c2.push_back(b);
					a = -1;
					b = -1;
				}
			}
			if (a > -1){
				c1.push_back(a);
			}
			this->mergeSort(c1);
			it = c2.begin();
			for (; it < c2.end(); it++)
			{
				ite = lower_bound(c1.begin(), c1.end(), *it);
				c1.insert(ite, *it);
			}
			if(cc == 'v')
				this->v.assign(c1.begin(), c1.end());
			if(cc == 'd')
				this->d.assign(c1.begin(), c1.end());
		};

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
			it = v.begin();
			if(p == 1)
				std::cout << "After: ";
			if(p == 0)
				std::cout << "Before:";

			for (; it < v.end(); it++)
			{
				std::cout << " " << *it;
			}
			std::cout << std::endl;
		};
};

std::string& trim(std::string& str);

#endif
