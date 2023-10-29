/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:24:11 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/29 09:00:05 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class AMateria
{
	
protected:

	std::string	_type;

public:

	AMateria();
	virtual	~AMateria();
	AMateria(AMateria const &cpyFrom);
	AMateria(std::string const & type);
	
	AMateria	&operator=(AMateria const &amateria);

	std::string const	& getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif