/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:19:03 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/24 08:47:21 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int	main()
{
	ClapTrap	c("Pollux");
	
	c.attack("the frisbee");
	c.takeDamage(5);
	c.beRepaired(3);
	c.takeDamage(8);
	c.attack("the ball");
	
}