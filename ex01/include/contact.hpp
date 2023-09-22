/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:19:04 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/14 16:23:46 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	private:
		int			Index;
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	
	public:
		Contact();
		~Contact();
		void	SetContact(int index);
		void	SetFirstName();
		void	SetLastName();
		void	SetNickname();
		void	SetPhoneNumber();
		void	SetDarkestSecret();
		void	PrintContact();
		void	PrintOneContact();
};



#endif
