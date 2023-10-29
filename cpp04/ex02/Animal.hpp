/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:29:44 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 10:21:21 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	AAnimal
{
	
protected:

	std::string	_type;
	
public:
	
	AAnimal();
	AAnimal(AAnimal const &cpyFrom);
	virtual	~AAnimal();
	
	AAnimal	&operator=(AAnimal const &animal);

	virtual void		makeSound() const = 0;
	std::string			getType() const;
};

#endif