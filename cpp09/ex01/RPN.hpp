#ifndef RPN_HPP
#define RPN

#include <iostream>
#include <stack>

class RPN{
	std::stack<int> s;
	public:
		RPN();
		RPN(int ac, char **av);
		RPN(const RPN& rpn);
		RPN& operator=(const RPN& rpn);
		void parse(int ac, char **av);
		void calcule(int ac, char **av);
		~RPN();
};

#endif
