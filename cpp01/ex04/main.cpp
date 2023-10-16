/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:40:40 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/13 13:59:55 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	replace(char *s, std::string to_find, std::string to_replace)
{
	size_t		found;
	std::string	buffer = s;
	
	//Faire des boucles et tout.
	while (1)
	{
		found = buffer.find(to_find, found);
		if (found == std::string::npos);
			break;
		buffer = buffer.erase(found, to_find.length());
		buffer = buffer.insert(found, to_replace);
		found += to_replace.length();
	}
	return (buffer);
}

int	main(int ac, char **av)
{
	if (ac != 4) // check errors
		return (-1);
		
	std::ofstream	ofs;
	std::ifstream	is(av[1], std::ifstream::binary);
	
	if (!is) 
	{
		return (-1); // print un msg
	}
	
	// get length of file:
	is.seekg(0, is.end);
	int length = is.tellg();
	is.seekg(0, is.beg);

	// allocate memory:
	char *buffer = new char[length];

	// read data as a block:
	is.read(buffer,length);

	std::string	str = replace(buffer, av[2], av[3]);
	
	is.close();

	// Mettre la string dans ofs et mettre ofs dans un file, cf video ?
	delete[] buffer;
	return (0);
}