/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:12:43 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/05 12:19:17 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    
}
Bureaucrat::Bureaucrat(std::string name, int grade): name(name){
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& b): name(b.name){
    this->grade = b.grade;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b){
    this->grade = b.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(){}

int Bureaucrat::getGrade() const{
    return this->grade;
}

void Bureaucrat::incrementGrade(){
    if(this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade(){
    if(this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

std::string Bureaucrat::getName() const{
    return this->name;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat b){
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return out;
}