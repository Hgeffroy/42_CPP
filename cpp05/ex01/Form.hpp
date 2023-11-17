/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:02:42 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 10:24:08 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:

	std::string const	_name;
	bool				_signed;
	int	const			_signGrade;
	int const			_execGrade;
	
	Form();
	
public:

	~Form();
	Form(Form const& cpyFrom);
	Form(std::string name, int signGrade, int execGrade);

	Form& operator=(Form const& rightValue);

	std::string	getName() const;
	bool		getSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	void	beSigned(Bureaucrat &b);

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

	class FormAlreadySignedException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, Form const& rightValue);

#endif