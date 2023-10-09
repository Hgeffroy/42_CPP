/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:25:27 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/09 17:10:23 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string newType) : type(newType)
{
	
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
