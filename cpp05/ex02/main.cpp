/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:06:19 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/31 12:43:41 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat	a("Harvey", 1);
	Bureaucrat	b("Louis", 150);

	PresidentialPardonForm		f1("Thea");
    RobotomyRequestForm         f2("Arthur");
    ShrubberyCreationForm       f3("Brieuc");


    std::cout << "-----------------------------------------" << std::endl;
    a.executeForm(f1);
    std::cout << std::endl;
	a.signForm(f1);
    std::cout << std::endl;
    b.executeForm(f1);
    std::cout << std::endl;
    a.executeForm(f1);
    std::cout << std::endl;
    a.signForm(f1);
    std::cout << std::endl;

	b.signForm(f2);
    std::cout << std::endl;
    a.signForm(f2);
    std::cout << std::endl;
    a.executeForm(f2);
    std::cout << std::endl;

    a.signForm(f3);
    std::cout << std::endl;
    a.executeForm(f3);
    std::cout << std::endl;

    std::cout << "-----------------------------------------" << std::endl;
}