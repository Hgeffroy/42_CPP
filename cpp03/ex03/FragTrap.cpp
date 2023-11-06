/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:51:07 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/06 09:39:04 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// int	FragTrap::maxHitPoints;
// int	FragTrap::maxEnergyPoints;
// int	FragTrap::maxAttackDamage;

FragTrap::FragTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	// this->maxHitPoints = 100;
	// this->maxEnergyPoints = 100;
	// this->maxAttackDamage = 30;
	std::cout << "Another different default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string param)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	// this->maxHitPoints = 100;
	// this->maxEnergyPoints = 100;
	// this->maxAttackDamage = 30;
	this->name = param;
	std::cout << "Another different parametric constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Another different default constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &param)
{
	this->name = param.name;
	this->hitPoints = param.hitPoints;
	this->energyPoints = param.energyPoints;
	this->attackDamage = param.attackDamage;
	
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->name << " wants to high five !" << std::endl;
}

// int		FragTrap::getHitPoints() const
// {
// 	return (this->maxHitPoints);
// }

// int		FragTrap::getEnergyPoints() const
// {
// 	return (this->maxEnergyPoints);
// }

// int		FragTrap::getAttackDamage() const
// {
// 	return (this->maxAttackDamage);
// }

