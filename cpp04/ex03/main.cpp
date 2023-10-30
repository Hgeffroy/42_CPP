/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:37:35 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 07:05:09 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(1, *bob);

	me->unequip(2);
	
	delete tmp;
	delete bob;
	delete me;
	delete src;
	
	return 0;
}