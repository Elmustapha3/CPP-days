/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:24:54 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/20 13:50:02 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <unistd.h>
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
                const char* what() const throw();
        };
        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw();
        };
        AForm();
        AForm(std::string name, int grade_to_s, int grade_to_ex);
        AForm(const AForm& f);
        AForm& operator=(const AForm& f);
        virtual ~AForm();
        std::string getName()const;
        int getGradeS() const;
        int getGradeEx() const;
        bool getSigned() const;
        void beSigned(const Bureaucrat& b);
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, AForm& f);

#endif
