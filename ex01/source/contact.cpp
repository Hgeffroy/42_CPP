/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:25:21 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/22 13:24:49 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(void)
{
	std::cout << "Default Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Default Contact destructor called" << std::endl;
}

int	Contact::SetFirstName()
{
	std::cout << "First name : ";
	std::getline(std::cin, FirstName);
	if (std::cin.eof())
		return (-1);
	while (CheckFirstName(FirstName) == false)
	{
		std::cout << RED"Wrong format, please try again : "END;
		std::getline(std::cin, FirstName);
		if (std::cin.eof())
			return (-1);
	}
	return (0);
}

int	Contact::SetLastName()
{
	std::cout << "Last name : ";
	std::getline(std::cin, LastName);
	if (std::cin.eof())
		return (-1);
	while (CheckLastName(LastName) == false)
	{
		std::cout << RED"Wrong format, please try again : "END;
		std::getline(std::cin, LastName);
		if (std::cin.eof())
			return (-1);
	}
	return (0);
}

int	Contact::SetNickname()
{
	std::cout << "Nickname : ";
	std::getline(std::cin, Nickname);
	if (std::cin.eof())
		return (-1);
	while (CheckNickname(Nickname) == false)
	{
		std::cout << RED"Wrong format, please try again : "END;
		std::getline(std::cin, Nickname);
		if (std::cin.eof())
			return (-1);
	}
	return (0);
}

int	Contact::SetPhoneNumber()
{
	std::cout << "Phone number : ";
	std::getline(std::cin, PhoneNumber);
	if (std::cin.eof())
		return (-1);
	while (CheckPhoneNumber(PhoneNumber) == false)
	{
		std::cout << RED"Wrong format, please try again : "END;
		std::getline(std::cin, PhoneNumber);
		if (std::cin.eof())
			return (-1);
	}
	return (0);
}

int	Contact::SetDarkestSecret()
{
	std::cout << "Darkest secret : ";
	std::getline(std::cin, DarkestSecret);
	if (std::cin.eof())
		return (-1);
	while (CheckNickname(DarkestSecret) == false)
	{
		std::cout << RED"Wrong format, please try again : "END;
		std::getline(std::cin, DarkestSecret);
		if (std::cin.eof())
			return (-1);
	}
	return (0);
}

void	Contact::SetContact(int index)
{
	Index = index;
	if (SetFirstName() < 0)
		return ;
	if (SetLastName())
		return ;
	if (SetNickname())
		return ;
	if (SetPhoneNumber())
		return ;
	if (SetDarkestSecret())
		return ;
}

void	Contact::PrintContact()
{
	std::string	str;
	
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	std::cout << Index;
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	if (FirstName.length() <= 10)
		std::cout << FirstName;
	else
		std::cout << FirstName.substr(0, 9) + ".";
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	if (LastName.length() <= 10)
		std::cout << LastName;
	else
		std::cout << LastName.substr(0, 9) + ".";
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	if (Nickname.length() <= 10)
		std::cout << Nickname;
	else
		std::cout << Nickname.substr(0, 9) + ".";
	std::cout << "\u2551";
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
