/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:04:48 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/08 15:43:44 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	Base*	random;

	std::cout << "Random: " << std::endl;
	random = generate();
	identify(random);
	identify(*random);
	delete random;
	std::cout << std::endl;

	std::cout << "Pointer A: " << std::endl;
	Base*	test1 = new (A);
	identify(test1);
	identify(*test1);
	delete	test1;
	std::cout << std::endl;

	std::cout << "Pointer B: " << std::endl;
	Base*	test2 = new (B);
	identify(test2);
	identify(*test2);
	delete	test2;
	std::cout << std::endl;

	std::cout << "Pointer C: " << std::endl;
	Base*	test3 = new (C);
	identify(test3);
	identify(*test3);
	delete	test3;
	std::cout << std::endl;


}