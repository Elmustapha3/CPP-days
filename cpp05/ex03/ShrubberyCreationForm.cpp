/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:08:12 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/20 12:09:51 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("", 145, 137){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(target, 145, 137){
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& sf):AForm(sf.getName(), 145, 137){
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& sf){
    (void)sf;
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if(this->getSigned() && executor.getGrade() <= this->getGradeEx()){
        std::ofstream file;
        file.open((this->getName()+"_shrubbery").c_str());
        file << "       _-_" << std::endl;
        file << "    /--   --\\" << std::endl;
        file << " /--         --\\" << std::endl;
        file << "{               }" << std::endl;
        file << " \\  _-     -_  / " << std::endl;
        file << "   ~  \\\\ //  ~" << std::endl;
        file << "_- -   | | _- _" << std::endl;
        file << "  _ -  | |   -_" << std::endl;
        file << "      // \\\\" << std::endl;
        file.close();
    }
    else
        throw Bureaucrat::GradeTooLowException();
}
