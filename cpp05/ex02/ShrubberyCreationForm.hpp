/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:56:55 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/31 13:08:23 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:

	ShrubberyCreationForm();
	std::string const	_target;

public:

	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& cpyFrom);
	
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rightValue);

	void	beSigned(Bureaucrat b);
	void	execute(Bureaucrat const& executor) const;

	
};

#endif