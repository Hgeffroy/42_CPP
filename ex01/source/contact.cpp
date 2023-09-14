/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:25:21 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/14 15:01:16 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "phonebook.hpp"

Contact::Contact(void)
{
	std::cout << "Default Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Default Contact destructor called" << std::endl;
}

void	Contact::SetContact(int index)
{
	// Faire un check de l'entree, chaine de caracteres pour tout sauf le phone number qui est un peu different.
	Index = index;
	std::cout << "First name : ";
	std::getline(std::cin, FirstName);
	while (CheckFirstName(FirstName) == false)
	{
		std::cout << "Wrong format, please try again : ";
		std::getline(std::cin, FirstName);
	}
	std::cout << "Last name : ";
	std::getline(std::cin, LastName);
	while (CheckLastName(LastName) == false)
	{
		std::cout << "Wrong format, please try again : ";
		std::getline(std::cin, LastName);
	}
	std::cout << "Nickname : ";
	std::getline(std::cin, Nickname);
	while (CheckNickname(Nickname) == false)
	{
		std::cout << "Wrong format, please try again : ";
		std::getline(std::cin, Nickname);
	}
	std::cout << "Phone number : ";
	std::getline(std::cin, PhoneNumber);
	while (CheckPhoneNumber(PhoneNumber) == false)
	{
		std::cout << "Wrong format, please try again : ";
		std::getline(std::cin, PhoneNumber);
	}
	std::cout << "Darkest secret : ";
	std::getline(std::cin, DarkestSecret);
	while (CheckNickname(DarkestSecret) == false)
	{
		std::cout << "Wrong format, please try again : ";
		std::getline(std::cin, DarkestSecret);
	}
}

void	Contact::PrintContact()
{
	std::string	str;
	
	std::cout << std::right << std::setw(10);
	std::cout << Index;
	std::cout << "|";
	std::cout << std::right << std::setw(10);
	if (FirstName.length() <= 10)
		std::cout << FirstName;
	else
		std::cout << FirstName.substr(0, 9) + ".";
	std::cout << "|";
	std::cout << std::right << std::setw(10);
	if (LastName.length() <= 10)
		std::cout << LastName;
	else
		std::cout << LastName.substr(0, 9) + ".";
	std::cout << "|";
	std::cout << std::right << std::setw(10);
	if (Nickname.length() <= 10)
		std::cout << Nickname;
	else
		std::cout << Nickname.substr(0, 9) + ".";
	std::cout << std::endl;
}

void	Contact::PrintOneContact()
{
	std::cout << "First name : " << FirstName << std::endl;
	std::cout << "Last name : " << LastName << std::endl;
	std::cout << "Nickname : " << Nickname << std::endl;
	std::cout << "Phone number : " << PhoneNumber << std::endl;
	std::cout << "Darkest secret : " << DarkestSecret << std::endl;
}
