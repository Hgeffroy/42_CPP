/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:56:42 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/19 12:42:57 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl: Default constructor called" << std::endl;
}
		
Harl::~Harl(void)
{
	std::cout << "Harl: Default destructor called" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	const std::string	tablevel[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};
	int					i = 0;
	
	while (i < 4)
	{
		if (tablevel[i] == level)
			break;
		i++;
	}
	
	switch (i)
	{
		case 0:
			debug();
			//intentional fallthrough
		case 1:
			info();
			//intentional fallthrough
		case 2:
			warning();
			//intentional fallthrough
		case 3:
			error();
			break;
		default:
			std::cout << "No such level dumbass" << std::endl;
	}
}