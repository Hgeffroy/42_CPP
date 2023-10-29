/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:15:54 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 10:05:54 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_brain = new Brain();
	this->_type = "Dog";
	
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const &cpyFrom)
{
	this->_type = cpyFrom._type;
	this->_brain = cpyFrom._brain;

	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->_type = dog._type;
	this->_brain = dog._brain;

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Ouaf" << std::endl;
}

