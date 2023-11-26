/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:03:43 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/26 16:09:49 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	std::vector<int>	v;
	std::deque<int>		dq;

	if (ac < 2)
	{
		std::cerr << "You need at least one integer to sort something you moron" << std::endl;
		return (-1);
	}

	struct timeval	startTime;
	int 			timeToSort;

	if (gettimeofday(&startTime, NULL) < 0)
		return (-1);
	try
	{
		v = FJSort< std::vector< int >, std::vector< std::pair<int, int> > >(av);
	}
	catch (std::exception& e)
	{
		std::cerr << "One of the arguments is not a positive integer" << std::endl;
		return (-1);
	}
	timeToSort = getTime(startTime);
	if (timeToSort < 0)
		return (-1);
	try
	{
		isSorted(v);
	}
	catch (std::exception& e)
	{
		std::cout << "Vector not sorted" << std::endl;
	}
	printContainer(v, "Vector");
	std::cout << "Time to sort with vectors (in us): " << timeToSort << std::endl;

	if (gettimeofday(&startTime, NULL) < 0)
		return (-1);
	try
	{
		dq = FJSort< std::deque< int >, std::deque< std::pair<int, int> > >(av);
	}
	catch (std::exception& e)
	{
		std::cerr << "One of the arguments is not a positive integer" << std::endl;
	}
	timeToSort = getTime(startTime);
	if (timeToSort < 0)
		return (-1);

	try
	{
		isSorted(v);
	}
	catch (std::exception& e)
	{
		std::cout << "Deque not sorted" << std::endl;
	}
	printContainer(dq, "Deque");
	std::cout << "Time to sort with deque (in us): " << timeToSort << std::endl;


}
