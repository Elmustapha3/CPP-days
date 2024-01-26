#include "RPN.hpp"

Rpn::Rpn(){

}

Rpn::Rpn(char **av){
	this->parser(av[1]);
	this->calcule(av[1]);
}

bool isAr(char c){
	if(c == '+' || c == '-' || c == '/' || c == '*')
		return true;
	return false;
}

void Rpn::parser(char *av){
	//trim
	for (size_t i = 0; i < strlen(av); i++)
	{
		if(isdigit(av[i]) || isspace(av[i]) || isAr(av[i]) || av[i] == '\t')
			continue;
		else
			throw std::runtime_error("Error");
	}

}

int calculator(int n1, int n2, char a){
	char ar[4] = {'+', '-', '*', '/'};
	for (size_t i = 0; i < 4; i++)
	{
		if(ar[i] == a){
			switch (i)
			{
				case 0:
					return n1 + n2;
					break;
				case 1:
					return n1 - n2;
					break;
				case 2:
					return n1 * n2;
					break;
				case 3:
					if(n2 == 0)
						throw std::runtime_error("divising by 0");
					return n1 / n2;
					break;
				default:
					break;
			}
		}
	}
	return -1;

}

void Rpn::calcule(const char *av){
	for (size_t i = 0; i < strlen(av); i++)
	{
		if(isdigit(av[i]))
			this->s.push(av[i] - '0');
		else if(isAr(av[i]) && this->s.size() > 1){
			int n1,n2;
			n1 = this->s.top();
			this->s.pop();
			n2 = this->s.top();
			this->s.pop();
			this->s.push(calculator(n2, n1, av[i]));
		}
		else if(isspace(av[i]) || av[i] == '\t')
			continue;
	}
	std::cout << this->s.top() << std::endl;
}

Rpn::Rpn(const Rpn& Rpn){
	*this = Rpn;
}

Rpn& Rpn::operator=(const Rpn& Rpn){
	this->s = Rpn.s;
	return *this;
}

Rpn::~Rpn(){}
