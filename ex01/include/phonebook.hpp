/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:19:09 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/14 15:17:45 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <array>
# include <cstdlib>
# include <iomanip>

# include "contact.hpp"
# include "check.hpp"

class	PhoneBook
{
	private:
		std::array<Contact, 8>	repo;
		int						nb;
		
	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact(int index);
		void	PrintDetailedContact(int index);
		void	PrintPhonebook();
		bool	CheckIndex(std::string index);
};

#endif