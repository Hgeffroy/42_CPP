/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:37:21 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/19 16:03:10 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Deafult constructor called" << std::endl;
	this->nb = 0;
}

Fixed::Fixed(int const param)
{
	this->nb = param << this->fracBits;
}

Fixed::Fixed(float const param)
{
	this->nb = roundf(param * (1 << this->fracBits));
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &param)
{
	std::cout << "Parametric constructor called" << std::endl;
	*this = param;
}

Fixed	&Fixed::operator=(Fixed const &param)
{
	std::cout << "Assignation operator called" << std::endl;
	this->nb = param.nb;

	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &param)
{
	o << param.toFloat();
	return (o);
}

int		Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nb);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->nb = raw;
}

int		Fixed::toInt(void) const
{
	return (this->nb >> this->fracBits);
}

float	Fixed::toFloat(void) const
{
	return ((double)this->nb / (double)(1 << this->fracBits));
}
