/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:14:51 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/29 10:10:44 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Undefined")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
		
	std::cout << "Character default constructor called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	
	std::cout << "Character default destructor called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
		
	std::cout << "Character parametric constructor called" << std::endl;
}

Character::Character(Character const &cpyFrom)
{
	this->_name = cpyFrom._name;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = cpyFrom._inventory[i]->clone();
	}
	
	std::cout << "Character copy contructor called" << std::endl;
}

Character &Character::operator=(Character const &character)
{
	this->_name = character._name;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = character._inventory[i]->clone();
	}

	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	int	i = 0;
	
	while (i < 4 && this->_inventory[i])
		i++;

	if (i == 4)
	{
		std::cout << "No place left in the inventory" << std::endl;
		return ;
	}
	
	this->_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	this->_inventory[idx]->use(target);
	delete this->_inventory[idx];
	this->_inventory[idx] = NULL;
}
