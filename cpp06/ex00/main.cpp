/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:39:44 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/08 12:39:44 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "The program needs exactly one argument to run" << std::endl;
		return (1);
	}

	std::string	s = av[1];
	ScalarConverter::convert(s);
	ScalarConverter::print();
}

// Check les inf !!