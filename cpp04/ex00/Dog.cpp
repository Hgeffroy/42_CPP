/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:15:54 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 09:43:12 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{	
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const &cpyFrom)
{
	*this = cpyFrom;

	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->_type = dog._type;

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Ouaf" << std::endl;
}

