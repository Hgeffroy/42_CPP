/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:25:27 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/19 12:44:00 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon: Default constructor called" << std::endl;
}

Weapon::Weapon(std::string newType) : type(newType)
{
	std::cout << "Weapon: Default destructor called" << std::endl;
}

Weapon::~Weapon()
{
	
}

const std::string	&Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}
