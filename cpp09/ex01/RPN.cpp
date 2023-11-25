/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:20:13 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/22 12:35:02 by hgeffroy         ###   ########.fr       */
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
		return (-1);

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

	switch (i)
	{
		case 0:
			stack.push(val1 - val2);
			break;
		case 1:
			stack.push(val1 + val2);
			break;
		case 2:
			if (val2 == 0)
				return (-1);
			stack.push(val1 / val2); //Throw !
			break;
		case 3:
			stack.push(val1 * val2);
			break;
	}
	return (0);
}