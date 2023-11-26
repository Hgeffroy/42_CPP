/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:37:26 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/02 15:29:50 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Point	a(0.f, 0.f);
	Point	b(0.f, 2.f);
	Point	c(2.f, 0.f);
	new(this)
	Point	test(1.5, 1);
	if (bsp(a, b, c, test))
		std::cout << "This point is in the triangle" << std::endl;
	else
		std::cout << "This point is not in the triangle" << std::endl;
}