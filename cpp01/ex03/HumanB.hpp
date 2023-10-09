/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:44:33 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/09 17:17:52 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <Weapon.hpp>

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
	
public:
	HumanB(std::string newName);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &newWeapon);
};


#endif