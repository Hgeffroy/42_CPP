/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:03:28 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/31 13:07:35 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Undefined"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm default destructor called" << std::endl;
}

AForm::AForm(AForm const& cpyFrom) : _name("Undefined"), _signGrade(150), _execGrade(150)
{
	*this = cpyFrom;
	
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw AForm::GradeTooLowException();
	else if (_signGrade < 1 || _execGrade < 1)
		throw AForm::GradeTooHighException();
	
	std::cout << "AForm parametric constructor called" << std::endl;
}

AForm& AForm::operator=(AForm const& rightValue)
{
	this->_signed = rightValue._signed;

	return (*this);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int	AForm::getExecGrade() const
{
	return (this->_execGrade);
}

void	AForm::setSigned()
{
	this->_signed = true;
}

void	AForm::execute(Bureaucrat const& executor) const
{
	if (!(this->_signed && executor.getGrade() <= this->_execGrade))
		throw AForm::GradeTooLowException();
}
