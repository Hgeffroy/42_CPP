/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:10:01 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/29 08:30:11 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	
private:

	std::string	_name;
	AMateria	*_inventory[4];
	
public:

	Character();
	Character(std::string name);
	Character(Character const &cpyFrom);
	~Character();

	Character &operator=(Character const &character);
	
	std::string const	& getName() const;
	void 				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter& target);
	
};

#endif