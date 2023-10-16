/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:56:45 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/14 10:15:14 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	test;

	std::cout << "Level not defined: ";
	test.complain("UBF");
	std::cout << "Level DEBUG";
	test.complain("DEBUG");
	std::cout << "Level INFO";
	test.complain("INFO");
	std::cout << "Level WARNING";
	test.complain("WARNING");
	std::cout << "Level ERROR";
	test.complain("ERROR");
}