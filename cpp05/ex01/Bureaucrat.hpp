/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:18:39 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/20 11:21:18 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
class Form;

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw(){
                    return "grade bureaucrat too hight";
                }
        };
        class GradeTooLowException: public std::exception {
            public:
                const char* what() const throw(){
                    return "grade bureaucrat too low";
                }
        };
        Bureaucrat();
        Bureaucrat(std::string, int grade);
        Bureaucrat(const Bureaucrat &b);
        Bureaucrat& operator=(const Bureaucrat& b);
        ~Bureaucrat();
        int getGrade() const;
        std::string getName() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form& f);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat b);

#endif
