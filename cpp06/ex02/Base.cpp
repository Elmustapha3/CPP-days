/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:30:29 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/17 22:18:37 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base * generate(void){
    Base * b;
    if(time(0) % 3 == 0)
        b = new A();
    else if(time(0) % 3 == 1)
        b = new B();
    else 
        b = new C();
    return b;
}

void identify(Base* p){
    A * a = dynamic_cast<A *>(p);
    if(a)
        std::cout << "le type est A" << std::endl;
    B * b = dynamic_cast<B *>(p);
    if(b)
        std::cout << "le type est B" << std::endl;
    C * c = dynamic_cast<C *>(p);
    if(c)
        std::cout << "le type est C" << std::endl;
}

void identify(Base& p){
    try
    {
        A& a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "le type est A" << std::endl;
    }
    catch(std::exception& e){}

    try
    {
        B& b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "le type est B" << std::endl;
    }
    catch(std::exception& e){}

    try
    {
        C& c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "le type est C" << std::endl;
    }
    catch(std::exception& e){}
    
   
}
