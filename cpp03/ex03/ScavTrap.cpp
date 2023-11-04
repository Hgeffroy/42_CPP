/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:03:22 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/04 13:27:40 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	ScavTrap::maxHitPoints;
int	ScavTrap::maxEnergyPoints;
int	ScavTrap::maxAttackDamage;

ScavTrap::ScavTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->maxHitPoints = 100;
	this->maxEnergyPoints = 50;
	this->maxAttackDamage = 20;
	std::cout << "A different default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string param)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->maxHitPoints = 100;
	this->maxEnergyPoints = 50;
	this->maxAttackDamage = 20;
	this->name = param;
	std::cout << "A different parametric constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "A different default constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &param)
{
	this->name = param.name;
	this->hitPoints = param.hitPoints;
	this->energyPoints = param.energyPoints;
	this->attackDamage = param.attackDamage;
	
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << this->name << " is now in gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << this->name << " can't do anything anymore." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

int	ScavTrap::getHitPoints() const
{
	return (this->maxHitPoints);
}

int	ScavTrap::getEnergyPoints() const
{
	return (this->maxEnergyPoints);
}

int	ScavTrap::getAttackDamage() const
{
	return (this->maxAttackDamage);
}
