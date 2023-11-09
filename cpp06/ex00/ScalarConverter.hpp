/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:39:51 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/08 12:39:51 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>

class	ScalarConverter
{

private:

	static char		_c;
	static int		_i;
	static float	_f;
	static double	_d;

public:

	static void	convert(std::string toConvert);
	static void	print();

};

#endif