/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:39:51 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/20 09:21:20 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <cstdlib>
# include <cmath>
# include <limits>
# include "stdbool.h"

class	ScalarConverter
{

private:

	ScalarConverter();
	ScalarConverter(ScalarConverter const& cpyFrom);

public:

	~ScalarConverter();

	ScalarConverter& operator=(ScalarConverter const& rightValue);

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