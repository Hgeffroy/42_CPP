/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:02:11 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/26 16:08:56 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "This program should be ran with one argument" << std::endl;
		return (-1);
	}

	int 			i = 0;
	std::stack<int>	stack;

	while (av[1][i])
	{
		if (i % 2)
		{
			if (av[1][i] != ' ')
			{
				std::cout << "Wrong arguments" << std::endl;
				return (-1);
			}
		}
		else
		{
			if (std::isdigit(av[1][i]))
				stack.push(std::atoi(&av[1][i]));
			else if (isop(av[1][i]))
			{
				int err = compute(stack, av[1][i]);
				if (err == -1)
				{
					std::cout << "Not enough numbers in the stack to process operand" << std::endl;
					return (-1);
				}
				else if (err == -2)
				{
					std::cout << "Division by 0 couldn't be processed" << std::endl;
					return (-1);
				}
			}
			else
			{
				std::cout << "Wrong arguments" << std::endl;
				return (-1);
			}
		}
		i++;
	}

	if (stack.size() != 1)
	{
		std::cout << "There are still elements in the stack" << std::endl;
		return (-1);
	}

	std::cout << stack.top() << std::endl;
	return (0);
}