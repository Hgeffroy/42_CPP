/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:57:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/06 16:00:45 by hgeffroy         ###   ########.fr       */
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

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& cpyFrom) :
                    AForm("RobotomyRequestForm", 72, 45), _target(cpyFrom._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rightValue)
{
	(void)rightValue;
	
	return (*this);
}

void	RobotomyRequestForm::beSigned(Bureaucrat& b)
{
    if (this->getSigned())
        throw RobotomyRequestForm::FormAlreadySignedException();
	else if (b.getGrade() <= this->getSignGrade())
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
        std::cerr << executor.getName() << " couldn't execute the RobotomyRequestForm because ";
        std::cerr << e.what() << '\n';
        return ;
    }
	
	std::cout << "*Drilling noises*" << std::endl;
	std::srand(time(NULL));
	int	i = std::rand() % 2;
	if (i)
		std::cout << this->_target << " has been successfully robotomized." << std::endl;
	else
		std::cout << this->_target << " robotomization has failed." << std::endl;
		
}
