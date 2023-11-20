/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:14:17 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/20 11:14:17 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	fillContainer(char **av, std::vector<int>& v)
{
	int i = 1;

	while (av[i])
	{
		checkArg(av[i]);
		v.push_back(std::atoi(av[i]));
		i++;
	}
}


void	printContainer(std::vector<int>& v, std::string name)
{
	std::vector<int>::iterator	it;
	std::cout << name << ": ";
	for (it = v.begin(); it != v.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
