/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:25:25 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/20 15:28:43 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	acpy(b.getX().toFloat() - point.getX().toFloat(), b.getY().toFloat() - point.getY().toFloat());
	Point	bcpy(a.getX().toFloat() - point.getX().toFloat(), a.getY().toFloat() - point.getY().toFloat());
	Point	ccpy(c.getX().toFloat() - point.getX().toFloat(), c.getY().toFloat() - point.getY().toFloat());
	float	vectorprod;
	float	sign = 1.f;

	vectorprod = acpy * bcpy;
	if (vectorprod < 0)
		sign = -1.f;
	vectorprod = bcpy * ccpy;
	if (vectorprod * sign < 0)
		return false;
	vectorprod = ccpy * acpy;
	if (vectorprod * sign < 0)
		return false;
	
	return true;
}