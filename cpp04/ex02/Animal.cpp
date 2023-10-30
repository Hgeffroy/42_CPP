/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:03:52 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 09:44:09 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("Undefined")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &cpyFrom)
{
	*this = cpyFrom;
	
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &animal)
{
	this->_type = animal._type;

	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "Random animal sound" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}

