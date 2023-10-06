/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:30:39 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/06 15:22:07 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <Weapon.hpp>

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;
	
public:
	HumanA(std::string newName, Weapon &newWeapon);
	~HumanA();
	void	attack();
};


#endif