/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:40:48 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/23 13:24:55 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
Why and when should we allocate on the heap or not ?
*/
int	main(void)
{
	Zombie	*heap;
	Zombie	stack;

	heap = NULL;
	heap = (*heap).newZombie("ZombieOfTheHeap");
	stack.randomChump("ZombieOfTheStack");
	
	delete heap;
	return (0);
}