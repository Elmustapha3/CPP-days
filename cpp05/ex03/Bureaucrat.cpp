/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:12:43 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/20 13:51:02 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "grade bureaucrat too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "grade bureaucrat too high";
}

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

void Bureaucrat::signForm(AForm& f)
{

    try{
        f.beSigned(*this);
        std::cout << this->name << " signed " << f.getName() << std::endl;
    }catch(std::exception& e)
    {
        std::cout << this->name << " couldn't sign " << f.getName() << " Because " << e.what() << std::endl;

    }
}

void Bureaucrat::executeForm( AForm const &f){
    try{
        f.execute(*this);
        std::cout << this->name << " executed " << f.getName() << std::endl;
    }catch(std::exception& e){
        std::cout << this->name << " couldn't execute " << f.getName() << " Because " << e.what() << std::endl;
    }
}
