/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:13:43 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 10:01:01 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &cpyFrom)
{
	this->_type = cpyFrom._type;
	
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &wrongCat)
{
	this->_type = wrongCat._type;

	return (*this);
}
