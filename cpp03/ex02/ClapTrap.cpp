/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:56:34 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/24 10:45:05 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor caalled" << std::endl;
}

ClapTrap::ClapTrap(std::string param) : hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Parametric constructor called" << std::endl;
	this->name = param;
}

ClapTrap::ClapTrap(ClapTrap const &param)
{
	this->name = param.name;
	this->hitPoints = param.hitPoints;
	this->energyPoints = param.energyPoints;
	this->attackDamage = param.attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << this->name << " can't do anything anymore." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << this->name << " can't do anything anymore." << std::endl;
		return ;
	}
	this->hitPoints -= amount;
	std::cout << this->name << " has taken " << amount << " damage and now has " << this->hitPoints << " hp left." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << this->name << " can't do anything anymore." << std::endl;
		return ;
	}
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << this->name << " has healed " << amount << " hp and now has " << this->hitPoints << " hp left." << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &param)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = param.name;
	this->hitPoints = param.hitPoints;
	this->energyPoints = param.energyPoints;
	this->attackDamage = param.attackDamage;

	return (*this);
}
// Mettre la surcharge d'operateur egal.