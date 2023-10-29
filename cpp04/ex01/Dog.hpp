/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:15:02 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 10:06:13 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	
private:

	Brain	*_brain;

public:
	
	Dog();
	~Dog();
	Dog(Dog const &cpyFrom);
	
	Dog	&operator=(Dog const &dog);

	void		makeSound() const;

};

#endif