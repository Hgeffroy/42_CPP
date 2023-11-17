/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:03:28 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 10:40:43 by hgeffroy         ###   ########.fr       */
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

std::ostream& operator<<(std::ostream& os, AForm const& rightValue)
{
	os << rightValue.getName() << " form: " << std::endl;
	os << "Signed: " << rightValue.getSigned() << std::endl;
	os << "Minimum grade to sign: " << rightValue.getSignGrade() << std::endl;
	os << "Minimum grade to execute: " << rightValue.getExecGrade() << std::endl;

	return (os);
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
	if (!(executor.getGrade() <= this->_execGrade))
		throw AForm::GradeTooLowException();
    else if (!(this->_signed))
        throw AForm::FormNotSignedException();
    else
        std::cout << executor << " executed " << this->_name << "." << std::endl;
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("his grade is too high.");
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("his grade is too low.");
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return ("the form is not signed.");
}

const char*	AForm::FormAlreadySignedException::what() const throw()
{
	return ("the form is already signed.");
}


