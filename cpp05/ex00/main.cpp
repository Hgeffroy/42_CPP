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
        Bureaucrat  b("Arthur", 151);
    }
    catch(const std::exception& e)
    {
        std::cout << "Couldn't create bureaucrat b because ";
        std::cerr << e.what();
    }

	try
	{
		++a;
	}
	catch(const std::exception& e)
	{
        std::cout << "Couldn't increment bureaucrat a because ";
		std::cerr << e.what();
	}
	
	
}