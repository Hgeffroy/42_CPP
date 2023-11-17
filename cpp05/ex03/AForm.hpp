/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:02:42 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 10:31:11 by hgeffroy         ###   ########.fr       */
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
	void		setSigned();

	virtual void	beSigned(Bureaucrat& b) = 0;
	virtual void	execute(Bureaucrat const& executor) const;

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

	class FormNotSignedException : public std::exception
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

std::ostream& operator<<(std::ostream& os, AForm const& rightValue);

#endif