/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:37:21 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/20 12:33:44 by hgeffroy         ###   ########.fr       */
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

Fixed::Fixed(Fixed const &param)
{
	std::cout << "Parametric constructor called" << std::endl;
	*this = param;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
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

Fixed	&Fixed::operator++(void)
{
	this->nb++;
	
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++*this; //Rappelle la fonction au dessus.
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->nb--;

	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--*this; //Rappelle la fonction au dessus.
	return (tmp);
}

bool	Fixed::operator>(Fixed const &param)
{
	return (this->nb > param.nb);
}

bool	Fixed::operator>=(Fixed const &param)
{
	return (this->nb >= param.nb);
}

bool	Fixed::operator<(Fixed const &param)
{
	return (this->nb < param.nb);
}

bool	Fixed::operator<=(Fixed const &param)
{
	return (this->nb <= param.nb);
}

bool	Fixed::operator==(Fixed const &param)
{
	return (this->nb == param.nb);
}

bool	Fixed::operator!=(Fixed const &param)
{
	return (this->nb != param.nb);
}

Fixed	Fixed::operator-(Fixed const &param)
{
	Fixed	tmp;
	
	tmp.nb = this->nb - param.nb;
	return (tmp);
}

Fixed	Fixed::operator+(Fixed const &param)
{
	Fixed	tmp;
	
	tmp.nb = this->nb + param.nb;
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const &param)
{
	Fixed	tmp;
	
	tmp.nb = this->nb * param.nb / (1 << this->fracBits);
	return (tmp);	
}


Fixed	Fixed::operator/(Fixed const &param)
{
	Fixed	tmp;
	
	tmp.nb = this->nb * (1 << this->fracBits) / param.nb;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	else
		return (a);		
	
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.nb > b.nb)
		return (b);
	else
		return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.nb < b.nb)
		return (b);
	else
		return (a);
}
