/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:29:44 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/26 11:35:22 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	
protected:

	std::string	type;
	
public:
	
	Animal();
	Animal(Animal const &param);
	virtual	~Animal();
	
	Animal	&operator=(Animal const &param);

	virtual void		makeSound() const;
	std::string	getType() const;
};

#endif