/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:43:19 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/24 08:53:03 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	std::cout << "Deafult constructor called" << std::endl;
}

Point::Point(float const paramx, float const paramy) : x(paramx), y(paramy)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(Point const &param)
{
	std::cout << "Parametric constructor called" << std::endl;
	*this = param;
}

Point::~Point()
{
	std::cout << "Deafult destructor called" << std::endl;
}

Point	&Point::operator=(Point const &param)
{
	std::cout << "Assignation operator called" << std::endl;
	this->~Point();
	new(this) Point(param.x.toFloat(), param.y.toFloat());

	return (*this);
}

Fixed	Point::getX() const
{
	return (this->x);
}

Fixed	Point::getY() const
{
	return (this->y);
}

float	Point::operator*(Point &param)
{
	return (this->x.toFloat() * param.y.toFloat() - this->y.toFloat() * param.x.toFloat());
}


