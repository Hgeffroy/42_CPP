/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:08:09 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/24 13:09:55 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char*	InvalidDateException::what() const throw()
{
	return ("Invalid date.");
}

const char*	InvalidValueException::what() const throw()
{
	return ("Invalid value.");
}

void	printData(std::map<int, float> data)
{
	std::map<int, float>::iterator	it;
	std::map<int, float>::iterator	ite = data.end();

	for (it = data.begin(); it != ite; it++)
		std::cout << it->first  << " : " << data[it->first] << std::endl;
}

bool	isValidDate(int d, int m, int y)
{
	if (y > 10000)
		return false;

	if (m < 1 || m > 12)
		return false;

	if (d > 31 || d < 1)
		return false;
	if (d > 30 && ((m < 7 && m % 2 == 0) || (m > 7 && m % 2 == 1)))
		return false;
	if ((m == 2 && d > 29) || (m == 2 && (d > 28 && !((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))))
		return false;

	return true;
}

int	convertDate(std::string datestr)
{
	int				y;
	int 			m;
	int 			d;
	int 			dash1;
	int 			dash2;
	std::string 	separator = "-";

	dash1 = datestr.find(separator, 0);
	y = std::atoi(datestr.substr(0, dash1).c_str());
	dash2 = datestr.find(separator, dash1 + 1);
	m = std::atoi(datestr.substr(dash1 + 1, dash2).c_str());
	d = std::atoi(datestr.substr(dash2 + 1, datestr.length()).c_str());

	if (!isValidDate(d, m, y))
		throw InvalidDateException();

	return ((y << 9) + (m << 5) + d);
}

float	convertValue(std::string valuestr)
{
	std::stringstream	ss(valuestr);
	float				f;

	ss >> f;
	if (!ss.eof() || ss.fail())
		throw InvalidValueException();
	return f;
}

void	lineManager(int& date, float& value, std::string line, std::string separator)
{
	int 		comma;
	std::string	datestr;
	std::string valuestr;

	comma = line.find(separator, 0);
	datestr = line.substr(0, comma);
	valuestr = line.substr(comma + 1, line.length());

	date = convertDate(datestr);

	value = convertValue(valuestr);
}

void	fillMap(std::map<int, float>& data)
{
	std::ifstream	infile("data.csv", std::ios::in);
	std::string 	line;

	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		int 	date;
		float	value;

		lineManager(date, value, line, ",");
		data[date] = value;
	}
//	printData(data);
}

