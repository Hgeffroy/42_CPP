/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:40:10 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/08 12:40:10 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class   Intern
{

public:
    Intern();
    ~Intern();
    Intern(Intern const& cpyFrom);

    Intern& operator=(Intern const& rightValue);

    AForm*    makeForm(std::string form, std::string target);

	class InvalidFormException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Invalid form name.");
		}
	};

};

#endif