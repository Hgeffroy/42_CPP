/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:42:53 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 13:09:50 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

void	printRes(int date, float value1, float value2)
{
	std::cout << (date >> 9) << "-" << ((date % ((date >> 9) << 9)) >> 5) << "-" << ((date % ((date >> 5) << 5)));
	std::cout << " => ";
	std::cout << value1 << " = " << value1 * value2 << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "This program needs an infile as an argument." << std::endl;
		return (0);
	}

	std::map<int, float> data;
	fillMap(data);

	std::ifstream	infile(av[1], std::ios::in);
	std::string		line;
	std::getline(infile, line); // A proteger
	while (std::getline(infile, line))
	{
		int 	date;
		float	value;
		std::map<int, float>::iterator	it;

		try
		{
			lineManager(date, value, line, "|");
			if (value < 0 || value > 1000)
				throw InvalidValueException();
			it = data.lower_bound(date);
			if (it != data.begin() && it->first != date && it->first < date)
				it--;
			printRes(date, value, it->second);
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}