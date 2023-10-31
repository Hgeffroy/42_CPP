/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:57:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/31 13:14:54 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm::RobotomyRequestForm() :
					AForm("RobotomyRequestForm", 72, 45), _target("Undefined")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm default destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
					AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm parametric constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& cpyFrom)
{
	*this = cpyFrom;
	
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rightValue)
{
	(void)rightValue;
	
	return (*this);
}

void	RobotomyRequestForm::beSigned(Bureaucrat b)
{
	if (b.getGrade() <= this->getSignGrade())
		this->setSigned();
	else
		throw RobotomyRequestForm::GradeTooLowException();
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
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
