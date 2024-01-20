/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:01:12 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/20 13:27:46 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"


int main(){
    try {
        Bureaucrat b("b1", 33);
        Intern i;
        AForm* f = i.makeForm("presidential pardon", "stagaire");
        b.signForm(*f);
        b.executeForm(*f);
        delete f;
    }catch(std::exception& e)
    {
        std::cout << "exeption : " << e.what() << std::endl;
    }
}
