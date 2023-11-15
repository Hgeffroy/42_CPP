/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:08:09 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/15 10:28:20 by hgeffroy         ###   ########.fr       */
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
//	std::cout << "y = " << y << " ; ";
	dash2 = datestr.find(separator, dash1 + 1);
	m = std::atoi(datestr.substr(dash1 + 1, dash2).c_str());
//	std::cout << "m = " << m << " ; ";
	d = std::atoi(datestr.substr(dash2 + 1, datestr.length()).c_str());
//	std::cout << "d = " << d << " ; ";

	if (m > 12 || m < 1 || d > 31 || d < 1 || y < 1)
		throw std::exception(); // regarder pour faire une exception propre.



	return ((y << 9) + (m << 5) + d);
}

void	lineManager(int& date, float& value, std::string line)
{
	int 		comma;
	std::string	datestr;
	std::string valuestr;
	std::string separator = ",";

	comma = line.find(separator, 0);
	datestr = line.substr(0, comma);
	valuestr = line.substr(comma + 1, line.length());
//	std::cout << datestr << " ; ";
//	std::cout << valuestr << std::endl;
	date = convertDate(datestr);
//	std::cout << "Date converted: " << date << std::endl;
	value = static_cast<float>(std::atof(valuestr.c_str()));
}

void	fillMap(std::map<int, float> data)
{
	std::ifstream	infile("data.csv", std::ios::in);
	std::string 	line;

	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		int 	date;
		float	value;

		lineManager(date, value, line);
		data[date] = value;
	}
//	printData(data);
}

