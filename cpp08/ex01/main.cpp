/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:33:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/22 14:34:58 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	{
		Span				test(10);
		std::vector<int>	toAppend;

		toAppend.push_back(6);
		toAppend.push_back(3);
		toAppend.push_back(17);
		toAppend.push_back(9);
		toAppend.push_back(11);

		try
		{
			test.addNumber(301);
			test.addRangeNumber(toAppend.begin(), toAppend.end());
			test.addNumber(31);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "longestSpan: " << test.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << test.shortestSpan() << std::endl;
	}

	{
		Span	test(10000);
		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
		{
			const int value = rand();
			test.addNumber(value);
		}
		std::cout << "longestSpan: " << test.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << test.shortestSpan() << std::endl;
	}
}