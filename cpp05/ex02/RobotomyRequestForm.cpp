/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:30:09 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/07 14:58:10 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("", 25, 5){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(target, 25, 5){
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& sf):AForm(sf.getName(), 25, 5){
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& sf):AForm(sf.getName(), 25, 5){
    retrun *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){
}

void RobotomyRequestForm::execute(Bureaucrat const & executor){
    if(this->getSigned() && executor.getGrade() <= this->getGradeEx()){
        if(time(0) % 0 == 0)
            std::cout << this->getName() >> " has been robotomized" << std::endl;
        else
            std::cout << this->getName() >> " robotomy failed." << std::endl;
    }
    else
        throw GradeTooLowException();
}