/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:30:09 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/20 11:39:48 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("", 72, 45){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(target, 72, 45){
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& sf):AForm(sf.getName(), 72, 45){
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& sf){
    (void)sf;
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)const{
    if(this->getSigned() && executor.getGrade() <= this->getGradeEx()){
        if((time(0) % 2) == 0)
            std::cout << this->getName() << " has been robotomized" << std::endl;
        else
            std::cout << this->getName() << " robotomy failed." << std::endl;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}
