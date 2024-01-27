#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(int ac, char **av){
	clock_t s_v, e_v, s_d, e_d;
	try
	{
		this->parser_and_fill(ac, av);
		this->afficheResult<std::vector<int> >(0, this->v);
		s_v = clock();
		this->mergeSort<std::vector<int> >(this->v);
		e_v = clock();
		s_d = clock();
		this->mergeSort<std::deque<int> >(this->d);
		e_d = clock();
		this->afficheResult<std::vector<int> >(1, this->v);

		std::cout << "Time to process a range of " << this->v.size() << " elements with vector: " << static_cast<double>(e_v - s_v) << " us" << std::endl;
		std::cout << "Time to process a range of " << this->v.size() << " elements with deque:  " << static_cast<double>(e_d - s_d) << " us" << std::endl;
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
	clock_t s_v, e_v, s_d, e_d;
	try
	{
		this->parser_and_fill(ac, av);
		this->afficheResult<std::vector<int> >(0, this->v);
		s_v = clock();
		this->mergeSort<std::vector<int> >(this->v);
		e_v = clock();
		s_d = clock();
		this->mergeSort<std::deque<int> >(this->d);
		e_d = clock();
		this->afficheResult<std::vector<int> >(1, this->v);
		std::cout << "Time to process a range of " << this->v.size() << " elements with vector: " << static_cast<double>(e_v - s_v) << " us" << std::endl;
		std::cout << "Time to process a range of " << this->v.size() << " elements with deque:  " << static_cast<double>(e_d - s_d) << " us" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void PmergeMe::parser_and_fill(int ac, char **av){

	size_t d;
	std::string arg;
	for (int i = 1; i < ac; i++)
	{
		arg = av[i];
		arg = trim(arg);
		for (size_t j = 0; j < arg.length(); j++)
		{
			if(!isdigit(arg[j]) && arg[j] != '+' )
				throw std::runtime_error("Error");
		}
		if(arg.length() == 1 && arg[0] == '0'){
			this->v.push_back(0);
			this->d.push_back(0);
		}
		if(arg.length() == 2 && arg[0] == '+' && arg[1] == '0'){
			this->v.push_back(0);
			this->d.push_back(0);
		}
		d = atof(arg.c_str());
		if(d > 1){
			this->v.push_back(d);
			this->d.push_back(d);
		}
	}

}


std::string& trim(std::string& str){
	std::string::iterator it = str.begin();
    while (it != str.end() && std::isspace(*it)) {
        ++it;
    }
    str.erase(str.begin(), it);
	std::string::reverse_iterator rit = str.rbegin();
	while (rit != str.rend() && std::isspace(*rit)) {
        rit++;
    }
    str.erase(rit.base(), str.end());
	return str;
}


