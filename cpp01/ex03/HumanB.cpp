/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:18:40 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/09 17:27:02 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName) : name(newName)
{
	// weapon = new Weapon;
	weapon = NULL;
}

HumanB::~HumanB()
{
	// delete	weapon;
}

void	HumanB::attack()
{
	if (weapon == NULL)
		std::cout << name << "est par armeeeeeeeeee" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}
