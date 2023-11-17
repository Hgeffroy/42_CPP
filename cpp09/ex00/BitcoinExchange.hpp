/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:06:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 09:15:38 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <cstdlib>
# include <fstream>
# include <string>
# include <stdexcept>
# include <map>

void	fillMap(std::map<int, float>& data);
void	lineManager(int& date, float& value, std::string line, std::string separator);

class	InvalidDateException : std::exception
{
public:
	virtual const char*	what() const throw()
	{
		return ("Invalid date.\n");
	}
};

class	InvalidValueException : std::exception
{
public:
	virtual const char*	what() const throw()
	{
		return ("Invalid value.\n");
	}
};

#endif
