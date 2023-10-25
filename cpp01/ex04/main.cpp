/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:40:40 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/25 09:45:02 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	replace(char *s, std::string to_find, std::string to_replace)
{
	size_t		found = 0;
	std::string	buffer = s;
	
	while (1)
	{
		found = buffer.find(to_find, found);
		if (found == std::string::npos)
			break;
		buffer = buffer.erase(found, to_find.length());
		buffer = buffer.insert(found, to_replace);
		found += to_replace.length();
	}
	return (buffer);
}

int	main(int ac, char **av)
{
	std::string	outfilename;
	
	if (ac != 4)
	{
		std::cout << "Wrong format, you need a filename, a string to replace and a string to replace with." << std::endl;
		return (-1);
	}
		
	std::ifstream	is(av[1], std::ifstream::binary);
	
	if (!is) 
	{
		std::cout << "Couldn't open file." << std::endl;
		return (-1);
	}
	
	// get length of file:
	is.seekg(0, is.end);
	int length = is.tellg();
	is.seekg(0, is.beg);

	// allocate memory:
	char *buffer = new char[length];

	// read data:
	is.read(buffer,length);

	std::string	str = replace(buffer, av[2], av[3]);
	// Si rien n'est modifie, il faut pas creer le fichier de sortie.

	std::ofstream	ofs;
	outfilename = av[1];
	outfilename.append(".replace");
	ofs.open(outfilename.c_str());
	ofs << str;
	ofs.close();
	
	is.close();

	delete[] buffer;
	return (0);
}