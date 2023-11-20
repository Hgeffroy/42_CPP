/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:33:07 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/20 11:12:19 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	checkArg(std::string arg) // Pas sur de ca, sinon mettre un char * et le cast a la main.
{
	std::istringstream	iss(arg);
	int 				i;

	iss >> i;
	if (!iss.eof() || iss.fail())
		throw std::exception();
}



