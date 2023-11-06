/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:11:49 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/06 15:41:40 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm::PresidentialPardonForm() : 
					AForm("PresidentialPardonForm", 25, 5), _target("Undefined")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm default destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
					AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm parametric constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& cpyFrom)
{
	*this = cpyFrom;
	
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& rightValue)
{
	(void)rightValue;

	return (*this);
}

void	PresidentialPardonForm::beSigned(Bureaucrat b)
{
	if (b.getGrade() <= this->getSignGrade())
		this->setSigned();
	else
		throw PresidentialPardonForm::GradeTooLowException();
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	try
	{	
		AForm::execute(executor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << this->_target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}

