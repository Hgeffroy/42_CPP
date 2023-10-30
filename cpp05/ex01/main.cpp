/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:06:19 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 08:11:42 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	a("Lucas", 1);
		
	try
	{
		++a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
	
}