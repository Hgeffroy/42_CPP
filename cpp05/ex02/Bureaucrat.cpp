/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:25:06 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/01 10:13:30 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Undefined"), _grade(1)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copyFrom) : _name(copyFrom._name), _grade(copyFrom._grade)
{	
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	
	std::cout << "Bureaucrat parametric constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rightValue)
{
	if (this->_name != rightValue._name)
		std::cout << "Warning: Both instances don't have the same name, only the grade has changed." << std::endl;
	this->_grade = rightValue._grade;

	return (*this);
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& rightValue)
{
	os << rightValue.getName() << ", bureaucrat grade " << rightValue.getGrade() << ".";
	
	return (os);
}

Bureaucrat& Bureaucrat::operator++()
{	
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
	return (*this);
}

Bureaucrat& Bureaucrat::operator--()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return (*this);
}
	
std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
	}
	
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn't sign " << f.getName() << " because ";
		std::cerr << e.what();
		std::cout << std::endl;
		return ;
	}
	
	std::cout << this->_name << " signed " << f.getName() << std::endl;;
}
