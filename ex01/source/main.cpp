/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:49:41 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/22 13:14:01 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		PrintMenu();
		std::getline(std::cin, line);
		if (std::cin.eof())
			return (-1);
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
			if (test.OneContact() == false)
			{
				std::cout << "Please add a contact before" << std::endl;
				continue ;
			}
			test.PrintPhonebook();
			std::cout << "Choose a contact to display : ";
			std::getline(std::cin, line);
			if (std::cin.eof())
				return (-1);
			while (test.CheckIndex(line) == false)
			{
				std::getline(std::cin, line);
				if (std::cin.eof())
					return (-1);
			}
			std::istringstream	buffer(line);
			buffer >> index;
			test.PrintDetailedContact(index);
		}
		else
		{
			std::cout << line << ": Command not found" << std::endl;
		}
	}
	return 0;
}
