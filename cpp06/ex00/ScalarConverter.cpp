/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:39:47 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/08 12:39:47 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char	ScalarConverter::_c;
int		ScalarConverter::_i;
float	ScalarConverter::_f;
double	ScalarConverter::_d;

void	ScalarConverter::convert(std::string toConvert)
{

	_d = atof(toConvert.c_str());
	_i = static_cast<int>(_d);
	_f = static_cast<float>(_d);
	_c = static_cast<char>(_d);

}

void	ScalarConverter::print()
{
	// Display char
	std::cout << "char: ";
	if (isnan(_d))
		std::cout << "impossible";
	else if (_c <= 32)
		std::cout << "Non displayable";
	else
		std::cout << _c;
	std::cout << std::endl;

	// Display int
	std::cout  << "int: ";
	if (isnan(_d))
		std::cout << "impossible";
	else
		std::cout << _i;
	std::cout << std::endl;

	// Display float
	std::cout << "float: " << _f;
	if (_f - static_cast<float>(_i) == 0.f)
		std::cout << ".0";
	std::cout << "f" << std::endl;

	// Display double
	std::cout << "double: " << _d;
	if (_d - static_cast<float>(_i) == 0.f)
		std::cout << ".0";
	std::cout << std::endl;
}

