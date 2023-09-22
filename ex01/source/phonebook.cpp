/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:25:53 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/22 13:15:43 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout << std::endl;
	std::cout << "\u2554";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j < 11; j++)
			std::cout << "\u2550";
		std::cout << "\u2566";
	}
	for (int j = 1; j < 11; j++)
		std::cout << "\u2550";
	std::cout << "\u2557";
	std::cout << std::endl;
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	std::cout << "INDEX   ";
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	std::cout << "FIRST NAME";
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	std::cout << "LAST NAME ";
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	std::cout << "NICKNAME ";
	std::cout << "\u2551";
	std::cout << std::endl;
	std::cout << "\u2560";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j < 11; j++)
			std::cout << "\u2550";
		std::cout << "\u256C";
	}
	for (int j = 1; j < 11; j++)
		std::cout << "\u2550";
	std::cout << "\u2563";
	std::cout << std::endl;
	for (int i = 0; i < nb; i++)
		repo[i].PrintContact();
	std::cout << "\u255A";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j < 11; j++)
			std::cout << "\u2550";
		std::cout << "\u2569";
	}
	for (int j = 1; j < 11; j++)
		std::cout << "\u2550";
	std::cout << "\u255D";
	std::cout << std::endl;
}

void	PhoneBook::PrintDetailedContact(int index)
{
	repo[index].PrintOneContact();
}

bool	PhoneBook::CheckIndex(std::string strindex)
{
	int	index;
	
	std::istringstream	buffer(strindex);
	buffer >> index;
	if (strindex.length() != 1)
	{
		std::cout << "Wrong format, please try again : ";
		return false;
	}
	else if (std::isdigit(strindex[0]) == false)
	{
		std::cout << "Wrong format, please try again : ";
		return false;
	}
	else if (index >= nb)
	{
		std::cout << "You haven't that much friends ! Please try again : ";
		return false;
	}
	return(true);
}

bool	PhoneBook::OneContact()
{
	if (nb == 0)
		return false;
	else
		return true;
}