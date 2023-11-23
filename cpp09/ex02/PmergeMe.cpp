/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:34:00 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/23 17:26:27 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	checkArg(std::string arg)
{
	std::istringstream	iss(arg);
	int 				i;

	iss >> i;
	if (!iss.eof() || iss.fail())
		throw std::exception();
}

int	getTime(struct timeval startTime) // Time in ms since startTime
{
	int				time;
	struct timeval	tv;

	if (gettimeofday(&tv, NULL) < 0)
		return (-1);
	time = (tv.tv_sec - startTime.tv_sec) * 1000000 + (tv.tv_usec - startTime.tv_usec);
	return (time);
}

void	printContainerPairs(std::vector< std::pair<int, int> >& v)
{
	std::vector< std::pair<int, int> >::iterator	it;
	int 						i = 0;

	for (it = v.begin(); it != v.end(); ++it)
	{
		std::cout << "v[" << i << "]: ";
		std::cout << "first: " << it->first << "; ";
		std::cout << "second: " << it->second << "; " << std::endl;
		i++;
	}
	std::cout << std::endl;
}
