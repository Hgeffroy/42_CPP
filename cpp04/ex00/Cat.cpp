/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:11:29 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 09:55:30 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const &cpyFrom)
{
	this->_type = cpyFrom._type;
	
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &cat)
{
	this->_type = cat._type;

	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}


