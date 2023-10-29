/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:29:44 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 09:57:52 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	
protected:

	std::string	_type;
	
public:
	
	Animal();
	Animal(Animal const &cpyFrom);
	virtual	~Animal();
	
	Animal	&operator=(Animal const &animal);

	virtual void		makeSound() const;
	std::string			getType() const;
};

#endif