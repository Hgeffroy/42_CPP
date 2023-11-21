/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:03:43 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/21 09:34:56 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	std::vector<int>	v;

	if (ac < 3)
	{
		std::cerr << "You need at least 2 integers to sort something you moron" << std::endl;
		return (-1);
	}
	v = FJSort(av);
	printContainer(v, "Vector");
}
