/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:03:22 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/24 12:16:33 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "A different default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string param)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
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
