/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:25:21 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/14 17:03:26 by hgeffroy         ###   ########.fr       */
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

void	Contact::SetFirstName()
{
	int	count;
	
	count = 0;
	std::cout << "First name : ";
	std::getline(std::cin, FirstName);
	while (CheckFirstName(FirstName) == false)
	{
		if (count > 2)
		{
			std::cout << "Fuck you" << std::endl;
			exit(0);
		}
		count++;
		std::cout << "Wrong format, please try again : ";
		std::getline(std::cin, FirstName);
	}
}

void	Contact::SetLastName()
{
	int	count;
	
	count = 0;
	std::cout << "Last name : ";
	std::getline(std::cin, LastName);
	while (CheckLastName(LastName) == false)
	{
		if (count > 2)
		{
			std::cout << "Fuck you" << std::endl;
			exit(0);
		}
		count++;
		std::cout << "Wrong format, please try again : ";
		std::getline(std::cin, LastName);
	}
}

void	Contact::SetNickname()
{
	int	count;
	
	count = 0;
	std::cout << "Nickname : ";
	std::getline(std::cin, Nickname);
	while (CheckNickname(Nickname) == false)
	{
		if (count > 2)
		{
			std::cout << "Fuck you" << std::endl;
			exit(0);
		}
		count++;
		std::cout << "Wrong format, please try again : ";
		std::getline(std::cin, Nickname);
	}
}

void	Contact::SetPhoneNumber()
{
	int	count;
	
	count = 0;
	std::cout << "Phone number : ";
	std::getline(std::cin, PhoneNumber);
	while (CheckPhoneNumber(PhoneNumber) == false)
	{
		if (count > 2)
		{
			std::cout << "Fuck you" << std::endl;
			exit(0);
		}
		count++;
		std::cout << "Wrong format, please try again : ";
		std::getline(std::cin, PhoneNumber);
	}
}

void	Contact::SetDarkestSecret()
{
	int	count;
	
	count = 0;
	std::cout << "Darkest secret : ";
	std::getline(std::cin, DarkestSecret);
	while (CheckNickname(DarkestSecret) == false)
	{
		if (count > 2)
		{
			std::cout << "Fuck you" << std::endl;
			exit(0);
		}
		count++;
		std::cout << "Wrong format, please try again : ";
		std::getline(std::cin, DarkestSecret);
	}
}

void	Contact::SetContact(int index)
{
	Index = index;
	SetFirstName();
	SetLastName();
	SetNickname();
	SetPhoneNumber();
	SetDarkestSecret();
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
