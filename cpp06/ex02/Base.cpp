/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:57:53 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/09 08:17:49 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate()
{
	std::srand(time(NULL));
	int	i = std::rand() % 3;

	switch(i)
	{
		case 0:
			return (new(A));
		case 1:
			return (new(B));
		case 2:
			return (new(C));
	}
	return (NULL);
}

void	identify(Base* p)
{
	A*	testA = dynamic_cast<A *>(p);
	if (testA)
		std::cout << "Pointer on address " << p << " is pointing on an A object." << std::endl;

	B*	testB = dynamic_cast<B *>(p);
	if (testB)
		std::cout << "Pointer on address " << p << " is pointing on an B object." << std::endl;

	C*	testC = dynamic_cast<C *>(p);
	if (testC)
		std::cout << "Pointer on address " << p << " is pointing on an C object." << std::endl;

	return ;
}

void	identify(Base& p)
{
	bool	castOk = true;
	Base	cpy = p;

	try
	{
		cpy = dynamic_cast<A &>(p);
		castOk = true;
	}
	catch(const std::exception& bc)
	{
		castOk = false;
	}
	if (castOk)
	{
		std::cout << "Reference on address " << &p << " is an A object." << std::endl;
	}

	try
	{
		cpy = dynamic_cast<B &>(p);
		castOk = true;
	}
	catch(const std::exception& bc)
	{
		castOk = false;
	}
	if (castOk)
	{
		std::cout << "Reference on address " << &p << " is an B object." << std::endl;
	}

	try
	{
		cpy = dynamic_cast<C &>(p);
		castOk = true;
	}
	catch(const std::exception& bc)
	{
		castOk = false;
	}
	if (castOk)
	{
		std::cout << "Reference on address " << &p << " is an C object." << std::endl;
	}
}