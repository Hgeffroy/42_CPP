/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:25:53 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/14 15:19:39 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	nb = 0;
	std::cout << "Default PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Default PhoneBook destructor called" << std::endl;
}

void	PhoneBook::AddContact(int index)
{
	Contact	NewContact;

	NewContact.SetContact(index);
	repo[index] = NewContact;
	if (nb < 8)
		nb++;
}

void	PhoneBook::PrintPhonebook()
{
	for (int i = 0; i < nb; i++)
		repo[i].PrintContact();
}

void	PhoneBook::PrintDetailedContact(int index)
{
	repo[index].PrintOneContact();
}

bool	PhoneBook::CheckIndex(std::string index)
{
	if (index.length() != 1)
	{
		std::cout << "Wrong format, please try again : ";
		return false;
	}
	else if (std::isdigit(index[0]) == false)
	{
		std::cout << "Wrong format, please try again : ";
		return false;
	}
	else if (std::stoi(index) >= nb)
	{
		std::cout << "You haven't that much friends ! Please try again : ";
		return false;
	}
	return(true);
}