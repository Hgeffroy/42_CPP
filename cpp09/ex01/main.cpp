/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:02:11 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 15:38:21 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	isop(char c)
{
	char	op[] = "-+/*";
	int 	i = 0;

	while (op[i])
	{
		if (c == op[i])
			return true;
		i++;
	}
	return false;
}

int	compute(std::stack<int>& stack, char c)
{
	if (stack.size() < 2)
		return (-1); // Display error

	char	op[] = "-+/*";
	int 	i = 0;

	while (op[i])
	{
		if (c == op[i])
			break;
		i++;
	}

	int val2 = stack.top();
	stack.pop();
	int val1 = stack.top();
	stack.pop();

	std::cout << "val1: " << val1 << "; val2: " << val2 << std::endl;

	switch (i)
	{
		case 0:
			stack.push(val1 - val2);
			break;
		case 1:
			stack.push(val1 + val2);
			break;
		case 2:
			stack.push(val1 / val2);
			break;
		case 3:
			stack.push(val1 * val2);
			break;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "This program should be ran with one argument" << std::endl;

	int 			i = 0;
	std::stack<int>	stack;

	while (av[1][i])
	{
		if (i % 2)
		{
			if (av[1][i] != ' ')
				return (-1); // Display error
		}
		else
		{
			if (std::isdigit(av[1][i]))
				stack.push(std::atoi(&av[1][i]));
			else if (isop(av[1][i]))
				compute(stack, av[1][i]);
			else
				return (-1); // Display error
		}
		i++;
	}

	//Check la taile de la stack
	std::cout << stack.top() << std::endl;
}