/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:40:40 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/06 15:09:21 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main()
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::size_t		found;
	std::ifstream	ifs;

	ifs.open(filename);

	if (ifs.bad())
		return (0);

	

	ifs.close();
	return (0);
}