/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:58:26 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 08:17:53 by hgeffroy         ###   ########.fr       */
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

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpyFrom):
                        AForm("ShrubberyCreationForm", 145, 137), _target(cpyFrom._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rightValue)
{
	(void)rightValue;
	
	return (*this);
}

void	ShrubberyCreationForm::beSigned(Bureaucrat& b)
{
    if (this->getSigned())
        throw ShrubberyCreationForm::FormAlreadySignedException();
	else if (b.getGrade() <= this->getSignGrade())
		this->setSigned();
	else
		throw Bureaucrat::GradeTooLowException();
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    try
    {
        AForm::execute(executor);
    }
    catch(const std::exception& e)
    {
        std::cerr << executor.getName() << " couldn't execute the ShrubberyCreationForm because ";
        std::cerr << e.what() << '\n';
        return ;
    }

	std::string	filename = this->_target + "_shrubbery";
	std::ofstream	ofs(filename.c_str(), std::ofstream::out);
	
	ofs << "	              v .   ._, |_  .," << std::endl;
	ofs << "           `-._\\/  .  \\ /    |/_" << std::endl;
	ofs << "               \\  _\\, y | \\//" << std::endl;
	ofs << "         _\\_.___\\, \\/ -.\\||" << std::endl;
	ofs << "           `7-,--.`._||  / / ," << std::endl;
	ofs << "           /'     `-. `./ / |/_.'" << std::endl;
	ofs << "                     |    |//" << std::endl;
	ofs << "                     |_    /" << std::endl;
	ofs << "                     |-   |" << std::endl;
	ofs << "                     |   =|" << std::endl;
	ofs << "                     |    |" << std::endl;
	ofs << "--------------------/ ,  . \\--------._" << std::endl;

	ofs.close();
}
