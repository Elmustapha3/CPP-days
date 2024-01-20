/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:16:30 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/20 13:50:17 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("Unknow"), grade_to_s(10), grade_to_ex(10){}

Form::Form(std::string name, int grade_to_s, int grade_to_ex):name(name), grade_to_s(grade_to_s), grade_to_ex(grade_to_ex){
    if(grade_to_ex < 1 || grade_to_s < 1)
        throw GradeTooHighException();
    if(grade_to_ex > 150 || grade_to_s > 150)
        throw GradeTooLowException();
    this->Signed = false;
}

Form::Form(const Form& f):name(f.name), grade_to_s(f.grade_to_s), grade_to_ex(f.grade_to_ex){
    this->Signed = f.Signed;
}

Form& Form::operator=(const Form& f){
    this->Signed = f.Signed;
    return *this;
}

Form::~Form(){}

const char* Form::GradeTooLowException::what() const throw(){
    return "grade form too low";
}

const char* Form::GradeTooHighException::what() const throw(){
    return "grade form too high";
}

std::string Form::getName() const{
    return this->name;
}

int Form::getGradeS() const{
    return this->grade_to_s;
}

int Form::getGradeEx() const{
    return this->grade_to_ex;
}
bool Form::getSigned() const{
    return this->Signed;
}

void Form::beSigned(Bureaucrat& b){
    if(b.getGrade() <= this->grade_to_s)
        this->Signed = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, Form& f){
    out << f.getName() << ", Form has " << f.getGradeS() << "grade required to signed and " << f.getGradeEx() << " grade required ti executed and its signature status is " << f.getSigned() << std::endl;
    return out;
}
