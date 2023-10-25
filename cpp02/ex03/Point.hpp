/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:42:14 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/20 15:12:32 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:

	Fixed const	x;
	Fixed const	y;
	
public:

	Point();
	Point(Point const &param);
	Point(float const paramx, float const paramy);
	~Point();

	Point	&operator=(Point const &param);
	float	operator*(Point &param);

	Fixed	getY() const;
	Fixed	getX() const;
	
};

#endif