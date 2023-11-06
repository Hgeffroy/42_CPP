/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:00:59 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/06 09:42:40 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name("DiamondTrap")
{
	ClapTrap::name = name + "_clap_name";
	// this->hitPoints = FragTrap::getHitPoints();
	// this->energyPoints = ScavTrap::getEnergyPoints();
	// this->attackDamage = FragTrap::getAttackDamage();	
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "Final Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	// this->hitPoints = FragTrap::getHitPoints();
	// this->energyPoints = ScavTrap::getEnergyPoints();
	// this->attackDamage = FragTrap::getAttackDamage();	
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	
	std::cout << "Diamondtrap was created with " << this->hitPoints << " hit points." << std::endl;
	std::cout << "Diamondtrap was created with " << this->energyPoints << " energy points." << std::endl;
	std::cout << "Diamondtrap was created with " << this->attackDamage << " attack damage." << std::endl;
	std::cout << "Final Parametric constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &param)
{
	this->name = param.name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = param.hitPoints;
	this->energyPoints = param.energyPoints;
	this->attackDamage = param.attackDamage;
	std::cout << "Final Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Final Default destructor called" << std::endl;
}	

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &param)
{
	this->name = param.name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = param.hitPoints;
	this->energyPoints = param.energyPoints;
	this->attackDamage = param.attackDamage;
	
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Clap name : " << ClapTrap::name << std::endl;
	std::cout << "Name : " << this->name << std::endl;
}

