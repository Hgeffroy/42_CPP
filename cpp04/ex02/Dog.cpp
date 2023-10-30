/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:15:54 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 10:29:22 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_brain = new Brain();
	this->_type = "Dog";
	
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(Dog const &cpyFrom)
{
	this->_type = cpyFrom._type;

	this->_brain = new Brain();
	*(this->_brain) = *(cpyFrom._brain);

	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->_type = dog._type;
	
	delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *(dog._brain);

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Ouaf" << std::endl;
}

