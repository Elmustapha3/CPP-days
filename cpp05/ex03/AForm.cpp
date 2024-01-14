/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:16:30 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/08 00:51:03 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():name("Unknow"), grade_to_s(10), grade_to_ex(10){}

AForm::AForm(std::string name, int grade_to_s, int grade_to_ex):name(name), grade_to_s(grade_to_s), grade_to_ex(grade_to_ex){
    if(grade_to_ex < 1 || grade_to_s < 1)
        throw GradeTooHighException();
    if(grade_to_ex > 150 || grade_to_s > 150)
        throw GradeTooLowException();
    this->Signed = false;
}

AForm::AForm(const AForm& f):name(f.name), grade_to_s(f.grade_to_s), grade_to_ex(f.grade_to_ex){
    if(grade_to_ex < 1 || grade_to_s < 1)
        throw GradeTooHighException();
    if(grade_to_ex > 150 || grade_to_s > 150)
        throw GradeTooLowException();
    this->Signed = f.Signed;
}

AForm& AForm::operator=(const AForm& f){
    this->Signed = f.Signed;
    return *this;
}

AForm::~AForm(){}

std::string AForm::getName() const{
    return this->name;
}

int AForm::getGradeS() const{
    return this->grade_to_s;
}

int AForm::getGradeEx() const{
    return this->grade_to_ex;
}
bool AForm::getSigned() const{
    return this->Signed;
}

void AForm::beSigned(const Bureaucrat& b){
    if(b.getGrade() <= this->grade_to_s)
        this->Signed = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, AForm& f){
    out << f.getName() << ", Form has " << f.getGradeS() << "grade required to signed and " << f.getGradeEx() << " grade required ti executed and its signature status is " << f.getSigned() << std::endl;
    return out;
}

// void AForm::execute(Bureaucrat const & executor){
//     (void)executor;
//     std::cout << "execute base class function" << std::endl;
// }