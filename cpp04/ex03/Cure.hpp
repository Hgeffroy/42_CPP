/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 08:33:01 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/29 08:33:23 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
	
public:

	Cure();
	~Cure();
	Cure(Cure const &cpyFrom);

	Cure	&operator=(Cure const &cure);

	AMateria* clone() const;

};

#endif