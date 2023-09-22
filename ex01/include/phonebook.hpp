/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:19:09 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/22 13:14:23 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <sstream>

# include "contact.hpp"
# include "check.hpp"

class	PhoneBook
{
	private:
		Contact	repo[8];
		int		nb;
		
	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact(int index);
		void	PrintDetailedContact(int index);
		void	PrintPhonebook();
		bool	CheckIndex(std::string strindex);
		bool	OneContact();
};

#endif