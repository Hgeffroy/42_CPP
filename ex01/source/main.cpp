/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:49:41 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/14 15:18:21 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "phonebook.hpp"

/*
Faire les checks.
*/
int	main(void)
{
	PhoneBook 	test;
	std::string	line;
	int			index;

	index = 0;
	while(1)
	{
		std::getline(std::cin, line);
		if (line == "EXIT")
			return 0;
		else if (line == "ADD")
		{
			test.AddContact(index);
			if (index == 7)
				index = 0;
			else
				index++;
		}
		else if (line == "SEARCH")
		{
			test.PrintPhonebook();
			std::cout << "Choose a contact to display : ";
			std::getline(std::cin, line);
			while (test.CheckIndex(line) == false)
				std::getline(std::cin, line);
			test.PrintDetailedContact(std::stoi(line));
		}
		else
		{
			std::cout << line << ": Command not found" << std::endl;
		}
	}
	return 0;
}
