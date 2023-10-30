/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:16:11 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 10:33:12 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	int		N = 10;
	Animal	*tab[N];
	
	for (int i = 0; i < N; i++)
	{
		if (i % 2)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}
	
	if (N > 2)
	{
		tab[0]->makeSound();
		tab[1]->makeSound();
	}

	for (int i = 0; i < N; i++)
		delete tab[i];
	
	Dog	test;
	{
		Dog tmp = test;
		Dog	tmp2;
		tmp2 = test;
	}
	
	return 0;
}
