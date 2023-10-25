/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:19:03 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/24 10:47:08 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	s("Isko");

	s.attack("the frisbee");
	s.takeDamage(5);
	s.beRepaired(3);
	s.takeDamage(8);
	s.attack("the ball");
	s.guardGate();
	
}