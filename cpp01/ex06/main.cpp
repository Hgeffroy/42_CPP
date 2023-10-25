/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:56:45 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/16 16:16:29 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	harl;
	
	if (ac != 2)
	{
		std::cout << "Stop complaining so much you little whiner !" << std::endl;		
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}