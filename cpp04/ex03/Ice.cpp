/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:55:02 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 09:45:17 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called" << std::endl;
}

Ice::Ice(Ice const &cpyFrom)
{
	*this = cpyFrom;
	
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice	&Ice::operator=(Ice const &ice)
{
	this->_type = ice._type;

	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}
