/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:24:54 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/20 11:24:45 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
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
                    // exit(0);
                }
        };
        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw(){
                    return "grade form too hight";
                    // exit(0);
                }
        };
        Form();
        Form(std::string name, int grade_to_s, int grade_to_ex);
        Form(const Form& f);
        Form& operator=(const Form& f);
        ~Form();
        std::string getName()const;
        int getGradeS() const;
        int getGradeEx() const;
        bool getSigned() const;
        void beSigned(Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& out, Form& f);

#endif
