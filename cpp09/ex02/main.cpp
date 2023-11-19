/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:03:43 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/19 13:56:45 by hgeffroy         ###   ########.fr       */
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


	fillContainer(av, v); //try catch
	v = sort(v, 3);
	printContainer(v, "Vector");
}