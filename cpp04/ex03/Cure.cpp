/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 08:32:14 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/29 08:33:57 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

Cure::Cure(Cure const &cpyFrom)
{
	this->_type = cpyFrom._type;
	
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure	&Cure::operator=(Cure const &cure)
{
	this->_type = cure._type;

	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}