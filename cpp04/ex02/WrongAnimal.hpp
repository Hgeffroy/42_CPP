/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:12:10 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 10:00:15 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal
{
	
protected:

	std::string	_type;
	
public:
	
	WrongAnimal();
	WrongAnimal(WrongAnimal const &cpyFrom);
	virtual	~WrongAnimal();
	
	WrongAnimal	&operator=(WrongAnimal const &wrongAnimal);

	virtual void		makeSound() const;
	std::string			getType() const;
};

#endif