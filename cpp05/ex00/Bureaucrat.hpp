/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:19:12 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/01 10:09:51 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	
private:

	std::string const	_name;
	int					_grade;
	
public:

	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(Bureaucrat const& copyFrom);
	Bureaucrat(std::string name, int grade);

	Bureaucrat& operator=(Bureaucrat const& rightValue);
	Bureaucrat& operator++();
	Bureaucrat& operator--();

	std::string	getName() const;
	int			getGrade() const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("grade is too high\n");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("grade is too low\n");
		}
	};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& rightValue);

#endif