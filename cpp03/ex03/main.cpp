/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:19:03 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/26 10:54:38 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	dt("Freestyle");

	dt.whoAmI();
	dt.attack("the frisbee");
	dt.takeDamage(5);
	dt.beRepaired(3);
	dt.takeDamage(8);
	dt.attack("the ball");
	dt.highFivesGuys();

	return (0);
	
}