/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:18:39 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/05 12:10:47 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw(){
                    return "grade too hight";
                    exit(0);
                }  
        };
        class GradeTooLowException: public std::exception {
            public:
                const char* what() const throw(){
                    return "grade too low";
                    exit(0);
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
};

std::ostream &operator<<(std::ostream &out, Bureaucrat b);

#endif