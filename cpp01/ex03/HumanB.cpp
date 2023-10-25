/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:18:40 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/24 08:34:54 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName) : name(newName)
{
	std::cout << "HumanB: Default constructor called" << std::endl;
	weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "HumanB: Default destructor called" << std::endl;
}

void	HumanB::attack()
{
	if (weapon == NULL)
		std::cout << name << " n'est pas arme" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}
