/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:06:48 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/29 08:17:32 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:

	AMateria	*_sources[4];
	
public:

	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &cpyFrom);

	MateriaSource &operator=(MateriaSource const &materiaSource);

	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);
	
};

#endif