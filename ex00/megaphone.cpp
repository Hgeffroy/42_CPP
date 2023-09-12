/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:02:51 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/12 13:46:00 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>

int	main (int ac, char **av)
{
	int	i;
	int	j;
	
	(void)av;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
			std::cout << (char)toupper(av[i][j]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
