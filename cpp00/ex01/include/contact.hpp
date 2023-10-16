/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:19:04 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/13 08:43:54 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
		int		SetFirstName();
		int		SetLastName();
		int		SetNickname();
		int		SetPhoneNumber();
		int		SetDarkestSecret();
		void	PrintContact();
		void	PrintOneContact();
};



#endif
