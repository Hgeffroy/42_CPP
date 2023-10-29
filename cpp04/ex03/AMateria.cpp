/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:31:33 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/29 08:30:47 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Undefined")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called" << std::endl;
}

AMateria::AMateria(AMateria const &cpyFrom)
{
	this->_type = cpyFrom._type;

	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	
	std::cout << "AMateria parametric constructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &amateria)
{
	// this->_type = amateria.type; Pourquoi on en a pas besoin ?

	return(*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}