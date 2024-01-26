#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(int ac, char **av){
	try
	{
		this->parser_and_fill(ac, av);
		this->afficheResult(0, this->v);
		this->mergeSort(this->v);
		this->afficheResult(1, this->v);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

PmergeMe::PmergeMe(const PmergeMe& pm){
	*this = pm;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& pm){
	this->v = pm.v;
	this->d = pm.d;
	return *this;
}

PmergeMe::~PmergeMe(){}

void PmergeMe::FordJohnsonAlgo(int ac, char **av){
	try
	{
		this->parser_and_fill(ac, av);
		this->afficheResult(0, this->v);
		this->mergeSort(this->v);
		this->afficheResult(1, this->v);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void PmergeMe::parser_and_fill(int ac, char **av){

	size_t d;
	for (int i = 1; i < ac; i++)
	{
		//trim
		for (size_t j = 0; j < strlen(av[i]); j++)
		{
			if(!isdigit(av[i][j]) && av[i][j] != '+' )
				throw std::runtime_error("Error");
		}
		if(strlen(av[i]) == 1 && av[i][0] == '0')
			this->v.push_back(0);
		if(strlen(av[i]) == 2 && av[i][0] == '+' && av[i][1] == '0')
			this->v.push_back(0);
		d = atof(av[i]);
		if(d > 1)
			this->v.push_back(d);
	}

}

void PmergeMe::mergeSort(std::vector<int> &v){
	size_t mdl, i, s;
	std::vector<int> lv;
	std::vector<int> rv;
	std::vector<int>::iterator it, lit, rit;


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

	this->mergeSort(lv);
	this->mergeSort(rv);
	this->merge(v, lv, rv);
}

void PmergeMe::merge(std::vector<int> &v, std::vector<int> &lv, std::vector<int> &rv){
	std::vector<int>::iterator it, lit, rit;

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
		// std::cout << "------1---" << std::endl;
		*it = *lit;
		it++;
	}
	for (; rit < rv.end() && it < v.end() ; rit++)
	{
		// std::cout << "-----2----" << std::endl;

		*it = *rit;
		it++;
	}
	// this->afficheResult(v);
}

void PmergeMe::afficheResult(int p, std::vector<int> &v){
	std::vector<int>::iterator it;
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
}

