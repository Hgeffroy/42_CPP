/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:02:42 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 14:29:36 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:

	std::string const	_name;
	bool				_signed;
	int	const			_signGrade;
	int const			_execGrade;
	
protected:

	//Faire les setters ici ?
	
public:

	AForm();
	virtual ~AForm();
	AForm(AForm const& cpyFrom);
	AForm(std::string name, int signGrade, int execGrade);

	AForm& operator=(AForm const& rightValue);

	std::string	getName() const;
	bool		getSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	virtual void	beSigned(Bureaucrat b) = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("his grade is too high\n");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("his grade is too low\n");
		}
	};
};

#endif