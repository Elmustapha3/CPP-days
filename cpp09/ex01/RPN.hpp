#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cstring>
#include <cstdlib>


class Rpn{
	std::stack<int> s;
	public:
		Rpn();
		Rpn(char **av);
		Rpn(const Rpn& Rpn);
		Rpn& operator=(const Rpn& Rpn);
		// void execute(char **av);
		void parser(char *av);
		void calcule(const char *av);
		~Rpn();
};

#endif
