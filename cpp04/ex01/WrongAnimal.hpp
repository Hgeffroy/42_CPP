/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:12:10 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/26 14:49:37 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal
{
	
protected:

	std::string	type;
	
public:
	
	WrongAnimal();
	WrongAnimal(WrongAnimal const &param);
	virtual	~WrongAnimal();
	
	WrongAnimal	&operator=(WrongAnimal const &param);

	virtual void		makeSound() const;
	std::string			getType() const;
};

#endif