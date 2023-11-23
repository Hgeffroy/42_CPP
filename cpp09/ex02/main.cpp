/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:03:43 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/23 17:28:19 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	std::vector<int>	v;
	std::deque<int>		dq;

	if (ac < 3)
	{
		std::cerr << "You need at least 2 integers to sort something you moron" << std::endl;
		return (-1);
	}

	struct timeval	startTime;
	int 			timeToSort;

	if (gettimeofday(&startTime, NULL) < 0)
		return (-1);
	v = FJSort< std::vector< int >, std::vector< std::pair<int, int> > >(av);
	timeToSort = getTime(startTime);
	if (timeToSort < 0)
		return (-1);
	printContainer(v, "Vector");
	std::cout << "Time to sort with vectors (in us): " << timeToSort << std::endl;

	if (gettimeofday(&startTime, NULL) < 0)
		return (-1);
	dq = FJSort< std::deque< int >, std::deque< std::pair<int, int> > >(av);
	timeToSort = getTime(startTime);
	if (timeToSort < 0)
		return (-1);
	printContainer(dq, "Deque");
	std::cout << "Time to sort with deque (in us): " << timeToSort << std::endl;


}

// ./PmergeMe 7 8 6 4 2 5 9 8 7 1 2 3 5 8 1
// ./PmergeMe 3 6 7 8 8 9 8