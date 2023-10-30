/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:13:43 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 09:44:37 by hgeffroy         ###   ########.fr       */
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
	*this = cpyFrom;
	
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &wrongCat)
{
	this->_type = wrongCat._type;

	return (*this);
}
