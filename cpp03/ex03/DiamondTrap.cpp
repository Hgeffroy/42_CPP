/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:00:59 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/26 10:55:09 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name("DiamondTrap")
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "Final Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	this->clap_name = ClapTrap::name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "Final Parametric constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &param)
{
	this->name = param.name;
	this->clap_name = param.clap_name;
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
	this->clap_name = param.clap_name;
	this->hitPoints = param.hitPoints;
	this->energyPoints = param.energyPoints;
	this->attackDamage = param.attackDamage;
	
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Clap name : " << this->clap_name << std::endl;
	std::cout << "Name : " << this->name << std::endl;
}

