/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:03:28 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 09:15:19 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Undefined"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::~Form()
{
	
}

Form::Form(Form const& cpyFrom)
{
	
}

Form::Form(std::string name, int signGrade, int execGrade)
{
	
}

Form& Form::operator=(Form const& rightValue)
{
	
}