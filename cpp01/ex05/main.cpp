/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:56:45 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/16 11:35:34 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	harl;

	std::cout << "Level not defined: " << std::endl;
	harl.complain("UBF");
	std::cout << "Level DEBUG: " << std::endl;
	harl.complain("DEBUG");
	std::cout << "Level INFO: " << std::endl;
	harl.complain("INFO");
	std::cout << "Level WARNING: " << std::endl;
	harl.complain("WARNING");
	std::cout << "Level ERROR: " << std::endl;
	harl.complain("ERROR");
}