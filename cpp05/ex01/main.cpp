/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:06:19 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/17 11:03:00 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "Form grade too low:" << std::endl;
	{
		try
		{
			Form		f2("28B", 151, 20);
		}
		catch(std::exception &e)
		{
			std::cerr << "couldn't create form because " << e.what() << std::endl;
		}
	}

	std::cout << "Bureaucrat grade too low:" << std::endl;
	{
		Bureaucrat	a("Louis", 150);
		Form		f1("28B", 20, 20);

		std::cout << a << std::endl;
		std::cout << f1 << std::endl;

		try
		{
			a.signForm(f1);
		}
		catch(std::exception &e)
		{
			std::cerr << a.getName() << " couldn't sign form because " << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "Sign twice:" << std::endl;
	{
		Bureaucrat	a("Harvey", 1);
		Form		f1("28B", 20, 20);

		std::cout << a << std::endl;
		std::cout << f1 << std::endl;

		try
		{
			a.signForm(f1);
			a.signForm(f1);
		}
		catch(std::exception &e)
		{
			std::cerr << a.getName() << " couldn't sign form because " << e.what() << std::endl;
		}
	}


}