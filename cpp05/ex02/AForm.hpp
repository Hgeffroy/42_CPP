/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:02:42 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/31 13:02:02 by hgeffroy         ###   ########.fr       */
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
		virtual const char*	what() const throw()
		{
			return ("his grade is too high.");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("his grade is too low.");
		}
	};

    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char*	what() const throw()
        {
            return ("the form is not signed.");
        }
    };

    class FormAlreadySignedException : public std::exception
    {
    public:
        virtual const char*	what() const throw()
        {
            return ("the form is already signed.");
        }
    };
	
};

#endif