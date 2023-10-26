/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:03:52 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/26 11:36:17 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Undefined")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &param)
{
	this->type = param.type;
	
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &param)
{
	this->type = param.type;

	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Random animal sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

