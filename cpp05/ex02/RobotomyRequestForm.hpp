/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:55:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/06 16:02:27 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <time.h>

class RobotomyRequestForm : public AForm
{
private:

	RobotomyRequestForm();
	std::string const	_target;

public:

	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& cpyFrom);
	
	RobotomyRequestForm& operator=(RobotomyRequestForm const& rightValue);
	
	void	beSigned(Bureaucrat b);
	void	execute(Bureaucrat const& executor) const;

	
};

#endif