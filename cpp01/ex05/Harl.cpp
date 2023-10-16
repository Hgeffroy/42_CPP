/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:56:42 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/14 10:15:01 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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

Harl::Harl(void)
{
	
}
		
Harl::~Harl(void)
{
	
}
void	Harl::complain(std::string level)
{
	const messages		tab[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const std::string	tablevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					i = 0;
	
	while (i < 4)
	{
		if (tablevel[i] == level)
			break;
		i++;
	}
	
	if (i == 4)
		std::cout << "No such level dumbass" << std::endl;
	
	(this->*(tab[i]))();
}