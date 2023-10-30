/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:11:29 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 09:43:41 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;

	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const &cpyFrom)
{
	*this = cpyFrom; 
	
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &cat)
{
	this->_type = cat._type;
	
	delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *(cat._brain); 

	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}


