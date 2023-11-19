/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:03:28 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 10:44:35 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Undefined"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form default destructor called" << std::endl;
}

Form::Form(Form const& cpyFrom) : _name(cpyFrom._name), _signGrade(cpyFrom._signGrade), _execGrade(cpyFrom._execGrade)
{
	*this = cpyFrom;
	
	std::cout << "Form copy constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
	else if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	
	std::cout << "Form parametric constructor called" << std::endl;
}

Form& Form::operator=(Form const& rightValue)
{
	this->_signed = rightValue._signed;

	return (*this);
}

std::ostream& operator<<(std::ostream& os, Form const& rightValue)
{
	os << rightValue.getName() << " form: " << std::endl;
	os << "Signed: " << rightValue.getSigned() << std::endl;
	os << "Minimum grade to sign: " << rightValue.getSignGrade() << std::endl;
	os << "Minimum grade to execute: " << rightValue.getExecGrade() << std::endl;

	return (os);
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int	Form::getExecGrade() const
{
	return (this->_execGrade);
}

void	Form::beSigned(Bureaucrat& b)
{
	if (this->getSigned())
		throw Form::FormAlreadySignedException();
	if (b.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low\n");
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high\n");
}

const char*	Form::FormAlreadySignedException::what() const throw()
{
	return ("the form is already signed.\n");
}

