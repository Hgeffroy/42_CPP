/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:13:43 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/26 14:44:28 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &param)
{
	this->type = param.type;
	
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &param)
{
	this->type = param.type;

	return (*this);
}
