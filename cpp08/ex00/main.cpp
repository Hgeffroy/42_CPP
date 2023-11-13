/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:31:06 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/13 11:36:30 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::vector<int>	v;
	int 				test[] = {1, 56, 20};

	v.push_back(99);
	v.push_back(86);
	v.push_back(56);
	v.push_back(42);
	v.push_back(31);
	v.push_back(2);
	v.push_back(1);

	std::cout << "Tests for vectors" << std::endl << std::endl;

	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = v.end();
	int 						i = 0;
	for (it = v.begin(); it != ite; it++)
	{
		std::cout << "v[" << i << "] = " << *it << std::endl;
		i++;
	}
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		try
		{
			int	n = ::easyfind< std::vector< int > >(v, test[i]);
			std::cout << "Found " <<  n << " in v." << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << "Didn't find " << test[i] << " in v." << std::endl;
		}
	}
}