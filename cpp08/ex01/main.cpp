/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:33:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/13 15:22:52 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span	test(10);

	try
	{
		test.addNumber(452);
		test.addNumber(418);
		test.addNumber(274);
		test.addNumber(166);
		test.addNumber(186);
		test.addNumber(157);
		test.addNumber(241);
		test.addNumber(55);
		test.addNumber(490);
		test.addNumber(317);
//		test.addNumber(301);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "longestSpan: " << test.longestSpan() << std::endl;
	std::cout << "shortestSpan: " << test.shortestSpan() << std::endl;

}