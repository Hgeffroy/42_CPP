/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:40:03 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/08 12:40:03 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern default destructor called" << std::endl;
}

Intern::Intern(Intern const& cpyFrom)
{
    *this = cpyFrom;

    std::cout << "Intern copy constructor called" << std::endl;
}

Intern& Intern::operator=(Intern const& rightValue)
{
    (void)rightValue;

    return (*this);
}

AForm*    Intern::makeForm(std::string form, std::string target)
{
    std::string formName[] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
    AForm*      f;

    int i = 0;
    while (i < 3)
    {
        if (formName[i] == form)
            break;
        i++;
    }

    switch(i)
    {
        case 0:
            std::cout << "Intern creates " << form << std::endl;
            f = new PresidentialPardonForm(target);
            break ;
        case 1:
            std::cout << "Intern creates " << form << std::endl;
            f = new RobotomyRequestForm(target);
            break ;
        case 2:
            std::cout << "Intern creates " << form << std::endl;
            f = new ShrubberyCreationForm(target);
            break ;
        default:
			throw InvalidFormException();
    }
    return (f);
}