/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:34:00 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/24 12:33:02 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	checkArg(std::string arg)
{
	std::istringstream	iss(arg);
	int 				i;

	iss >> i;
	if (!iss.eof() || iss.fail() || i < 0)
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

std::vector<int>	initJSSequence(int	n)
{
	int 				prev = 1;
	int 				next = 1;
	int 				i;
	std::vector<int>	v;

	v.push_back(1);
	while (next < n)
	{
		i = next;
		while (i > prev)
		{
			v.push_back(i);
			i--;
		}
		prev = next;
		next += 2 * i;
	}
	i = n;
	while (i > prev)
	{
		v.push_back(i);
		i--;
	}
	return (v);
}