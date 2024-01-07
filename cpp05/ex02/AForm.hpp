/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:24:54 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/07 14:20:33 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
    private:
        const std::string name;
        bool Signed;
        const int grade_to_s;
        const int grade_to_ex;
    public:
        class GradeTooLowException: public std::exception {
            public:
                const char* what() const throw(){
                    return "grade form too low";
                }
        };
        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw(){
                    return "grade form too hight";
                }  
        };
        AForm();
        AForm(std::string name, int grade_to_s, int grade_to_ex);
        AForm(const AForm& f);
        AForm& operator=(const AForm& f);
        ~AForm();
        std::string getName()const;
        int getGradeS() const;
        int getGradeEx() const;
        bool getSigned() const;
        void beSigned(Bureaucrat& b);
        virtual void execute(Bureaucrat const & executor) = 0;
};

std::ostream& operator<<(std::ostream& out, AForm& f);

#endif