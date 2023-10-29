/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:03:52 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 09:58:08 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Undefined")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &cpyFrom)
{
	this->_type = cpyFrom._type;
	
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &animal)
{
	this->_type = animal._type;

	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Random animal sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}

