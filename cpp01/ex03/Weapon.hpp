/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:23:12 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/09 17:03:24 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string	type;
	
public:
	Weapon();
	Weapon(std::string newType);
	~Weapon();
	const std::string	&getType();
	void				setType(std::string newType);
};

#endif
