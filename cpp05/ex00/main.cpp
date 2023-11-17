/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:06:19 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 11:01:06 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "Bureaucrat out of range: " << std::endl;
	{
		try
		{
			Bureaucrat  b("Arthur", 151);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Couldn't create bureaucrat b because ";
			std::cerr << e.what();
		}
	}

	std::cout << std::endl << "Increment bureaucrat: " << std::endl;
	{
		try
		{
			Bureaucrat a("Lucas", 3);
			std::cout << a << std::endl;
			++a;
			std::cout << a << std::endl;
			++a;
			std::cout << a << std::endl;
			++a;
			std::cout << a << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Couldn't increment bureaucrat a because ";
			std::cerr << e.what();
		}
	}

	std::cout << std::endl << "Decrement bureaucrat: " << std::endl;
	{
		try
		{
			Bureaucrat a("Lucas", 148);
			std::cout << a << std::endl;
			--a;
			std::cout << a << std::endl;
			--a;
			std::cout << a << std::endl;
			--a;
			std::cout << a << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Couldn't decrement bureaucrat a because ";
			std::cerr << e.what();
		}
	}
	
	
}