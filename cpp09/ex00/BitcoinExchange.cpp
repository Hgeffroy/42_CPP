/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:08:09 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/27 08:43:33 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	printData(std::map<int, float> data)
{
	std::map<int, float>::iterator	it;
	std::map<int, float>::iterator	ite = data.end();

	for (it = data.begin(); it != ite; it++)
		std::cout << it->first  << " : " << data[it->first] << std::endl;
}

void	checkDate(int d, int m, int y)
{
	if (y < 1)
		throw std::invalid_argument("Year should be a strictly positive integer");
	if (y > 2022 || y < 2009)
		throw std::invalid_argument("Date is outside the database");

	if (m < 1)
		throw std::invalid_argument("Mounth should be a strictly positive integer");
	if (m > 12)
		throw std::invalid_argument("Mounth is outside of the mounth range");

	if (d < 1)
		throw std::invalid_argument("Day should be a strictly positive integer");
	if (d > 31)
		throw std::invalid_argument("Day outside the day range");
	if (d > 30 && ((m < 7 && m % 2 == 0) || (m > 7 && m % 2 == 1)))
		throw std::invalid_argument("This day doesn't exist for this mounth");
	if ((m == 2 && d > 29) || (m == 2 && (d > 28 && !((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))))
		throw std::invalid_argument("Yeah February is a bitch");
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
	y = std::atoi(datestr.substr(0, dash1).c_str()); // pas fou de atoi, faire le stringstream...
	dash2 = datestr.find(separator, dash1 + 1);
	m = std::atoi(datestr.substr(dash1 + 1, dash2).c_str());
	d = std::atoi(datestr.substr(dash2 + 1, datestr.length()).c_str());

	checkDate(d, m, y);

	return ((y << 9) + (m << 5) + d);
}

float	convertValue(std::string valuestr)
{
	std::stringstream	ss(valuestr);
	float				f;

	ss >> f;
	if (!ss.eof() || ss.fail())
		throw std::invalid_argument("Value is not an integer");
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

