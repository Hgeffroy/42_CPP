/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:58:55 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/06 09:17:17 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringSTR = &str;
	std::string		&stringREF = str;

	std::cout << "Memory address of the string: " << &str << std::endl;
	std::cout << "Memory address held by stringSTR: " << stringSTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of the string: " << str << std::endl;
	std::cout << "Value pointed by stringSTR: " << *stringSTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;

	return (0);
}