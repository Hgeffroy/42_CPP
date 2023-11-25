/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:06:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/24 13:09:13 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <fstream>
# include <sstream>
# include <string>
# include <stdexcept>
# include <map>

void	fillMap(std::map<int, float>& data);
void	lineManager(int& date, float& value, std::string line, std::string separator);

class	InvalidDateException : public std::exception
{
public:
	virtual const char*	what() const throw();
};

class	InvalidValueException : public std::exception
{
public:
	virtual const char*	what() const throw();
};

#endif
