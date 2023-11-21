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
