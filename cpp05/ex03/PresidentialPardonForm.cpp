/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:28:00 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/08 00:36:08 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("", 72, 45){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm(target, 72, 45){
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& sf):AForm(sf.getName(), 72, 45){
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& sf){
    (void)sf;
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)const{
    if(this->getSigned() && executor.getGrade() <= this->getGradeEx()){
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
        throw GradeTooLowException();
        
}