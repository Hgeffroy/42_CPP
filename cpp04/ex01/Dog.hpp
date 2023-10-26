/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:15:02 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/26 11:35:30 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
	
public:
	
	Dog();
	~Dog();
	Dog(Dog const &param);
	
	Dog	&operator=(Dog const &param);

	void		makeSound() const;

};

#endif