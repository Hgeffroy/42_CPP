/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:28:06 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/26 12:28:27 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Undefined")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &param)
{
	this->type = param.type;
	
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &param)
{
	this->type = param.type;

	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Random Wronganimal sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}