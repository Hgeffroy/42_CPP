/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:19:03 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/24 15:39:33 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	f("Isko");
	FragTrap	g("Noname");
	
	g = f;
	f.attack("the frisbee");
	f.takeDamage(5);
	f.beRepaired(3);
	f.takeDamage(8);
	f.attack("the ball");
	f.highFivesGuys();
	g.highFivesGuys();
	
}