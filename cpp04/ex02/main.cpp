/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:16:11 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 10:22:06 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	int		N = 10;
	AAnimal	*tab[N];
	
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
	
	return 0;
}
