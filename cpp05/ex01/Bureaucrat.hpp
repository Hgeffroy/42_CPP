/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:19:12 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 08:12:26 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	
private:

	std::string const	_name;
	int					_grade;
	
	Bureaucrat();
	
public:

	~Bureaucrat();
	Bureaucrat(Bureaucrat const& copyFrom);
	Bureaucrat(std::string name, int grade);

	Bureaucrat& operator=(Bureaucrat const& rightValue);
	Bureaucrat& operator++();
	Bureaucrat& operator--();

	std::string	getName() const;
	int			getGrade() const;

	void	signForm(Form &f);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& rightValue);

#endif