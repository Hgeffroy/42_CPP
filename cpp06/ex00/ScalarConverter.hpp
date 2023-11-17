/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:39:51 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/16 12:35:22 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <string>
# include "stdbool.h"
# include <cstdlib>
# include <cmath>
# include <limits>

class	ScalarConverter
{

private:



public:

	static void	convert(std::string toConvert);

};

enum	e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

#endif