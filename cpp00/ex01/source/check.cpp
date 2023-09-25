/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:16:28 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/22 13:23:15 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool	CheckPhoneNumber(std::string phonenumber)
{
	int	len;

	len = phonenumber.length();
	if (len != 10 && len != 12)
		return false;
	else if (len == 10)
	{
		for (int i = 0; i < len; i++)
		{
			if (std::isdigit(phonenumber[i]) == false)
				return false;
		}
		return true;
	}
	else
	{
		if (phonenumber[0] != '+')
			return false;
		for (int i = 1; i < len; i++)
		{
			if (std::isdigit(phonenumber[i]) == false)
				return false;
		}
		return true;
	}
}

bool	CheckFirstName(std::string firstname)
{
	if (firstname.length() == 0)
		return false;
	for (int i = 0; i < (int)firstname.length(); i++)
	{
		if (std::isalpha(firstname[i]) == false && firstname[i] != '-')
			return false;
	}
	return true;
}

bool	CheckLastName(std::string lastname)
{
	if (lastname.length() == 0)
		return false;
	for (int i = 0; i < (int)lastname.length(); i++)
	{
		if (std::isalpha(lastname[i]) == false && lastname[i] != '-' && lastname[i] != ' ')
			return false;
	}
	return true;
}

bool	CheckNickname(std::string nickname)
{
	for (int i = 0; i < (int)nickname.length(); i++)
	{
		if (std::isprint(nickname[i]) == false)
			return false;
	}
	return true;
}

void	PrintMenu(void)
{
	std::cout << std::endl;
	std::cout << GREEN"Write ADD to add a contact"END << std::endl;
	std::cout << GREEN"Write SEARCH to find a contact"END << std::endl;
	std::cout << GREEN"Write EXIT to exit the phonebook"END << std::endl;
	std::cout << std::endl;
}