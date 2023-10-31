/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:58:26 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/31 13:15:12 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm::ShrubberyCreationForm() :
						AForm("ShrubberyCreationForm", 145, 137), _target("Undefined")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
						AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm parametric constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpyFrom)
{
	*this = cpyFrom;
	
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rightValue)
{
	(void)rightValue;
	
	return (*this);
}

void	ShrubberyCreationForm::beSigned(Bureaucrat b)
{
	if (b.getGrade() <= this->getSignGrade())
		this->setSigned();
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	try
	{	
		AForm::execute(executor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// Faire les trucs
}
